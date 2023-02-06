import java.awt.Color;
import java.util.*;

class Transform {
    private double x, y, size;

    public Transform(double x, double y, double size) {
        this.x = x;
        this.y = y;
        this.size = size;
    }
    public void move(double vx, double vy) {
    	 x += vx*Game_v2.delta;
         y += vy*Game_v2.delta;
    }
    public double getX() {
        return x;
    }

    public double getY() {
        return y;
    }
    public double getRadius(){
        return size;
      }
    public void setX(double x) {
    	this.x = x;
    }
    public void setY(double y) {
    	this.y = y;
    }
}

/*//////////////////////////////////////
// Classes for Drawing the Background //
//////////////////////////////////////*/

class Star {
    private Transform t;
    private Color c;
    private double speed;
    public Star(double size,double speed, Color c) {
        t = new Transform(Math.random() * GameLib.WIDTH,Math.random() * GameLib.HEIGHT, size);
        this.c = c;
        this.speed = speed;
    }

    public void draw() {
        if (t.getY() > GameLib.HEIGHT + 10) {
            t.setX(Math.random() * GameLib.WIDTH);
            t.setY(0);
        }
        GameLib.setColor(c);
        GameLib.fillRect(t.getX(), t.getY(), t.getRadius(), t.getRadius());
        t.move(0,speed);
    }
}

class Stage {
    private List<Star> background;
    private List<Star> foreground;

    public Stage() {
        GameLib.initGraphics();
        background = this.init(50, 0.045, Color.DARK_GRAY);
        foreground = this.init(50, 0.070, Color.GRAY);
    }

    public List<Star> init(int count, double speed, Color c) {
        int i;
        List<Star> stars = new ArrayList<Star>();
        for (i = 0; i < count; i++)
            stars.add(new Star(2,speed, c));
        return stars;
    }

    public void draw() {
        for (Star star : background)
            star.draw();
        for (Star star : foreground)
            star.draw();
    }
}

class Explosion {
    private Transform t;
    private double start, end;

    public Explosion (Transform t){
        this.t = t;
        start = Game_v2.currentTime;
        end = start + 2000;
    }

    public boolean ended() {
        return (end < Game_v2.currentTime);
    }

    public void draw () {
        double alpha = (Game_v2.currentTime - start) / (end - start);
        GameLib.drawExplosion(t.getX(), t.getY(), alpha);
    }
}

/*/////////////////////////////////
// Classes to manage Game Object //
/////////////////////////////////*/


class GameObject {
	private Transform transform;
	private Color color;
	private double velx,vely;
	public GameObject(Transform transform,double velx,double vely, Color color) {
		this.transform = transform;
		this.color = color;
		this.velx = velx;
		this.vely = vely;
	}
	public Transform getTransform() {
		return transform;
	}
	public double getVelX() {
		return velx;
	}
	public double getVelY() {
		return vely;
	}
	public void setVelX(double velx) {
		this.velx = velx;
	}
	public void setVelY(double vely) {
		this.vely = vely;
	}
	public Color getColor() {
		return color;
	}
	public double getRadius() {
		return transform.getRadius();
	}
	public void move(double x, double y) {
		transform.move(x,y);
	}
	public boolean detectColision(GameObject Object) {
		double dx = this.getTransform().getX() - Object.getTransform().getX();
		double dy = this.getTransform().getY() - Object.getTransform().getY();
		double dist = Math.sqrt(dx * dx + dy * dy);

        return (dist < (this.getRadius() +	Object.getRadius())) ? true : false;
	}
}

/*/////////////////////////////////
//Classe do powerUp pedido       //
/////////////////////////////////*/

class PowerUp extends GameObject {
    public PowerUp (Transform t) {
        super(t,0,0.3,Color.WHITE);
    }
    public boolean DetectPlayer(){
        if(detectColision(Game_v2.player)){
            Game_v2.player.SetPowerUp(Game_v2.currentTime+10000);
            return true;
        }
        return false;
    }
    public void Draw() {
    	GameLib.setColor(getColor());
        Game_v2.drawSquare(this.getTransform().getX() - this.getTransform().getRadius() / 2,
                   this.getTransform().getY() + this.getTransform().getRadius() / 2,
                   this.getTransform().getX() + this.getTransform().getRadius() / 2,
                   this.getTransform().getY() - this.getTransform().getRadius() / 2);
    }
}

/*////////////////////////////////////////
//  Classe Entity, que é herdada por tu-//
//  que move e colide                   //
////////////////////////////////////////*/
class Entity extends GameObject{
	private boolean alive;
	private long nextShot;

	public Entity(Transform transform, double velx,double vely, Color color) {
		super(transform,velx,vely, color);
		alive = true;
	}
	public boolean takeDamage(GameObject Object) {
        if(!detectColision(Object)) return false;
        alive = false;
        Managers.explosionManager.add(new Explosion(getTransform()));
        return true;
	}
	public void move(double x,double y) {
		super.move(x, y);
	}
	public void shoot(double x, double velx, double y,double vely, double radius, Color color, Managers.projectileManager projectileManager){
		projectileManager.add(new projectile(x,velx,y,vely,radius,color));
	}
	public long getNextShot() {
		return nextShot;
	}
	public void setNextShot(long nextShot) {
		this.nextShot = nextShot;
	}
    public boolean getIsAlive(){
        return alive;
    }
    public void setIsAlive(boolean alive){
       this.alive = alive;
    }
}

/*/////////////////////////////////
//Player Class					 //
/////////////////////////////////*/

class Player extends Entity{
	private long respawn;
    private long powerup;

	public Player(double X, double Y) {
		super(new Transform(X,Y,12.0),0.25,0.25, Color.CYAN);
		setIsAlive(true);
        this.setNextShot(Game_v2.currentTime);
        powerup = Game_v2.currentTime;
	}
	public void move(double x, double y) {
				super.move(x,y);
			if(this.getTransform().getX()< 0.0) this.getTransform().setX(0);
			if(this.getTransform().getX() >= GameLib.WIDTH) this.getTransform().setX(GameLib.WIDTH - 1);
			if(this.getTransform().getY() < 25) this.getTransform().setY(0);
			if(this.getTransform().getY() >= GameLib.HEIGHT) this.getTransform().setY(GameLib.HEIGHT - 1);
	}
	public void CheckDamage() {
        if(getIsAlive()) {
    		ArrayList <GameObject> Lista = new ArrayList<GameObject>();
    		for (int i = 0; i < Managers.projectileManager.getAmount(); i ++) Lista.add((GameObject)Managers.projectileManager.get(i));
    		for(int k = 0; k < Managers.entityManager.getAmount(); k++) Lista.add((GameObject)Managers.entityManager.get(k));
    		for(int j = 0; j < Lista.size(); j ++){
    				GameObject Object = Lista.get(j);
    				if (takeDamage(Object)) respawn = Game_v2.currentTime + 2000;
    			}
        } else if (respawn < Game_v2.currentTime) {
            this.getTransform().setX(GameLib.WIDTH / 2);
            this.getTransform().setY(GameLib.HEIGHT * 0.9);
            this.setIsAlive(true);
        }
	}
	public void CheckKeyboard() {
		if(getIsAlive()){
			if(GameLib.iskeyPressed(GameLib.KEY_UP)) move(0,-1 * this.getVelY());
			if(GameLib.iskeyPressed(GameLib.KEY_DOWN)) move(0,this.getVelY());
			if(GameLib.iskeyPressed(GameLib.KEY_LEFT)) move(-1*this.getVelY(),0);
			if(GameLib.iskeyPressed(GameLib.KEY_RIGHT)) move(this.getVelY(),0);
			if(GameLib.iskeyPressed(GameLib.KEY_CONTROL)){
				if(Game_v2.currentTime > getNextShot()){
                    if(Game_v2.currentTime > powerup){
						this.shoot(this.getTransform().getX(),0,this.getTransform().getY()-2*getRadius(),-1.0, 2.0,Color.GREEN,Managers.playerProjectileManager);
						setNextShot(Game_v2.currentTime + 100);
                    }
                    else{
                        this.shoot(this.getTransform().getX(),0,this.getTransform().getY()-2*getRadius(),-1.0, 2.0,Color.GREEN,Managers.playerProjectileManager);
                        this.shoot(this.getTransform().getX() - 5,-0.2,this.getTransform().getY()-2*getRadius(),-1.0, 2.0,Color.GREEN,Managers.playerProjectileManager);
                        this.shoot(this.getTransform().getX() + 5,0.2,this.getTransform().getY()-2*getRadius(),-1.0, 2.0,Color.GREEN,Managers.playerProjectileManager);
						setNextShot(Game_v2.currentTime + 100);
                    }
				}
			}
		}
	}
    public void SetPowerUp(long time){
        powerup = time;
    }
	public void Draw() {
		if(getIsAlive()) {
			GameLib.setColor(getColor());
			GameLib.drawPlayer(getTransform().getX(), getTransform().getY(), getRadius());
		}
	}
}

/*/////////////////////////////////
//Enemy	Class					 //
/////////////////////////////////*/

class Enemy extends Entity{
	protected double explosionStart, explosionEnd, pVelX, pVelY ,pRadius;
	private boolean shootNow;
	public Enemy(Transform transform,double velx, double vely,double pRadius, Color color) {
        super(transform,velx,vely, color);//GameObject
		this.pRadius = pRadius; //enemy
    }
	public boolean CheckDamage() {
		boolean returnVal = false;
		for(int k = 0; k < Managers.playerProjectileManager.getAmount(); k++){
			GameObject projectile = Managers.playerProjectileManager.get(k);
			returnVal = takeDamage(projectile);
		}
		return returnVal;
	}
	public void Shoot() {

	}
	 public void Draw(){
	 }
	public void setShootNow(boolean shootNow) {
		this.shootNow = shootNow;
	}
	public boolean getShootNow() {
		return shootNow;
	}
}

/*/////////////////////////////////
//Inimigo 1     				 //
/////////////////////////////////*/

class Enemy1 extends Enemy{
    public Enemy1(){
        super(new Transform(Math.random()*(GameLib.WIDTH - 20.0)+10,-10.0, 9.0),0,0.20 + Math.random()*0.15,2.0, Color.CYAN);
        pVelX = 0;
        pVelY = 0.45;
        this.setNextShot(Game_v2.currentTime + 500);
    }
    public void Shoot() {
    	if(Managers.projectileManager.getAmount() < 200){
			if(Game_v2.currentTime > this.getNextShot()) {
                shoot(this.getTransform().getX(),this.pVelX, this.getTransform().getY() + 2.0 + this.getRadius(), this.pVelY, this.pRadius, Color.RED, Managers.projectileManager);
				this.setNextShot((long) (Game_v2.currentTime + 200 + Math.random() * 500));
				}
			}
    }
    public void Draw(){
        GameLib.setColor(this.getColor());
        GameLib.drawCircle(this.getTransform().getX(), this.getTransform().getY(), this.getRadius());
      }
}

/*/////////////////////////////////
//Inimigo 2     				 //
/////////////////////////////////*/

class Enemy2 extends Enemy{
	private double angle;
	private double velr;
	private static double threshold;
	public Enemy2(double spawn){
        super(new Transform(spawn, -10.0 , 12.0),0.42,0.42, 2.0, Color.MAGENTA);
        angle = (3 * Math.PI) / 2;
        velr = 0;
        pVelX = 0;
        pVelY = 0.45;
        threshold = GameLib.HEIGHT * 0.3;
        this.setNextShot(Game_v2.currentTime + 500);
    }
    public void move(double velx,double vely) {
        double previousY = this.getTransform().getY();
        this.setVelX(this.getVelX()*Math.cos(angle));
        this.setVelY(this.getVelY()*Math.sin(angle)*-1);
        super.move(this.getVelX(),this.getVelY());
        if(previousY < threshold && this.getTransform().getY() >= threshold)
            velr = (this.getTransform().getX() < GameLib.WIDTH/2) ? 0.003 : -0.003;
        if(this.velr > 0 && Math.abs(this.angle - 3 * Math.PI) < 0.05) {
            this.velr = 0;
            this.angle = 3 * Math.PI;
            this.setShootNow(true);
        }
        if(this.velr < 0 && Math.abs(this.angle) < 0.05) {
            this.velr = 0;
            this.angle = 0;
            this.setShootNow(true);
        }
        this.setVelX(0.42);
        this.setVelY(0.42);
        angle += velr*Game_v2.delta;
    }
	 public void Shoot() {
		 if(Managers.projectileManager.getAmount() < 200) {
			 if(this.getShootNow()){
				 double angle =  Math.PI/2 + Math.PI/8;
				 for (int i = 0; i < 3; i++) {
					 angle += Math.random() * Math.PI/6 - Math.PI/12;
					 shoot(this.getTransform().getX(), Math.cos(angle)*0.3, this.getTransform().getY(), Math.sin(angle)*0.3, this.pRadius, Color.RED ,Managers.projectileManager);
					 angle -= Math.PI/8;
				 }
				 this.setShootNow(false);
			 }
		 }
	 }
	 public void Draw(){
	        GameLib.setColor(this.getColor());
	        GameLib.drawDiamond(this.getTransform().getX(), this.getTransform().getY(), this.getRadius());
	      }
}

/*/////////////////////////////////////////////////
//Inimigo implementado como pedido pelo professor//
/////////////////////////////////////////////////*/

class Enemy3 extends Enemy{
	private double angle;
	public Enemy3(double spawn) {
		super(new Transform(spawn,-10,15.0),0,0.3, 3.0, Color.YELLOW);
		angle = Math.PI/2;
		this.setShootNow(false);
	}
	public void move(double velx,double vely) {
		double previousY = this.getTransform().getY();
		super.move(this.getVelX(),this.getVelY());
		if(previousY < GameLib.HEIGHT * 0.4 && this.getTransform().getY() >= GameLib.HEIGHT * 0.4) setShootNow(true);
		else if (this.getTransform().getY() >= GameLib.HEIGHT * 0.4) {
			double i = 1;
			double dx =	Game_v2.player.getTransform().getX() - this.getTransform().getX();
			double dy = Game_v2.player.getTransform().getY() - this.getTransform().getY();
			double tan = Math.abs(dy/dx);
			angle = Math.atan(tan);
			if(dx < 0) i = -1;
			this.setVelX(Math.cos(angle)*0.4*i);
			this.setVelY(Math.sin(angle)*0.4);
		}

	}
	public void Shoot() {
		if(Managers.projectileManager.getAmount() < 200) {
			if(this.getShootNow()) {
				int j = 1;
				for(int i = 0; i < 2; i++) {
					shoot(this.getTransform().getX(),0.45*j,this.getTransform().getY(), 0.45,16.0,Color.RED, Managers.projectileManager);
					j *= -1;
				}
				this.setShootNow(false);
			}
		}
	}
	public void Draw() {
		 GameLib.setColor(this.getColor());
	     GameLib.drawDiamond(this.getTransform().getX(), this.getTransform().getY(), this.getRadius());
	     Game_v2.drawSquare(this.getTransform().getX() - this.getTransform().getRadius() / 2,
                    this.getTransform().getY() + this.getTransform().getRadius() / 2,
                    this.getTransform().getX() + this.getTransform().getRadius() / 2,
                    this.getTransform().getY() - this.getTransform().getRadius() / 2);
	}

    public boolean CheckDamage(){
        if(!super.CheckDamage()) 
        	return false;
        Managers.powerUpManager.add(new PowerUp(new Transform(this.getTransform().getX(),this.getTransform().getY(),8.0)));
        return true;  
    }
}

/*/////////////////////////////////
//Projectile Class				 //
/////////////////////////////////*/

class projectile extends GameObject{
    public projectile(double x, double velx,double y, double vely, double radius, Color color) {
    	super(new Transform(x,y,radius),velx,vely, color);
    }
    public void move() {
    	 super.move(this.getVelX(),this.getVelY());
    }
    public void draw() {
    	GameLib.setColor(this.getColor());
        GameLib.drawCircle(this.getTransform().getX(), this.getTransform().getY(), this.getRadius());
    }
}

/*/////////////////////////////////
//Classe dos Managers   		 //
/////////////////////////////////*/

class Managers{
    
///////////////////////////////////////////////////////////////////////////////////////
//Essa Classe contém os manejadores de cada tipo de objeto (manejadores são aqueles  //
// que devem realizar tarefas independente da existência de um determinado objeto)   //
///////////////////////////////////////////////////////////////////////////////////////

public static powerUpManager powerUpManager = new powerUpManager();
public static explosionManager explosionManager = new explosionManager();
public static projectileManager playerProjectileManager = new projectileManager();
public static projectileManager projectileManager = new projectileManager();
public static entityManager entityManager = new entityManager();
public static Enemy1Spawner enemy1Spawner = new Enemy1Spawner();
public static Enemy2Spawner enemy2Spawner = new Enemy2Spawner();
public static Enemy3Spawner enemy3Spawner = new Enemy3Spawner();

            ///////////////////////////
            //Classe base do Manager//
            //////////////////////////
static abstract class manager <T>{
	protected ArrayList <T> lista;
	public manager () {
		lista = new ArrayList<T>();
	}
	public void add(T object) {
		lista.add(object);
	}
	public void remove(T object) {
		lista.remove(object);
	}
	public int getAmount() {
		return lista.size();
	}
	public T get(int i) {
		return lista.get(i);
	}
}

            ///////////////////////////
            //Manager das explosões  //
            //////////////////////////

public static class explosionManager extends manager<Explosion> {
    public explosionManager () {
        super();
    }

    public void Draw(){
        Iterator<Explosion> iterator = this.lista.iterator();
        while(iterator.hasNext()) {
            Explosion temp = iterator.next();
            if (temp.ended())
                iterator.remove();
            else
                temp.draw();
        }
    }
}

            ///////////////////////////
            //Manager dos projéteis  //
            //////////////////////////

public static class projectileManager extends manager<projectile>{
	public projectileManager () {
		super();
	}
	public void Move(long currentTime) {
		for(projectile temp: this.lista) {
			temp.move();
		}
	}
	public void Draw(){
        Iterator<projectile> iterator = this.lista.iterator();
        while(iterator.hasNext()) {
            projectile temp = iterator.next();
            double x = temp.getTransform().getX();
            double y = temp.getTransform().getY();
            double radius = temp.getTransform().getRadius();

            if (x - radius > GameLib.WIDTH || x + radius < 0
            || y - radius > GameLib.HEIGHT || y + radius < 0)
                iterator.remove();
            else
                temp.draw();
        }
    }
}

            /////////////////////////////
            //  Manager dos inimigos   //
            /////////////////////////////
public static class entityManager extends manager<Enemy>{
        private ArrayList<Spawner> enemySpawners = new ArrayList<Spawner>();
		public entityManager() {
			super();
		}
        public void addSpawner(Spawner enemySpawner){
             enemySpawners.add(enemySpawner);
        }
		public void checkForDamage(long currentTime) {
			for(Enemy temp: this.lista) {
				temp.CheckDamage();
			}
		}
		public void move(long currentTime) {
			for(Enemy temp: this.lista) {
				temp.move(temp.getVelX(),temp.getVelY());
			}
		}
		public void shoot(long currentTime) {
			for(Enemy temp: this.lista) {
				temp.Shoot();
			}
		}
        public void Draw(){
            for(Enemy temp: this.lista){
                temp.Draw();
            }
        }
		public void deactivate() {
			Iterator<Enemy> iterator = this.lista.iterator();
			while(iterator.hasNext()) {
				Enemy temp = iterator.next();
				if(temp.getTransform().getX() > GameLib.WIDTH + 10
						|| temp.getTransform().getX() < -10
						|| temp.getTransform().getY() > GameLib.HEIGHT + 10
						||!temp.getIsAlive() ) iterator.remove();
			}
		}
		public void tryToSpawn() {
			for(Spawner temp: this.enemySpawners){
                temp.tryToSpawn();
            }
		}
		//if(currentTime > this.nextShot && this.y < player_Y)
}

                /////////////////////////////
                //  Manager do powerup     //
                /////////////////////////////
public static class powerUpManager extends manager<PowerUp>{
    public powerUpManager(){
        super();
    }
    public void Move(){
        for(PowerUp temp: this.lista){
            temp.move(temp.getVelX(), temp.getVelY());
        }
    }
    public void Draw(){
        for(PowerUp temp: this.lista){
            temp.Draw();
        }
    }
    public void Deactivate(){
        Iterator<PowerUp> iterator = this.lista.iterator();
        while(iterator.hasNext()) {
            PowerUp temp = iterator.next();
            double y = temp.getTransform().getY();
            double radius = temp.getTransform().getRadius();
            if (y - radius > GameLib.HEIGHT || temp.DetectPlayer())
                iterator.remove();
    }
}
}
                ///////////////////////////
                //Spawner dos inimigos   //
                //////////////////////////
	interface Spawner{
		public void tryToSpawn();
	}

    static abstract class EnemySpawner implements Spawner{
        protected long spawnCooldown;
        protected long lastSpawn;
        public EnemySpawner(){
            Managers.entityManager.addSpawner(this);
            this.lastSpawn = 0;
        }
    }

    public static class Enemy1Spawner extends EnemySpawner{
        public Enemy1Spawner(){
            super();
            this.spawnCooldown = 500;
        }
        public void tryToSpawn(){
            if(Game_v2.currentTime > lastSpawn+spawnCooldown){
            	 Managers.entityManager.add(new Enemy1());
                this.lastSpawn = Game_v2.currentTime;
            }
        }
    }

    public static class Enemy2Spawner extends EnemySpawner{
    	private double spawn;
    	private int count;
        public Enemy2Spawner(){
            super();
            this.spawn = GameLib.WIDTH * 0.2;
            this.count = 0;
            this.spawnCooldown = Game_v2.currentTime + 7000;
        }
        public void tryToSpawn() {
            if(Game_v2.currentTime > lastSpawn+spawnCooldown){
            	if(count < 10) {
	            	Managers.entityManager.add(new Enemy2(spawn));
	    			this.lastSpawn = Game_v2.currentTime;
	    			this.spawnCooldown = 120;
	    			count++;
            	}
            	else {
            		spawn = Math.random() > 0.5 ? GameLib.WIDTH * 0.2 : GameLib.WIDTH * 0.8;
            		this.lastSpawn = Game_v2.currentTime;
                    this.spawnCooldown =	(long) (3000 + Math.random() * 3000);
                    count = 0;
            	}
        	}
        }
    }
    public static class Enemy3Spawner extends EnemySpawner{
    	private double spawn;
    	private int count;
    	public Enemy3Spawner(){
            super();
            this.spawn = GameLib.WIDTH * 0.2;
            this.count = 0;
            this.spawnCooldown = Game_v2.currentTime + 7000;
        }
	    public void tryToSpawn(){
	    	if(Game_v2.currentTime > lastSpawn	+ spawnCooldown) {
	    		if(count < 2) {
	    			Managers.entityManager.add(new Enemy3(spawn));
	    			this.lastSpawn = Game_v2.currentTime;
	    			count++;
	    			spawn = GameLib.WIDTH * 0.8;
	    			this.spawnCooldown = 0;
	    		}
	    		else {
	    			count = 0;
	    			spawn = GameLib.WIDTH * 0.2;
	    			this.spawnCooldown = 7000;
	    		}
	    	}
	    }
    }
}


public class Game_v2 {
	public static void drawSquare(double leftX, double topY, double rightX, double bottomY) {
        GameLib.drawLine(leftX, bottomY, rightX, bottomY);
        GameLib.drawLine(rightX, bottomY, rightX, topY);
        GameLib.drawLine(rightX, topY, leftX, topY);
        GameLib.drawLine(leftX, topY, leftX, bottomY);
    }
    public static void busyWait(long time){
       while(System.currentTimeMillis() < time) Thread.yield();
    }
	public static long currentTime = System.currentTimeMillis();
	public static long delta;
	public static Player player = new Player(GameLib.WIDTH/2, GameLib.HEIGHT * 0.90);
    public static void main(String args[]) {
        boolean running = true;
        Stage stage = new Stage();
        //Managers.entityManager.add(new Enemy1());
        while (running) {
        	delta = System.currentTimeMillis() - currentTime;
            currentTime = System.currentTimeMillis();
            /////Atualizações de estado do player /////
            
            player.Draw();
            player.CheckKeyboard();
            player.CheckDamage();
            
            /////Atualizações de estado dos inimigos /////
            
            Managers.entityManager.checkForDamage(currentTime);
            Managers.entityManager.move(currentTime);
            Managers.entityManager.Draw();
            Managers.entityManager.tryToSpawn();
            Managers.entityManager.shoot(currentTime);
            Managers.entityManager.deactivate();
            
            /////Desenha explosão/////
            
            Managers.explosionManager.Draw();
            
            /////Atulizações de estado do powerUp/////
            
            Managers.powerUpManager.Deactivate();
            Managers.powerUpManager.Move();
            Managers.powerUpManager.Draw();
            
            /////Atulizações de estado dos peojéteis/////
            
            Managers.projectileManager.Move(currentTime);
            Managers.projectileManager.Draw();
            Managers.playerProjectileManager.Move(currentTime);
            Managers.playerProjectileManager.Draw();
            
            ///Desenha o fundo///
            stage.draw();
            
            if (GameLib.iskeyPressed(GameLib.KEY_ESCAPE)) running = false;
            busyWait(currentTime + 3);
            GameLib.display();
        }
    }
}

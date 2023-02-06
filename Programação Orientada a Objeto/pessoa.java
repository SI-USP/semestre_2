public class Pessoa {
    int id;
    string nome;
}

public class TestePessoa {
    public static void main(String [] args) {
        Pessoa p = new Pessoa();
        System.out.println("Pessoa: id = " + p.id + ", nome = " + p.nome);
    }
}

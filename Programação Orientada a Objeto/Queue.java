public class testQueue {

    @SuppressWarnings("unchecked")
    public static void testInt() {
        int i, x;
        Queue<Integer> q = new Queue<Integer>(10);

        q.insert(100);
        q.insert(20);
        q.insert(30);
        q.insert(40);
        q.insert(50);
        System.out.println(q);

        System.out.println("Minimum element: " + minElement(q));
    }

    public static void testString() {
        int i;
        String s;
        Queue<String> q = new Queue<String>(10);

        q.insert("este");
        q.insert("é");
        q.insert("um");
        q.insert("a");
        q.insert(", ok?");
        System.out.println(q);

        System.out.println("Minimum element: " + minElement(q));
    }

    public static <T extends Comparable<T>> T minElement(Queue<T> q) throws IllegalStateException {
        T item, min;

        if (q.getEnd() == 0) {
            throw new IllegalStateException("Queue is empty");
        }

        min = q.remove();
        try {
            System.out.println("Loop!");
            item = q.remove();
            if (item.compareTo(min) < 0) {
                min = item;
            }
        } finally {
            return min;
        }

    }

    public static void main(String[] args) {
        testInt();
        System.out.println("-------------------------------------------------------------------------");
        testString();
    }
}

public class Queue<T> {
    private int end;
    private T[] queue;

    @SuppressWarnings("unchecked")
    public Queue(int size) {
        queue = (T[]) new Object[size];
        end = 0;
    }

    public int getEnd() {
        return end;
    }

    public void insert(T item) {
        queue[end] = item;
        end++;
    }

    public T remove() throws IllegalStateException {
        int i;
        T item;

        if (end == 0) {
            throw new IllegalStateException("Queue is empty");
        }

        item = queue[0];

        for (i = 0; i + 1 < end; i++) {
            queue[i] = queue[i + 1];
        }
        end--;
        return item;
    }

    public String toString() {
        int i;
        String s = "Queue:";

        for (i = 0; i < end; i++) {
            s += (" " + queue[i]);
        }
        return s;
    }
}

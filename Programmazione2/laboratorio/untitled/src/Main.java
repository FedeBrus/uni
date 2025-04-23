public class Main {
    public static void main(String[] args) {
        A obj = new B();
        A par = new B();
        System.out.println(obj.m(par));
        Object[] arr = new Object[10];
        arr[0] = "elemento";
    }
}

class A {
    int x = 0;
    String m(A a) { return "a_a"; }
}

class B extends A {
    String m(B b) { return "b_b"; }
    String m(A a) { return "a_b"; }
}
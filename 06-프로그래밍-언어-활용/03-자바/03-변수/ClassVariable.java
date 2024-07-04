public class ClassVariable {
    int a = 5;
    void fn(){
        a = a + 3;
    }
    public static void main(String[] args) {
        ClassVariable c = new ClassVariable();
        c.a = c.a + 5;
        c.fn();
        System.out.println(c.a);
    }
}
// 출력
// 13
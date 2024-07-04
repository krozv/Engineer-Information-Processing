class Static {
    static int count = 0;
}

public class StaticVariable {
    public static void main(String[] args) {
        Static s = new Static();
        s.count++;
        System.out.println(s.count);
        s.count++;
        System.out.println(s.count);
    }
}
// 출력
// 1 
// 2
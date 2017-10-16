import java.util.Scanner;

public class stack {
    public static void main(String[] arg){
        Scanner scan = new Scanner(System.in);
        System.out.println("배열의 크기를 지정하세요.");

        int a = scan.nextInt();
        while(a <= 0){
            System.out.println("배열의 크기를 1이상으로 지정하세요.");
            a = scan.nextInt();
        }
        int numArray[] = new int[a];

        System.out.println("Stack에 넣을 숫자를 입력하세요.");

        for(int i = 0; i<numArray.length; i++){
            numArray[i] = scan.nextInt();
        }

        for(int i=numArray.length-1; i>=0; i--){
            System.out.println("numArray[" + i + "]" + numArray[i]);
        }
    }
}

import java.util.Scanner;

class greatThanSev extends Exception{
    @Override
    public String toString() {
        return "Your input should be less than 7000";
    }
}
class greatThanTen extends Exception{
    @Override
    public String toString() {
        return "Your input should be less than 10000";
    }
}
class invalidOp extends Exception{
    @Override
    public String toString() {
        return "This operation can't be performed";
    }
}

public class Exercise6 {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        System.out.println("Calculator Menu : ");
        System.out.println("Press + for addition.");
        System.out.println("Press - for substraction.");
        System.out.println("Press * for multiplication.");
        System.out.println("Press / for division.");

        while(true){
            System.out.println("Enter the operation that you have to perform and q to quit the program.");
            char inp = scan.next().charAt(0);
            if (inp == 'q') {
                System.out.print("Quitting...");
                break;
            }
            try {
                if(inp == '+' | inp == '-' | inp == '*' | inp == '/'){

                }else{
                    throw new invalidOp();
                }
            }catch (Exception e){
                System.out.println(e);
                continue;
            }

            System.out.print("Enter the first number : ");
            int num1 = scan.nextInt();
            System.out.print("Enter the first number : ");
            int num2 = scan.nextInt();

            try {
                if(num1>=10000 | num2>=10000){
                    throw new greatThanTen();
                }
            }catch (Exception e){
                System.out.println(e);
                continue;
            }

            switch (inp){

                case '+':
                    System.out.println("The addtion of two nos is : "+(num1+num2));
                    break;
                case '-':
                    System.out.println("The subsstraction of two nos is : "+(num1-num2));
                    break;
                case '*':
                    try {
                        if(num1>7000 | num2>7000){
                            throw new greatThanSev();
                        }
                        System.out.println("The multiplication of two nos is : "+(num1*num2));
                    }catch (Exception e){
                        System.out.println(e);
                    }
                    break;
                case '/':
                    try {
                        System.out.println("The division of two nos is : "+(num1/num2));
                    }catch (Exception e){
                        System.out.println(e);
                    }
                    break;
            }

        }
    }
}

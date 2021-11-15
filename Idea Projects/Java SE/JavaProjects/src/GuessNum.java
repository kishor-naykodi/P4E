import java.util.Random;
import java.util.Scanner;

public class GuessNum {

    private int compRandomNo;
    private int userRandomNo;
    private int Guesses=0;
    private boolean flag=true;

    GuessNum(){
        Random rand = new Random();
        compRandomNo = rand.nextInt(100);
    }

    public int getCompRandomNo() {
        return compRandomNo;
    }

    public int getUserRandomNo() {
        return userRandomNo;
    }

    void takeUserInput(){
        Scanner scan = new Scanner(System.in);
        System.out.print("Enter Your Guess: ");
        userRandomNo = scan.nextInt();
    }

    void isCorrectNo(int compRandomNo, int userRandomNo){
        Guesses++;
        if (compRandomNo == userRandomNo) {
            System.out.println("You Won!!! And you have guessed in : "+Guesses+" Guesses.");
            flag = false;
        } else if(userRandomNo < compRandomNo){
            System.out.println("Too small...");
            System.out.println();
        }else{
            System.out.println("Too large...");
            System.out.println();
        }
    }

    public static void main(String[] args) {

        GuessNum obj = new GuessNum();

        System.out.println("*** Lets do some fun... ***");
        System.out.println("Game Name : \"Guess the no\"");
        System.out.println("Rules: \" i)You got 10 chances for guess the number." +
                "\n \t\tii)You have to guess the no in minimum guesses. " +
                "\n\t\tiii)If you guessed in minimum guesses than previous one then you won.\n");

        while(obj.flag && obj.Guesses<10){

            obj.takeUserInput();

            int compNo = obj.getCompRandomNo();
            int userNo = obj.getUserRandomNo();

            obj.isCorrectNo(compNo,userNo);
        }
    }

}

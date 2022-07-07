package com.solveninja;
import java.util.Scanner;
import java.util.Random;

public class ScissorRockGame {

    public static void main(String[] args) {
        System.out.println("GAME ZONE [Scissor, Rock and Paper]");
        System.out.println("-----------------------------------");
        System.out.println("You have to enter : \n0 for Scissor\n1 for Rock and\n2 for Paper ");

        int count=0;
        int comp_won=0;
        int user_won=0;

        while (count<10) {

            count=count+1;

            Random rand = new Random();
            int compInp = rand.nextInt(3);

            Scanner scan = new Scanner(System.in);
            int userInp = scan.nextInt();

            if (userInp == compInp) {
                System.out.println("Draw");
            } else {
                switch (userInp) {
                    case 0 ->{
                        if (compInp == 1) {
                            System.out.println("You lose");
                            comp_won=comp_won+1;
                        }else{
                            System.out.println("You won");
                            user_won=user_won+1;
                        }
                    }

                    case 1 -> {
                        if (compInp == 0) {
                            System.out.println("User won");
                            user_won = user_won + 1;
                        } else {
                            System.out.println("You lose");
                            comp_won = comp_won + 1;
                        }
                    }
                    case 2 -> {
                        if (compInp == 0) {
                            System.out.println("You lose");
                            comp_won = comp_won + 1;
                        } else {
                            System.out.println("You won");
                            user_won = user_won + 1;
                        }
                    }
                }
            }
        }

        System.out.println("");

        if(user_won>comp_won){
            System.out.println("Your score is "+user_won+" and computer score is "+comp_won);
            System.out.println("You won by "+(user_won-comp_won)+"Points");
        }else if (user_won==comp_won){
            System.out.println("Your score is "+user_won+" and computer score is "+comp_won);
            System.out.println("Match draw");
        }else {
            System.out.println("Your score is "+user_won+" and computer score is "+comp_won);
            System.out.println("You lose");
        }
    }
}

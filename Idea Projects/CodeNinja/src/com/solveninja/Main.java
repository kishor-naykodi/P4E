package com.solveninja;

public class Main {

    public static void main(String[] args) {

        Library l1 = new Library();

        l1.addBook("Clean Code");
        l1.addBook("The Pragamtic");
        l1.addBook("Refactoring");
        l1.addBook("Intro to Algrorithms");
        l1.addBook("Cracking the code interview");

        l1.showAvailableBooks();
        l1.issueBook("Clean Code");
        l1.showAvailableBooks();
        l1.returnBook("Clean Code");
        l1.showAvailableBooks();

    }
}

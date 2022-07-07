package com.solveninja;

class Library{

    private String libraryBooks[];
    private int noOfBooks;

    Library(){
        this.libraryBooks = new String[55];
        this.noOfBooks = 0;
    }

//    {"Clean Code","The Pragamtic","Refactoring","Intro to Algrorithms","Cracking the code interview"};

    void showAvailableBooks(){
        System.out.println("The available books are : ");
        for (String book : libraryBooks){
            if(book==null){
                    continue;
            }else {
                System.out.print("* " + book + "\n");
            }
        }
    }

    void addBook(String book){
        this.libraryBooks[noOfBooks]=book;
        noOfBooks++;
        System.out.println(book+" has been added to library.");
    }

    void issueBook(String book){
        for (int i=0; i< libraryBooks.length;i++){
            if(this.libraryBooks[i].equals(book)){
                System.out.println("The book has been isused.");
                this.libraryBooks[i]= null;
                return;
            }
        }
        System.out.println("This book does not exist.");
    }

    void returnBook(String book){
        addBook(book);
    }

}


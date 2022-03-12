package com.design_patterns1;

public class MailService {
    public void sendEmail(){
        connect();
        authenticate();
        //Send Email
        disconnet();
    }

    private void connect(){
        System.out.println("Connect");
    }

    private void disconnet(){
        System.out.println("Disconnect");
    }

    private void authenticate(){
        System.out.println("Authenticate");
    }

}

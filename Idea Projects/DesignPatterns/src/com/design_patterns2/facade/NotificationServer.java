package com.design_patterns2.facade;

public class NotificationServer {
    // connect() -> Connection
    // authenticate(appID, key)
    // send(authToken, message, target)
    // conn.disconnect()

    public Connection connect(String ipAddress){
        return new Connection();
    }

    public AuthToken authenticate(String appID, String key){
        return new AuthToken();
    }

    public void send(AuthToken authToken, Message message, String target){
        System.out.println("Sendig a meaddage");
    }
}

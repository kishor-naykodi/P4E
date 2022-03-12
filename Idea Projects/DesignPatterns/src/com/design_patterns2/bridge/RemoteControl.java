package com.design_patterns2.bridge;

public class RemoteControl {
    protected Device device;

    public RemoteControl(Device device) {
        this.device = device;
    }

    public void turnOn(){
        device.turnOn();
    };
    public void turnOff(){
        device.turnOff();
    };
}

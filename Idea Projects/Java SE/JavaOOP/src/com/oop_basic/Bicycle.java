package com.oop_basic;

public class Bicycle {
    private int gear;
    private int cadence;
    private int speed;

    public Bicycle(int cadence, int gear, int speed) {
            this.cadence = cadence;
            this.gear = gear;
            this.speed = speed;
            }

    public int getCadence() {
        return cadence;
    }

    public void setCadence(int cadence) {
        this.cadence = cadence;
    }

    public int getGear() {
        return gear;
    }

    public void setGear(int gear) {
        this.gear = gear;
    }

    public int getSpeed() {
        return speed;
    }

    public void applyBreak(int decrement) {
        this.speed -= decrement;
    }

    public void speedUp(int increment) {
        this.speed -= increment;
    }

}

package com.design_patterns1.observer;

public class SpreadSheet implements Observer{
    private DataSource dataSource;

    public SpreadSheet(DataSource dataSource) {
        this.dataSource = dataSource;
    }
    @Override
    public void update() {
        System.out.println("Spreadsheet get notified." + dataSource.getValue());
    }
}

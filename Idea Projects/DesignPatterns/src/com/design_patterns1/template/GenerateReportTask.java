package com.design_patterns1.template;

public class GenerateReportTask extends Task{
    @Override
    protected void doExecute() {
        System.out.println("Generate Report");
    }
}

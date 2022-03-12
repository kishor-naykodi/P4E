package com.design_patterns1.command;

import com.design_patterns1.command.fx.Command;

public class ResizeCommand implements Command {
    @Override
    public void execute() {
        System.out.println("Resize command");
    }
}

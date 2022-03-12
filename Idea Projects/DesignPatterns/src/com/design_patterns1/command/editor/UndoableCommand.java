package com.design_patterns1.command.editor;

public interface UndoableCommand extends Command{
    void unexecute();
}

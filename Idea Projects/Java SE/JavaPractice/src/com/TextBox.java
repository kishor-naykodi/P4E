package com;

public class TextBox extends UIControl{
    private String text = "";

//    public TextBox() {
//        super(isEnabled);
//        System.out.println("TextBox");
//    }


    @Override
    public void render() {
        System.out.println("Render Textbox");
    }

    public void setText(String text) {
        this.text = text;
    }

    public void clear(){
        text = "";
    }

    @Override
    public String toString(){
        return text;
    }
}

package com.design_patterns1.mediator;

public class ArticlesDialogBox{
    private ListBox articlesListBox = new ListBox();
    private TextBox titleTextBox = new TextBox();
    private Button saveButton = new Button();

    public ArticlesDialogBox() {
        articlesListBox.addEventHandler(this::articleSelected);
        titleTextBox.addEventHandler(this::titleChanged);
    }

    public void simulateUserInteraction(){
        articlesListBox.setSelection("Article 1");
        articlesListBox.setSelection("");
        articlesListBox.setSelection("Article 2");
        System.out.println("Textbox: " + titleTextBox.getContent());
        System.out.println("Button: " + saveButton.isEnabled());
    }

    private void titleChanged(){
        var content = titleTextBox.getContent();
        var isEmpty = (content == null ||content.isEmpty());
        saveButton.setEnabled(!isEmpty);
    }

    private void articleSelected(){
        titleTextBox.setContent(articlesListBox.getSelection());
        saveButton.setEnabled(true);
    }
}

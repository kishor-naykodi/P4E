from abc import ABC, abstractmethod


class UIControl(ABC):
    @abstractmethod
    def draw(self):
        pass


class TextBox(UIControl):
    def draw(self):
        print("TextBox")


class DropDownnList(UIControl):
    def draw(self):
        print("DropDownnList")


def draw(controls):
    for control in controls:
        control.draw()


ddl = DropDownnList()
textbox = TextBox()

# polymorphism in action
draw([ddl, textbox])

# Controlling a popup QWidget attached to a QToolButton

I want to get a Popup Widget to be shown when clicking on a QToolbutton.

This can be done by adding an action to the button itself.
The popup will contain a three buttons (update, create and cancel) and a text input field.

I have some sample code with only one button I have shared as a [Github repository]().

The most relevant part of the code is:

```.cpp
    auto button = new QToolButton(this);
    button->setText(" AA ");

    auto popup = new Popup(button, this);
    auto popupAction = new QWidgetAction(this);
    popupAction->setDefaultWidget(popup);
    button->setPopupMode(QToolButton::InstantPopup);
    button->addAction(popupAction);
```

The result is as follow:

[![A working popup][1]][1]

I have two issues I cannot solve:

- Getting the popup widget to right align to the button.
- Getting the popup widget close when one of the buttons inside of it are clicked.

### Right align the popup

There is already a similar question: [Set position (to right) of Qt QPushButton popup menu](https://stackoverflow.com/questions/31668623/set-position-to-right-of-qt-qpushbutton-popup-menu).

I can add the suggested code:

```.cpp
void Popup::showEvent(QShowEvent*)
{
    QPoint p = this->pos();
    QRect geo = clickedButton->geometry();
    
    this->move(p.x()+geo.width()-this->geometry().width(), p.y());
}
```


But only the content of the popup gets right aligned to the button, not the popup itself:

[![enter image description here][2]][2]

### Closing the popup

If I click anywhere (but a widget) in the Popup it closes. I'm somehow fine with this.

But if I cannot manage to get a click on the button to close the popup.  
I've tried to call the `close()` function but it only clears the content of the popup without closing it. 

Can I get the button to trigger a signal and then close the popup?

  [1]: https://i.stack.imgur.com/kFNT8.png
  [2]: https://i.stack.imgur.com/WEOaH.png

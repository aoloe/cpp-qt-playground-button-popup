#include "mainwindow.h"
#include "popup.h"

#include <QtWidgets>
#include <QWidgetAction>
#include <QToolButton>

MainWindow::MainWindow()
{
    auto widget = new QWidget;
    setCentralWidget(widget);
    auto layout = new QHBoxLayout(widget);
    layout->addStretch();

    auto button = new QToolButton;
    button->setText(" AA ");
    layout->addWidget(button);

	auto popup = new Popup;
	auto popupAction = new QWidgetAction(this);
	popupAction->setDefaultWidget(popup);
	button->setPopupMode(QToolButton::InstantPopup);
	button->addAction(popupAction);
    
    connect(popup, &Popup::clicked, [popup](){
        if(QWidget *p = popup->parentWidget())
            p->close();
    });
}

void MainWindow::showPopup()
{
}

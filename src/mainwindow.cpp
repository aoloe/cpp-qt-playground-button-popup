#include "mainwindow.h"
#include "popup.h"

#include <QtWidgets>
#include <QWidgetAction>
#include <QToolButton>

MainWindow::MainWindow()
{
    auto widget = new QWidget(this);
    auto layout = new QHBoxLayout(widget);
    layout->addStretch();
    auto button = new QToolButton(this);
    button->setText(" AA ");
    layout->addWidget(button);
    widget->setLayout(layout);
    setCentralWidget(widget);

    connect(button, &QToolButton::clicked, this, &MainWindow::showPopup);

	auto popup = new Popup(button, this);
	auto popupAction = new QWidgetAction(this);
	popupAction->setDefaultWidget(popup);
	button->setPopupMode(QToolButton::InstantPopup);
	button->addAction(popupAction);
}

void MainWindow::showPopup()
{
}

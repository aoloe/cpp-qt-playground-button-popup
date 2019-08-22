#include "popup.h"

#include<QToolButton>
#include<QWidget>
#include<QEvent>
#include<QVBoxLayout>
#include<QPushButton>

Popup::Popup(QToolButton* button, QWidget* parent)
    : QWidget(parent), clickedButton{button}
{
    auto layout = new QVBoxLayout(this);
    layout->addStretch();
    auto updateButton = new QPushButton("Update", this);
    layout->addWidget(updateButton);
    setLayout(layout);

    connect(updateButton, &QPushButton::clicked, this, &Popup::doUpdate);

}


void Popup::showEvent(QShowEvent*)
{
    // QPoint p = this->pos();
    // QRect geo = clickedButton->geometry();
	// 
    // this->move(p.x()+geo.width()-this->geometry().width(), p.y());
}

void Popup::doUpdate()
{
    // close();
    // emit leaveEvent(new QEvent(QEvent::Leave));
}


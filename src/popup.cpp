#include "popup.h"

#include<QWidget>
#include<QVBoxLayout>
#include<QPushButton>

Popup::Popup(QWidget* parent)
    : QWidget(parent)
{
    auto layout = new QVBoxLayout(this);
    layout->setContentsMargins(0, 0, 0, 0);
    layout->addStretch();
    auto updateButton = new QPushButton("Update");
    layout->addWidget(updateButton);
    connect(updateButton, &QPushButton::clicked, this, &Popup::clicked);
}
#ifndef POPUP_H
#define POPUP_H

#include <QWidget>

class QToolButton;

class Popup : public QWidget
{
    Q_OBJECT
public:
    explicit Popup(QWidget* parent=nullptr);
Q_SIGNALS:
	void clicked();
};
#endif


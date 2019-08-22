#ifndef POPUP_H
#define POPUP_H

#include <QWidget>

class QToolButton;

class Popup : public QWidget
{
    Q_OBJECT
public:
    explicit Popup(QToolButton* button, QWidget* parent);
private:
    void showEvent(QShowEvent*);
    QToolButton* clickedButton;
private slots:
    void doUpdate();
};
#endif


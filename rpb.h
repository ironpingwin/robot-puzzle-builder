#ifndef RPB_H
#define RPB_H

#include <QMainWindow>

namespace Ui {
class Rpb;
}

class Rpb : public QMainWindow
{
    Q_OBJECT

public:
    explicit Rpb(QWidget *parent = 0);
    ~Rpb();

private:
    Ui::Rpb *ui;
};

#endif // RPB_H

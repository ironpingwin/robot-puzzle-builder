#include "rpb.h"
#include "ui_rpb.h"

Rpb::Rpb(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Rpb)
{
    ui->setupUi(this);
}

Rpb::~Rpb()
{
    delete ui;
}

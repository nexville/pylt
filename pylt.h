#ifndef PYLT_H
#define PYLT_H

#include <QWidget>

namespace Ui {
class Pylt;
}

class Pylt : public QWidget
{
    Q_OBJECT
    
public:
    explicit Pylt(QWidget *parent = 0);
    ~Pylt();
    
private:
    Ui::Pylt *ui;
public slots:
    void AllGo();
    void Stop();
    void Plus();
    void Minus();
    void Period();




};

#endif // PYLT_H

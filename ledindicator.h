#ifndef LEDINDICATOR_H
#define LEDINDICATOR_H

#include <QWidget>

namespace nrg_gui_plugins {

class LedIndicator: public QWidget {
    Q_OBJECT
    
  public:
    LedIndicator(QWidget *parent = 0);
    
    void setOnColor(QColor onColor);
    
    void setOffColor(QColor offColor);
    
    void setOnPattern(Qt::BrushStyle onPattern);
    
    void setOffPattern(Qt::BrushStyle offPattern);
    
    void setLedSize(int size);

  public Q_SLOTS:
    void setState(bool state);
    
    void toggle();
    
    void on();
    
    void off();
    
  protected:
    void paintEvent(QPaintEvent *);
    
  private:
    bool lit;
    QColor ledOnColor;
    QColor ledOffColor;
    Qt::BrushStyle ledOnPattern;
    Qt::BrushStyle ledOffPattern;
    int ledSize;
};

}

#endif // LEDINDICATOR_H


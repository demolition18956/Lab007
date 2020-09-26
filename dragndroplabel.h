#ifndef DRAGNDROPLABEL_H
#define DRAGNDROPLABEL_H

#include <QLabel>
#include <QMouseEvent>
#include <QDragEnterEvent>
#include <QString>
#include <QtGui>

class DragnDropLabel : public QLabel
{
public:
    DragnDropLabel(const QString& file, QWidget* parent = 0);

protected:
    void mousePressEvent(QMouseEvent* event);
    void dragEnterEvent(QDragEnterEvent* event);
    void dropEvent(QDropEvent* event);

private:
    QString filename;
};

#endif // DRAGNDROPLABEL_H

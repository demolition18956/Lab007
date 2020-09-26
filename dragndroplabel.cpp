#include "dragndroplabel.h"

DragnDropLabel::DragnDropLabel(const QString& file, QWidget* parent)
    : QLabel (parent)
{
    filename = file;
    setFixedSize(50,50);
    setPixmap(QPixmap(filename).scaled(50,50));
    setAcceptDrops(true);
}

void DragnDropLabel::mousePressEvent(QMouseEvent *event)
{
    if (event && event->button() == Qt::LeftButton)
    {
        if (pixmap())
        {
            QMimeData* md = new QMimeData();
            md->setImageData(pixmap()->toImage());

            QDrag* drag = new QDrag(this);
            drag->setMimeData(md);

            drag->start();
        }



    }
}

void DragnDropLabel::dragEnterEvent(QDragEnterEvent *event)
{
    if (event && event->mimeData())
    {
        const QMimeData* md = event->mimeData();
        if (md->hasImage())
        {
            event->acceptProposedAction();
        }
    }
}

void DragnDropLabel::dropEvent(QDropEvent *event)
{
    QPixmap pic;
    if (event && event->mimeData())
    {
        const QMimeData* md = event->mimeData();
        if (md->hasImage())
        {
            pic = md->imageData().value<QPixmap>();
        }
    }
    if (!pic.isNull())
    {
        setPixmap(pic.scaled(50,50));
    }
}

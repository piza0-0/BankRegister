#ifndef LABELDELEGATE_H
#define LABELDELEGATE_H

#include <QStandardItemModel>
#include <QTableView>
#include <QLabel>
#include <QStandardItem>
#include <QStyledItemDelegate>
#include <QPainter>

class LabelDelegate : public QStyledItemDelegate
{
public:
    void paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const override
    {
        if (index.isValid() && index.column() == 0) {
            // Создаем QLabel и устанавливаем текст из модели
            QLabel label(index.data().toString());
            // Рисуем QLabel на виджете
            painter->save();
            painter->translate(option.rect.topLeft());
            label.render(painter);
            painter->restore();
        } else {
            QStyledItemDelegate::paint(painter, option, index);
        }
    }
};

#endif // LABELDELEGATE_H

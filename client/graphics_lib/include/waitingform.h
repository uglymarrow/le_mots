#ifndef CLIENT_CLIENT_GRAPHICS_LIB_INCLUDE_WAITINGFORM_H_
#define CLIENT_CLIENT_GRAPHICS_LIB_INCLUDE_WAITINGFORM_H_

#include <QWidget>

namespace Ui {
class WaitingForm;
}

class WaitingForm : public QWidget {
 Q_OBJECT

 public:
  explicit WaitingForm(QWidget *parent = 0);
  ~WaitingForm();

 private:
  Ui::WaitingForm *ui;
};

#endif //CLIENT_CLIENT_GRAPHICS_LIB_INCLUDE_WAITINGFORM_H_

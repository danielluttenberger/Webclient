#ifndef WEBCLIENT_H
#define WEBCLIENT_H

#include "ui_webclient.h"
<<<<<<< HEAD
#include <QAbstractSocket>
#include <QTcpSocket>
=======
>>>>>>> 47f9ffed94dbc66cb2145e1b0e82a555ee5db27f

class Webclient : public QWidget, private Ui::Webclient
{
    Q_OBJECT

public:
    explicit Webclient(QWidget *parent = nullptr);
<<<<<<< HEAD
private slots:
    void on_button_clicked();
    void tcp_connect();
    void tcp_readyRead();
   private:
    QTcpSocket* m_socket = nullptr;
    const unsigned short m_port = 80;
    QByteArray m_hostname;
=======
>>>>>>> 47f9ffed94dbc66cb2145e1b0e82a555ee5db27f
};

#endif // WEBCLIENT_H

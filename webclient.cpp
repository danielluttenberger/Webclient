#include "webclient.h"

Webclient::Webclient(QWidget *parent) :
    QWidget(parent)
{
    setupUi(this);
<<<<<<< HEAD
    m_socket = new QTcpSocket();
    connect(m_socket, &QTcpSocket::connected, this, &Webclient::tcp_connect);
    connect(m_socket, &QTcpSocket::readyRead, this, &Webclient::tcp_readyRead);
}

void Webclient::on_button_clicked()
{
    textoutput->clear();

    QString adress = textinput->text();
    m_socket->connectToHost(adress, m_port);

    if(!m_socket->waitForConnected(5000))
    {
        textoutput->setText("connect failed!");
        m_socket->disconnectFromHost();
    }
}

void Webclient::tcp_connect()
{
    m_socket->write("Get / HTTP/1.1\r\nHost:"+ m_hostname + "\r\n\r\n");
}
void Webclient::tcp_readyRead()
{
    textoutput->setText(m_socket->readAll());
    m_socket->disconnectFromHost();
=======
>>>>>>> 47f9ffed94dbc66cb2145e1b0e82a555ee5db27f
}

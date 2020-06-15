
#ifndef _MyServer_h_
#define _MyServer_h_

#include <QWidget>

#include <QLabel>
#include <QMessageBox>
#include <QTcpServer>
#include <QTcpSocket>
#include <QTextEdit>
#include <QTime>
#include <QVBoxLayout>
#include <QWidget>
#include <QtGlobal>

// class QTcpServer;
// class QTextEdit;
// class QTcpSocket;

class MyServer : public QWidget
{
    Q_OBJECT
private:
    QTcpServer * m_ptcpServer;
    QTextEdit * m_ptxt;
    quint16 m_nNextBlockSize;

private:
    void sendToClient( QTcpSocket * pSocket, const QString & str );

public:
    MyServer( int nPort, QWidget * pwgt = 0 );

public slots:
    virtual void slotNewConnection();
    void slotReadClient();
};
#endif //_MyServer_h_

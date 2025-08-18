#ifndef SHELL_INTERACTIVE_PROCESS_H
#define SHELL_INTERACTIVE_PROCESS_H

#include <QObject>
#include <QProcess>
#include <QScopedPointer>

#include "Shell_Interactive_global.h"
#include "Shell_Interactive.h"

class Shell_Interactive_ProcessPrivate;
class SHELL_INTERACTIVE_EXPORT Shell_Interactive_Process : public Shell_Interactive
{
    Q_OBJECT

public:
    explicit Shell_Interactive_Process(QObject* parent = nullptr);
    ~Shell_Interactive_Process();

    QString program() const;
    void setProgram(const QString &program);

    QStringList arguments() const;
    void setArguments(const QStringList &arguments);

    bool ShowErrorAsStandard() const;
    void setShowErrorAsStandard(bool newShowErrorAsStandard);

    QProcess::ExitStatus exitStatus() const;

    bool isRunning() const;


public slots:
    void Connect();

    void Disconnect();

    void Send_Data(QByteArray Data);

private:
    QScopedPointer<Shell_Interactive_ProcessPrivate> d_ptr;
    Q_DECLARE_PRIVATE(Shell_Interactive_Process)
    Q_DISABLE_COPY(Shell_Interactive_Process)
};

#endif // SHELL_INTERACTIVE_PROCESS_H


#ifndef FILE_COPY_H
#define FILE_COPY_H
#include <QObject>
#include <QString>
#include <QScopedPointer>

#include "File_Copy_global.h"

class File_CopyPrivate;
class FILE_COPY_EXPORT File_Copy : public QObject
{
	Q_OBJECT
	Q_PROPERTY(QString source READ source WRITE setSource)
	Q_PROPERTY(QString destination READ destination WRITE setDestination)
	Q_PROPERTY(bool overwrite READ overwrite WRITE setOverwrite)
	Q_PROPERTY(qint64 fileSize READ fileSize)
public:
	explicit File_Copy(QObject *parent = nullptr);
	~File_Copy();

	QString source() const;
	void setSource(const QString &source);

	QString destination() const;
	void setDestination(const QString &destination);

	bool overwrite() const;
	void setOverwrite(bool overwrite);

	qint64 fileSize() const;

	bool ready() const;

public slots:
	void copy();
	void cancel();

signals:
	void progress(qint64 bytesCopied, qint64 totalBytes);
	void finished(bool success);
	void error(const QString &message);

private:
	QScopedPointer<File_CopyPrivate> d_ptr;
	Q_DECLARE_PRIVATE(File_Copy)
	Q_DISABLE_COPY(File_Copy)
};

#endif // FILE_COPY_H


#ifndef FILE_SEARCHER_H
#define FILE_SEARCHER_H

#include <QObject>
#include <QScopedPointer>
#include <QString>

#include "File_Searcher_global.h"

class File_SearcherPrivate;
class FILE_SEARCHER_EXPORT File_Searcher: public QObject
{
    Q_OBJECT
public:
    explicit File_Searcher(QObject *parent = nullptr);
    ~File_Searcher();

    void startSearch(const QString &path, const QString &pattern);  // 多個 pattern 用 `;` 分隔
    void stopSearch();

    bool searchForFiles() const;
    void setSearchForFiles(bool newSearchForFiles);

signals:
    void fileFound(const QString &filePath);
    void searchFinished();

private:
    QScopedPointer<File_SearcherPrivate> d_ptr;
    Q_DECLARE_PRIVATE(File_Searcher)
    Q_DISABLE_COPY(File_Searcher)
};


#endif // FILE_SEARCHER_H

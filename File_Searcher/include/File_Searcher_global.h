#ifndef FILE_SEARCHER_GLOBAL_H
#define FILE_SEARCHER_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(FILE_SEARCHER_LIBRARY)
#  define FILE_SEARCHER_EXPORT Q_DECL_EXPORT
#else
#  define FILE_SEARCHER_EXPORT Q_DECL_IMPORT
#endif

#endif // FILE_SEARCHER_GLOBAL_H

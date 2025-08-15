#ifndef FILE_COPY_GLOBAL_H
#define FILE_COPY_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(FILE_COPY_LIBRARY)
#  define FILE_COPY_EXPORT Q_DECL_EXPORT
#else
#  define FILE_COPY_EXPORT Q_DECL_IMPORT
#endif

#endif // FILE_COPY_GLOBAL_H

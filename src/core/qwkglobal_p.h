#ifndef QWKGLOBAL_P_H
#define QWKGLOBAL_P_H

#include <QtCore/QLoggingCategory>

#include <QWKCore/qwkcoreglobal.h>

QWK_CORE_EXPORT Q_DECLARE_LOGGING_CATEGORY(qWindowKitLog)

#define QWK_INFO     qCInfo(qWindowKitLog)
#define QWK_DEBUG    qCDebug(qWindowKitLog)
#define QWK_WARNING  qCWarning(qWindowKitLog)
#define QWK_CRITICAL qCCritical(qWindowKitLog)
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
#  define QWK_FATAL qCFatal(qWindowKitLog)
#endif

#define MAKE_RGB_COLOR(r, g, b) ((quint32) | (((r) &0xFF) << 16) | (((g) &0xFF) << 8) | ((b) &0xFF))

#define MAKE_RGBA_COLOR(r, g, b, a)                                                                \
    ((quint32) (((a) &0xFF) << 24) | (((r) &0xFF) << 16) | (((g) &0xFF) << 8) | ((b) &0xFF))

#endif // QWKGLOBAL_P_H
#ifndef TESTQUAZIPFILEINFO_H
#define TESTQUAZIPFILEINFO_H

#include <QObject>

class TestQuaZipFileInfo : public QObject
{
    Q_OBJECT
public:
    explicit TestQuaZipFileInfo(QObject *parent = 0);
private Q_SLOTS:
    void getNTFSTime();
};

#endif // TESTQUAZIPFILEINFO_H

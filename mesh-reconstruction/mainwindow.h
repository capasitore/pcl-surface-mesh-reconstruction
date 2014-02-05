#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtGui/QMainWindow>
#include <QDialog>
#include <QFileDialog>
#include <QPushButton>
#include <QHBoxLayout>
#include <QGroupBox>
#include <QMenu>
#include <QMenuBar>
#include <QAction>
#include "meshreconstruction.h"

class MainWindow : public QDialog
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void openFile();
    void openMesh();

private:
    void createMenu();
    void createVerticalGroupBox();
    void createHorizontalGroupBox();

    QPushButton *openBtn;
    QPushButton *runAllBtn;
    QPushButton *downsampleBtn;
    QPushButton *removeOutliersBtn;
    QPushButton *meshReconstructionBtn;
    QPushButton *showMeshBtn;

    QMenuBar *menuBar;
    QMenu *fileMenu;
    QAction *exitAction;

    QVBoxLayout *mainlayout;
    QGroupBox *verticalGroup;
    QGroupBox *horizontalGroup;

    QString fileName;
    MeshReconstruction *meshRec;
};

#endif // MAINWINDOW_H

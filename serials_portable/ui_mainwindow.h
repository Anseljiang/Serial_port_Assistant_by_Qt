/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QWidget *widget_title;
    QHBoxLayout *horizontalLayout;
    QLabel *lab_Ico;
    QLabel *lab_Title;
    QPushButton *btnMenu_lock;
    QPushButton *btnMenu;
    QPushButton *btnMenu_Min;
    QPushButton *btnMenu_Max;
    QPushButton *btnMenu_Close;
    QTextBrowser *textBrowser;
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *SerialcomboBox;
    QPushButton *OpenCom;
    QLabel *Indicator;
    QPushButton *ClearDisplay;
    QPushButton *SaveContent;
    QPushButton *Help;
    QLabel *label_2;
    QComboBox *BaudComboBox;
    QLineEdit *FilePath;
    QLabel *label_3;
    QComboBox *DataComboBox;
    QCheckBox *DTRcheckBox;
    QPushButton *OpenFile;
    QPushButton *SendFile;
    QPushButton *CloseFile;
    QLabel *label_5;
    QComboBox *ParityComboBox;
    QTextEdit *textEdit;
    QPushButton *SendData;
    QLabel *label_4;
    QComboBox *StopComboBox;
    QLabel *label_6;
    QComboBox *FCComboBox;
    QCheckBox *TimecheckBox;
    QLineEdit *Time;
    QLabel *label_7;
    QCheckBox *RTScheckBox;
    QCheckBox *HexReccheckBox;
    QCheckBox *CRC16checkBox;
    QCheckBox *HexSendcheckBox;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setWindowModality(Qt::NonModal);
        MainWindow->setEnabled(true);
        MainWindow->resize(650, 650);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(650, 650));
        MainWindow->setMaximumSize(QSize(16777215, 16777215));
        QFont font;
        font.setFamily(QString::fromUtf8("Courier 10 Pitch"));
        font.setPointSize(12);
        MainWindow->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/appICO.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        sizePolicy.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy);
        centralWidget->setMinimumSize(QSize(650, 618));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widget_title = new QWidget(centralWidget);
        widget_title->setObjectName(QString::fromUtf8("widget_title"));
        sizePolicy.setHeightForWidth(widget_title->sizePolicy().hasHeightForWidth());
        widget_title->setSizePolicy(sizePolicy);
        widget_title->setMinimumSize(QSize(650, 32));
        widget_title->setMaximumSize(QSize(16777215, 32));
        horizontalLayout = new QHBoxLayout(widget_title);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        lab_Ico = new QLabel(widget_title);
        lab_Ico->setObjectName(QString::fromUtf8("lab_Ico"));
        lab_Ico->setMinimumSize(QSize(32, 32));
        lab_Ico->setStyleSheet(QString::fromUtf8(""));
        lab_Ico->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(lab_Ico);

        lab_Title = new QLabel(widget_title);
        lab_Title->setObjectName(QString::fromUtf8("lab_Title"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lab_Title->sizePolicy().hasHeightForWidth());
        lab_Title->setSizePolicy(sizePolicy1);
        lab_Title->setMinimumSize(QSize(0, 32));
        lab_Title->setMaximumSize(QSize(16777215, 32));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(11);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        lab_Title->setFont(font1);
        lab_Title->setStyleSheet(QString::fromUtf8(""));
        lab_Title->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout->addWidget(lab_Title);

        btnMenu_lock = new QPushButton(widget_title);
        btnMenu_lock->setObjectName(QString::fromUtf8("btnMenu_lock"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(btnMenu_lock->sizePolicy().hasHeightForWidth());
        btnMenu_lock->setSizePolicy(sizePolicy2);
        btnMenu_lock->setMinimumSize(QSize(32, 32));
        btnMenu_lock->setCursor(QCursor(Qt::ArrowCursor));
        btnMenu_lock->setFocusPolicy(Qt::NoFocus);
        btnMenu_lock->setFlat(true);

        horizontalLayout->addWidget(btnMenu_lock);

        btnMenu = new QPushButton(widget_title);
        btnMenu->setObjectName(QString::fromUtf8("btnMenu"));
        sizePolicy2.setHeightForWidth(btnMenu->sizePolicy().hasHeightForWidth());
        btnMenu->setSizePolicy(sizePolicy2);
        btnMenu->setMinimumSize(QSize(32, 32));
        btnMenu->setCursor(QCursor(Qt::ArrowCursor));
        btnMenu->setFocusPolicy(Qt::NoFocus);
        btnMenu->setFlat(true);

        horizontalLayout->addWidget(btnMenu);

        btnMenu_Min = new QPushButton(widget_title);
        btnMenu_Min->setObjectName(QString::fromUtf8("btnMenu_Min"));
        sizePolicy2.setHeightForWidth(btnMenu_Min->sizePolicy().hasHeightForWidth());
        btnMenu_Min->setSizePolicy(sizePolicy2);
        btnMenu_Min->setMinimumSize(QSize(32, 32));
        btnMenu_Min->setCursor(QCursor(Qt::ArrowCursor));
        btnMenu_Min->setFocusPolicy(Qt::NoFocus);
        btnMenu_Min->setFlat(true);

        horizontalLayout->addWidget(btnMenu_Min);

        btnMenu_Max = new QPushButton(widget_title);
        btnMenu_Max->setObjectName(QString::fromUtf8("btnMenu_Max"));
        sizePolicy2.setHeightForWidth(btnMenu_Max->sizePolicy().hasHeightForWidth());
        btnMenu_Max->setSizePolicy(sizePolicy2);
        btnMenu_Max->setMinimumSize(QSize(32, 32));
        btnMenu_Max->setCursor(QCursor(Qt::ArrowCursor));
        btnMenu_Max->setFocusPolicy(Qt::NoFocus);
        btnMenu_Max->setFlat(true);

        horizontalLayout->addWidget(btnMenu_Max);

        btnMenu_Close = new QPushButton(widget_title);
        btnMenu_Close->setObjectName(QString::fromUtf8("btnMenu_Close"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(btnMenu_Close->sizePolicy().hasHeightForWidth());
        btnMenu_Close->setSizePolicy(sizePolicy3);
        btnMenu_Close->setMinimumSize(QSize(32, 32));
        btnMenu_Close->setMaximumSize(QSize(16777215, 32));
        btnMenu_Close->setCursor(QCursor(Qt::ArrowCursor));
        btnMenu_Close->setFocusPolicy(Qt::NoFocus);
        btnMenu_Close->setFlat(true);

        horizontalLayout->addWidget(btnMenu_Close);


        verticalLayout->addWidget(widget_title);

        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(textBrowser->sizePolicy().hasHeightForWidth());
        textBrowser->setSizePolicy(sizePolicy4);
        textBrowser->setMinimumSize(QSize(0, 340));
        textBrowser->setMaximumSize(QSize(16777215, 16777215));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Courier 10 Pitch"));
        font2.setPointSize(11);
        textBrowser->setFont(font2);
        textBrowser->setMouseTracking(false);
        textBrowser->setTextInteractionFlags(Qt::TextSelectableByMouse);

        verticalLayout->addWidget(textBrowser);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setVerticalSpacing(14);
        gridLayout->setContentsMargins(10, 6, 10, 6);
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy5(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy5);
        label->setMinimumSize(QSize(50, 25));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font3.setPointSize(11);
        font3.setKerning(true);
        label->setFont(font3);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        SerialcomboBox = new QComboBox(centralWidget);
        SerialcomboBox->setObjectName(QString::fromUtf8("SerialcomboBox"));
        sizePolicy1.setHeightForWidth(SerialcomboBox->sizePolicy().hasHeightForWidth());
        SerialcomboBox->setSizePolicy(sizePolicy1);
        SerialcomboBox->setMinimumSize(QSize(96, 28));
        SerialcomboBox->setMaximumSize(QSize(16777215, 16777215));
        SerialcomboBox->setFont(font2);

        gridLayout->addWidget(SerialcomboBox, 0, 1, 1, 1);

        OpenCom = new QPushButton(centralWidget);
        OpenCom->setObjectName(QString::fromUtf8("OpenCom"));
        QSizePolicy sizePolicy6(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(OpenCom->sizePolicy().hasHeightForWidth());
        OpenCom->setSizePolicy(sizePolicy6);
        OpenCom->setMinimumSize(QSize(90, 30));
        OpenCom->setMaximumSize(QSize(16777215, 40));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font4.setPointSize(11);
        OpenCom->setFont(font4);
        OpenCom->setCursor(QCursor(Qt::ArrowCursor));
        OpenCom->setFocusPolicy(Qt::NoFocus);
        OpenCom->setCheckable(false);

        gridLayout->addWidget(OpenCom, 0, 2, 1, 1);

        Indicator = new QLabel(centralWidget);
        Indicator->setObjectName(QString::fromUtf8("Indicator"));
        Indicator->setMinimumSize(QSize(90, 30));
        Indicator->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(Indicator, 0, 3, 1, 2);

        ClearDisplay = new QPushButton(centralWidget);
        ClearDisplay->setObjectName(QString::fromUtf8("ClearDisplay"));
        ClearDisplay->setEnabled(true);
        sizePolicy.setHeightForWidth(ClearDisplay->sizePolicy().hasHeightForWidth());
        ClearDisplay->setSizePolicy(sizePolicy);
        ClearDisplay->setMinimumSize(QSize(90, 30));
        ClearDisplay->setMaximumSize(QSize(16777215, 40));
        ClearDisplay->setFont(font4);
        ClearDisplay->setCursor(QCursor(Qt::ArrowCursor));
        ClearDisplay->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(ClearDisplay, 0, 5, 1, 1);

        SaveContent = new QPushButton(centralWidget);
        SaveContent->setObjectName(QString::fromUtf8("SaveContent"));
        SaveContent->setEnabled(true);
        sizePolicy.setHeightForWidth(SaveContent->sizePolicy().hasHeightForWidth());
        SaveContent->setSizePolicy(sizePolicy);
        SaveContent->setMinimumSize(QSize(90, 30));
        SaveContent->setMaximumSize(QSize(16777215, 40));
        SaveContent->setFont(font4);
        SaveContent->setCursor(QCursor(Qt::ArrowCursor));
        SaveContent->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(SaveContent, 0, 6, 1, 1);

        Help = new QPushButton(centralWidget);
        Help->setObjectName(QString::fromUtf8("Help"));
        sizePolicy.setHeightForWidth(Help->sizePolicy().hasHeightForWidth());
        Help->setSizePolicy(sizePolicy);
        Help->setMinimumSize(QSize(90, 30));
        Help->setMaximumSize(QSize(16777215, 40));
        Help->setFont(font4);
        Help->setCursor(QCursor(Qt::ArrowCursor));
        Help->setFocusPolicy(Qt::NoFocus);
        Help->setCheckable(false);

        gridLayout->addWidget(Help, 0, 7, 1, 1);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy5.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy5);
        label_2->setMinimumSize(QSize(50, 25));
        label_2->setFont(font3);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        BaudComboBox = new QComboBox(centralWidget);
        BaudComboBox->setObjectName(QString::fromUtf8("BaudComboBox"));
        sizePolicy1.setHeightForWidth(BaudComboBox->sizePolicy().hasHeightForWidth());
        BaudComboBox->setSizePolicy(sizePolicy1);
        BaudComboBox->setMinimumSize(QSize(96, 28));
        BaudComboBox->setFont(font2);

        gridLayout->addWidget(BaudComboBox, 1, 1, 1, 1);

        FilePath = new QLineEdit(centralWidget);
        FilePath->setObjectName(QString::fromUtf8("FilePath"));
        sizePolicy1.setHeightForWidth(FilePath->sizePolicy().hasHeightForWidth());
        FilePath->setSizePolicy(sizePolicy1);
        FilePath->setMinimumSize(QSize(0, 28));
        FilePath->setMaximumSize(QSize(16777215, 56));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Courier 10 Pitch"));
        FilePath->setFont(font5);
        FilePath->setReadOnly(true);

        gridLayout->addWidget(FilePath, 1, 5, 1, 3);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy5.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy5);
        label_3->setMinimumSize(QSize(50, 25));
        label_3->setFont(font4);

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        DataComboBox = new QComboBox(centralWidget);
        DataComboBox->setObjectName(QString::fromUtf8("DataComboBox"));
        sizePolicy1.setHeightForWidth(DataComboBox->sizePolicy().hasHeightForWidth());
        DataComboBox->setSizePolicy(sizePolicy1);
        DataComboBox->setMinimumSize(QSize(96, 28));
        DataComboBox->setFont(font2);

        gridLayout->addWidget(DataComboBox, 2, 1, 1, 1);

        DTRcheckBox = new QCheckBox(centralWidget);
        DTRcheckBox->setObjectName(QString::fromUtf8("DTRcheckBox"));
        QSizePolicy sizePolicy7(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(DTRcheckBox->sizePolicy().hasHeightForWidth());
        DTRcheckBox->setSizePolicy(sizePolicy7);
        DTRcheckBox->setMinimumSize(QSize(90, 20));
        DTRcheckBox->setMaximumSize(QSize(16777215, 40));
        DTRcheckBox->setFont(font);
        DTRcheckBox->setFocusPolicy(Qt::NoFocus);
        DTRcheckBox->setChecked(false);

        gridLayout->addWidget(DTRcheckBox, 2, 2, 1, 1);

        OpenFile = new QPushButton(centralWidget);
        OpenFile->setObjectName(QString::fromUtf8("OpenFile"));
        OpenFile->setEnabled(true);
        sizePolicy.setHeightForWidth(OpenFile->sizePolicy().hasHeightForWidth());
        OpenFile->setSizePolicy(sizePolicy);
        OpenFile->setMinimumSize(QSize(90, 30));
        OpenFile->setMaximumSize(QSize(16777215, 40));
        OpenFile->setFont(font4);
        OpenFile->setCursor(QCursor(Qt::ArrowCursor));
        OpenFile->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(OpenFile, 2, 5, 1, 1);

        SendFile = new QPushButton(centralWidget);
        SendFile->setObjectName(QString::fromUtf8("SendFile"));
        SendFile->setEnabled(true);
        sizePolicy.setHeightForWidth(SendFile->sizePolicy().hasHeightForWidth());
        SendFile->setSizePolicy(sizePolicy);
        SendFile->setMinimumSize(QSize(90, 30));
        SendFile->setMaximumSize(QSize(16777215, 40));
        SendFile->setFont(font4);
        SendFile->setCursor(QCursor(Qt::ArrowCursor));
        SendFile->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(SendFile, 2, 6, 1, 1);

        CloseFile = new QPushButton(centralWidget);
        CloseFile->setObjectName(QString::fromUtf8("CloseFile"));
        CloseFile->setEnabled(true);
        sizePolicy.setHeightForWidth(CloseFile->sizePolicy().hasHeightForWidth());
        CloseFile->setSizePolicy(sizePolicy);
        CloseFile->setMinimumSize(QSize(90, 30));
        CloseFile->setMaximumSize(QSize(16777215, 40));
        CloseFile->setFont(font4);
        CloseFile->setCursor(QCursor(Qt::ArrowCursor));
        CloseFile->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(CloseFile, 2, 7, 1, 1);

        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy5.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy5);
        label_5->setMinimumSize(QSize(50, 25));
        label_5->setFont(font4);

        gridLayout->addWidget(label_5, 3, 0, 1, 1);

        ParityComboBox = new QComboBox(centralWidget);
        ParityComboBox->setObjectName(QString::fromUtf8("ParityComboBox"));
        sizePolicy1.setHeightForWidth(ParityComboBox->sizePolicy().hasHeightForWidth());
        ParityComboBox->setSizePolicy(sizePolicy1);
        ParityComboBox->setMinimumSize(QSize(96, 28));
        QFont font6;
        font6.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font6.setPointSize(10);
        ParityComboBox->setFont(font6);

        gridLayout->addWidget(ParityComboBox, 3, 1, 1, 1);

        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setEnabled(true);
        sizePolicy2.setHeightForWidth(textEdit->sizePolicy().hasHeightForWidth());
        textEdit->setSizePolicy(sizePolicy2);
        textEdit->setMinimumSize(QSize(91, 101));
        textEdit->setFont(font5);

        gridLayout->addWidget(textEdit, 3, 5, 3, 2);

        SendData = new QPushButton(centralWidget);
        SendData->setObjectName(QString::fromUtf8("SendData"));
        SendData->setEnabled(true);
        sizePolicy1.setHeightForWidth(SendData->sizePolicy().hasHeightForWidth());
        SendData->setSizePolicy(sizePolicy1);
        SendData->setMinimumSize(QSize(90, 100));
        SendData->setMaximumSize(QSize(16777215, 16777215));
        SendData->setFont(font4);
        SendData->setCursor(QCursor(Qt::ArrowCursor));
        SendData->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(SendData, 3, 7, 3, 1);

        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy5.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy5);
        label_4->setMinimumSize(QSize(50, 25));
        label_4->setFont(font4);

        gridLayout->addWidget(label_4, 4, 0, 1, 1);

        StopComboBox = new QComboBox(centralWidget);
        StopComboBox->setObjectName(QString::fromUtf8("StopComboBox"));
        sizePolicy1.setHeightForWidth(StopComboBox->sizePolicy().hasHeightForWidth());
        StopComboBox->setSizePolicy(sizePolicy1);
        StopComboBox->setMinimumSize(QSize(96, 28));
        StopComboBox->setFont(font2);

        gridLayout->addWidget(StopComboBox, 4, 1, 1, 1);

        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy5.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy5);
        label_6->setMinimumSize(QSize(50, 25));
        label_6->setFont(font4);

        gridLayout->addWidget(label_6, 5, 0, 1, 1);

        FCComboBox = new QComboBox(centralWidget);
        FCComboBox->setObjectName(QString::fromUtf8("FCComboBox"));
        sizePolicy1.setHeightForWidth(FCComboBox->sizePolicy().hasHeightForWidth());
        FCComboBox->setSizePolicy(sizePolicy1);
        FCComboBox->setMinimumSize(QSize(96, 28));
        FCComboBox->setFont(font6);

        gridLayout->addWidget(FCComboBox, 5, 1, 1, 1);

        TimecheckBox = new QCheckBox(centralWidget);
        TimecheckBox->setObjectName(QString::fromUtf8("TimecheckBox"));
        QSizePolicy sizePolicy8(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(TimecheckBox->sizePolicy().hasHeightForWidth());
        TimecheckBox->setSizePolicy(sizePolicy8);
        TimecheckBox->setMinimumSize(QSize(0, 20));
        TimecheckBox->setMaximumSize(QSize(16777215, 40));
        TimecheckBox->setFont(font4);
        TimecheckBox->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(TimecheckBox, 5, 2, 1, 1);

        Time = new QLineEdit(centralWidget);
        Time->setObjectName(QString::fromUtf8("Time"));
        Time->setEnabled(true);
        QSizePolicy sizePolicy9(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy9.setHorizontalStretch(0);
        sizePolicy9.setVerticalStretch(0);
        sizePolicy9.setHeightForWidth(Time->sizePolicy().hasHeightForWidth());
        Time->setSizePolicy(sizePolicy9);
        Time->setMinimumSize(QSize(0, 28));
        Time->setMaximumSize(QSize(54, 56));
        Time->setFont(font);

        gridLayout->addWidget(Time, 5, 3, 1, 1);

        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        sizePolicy8.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy8);
        label_7->setMinimumSize(QSize(0, 20));
        label_7->setMaximumSize(QSize(45, 40));
        label_7->setFont(font4);

        gridLayout->addWidget(label_7, 5, 4, 1, 1);

        RTScheckBox = new QCheckBox(centralWidget);
        RTScheckBox->setObjectName(QString::fromUtf8("RTScheckBox"));
        sizePolicy7.setHeightForWidth(RTScheckBox->sizePolicy().hasHeightForWidth());
        RTScheckBox->setSizePolicy(sizePolicy7);
        RTScheckBox->setMinimumSize(QSize(0, 20));
        RTScheckBox->setMaximumSize(QSize(16777215, 40));
        RTScheckBox->setFont(font);
        RTScheckBox->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(RTScheckBox, 2, 3, 1, 2);

        HexReccheckBox = new QCheckBox(centralWidget);
        HexReccheckBox->setObjectName(QString::fromUtf8("HexReccheckBox"));
        HexReccheckBox->setEnabled(true);
        sizePolicy9.setHeightForWidth(HexReccheckBox->sizePolicy().hasHeightForWidth());
        HexReccheckBox->setSizePolicy(sizePolicy9);
        HexReccheckBox->setMinimumSize(QSize(0, 20));
        HexReccheckBox->setMaximumSize(QSize(16777215, 40));
        HexReccheckBox->setFont(font4);
        HexReccheckBox->setMouseTracking(true);
        HexReccheckBox->setFocusPolicy(Qt::NoFocus);
        HexReccheckBox->setChecked(false);

        gridLayout->addWidget(HexReccheckBox, 1, 2, 1, 3);

        CRC16checkBox = new QCheckBox(centralWidget);
        CRC16checkBox->setObjectName(QString::fromUtf8("CRC16checkBox"));
        sizePolicy9.setHeightForWidth(CRC16checkBox->sizePolicy().hasHeightForWidth());
        CRC16checkBox->setSizePolicy(sizePolicy9);
        CRC16checkBox->setMaximumSize(QSize(16777215, 40));
        CRC16checkBox->setFont(font);
        CRC16checkBox->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(CRC16checkBox, 4, 2, 1, 3);

        HexSendcheckBox = new QCheckBox(centralWidget);
        HexSendcheckBox->setObjectName(QString::fromUtf8("HexSendcheckBox"));
        sizePolicy9.setHeightForWidth(HexSendcheckBox->sizePolicy().hasHeightForWidth());
        HexSendcheckBox->setSizePolicy(sizePolicy9);
        HexSendcheckBox->setMinimumSize(QSize(0, 20));
        HexSendcheckBox->setMaximumSize(QSize(16777215, 40));
        QFont font7;
        font7.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font7.setPointSize(11);
        font7.setBold(false);
        font7.setWeight(50);
        HexSendcheckBox->setFont(font7);
        HexSendcheckBox->setFocusPolicy(Qt::NoFocus);
        HexSendcheckBox->setCheckable(true);
        HexSendcheckBox->setChecked(false);

        gridLayout->addWidget(HexSendcheckBox, 3, 2, 1, 3);


        verticalLayout->addLayout(gridLayout);

        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        statusBar->setMinimumSize(QSize(0, 25));
        statusBar->setMaximumSize(QSize(16777215, 32));
        statusBar->setFont(font2);
        statusBar->setSizeGripEnabled(true);
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        BaudComboBox->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\344\270\262\345\217\243\345\212\251\346\211\213", nullptr));
#if QT_CONFIG(tooltip)
        lab_Ico->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        lab_Ico->setWhatsThis(QString());
#endif // QT_CONFIG(whatsthis)
        lab_Ico->setText(QString());
        lab_Title->setText(QCoreApplication::translate("MainWindow", "\344\270\262\345\217\243\345\212\251\346\211\213", nullptr));
#if QT_CONFIG(tooltip)
        btnMenu_lock->setToolTip(QCoreApplication::translate("MainWindow", "\345\211\215\347\253\257\346\230\276\347\244\272", nullptr));
#endif // QT_CONFIG(tooltip)
        btnMenu_lock->setText(QString());
#if QT_CONFIG(tooltip)
        btnMenu->setToolTip(QCoreApplication::translate("MainWindow", "\350\217\234\345\215\225", nullptr));
#endif // QT_CONFIG(tooltip)
        btnMenu->setText(QString());
#if QT_CONFIG(tooltip)
        btnMenu_Min->setToolTip(QCoreApplication::translate("MainWindow", "\346\234\200\345\260\217\345\214\226", nullptr));
#endif // QT_CONFIG(tooltip)
        btnMenu_Min->setText(QString());
#if QT_CONFIG(tooltip)
        btnMenu_Max->setToolTip(QCoreApplication::translate("MainWindow", "\346\234\200\345\244\247\345\214\226", nullptr));
#endif // QT_CONFIG(tooltip)
        btnMenu_Max->setText(QString());
#if QT_CONFIG(tooltip)
        btnMenu_Close->setToolTip(QCoreApplication::translate("MainWindow", "\345\205\263\351\227\255", nullptr));
#endif // QT_CONFIG(tooltip)
        btnMenu_Close->setText(QString());
        textBrowser->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Courier 10 Pitch'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New';\"><br /></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\344\270\262\345\217\243\345\217\267", nullptr));
        OpenCom->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200", nullptr));
#if QT_CONFIG(tooltip)
        Indicator->setToolTip(QCoreApplication::translate("MainWindow", "\347\212\266\346\200\201\346\214\207\347\244\272\347\201\257", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        Indicator->setWhatsThis(QString());
#endif // QT_CONFIG(whatsthis)
        Indicator->setText(QString());
        ClearDisplay->setText(QCoreApplication::translate("MainWindow", "\346\270\205\347\251\272\346\230\276\347\244\272", nullptr));
        SaveContent->setText(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230\345\206\205\345\256\271", nullptr));
        Help->setText(QCoreApplication::translate("MainWindow", "\345\270\256\345\212\251\344\277\241\346\201\257", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\346\263\242\347\211\271\347\216\207", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\346\225\260\346\215\256\344\275\215", nullptr));
        DTRcheckBox->setText(QCoreApplication::translate("MainWindow", "DTR", nullptr));
        OpenFile->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\346\226\207\344\273\266", nullptr));
        SendFile->setText(QCoreApplication::translate("MainWindow", "\345\217\221\351\200\201\346\226\207\344\273\266", nullptr));
        CloseFile->setText(QCoreApplication::translate("MainWindow", "\345\205\263\351\227\255\346\226\207\344\273\266", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\346\240\241\351\252\214\344\275\215", nullptr));
#if QT_CONFIG(tooltip)
        textEdit->setToolTip(QCoreApplication::translate("MainWindow", "\345\215\225\345\207\273\351\274\240\346\240\207\344\270\255\351\224\256\346\270\205\347\251\272\357\274\201", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        SendData->setToolTip(QCoreApplication::translate("MainWindow", "\346\214\211Ctrl+Enter\351\224\256\345\217\221\351\200\201\346\225\260\346\215\256\343\200\202", nullptr));
#endif // QT_CONFIG(tooltip)
        SendData->setText(QCoreApplication::translate("MainWindow", "\345\217\221\351\200\201", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>\345\201\234\346\255\242\344\275\215</p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\346\265\201\346\216\247\345\210\266", nullptr));
        TimecheckBox->setText(QCoreApplication::translate("MainWindow", "\345\256\232\346\227\266\345\217\221\351\200\201", nullptr));
#if QT_CONFIG(tooltip)
        Time->setToolTip(QCoreApplication::translate("MainWindow", "\350\257\267\350\276\223\345\205\245\346\255\243\346\225\264\346\225\260!", nullptr));
#endif // QT_CONFIG(tooltip)
        Time->setText(QCoreApplication::translate("MainWindow", "1000", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\346\257\253\347\247\222", nullptr));
        RTScheckBox->setText(QCoreApplication::translate("MainWindow", "RTS", nullptr));
        HexReccheckBox->setText(QCoreApplication::translate("MainWindow", "\345\215\201\345\205\255\350\277\233\345\210\266\346\230\276\347\244\272", nullptr));
        CRC16checkBox->setText(QCoreApplication::translate("MainWindow", "CRC-16\357\274\210MODBUS\357\274\211", nullptr));
        HexSendcheckBox->setText(QCoreApplication::translate("MainWindow", "\345\215\201\345\205\255\350\277\233\345\210\266\345\217\221\351\200\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

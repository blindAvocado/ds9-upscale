/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAbout_ld_analyse;
    QAction *actionOpen_TBC_file;
    QAction *actionExit;
    QAction *actionLine_scope;
    QAction *actionVectorscope;
    QAction *actionVBI;
    QAction *actionNTSC;
    QAction *actionVideo_metadata;
    QAction *actionZoom_1x;
    QAction *actionZoom_2x;
    QAction *actionZoom_3x;
    QAction *toggleAutoResize;
    QAction *actionDropout_analysis;
    QAction *actionSave_frame_as_PNG;
    QAction *actionVITS_Metrics;
    QAction *actionSNR_analysis;
    QAction *actionZoom_In;
    QAction *actionZoom_Out;
    QAction *actionClosed_Captions;
    QAction *actionVideo_parameters;
    QAction *actionChroma_decoder_configuration;
    QAction *actionReload_TBC;
    QAction *actionSave_JSON;
    QAction *actionWhite_SNR_analysis;
    QAction *actionVisible_Dropout_analysis;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QLabel *imageViewerLabel;
    QFrame *mediaControl_frame;
    QVBoxLayout *verticalLayout_3;
    QSlider *posHorizontalSlider;
    QHBoxLayout *horizontalLayout_3;
    QLabel *posNumberSpinBoxLabel;
    QSpinBox *posNumberSpinBox;
    QPushButton *startPushButton;
    QPushButton *previousPushButton;
    QPushButton *nextPushButton;
    QPushButton *endPushButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *zoomInPushButton;
    QPushButton *zoomOutPushButton;
    QPushButton *originalSizePushButton;
    QPushButton *stretchFieldButton;
    QPushButton *mouseModePushButton;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *videoPushButton;
    QPushButton *aspectPushButton;
    QPushButton *dropoutsPushButton;
    QPushButton *sourcesPushButton;
    QPushButton *viewPushButton;
    QPushButton *fieldOrderPushButton;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuWindow;
    QMenu *menuHelp;
    QMenu *menuView;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(991, 721);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(780, 600));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/Graphics/16-analyse.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        MainWindow->setWindowIcon(icon);
        actionAbout_ld_analyse = new QAction(MainWindow);
        actionAbout_ld_analyse->setObjectName("actionAbout_ld_analyse");
        actionOpen_TBC_file = new QAction(MainWindow);
        actionOpen_TBC_file->setObjectName("actionOpen_TBC_file");
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName("actionExit");
        actionLine_scope = new QAction(MainWindow);
        actionLine_scope->setObjectName("actionLine_scope");
        actionVectorscope = new QAction(MainWindow);
        actionVectorscope->setObjectName("actionVectorscope");
        actionVBI = new QAction(MainWindow);
        actionVBI->setObjectName("actionVBI");
        actionNTSC = new QAction(MainWindow);
        actionNTSC->setObjectName("actionNTSC");
        actionVideo_metadata = new QAction(MainWindow);
        actionVideo_metadata->setObjectName("actionVideo_metadata");
        actionZoom_1x = new QAction(MainWindow);
        actionZoom_1x->setObjectName("actionZoom_1x");
        actionZoom_2x = new QAction(MainWindow);
        actionZoom_2x->setObjectName("actionZoom_2x");
        actionZoom_3x = new QAction(MainWindow);
        actionZoom_3x->setObjectName("actionZoom_3x");
        toggleAutoResize = new QAction(MainWindow);
        toggleAutoResize->setObjectName("toggleAutoResize");
        toggleAutoResize->setCheckable(true);
        toggleAutoResize->setChecked(true);
        actionDropout_analysis = new QAction(MainWindow);
        actionDropout_analysis->setObjectName("actionDropout_analysis");
        actionSave_frame_as_PNG = new QAction(MainWindow);
        actionSave_frame_as_PNG->setObjectName("actionSave_frame_as_PNG");
        actionVITS_Metrics = new QAction(MainWindow);
        actionVITS_Metrics->setObjectName("actionVITS_Metrics");
        actionSNR_analysis = new QAction(MainWindow);
        actionSNR_analysis->setObjectName("actionSNR_analysis");
        actionZoom_In = new QAction(MainWindow);
        actionZoom_In->setObjectName("actionZoom_In");
        actionZoom_Out = new QAction(MainWindow);
        actionZoom_Out->setObjectName("actionZoom_Out");
        actionClosed_Captions = new QAction(MainWindow);
        actionClosed_Captions->setObjectName("actionClosed_Captions");
        actionVideo_parameters = new QAction(MainWindow);
        actionVideo_parameters->setObjectName("actionVideo_parameters");
        actionChroma_decoder_configuration = new QAction(MainWindow);
        actionChroma_decoder_configuration->setObjectName("actionChroma_decoder_configuration");
        actionReload_TBC = new QAction(MainWindow);
        actionReload_TBC->setObjectName("actionReload_TBC");
        actionSave_JSON = new QAction(MainWindow);
        actionSave_JSON->setObjectName("actionSave_JSON");
        actionWhite_SNR_analysis = new QAction(MainWindow);
        actionWhite_SNR_analysis->setObjectName("actionWhite_SNR_analysis");
        actionVisible_Dropout_analysis = new QAction(MainWindow);
        actionVisible_Dropout_analysis->setObjectName("actionVisible_Dropout_analysis");
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName("centralWidget");
        sizePolicy.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy);
        centralWidget->setMinimumSize(QSize(450, 400));
        horizontalLayout_2 = new QHBoxLayout(centralWidget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout_2->setContentsMargins(-1, -1, -1, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName("verticalLayout");
        scrollArea = new QScrollArea(centralWidget);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 969, 586));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        imageViewerLabel = new QLabel(scrollAreaWidgetContents);
        imageViewerLabel->setObjectName("imageViewerLabel");
        imageViewerLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(imageViewerLabel);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        mediaControl_frame = new QFrame(centralWidget);
        mediaControl_frame->setObjectName("mediaControl_frame");
        mediaControl_frame->setMaximumSize(QSize(16777215, 80));
        mediaControl_frame->setFrameShape(QFrame::StyledPanel);
        mediaControl_frame->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(mediaControl_frame);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName("verticalLayout_3");
        posHorizontalSlider = new QSlider(mediaControl_frame);
        posHorizontalSlider->setObjectName("posHorizontalSlider");
        posHorizontalSlider->setOrientation(Qt::Horizontal);

        verticalLayout_3->addWidget(posHorizontalSlider);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        posNumberSpinBoxLabel = new QLabel(mediaControl_frame);
        posNumberSpinBoxLabel->setObjectName("posNumberSpinBoxLabel");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(posNumberSpinBoxLabel->sizePolicy().hasHeightForWidth());
        posNumberSpinBoxLabel->setSizePolicy(sizePolicy1);
        posNumberSpinBoxLabel->setMinimumSize(QSize(0, 0));
        posNumberSpinBoxLabel->setMaximumSize(QSize(60, 16777215));
        posNumberSpinBoxLabel->setBaseSize(QSize(60, 0));

        horizontalLayout_3->addWidget(posNumberSpinBoxLabel);

        posNumberSpinBox = new QSpinBox(mediaControl_frame);
        posNumberSpinBox->setObjectName("posNumberSpinBox");
        posNumberSpinBox->setMaximumSize(QSize(120, 50));
        posNumberSpinBox->setMaximum(80000);
        posNumberSpinBox->setValue(79999);

        horizontalLayout_3->addWidget(posNumberSpinBox);

        startPushButton = new QPushButton(mediaControl_frame);
        startPushButton->setObjectName("startPushButton");
        startPushButton->setMinimumSize(QSize(30, 30));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/Graphics/start-frame.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        startPushButton->setIcon(icon1);
        startPushButton->setIconSize(QSize(24, 24));

        horizontalLayout_3->addWidget(startPushButton);

        previousPushButton = new QPushButton(mediaControl_frame);
        previousPushButton->setObjectName("previousPushButton");
        previousPushButton->setMinimumSize(QSize(30, 30));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/Graphics/prev-frame.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        previousPushButton->setIcon(icon2);
        previousPushButton->setIconSize(QSize(24, 24));

        horizontalLayout_3->addWidget(previousPushButton);

        nextPushButton = new QPushButton(mediaControl_frame);
        nextPushButton->setObjectName("nextPushButton");
        nextPushButton->setMinimumSize(QSize(30, 30));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/Graphics/next-frame.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        nextPushButton->setIcon(icon3);
        nextPushButton->setIconSize(QSize(24, 24));

        horizontalLayout_3->addWidget(nextPushButton);

        endPushButton = new QPushButton(mediaControl_frame);
        endPushButton->setObjectName("endPushButton");
        endPushButton->setMinimumSize(QSize(30, 30));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/Graphics/end-frame.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        endPushButton->setIcon(icon4);
        endPushButton->setIconSize(QSize(24, 24));

        horizontalLayout_3->addWidget(endPushButton);

        horizontalSpacer = new QSpacerItem(30, 30, QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        zoomInPushButton = new QPushButton(mediaControl_frame);
        zoomInPushButton->setObjectName("zoomInPushButton");
        zoomInPushButton->setMinimumSize(QSize(30, 30));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icons/Graphics/zoom-in.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        zoomInPushButton->setIcon(icon5);
        zoomInPushButton->setIconSize(QSize(24, 24));

        horizontalLayout_3->addWidget(zoomInPushButton);

        zoomOutPushButton = new QPushButton(mediaControl_frame);
        zoomOutPushButton->setObjectName("zoomOutPushButton");
        zoomOutPushButton->setMinimumSize(QSize(30, 30));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/icons/Graphics/zoom-out.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        zoomOutPushButton->setIcon(icon6);
        zoomOutPushButton->setIconSize(QSize(24, 24));

        horizontalLayout_3->addWidget(zoomOutPushButton);

        originalSizePushButton = new QPushButton(mediaControl_frame);
        originalSizePushButton->setObjectName("originalSizePushButton");
        originalSizePushButton->setMinimumSize(QSize(30, 30));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/icons/Graphics/zoom-original.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        originalSizePushButton->setIcon(icon7);
        originalSizePushButton->setIconSize(QSize(24, 24));

        horizontalLayout_3->addWidget(originalSizePushButton);

        stretchFieldButton = new QPushButton(mediaControl_frame);
        stretchFieldButton->setObjectName("stretchFieldButton");
        stretchFieldButton->setMinimumSize(QSize(30, 30));
        stretchFieldButton->setBaseSize(QSize(30, 30));

        horizontalLayout_3->addWidget(stretchFieldButton);

        mouseModePushButton = new QPushButton(mediaControl_frame);
        mouseModePushButton->setObjectName("mouseModePushButton");
        mouseModePushButton->setMinimumSize(QSize(30, 30));
        mouseModePushButton->setMaximumSize(QSize(30, 30));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/icons/Graphics/oscilloscope-target.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        mouseModePushButton->setIcon(icon8);
        mouseModePushButton->setIconSize(QSize(24, 24));
        mouseModePushButton->setCheckable(true);
        mouseModePushButton->setChecked(false);

        horizontalLayout_3->addWidget(mouseModePushButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        videoPushButton = new QPushButton(mediaControl_frame);
        videoPushButton->setObjectName("videoPushButton");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(videoPushButton->sizePolicy().hasHeightForWidth());
        videoPushButton->setSizePolicy(sizePolicy2);
        videoPushButton->setMinimumSize(QSize(50, 0));
        videoPushButton->setMaximumSize(QSize(80, 16777215));
        videoPushButton->setBaseSize(QSize(0, 0));

        horizontalLayout_3->addWidget(videoPushButton);

        aspectPushButton = new QPushButton(mediaControl_frame);
        aspectPushButton->setObjectName("aspectPushButton");
        sizePolicy2.setHeightForWidth(aspectPushButton->sizePolicy().hasHeightForWidth());
        aspectPushButton->setSizePolicy(sizePolicy2);
        aspectPushButton->setMinimumSize(QSize(48, 0));
        aspectPushButton->setMaximumSize(QSize(70, 16777215));
        aspectPushButton->setBaseSize(QSize(0, 0));

        horizontalLayout_3->addWidget(aspectPushButton);

        dropoutsPushButton = new QPushButton(mediaControl_frame);
        dropoutsPushButton->setObjectName("dropoutsPushButton");
        sizePolicy2.setHeightForWidth(dropoutsPushButton->sizePolicy().hasHeightForWidth());
        dropoutsPushButton->setSizePolicy(sizePolicy2);
        dropoutsPushButton->setMinimumSize(QSize(0, 0));
        dropoutsPushButton->setMaximumSize(QSize(115, 16777215));
        dropoutsPushButton->setBaseSize(QSize(0, 0));

        horizontalLayout_3->addWidget(dropoutsPushButton);

        sourcesPushButton = new QPushButton(mediaControl_frame);
        sourcesPushButton->setObjectName("sourcesPushButton");
        sizePolicy2.setHeightForWidth(sourcesPushButton->sizePolicy().hasHeightForWidth());
        sourcesPushButton->setSizePolicy(sizePolicy2);
        sourcesPushButton->setMinimumSize(QSize(0, 0));
        sourcesPushButton->setMaximumSize(QSize(110, 16777215));
        sourcesPushButton->setBaseSize(QSize(0, 0));

        horizontalLayout_3->addWidget(sourcesPushButton);

        viewPushButton = new QPushButton(mediaControl_frame);
        viewPushButton->setObjectName("viewPushButton");
        sizePolicy2.setHeightForWidth(viewPushButton->sizePolicy().hasHeightForWidth());
        viewPushButton->setSizePolicy(sizePolicy2);
        viewPushButton->setMinimumSize(QSize(0, 0));
        viewPushButton->setMaximumSize(QSize(100, 16777215));
        viewPushButton->setBaseSize(QSize(0, 0));

        horizontalLayout_3->addWidget(viewPushButton);

        fieldOrderPushButton = new QPushButton(mediaControl_frame);
        fieldOrderPushButton->setObjectName("fieldOrderPushButton");
        sizePolicy2.setHeightForWidth(fieldOrderPushButton->sizePolicy().hasHeightForWidth());
        fieldOrderPushButton->setSizePolicy(sizePolicy2);
        fieldOrderPushButton->setMinimumSize(QSize(0, 0));
        fieldOrderPushButton->setMaximumSize(QSize(145, 16777215));
        fieldOrderPushButton->setBaseSize(QSize(0, 0));

        horizontalLayout_3->addWidget(fieldOrderPushButton);


        verticalLayout_3->addLayout(horizontalLayout_3);


        verticalLayout->addWidget(mediaControl_frame);


        horizontalLayout_2->addLayout(verticalLayout);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 991, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName("menuFile");
        menuWindow = new QMenu(menuBar);
        menuWindow->setObjectName("menuWindow");
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName("menuHelp");
        menuView = new QMenu(menuBar);
        menuView->setObjectName("menuView");
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName("statusBar");
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuView->menuAction());
        menuBar->addAction(menuWindow->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionOpen_TBC_file);
        menuFile->addAction(actionReload_TBC);
        menuFile->addAction(actionSave_JSON);
        menuFile->addSeparator();
        menuFile->addAction(actionSave_frame_as_PNG);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuWindow->addAction(actionDropout_analysis);
        menuWindow->addAction(actionVisible_Dropout_analysis);
        menuWindow->addAction(actionSNR_analysis);
        menuWindow->addAction(actionWhite_SNR_analysis);
        menuWindow->addAction(actionVBI);
        menuWindow->addAction(actionLine_scope);
        menuWindow->addAction(actionVectorscope);
        menuWindow->addAction(actionClosed_Captions);
        menuWindow->addSeparator();
        menuWindow->addAction(actionVideo_parameters);
        menuWindow->addAction(actionChroma_decoder_configuration);
        menuHelp->addAction(actionAbout_ld_analyse);
        menuView->addAction(actionZoom_In);
        menuView->addAction(actionZoom_Out);
        menuView->addAction(actionZoom_1x);
        menuView->addAction(actionZoom_2x);
        menuView->addAction(actionZoom_3x);
        menuView->addAction(toggleAutoResize);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "ld-analyse", nullptr));
        actionAbout_ld_analyse->setText(QCoreApplication::translate("MainWindow", "About ld-analyse...", nullptr));
        actionOpen_TBC_file->setText(QCoreApplication::translate("MainWindow", "Open TBC file...", nullptr));
#if QT_CONFIG(shortcut)
        actionOpen_TBC_file->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
#if QT_CONFIG(shortcut)
        actionExit->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+W", nullptr));
#endif // QT_CONFIG(shortcut)
        actionLine_scope->setText(QCoreApplication::translate("MainWindow", "Line scope...", nullptr));
#if QT_CONFIG(shortcut)
        actionLine_scope->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+L", nullptr));
#endif // QT_CONFIG(shortcut)
        actionVectorscope->setText(QCoreApplication::translate("MainWindow", "Vectorscope...", nullptr));
#if QT_CONFIG(shortcut)
        actionVectorscope->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+U", nullptr));
#endif // QT_CONFIG(shortcut)
        actionVBI->setText(QCoreApplication::translate("MainWindow", "VBI...", nullptr));
#if QT_CONFIG(shortcut)
        actionVBI->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+I", nullptr));
#endif // QT_CONFIG(shortcut)
        actionNTSC->setText(QCoreApplication::translate("MainWindow", "NTSC...", nullptr));
#if QT_CONFIG(shortcut)
        actionNTSC->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actionVideo_metadata->setText(QCoreApplication::translate("MainWindow", "Video metadata...", nullptr));
#if QT_CONFIG(shortcut)
        actionVideo_metadata->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+M", nullptr));
#endif // QT_CONFIG(shortcut)
        actionZoom_1x->setText(QCoreApplication::translate("MainWindow", "Zoom to original size", nullptr));
#if QT_CONFIG(shortcut)
        actionZoom_1x->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+1", nullptr));
#endif // QT_CONFIG(shortcut)
        actionZoom_2x->setText(QCoreApplication::translate("MainWindow", "Zoom to 2x size", nullptr));
#if QT_CONFIG(shortcut)
        actionZoom_2x->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+2", nullptr));
#endif // QT_CONFIG(shortcut)
        actionZoom_3x->setText(QCoreApplication::translate("MainWindow", "Zoom to 3x size", nullptr));
#if QT_CONFIG(shortcut)
        actionZoom_3x->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+3", nullptr));
#endif // QT_CONFIG(shortcut)
        toggleAutoResize->setText(QCoreApplication::translate("MainWindow", "Toggle Auto Resize", nullptr));
        actionDropout_analysis->setText(QCoreApplication::translate("MainWindow", "Dropout analysis...", nullptr));
#if QT_CONFIG(shortcut)
        actionDropout_analysis->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+D", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSave_frame_as_PNG->setText(QCoreApplication::translate("MainWindow", "Save frame as PNG...", nullptr));
#if QT_CONFIG(shortcut)
        actionSave_frame_as_PNG->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+F", nullptr));
#endif // QT_CONFIG(shortcut)
        actionVITS_Metrics->setText(QCoreApplication::translate("MainWindow", "VITS Metrics...", nullptr));
#if QT_CONFIG(shortcut)
        actionVITS_Metrics->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+E", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSNR_analysis->setText(QCoreApplication::translate("MainWindow", "Black SNR analysis...", nullptr));
#if QT_CONFIG(shortcut)
        actionSNR_analysis->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+R", nullptr));
#endif // QT_CONFIG(shortcut)
        actionZoom_In->setText(QCoreApplication::translate("MainWindow", "Zoom In", nullptr));
#if QT_CONFIG(shortcut)
        actionZoom_In->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl++", nullptr));
#endif // QT_CONFIG(shortcut)
        actionZoom_Out->setText(QCoreApplication::translate("MainWindow", "Zoom Out", nullptr));
#if QT_CONFIG(shortcut)
        actionZoom_Out->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+-", nullptr));
#endif // QT_CONFIG(shortcut)
        actionClosed_Captions->setText(QCoreApplication::translate("MainWindow", "Closed Captions...", nullptr));
        actionVideo_parameters->setText(QCoreApplication::translate("MainWindow", "Video parameters...", nullptr));
#if QT_CONFIG(shortcut)
        actionVideo_parameters->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+P", nullptr));
#endif // QT_CONFIG(shortcut)
        actionChroma_decoder_configuration->setText(QCoreApplication::translate("MainWindow", "Chroma decoder configuration...", nullptr));
#if QT_CONFIG(shortcut)
        actionChroma_decoder_configuration->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+K", nullptr));
#endif // QT_CONFIG(shortcut)
        actionReload_TBC->setText(QCoreApplication::translate("MainWindow", "Reload TBC", nullptr));
#if QT_CONFIG(shortcut)
        actionReload_TBC->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+A", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSave_JSON->setText(QCoreApplication::translate("MainWindow", "Save JSON", nullptr));
#if QT_CONFIG(shortcut)
        actionSave_JSON->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionWhite_SNR_analysis->setText(QCoreApplication::translate("MainWindow", "White SNR analysis...", nullptr));
#if QT_CONFIG(shortcut)
        actionWhite_SNR_analysis->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+T", nullptr));
#endif // QT_CONFIG(shortcut)
        actionVisible_Dropout_analysis->setText(QCoreApplication::translate("MainWindow", "Visible Dropout analysis...", nullptr));
        imageViewerLabel->setText(QCoreApplication::translate("MainWindow", "Image goes here", nullptr));
        posNumberSpinBoxLabel->setText(QCoreApplication::translate("MainWindow", "Frame #:", nullptr));
#if QT_CONFIG(tooltip)
        posNumberSpinBox->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Enter a frame number and press &lt;Enter&gt; to go to a frame</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        startPushButton->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Skip to start of chapter</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        startPushButton->setText(QString());
#if QT_CONFIG(tooltip)
        previousPushButton->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Previous frame</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        previousPushButton->setText(QString());
#if QT_CONFIG(tooltip)
        nextPushButton->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Next frame</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        nextPushButton->setText(QString());
#if QT_CONFIG(tooltip)
        endPushButton->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Skip to end of chapter</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        endPushButton->setText(QString());
#if QT_CONFIG(tooltip)
        zoomInPushButton->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Zoom in</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        zoomInPushButton->setText(QString());
#if QT_CONFIG(tooltip)
        zoomOutPushButton->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Zoom out</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        zoomOutPushButton->setText(QString());
#if QT_CONFIG(tooltip)
        originalSizePushButton->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Zoom to original size</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        originalSizePushButton->setText(QString());
#if QT_CONFIG(tooltip)
        stretchFieldButton->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Stretch field to frame height</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        stretchFieldButton->setText(QCoreApplication::translate("MainWindow", "2:1", nullptr));
#if QT_CONFIG(tooltip)
        mouseModePushButton->setToolTip(QCoreApplication::translate("MainWindow", "Enables mouse button to show scan line oscilloscope on click", nullptr));
#endif // QT_CONFIG(tooltip)
        mouseModePushButton->setText(QString());
#if QT_CONFIG(tooltip)
        videoPushButton->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Toggle source/chroma decoder view</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        videoPushButton->setText(QCoreApplication::translate("MainWindow", "Chroma", nullptr));
        aspectPushButton->setText(QCoreApplication::translate("MainWindow", "DAR 1:1", nullptr));
#if QT_CONFIG(tooltip)
        dropoutsPushButton->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Toggle show/hide dropout highlighting</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        dropoutsPushButton->setText(QCoreApplication::translate("MainWindow", "Show Dropouts", nullptr));
#if QT_CONFIG(tooltip)
        sourcesPushButton->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Select between multiple sources</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        sourcesPushButton->setText(QCoreApplication::translate("MainWindow", "Y+C Sources", nullptr));
#if QT_CONFIG(tooltip)
        viewPushButton->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Toggle views</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        viewPushButton->setText(QCoreApplication::translate("MainWindow", "Field View", nullptr));
#if QT_CONFIG(tooltip)
        fieldOrderPushButton->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Toggle normal/reverse field order</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        fieldOrderPushButton->setText(QCoreApplication::translate("MainWindow", "Reverse Field Order", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuWindow->setTitle(QCoreApplication::translate("MainWindow", "Window", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("MainWindow", "Help", nullptr));
        menuView->setTitle(QCoreApplication::translate("MainWindow", "View", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

# Add more folders to ship with the application, here
folder_01.source = qml/CuteMediaScraper
folder_01.target = qml
DEPLOYMENTFOLDERS = folder_01

# Additional import path used to resolve QML modules in Creator's code model
QML_IMPORT_PATH =

# If your application uses the Qt Mobility libraries, uncomment the following
# lines and add the respective components to the MOBILITY variable.
# CONFIG += mobility
# MOBILITY +=

# The .cpp file which was generated for your project. Feel free to hack it.
SOURCES += main.cpp \
    controller/TypeMedia.cpp \
    controller/Format.cpp \
    controller/RessourceMusic.cpp \
    controller/RessourceFilm.cpp \
    controller/RessourceEpisode.cpp \
    controller/FileMusic.cpp \
    controller/FileMedia.cpp \
    controller/FileFilm.cpp \
    controller/FileEpisode.cpp

# Installation path
# target.path =

# Please do not modify the following two lines. Required for deployment.
include(qtquick2applicationviewer/qtquick2applicationviewer.pri)
qtcAddDeployment()

HEADERS += \
    controller/Format.h \
    controller/RessourceFilm.h \
    controller/RessourceEpisode.h \
    controller/FilmFile.h \
    controller/EpisodeFile.h \
    controller/FileMusic.h \
    controller/FileFilm.h \
    controller/FileEpisode.h \
    controller/FileMedia.h \
    controller/TypeMedia.h \
    controller/RessourceMusic.h

CONFIG -= X86_64

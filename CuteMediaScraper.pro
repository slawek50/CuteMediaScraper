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
    model/TypeMedia.cpp \
    model/RessourceMusic.cpp \
    model/RessourceFilm.cpp \
    model/RessourceEpisode.cpp \
    model/Format.cpp \
    model/FileMusic.cpp \
    model/FileMedia.cpp \
    model/FileFilm.cpp \
    model/FileEpisode.cpp \
    controller/FileCtrl.cpp \
    controller/ListFilesCtrl.cpp \
    parserAPI/IMDBParser.cpp \
    parserAPI/JSonFilmParser.cpp

# Installation path
# target.path =

# Please do not modify the following two lines. Required for deployment.
include(qtquick2applicationviewer/qtquick2applicationviewer.pri)
qtcAddDeployment()

HEADERS += \
    model/TypeMedia.h \
    model/RessourceMusic.h \
    model/RessourceFilm.h \
    model/RessourceEpisode.h \
    model/Format.h \
    model/FileMusic.h \
    model/FileMedia.h \
    model/FileFilm.h \
    model/FileEpisode.h \
    controller/FileCtrl.h \
    controller/ListFilesCtrl.h \
    parserAPI/IMDBParser.h \
    parserAPI/IParserAPI.h \
    model/IRessource.h \
    parserAPI/JSonFilmParser.h

CONFIG -= X86_64

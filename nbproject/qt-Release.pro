# This file is generated automatically. Do not edit.
# Use project properties -> Build -> Qt -> Expert -> Custom Definitions.
TEMPLATE = app
DESTDIR = dist/Release/GNU-Linux
TARGET = Gameosos
VERSION = 1.0.0
CONFIG -= debug_and_release app_bundle lib_bundle
CONFIG += release 
PKGCONFIG +=
QT = core gui widgets
SOURCES += camera/camera.cpp connecter/connector.cpp gui/gui.cpp main.cpp pos_system/object_detect/obj_detect.cpp pos_system/pos_sys.cpp settings/settings.cpp
HEADERS += camera/camera.h connecter/connector.h gui/gui.h pos_system/object_detect/obj_detect.h pos_system/pos_sys.h settings/settings.h
FORMS += gui/ui/calibration_coordinates.ui gui/ui/camera_settings.ui gui/ui/gui.ui gui/ui/object_params.ui
RESOURCES +=
TRANSLATIONS +=
OBJECTS_DIR = build/Release/GNU-Linux
MOC_DIR = 
RCC_DIR = 
UI_DIR = 
QMAKE_CC = gcc
QMAKE_CXX = g++
DEFINES += 
INCLUDEPATH += 
LIBS += 

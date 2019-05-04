# This file is generated automatically. Do not edit.
# Use project properties -> Build -> Qt -> Expert -> Custom Definitions.
TEMPLATE = app
DESTDIR = bin
TARGET = Gameosos
VERSION = 1.0.0
CONFIG -= debug_and_release app_bundle lib_bundle
CONFIG += debug 
PKGCONFIG +=
QT = core gui widgets
SOURCES += camera/camera.cpp connecter/connector.cpp gui/gui.cpp main.cpp pos_system/object_detect/obj_detect.cpp pos_system/pos_sys.cpp settings/settings.cpp
HEADERS += camera/camera.h connecter/connector.h gui/gui.h pos_system/object_detect/obj_detect.h pos_system/pos_sys.h settings/settings.h
FORMS += gui/ui/calibration_coordinates.ui gui/ui/camera_settings.ui gui/ui/gui.ui gui/ui/object_params.ui
RESOURCES +=
TRANSLATIONS +=
OBJECTS_DIR = build/Debug/GNU-Linux
MOC_DIR = build
RCC_DIR = build
UI_DIR = gui
QMAKE_CC = gcc -fopenmp
QMAKE_CXX = g++ -fopenmp
DEFINES += 
INCLUDEPATH += 
LIBS += -fopenmp -lopencv_shape -lopencv_stitching -lopencv_superres -lopencv_videostab -lopencv_aruco -lopencv_bgsegm -lopencv_bioinspired -lopencv_ccalib -lopencv_datasets -lopencv_dpm -lopencv_face -lopencv_freetype -lopencv_fuzzy -lopencv_hdf -lopencv_line_descriptor -lopencv_optflow -lopencv_video -lopencv_plot -lopencv_reg -lopencv_saliency -lopencv_stereo -lopencv_structured_light -lopencv_phase_unwrapping -lopencv_rgbd -lopencv_viz -lopencv_surface_matching -lopencv_text -lopencv_ximgproc -lopencv_calib3d -lopencv_features2d -lopencv_flann -lopencv_xobjdetect -lopencv_objdetect -lopencv_ml -lopencv_xphoto -lopencv_highgui -lopencv_videoio -lopencv_imgcodecs -lopencv_photo -lopencv_imgproc -lopencv_core -lyaml-cpp  
equals(QT_MAJOR_VERSION, 4) {
QMAKE_CXXFLAGS += -std=c++11
}
equals(QT_MAJOR_VERSION, 5) {
CONFIG += c++11
}

TARGET = aips

GUI_DIR       = gui
OBJ_TRACK_DIR = object_track
BIN_DIR       = bin
OBJ_DIR       = obj
MOC_DIR       = moc_files
UI_DIR	      = ui
CONNECT_DIR   = connecter
SETTINGS_DIR  = settings
CAM_DIR       = camera

MOC_SRC  = $(OBJ_TRACK_DIR)/object_track.h $(GUI_DIR)/gui.h $(CONNECT_DIR)/connector.h
CPP_SRC  = $(notdir $(MOC_SRC:.h=.moc.cpp))
CPP_SRC +=  $(CONNECT_DIR)/connector.cpp $(CAM_DIR)/camera.cpp $(OBJ_TRACK_DIR)/object_track.cpp $(GUI_DIR)/gui.cpp main.cpp

OBJ_FILES = $(addprefix $(OBJ_DIR)/, $(notdir $(CPP_SRC:.cpp=.o)))
	     
CPP_INCLUDE_FILES = -I/usr/local/include/opencv -I/usr/local/include -I/usr/include/qt4 -I/usr/include/qt4/QtGui -I/usr/include/qt4/QtCore -I/usr/include
CPP_LIBS = -L/usr/local/lib -lopencv_shape -lopencv_stitching -lopencv_objdetect -lopencv_superres -lopencv_videostab -lopencv_calib3d -lopencv_features2d -lopencv_highgui -lopencv_videoio -lopencv_imgcodecs -lopencv_video -lopencv_photo -lopencv_ml -lopencv_imgproc -lopencv_flann -lopencv_core -lopencv_hal -L/usr/lib/x86_64-linux-gnu -lQtCore -lQtGui
CPP_FLG = -std=c++11

all: dir ui moc $(TARGET)
	
dir: 
	if !(test -d $(BIN_DIR)); then mkdir $(BIN_DIR); fi
	if !(test -d $(OBJ_DIR)); then mkdir $(OBJ_DIR); fi
	if !(test -d $(MOC_DIR)); then mkdir $(MOC_DIR); fi

$(TARGET): $(OBJ_FILES)
	g++ -g $(OBJ_FILES) -o $(BIN_DIR)/$(TARGET) $(CPP_LIBS) -fopenmp
	
$(OBJ_DIR)/%.o: %.cpp
	g++ -g -c $< -o $@ $(CPP_FLG) $(CPP_INCLUDE_FILES) -fopenmp

$(OBJ_DIR)/%.o: $(OBJ_TRACK_DIR)/%.cpp
	g++ -g -c $< -o $@ $(CPP_FLG) $(CPP_INCLUDE_FILES) -fopenmp

$(OBJ_DIR)/%.o: $(CAM_DIR)/%.cpp
	g++ -g -c $< -o $@ $(CPP_FLG) $(CPP_INCLUDE_FILES) -fopenmp

$(OBJ_DIR)/%.o: $(GUI_DIR)/%.cpp
	g++ -g -c $< -o $@ $(CPP_FLG) $(CPP_INCLUDE_FILES) -fopenmp

$(OBJ_DIR)/%.o: $(CONNECT_DIR)/%.cpp
	g++ -g -c $< -o $@ $(CPP_FLG) $(CPP_INCLUDE_FILES) -fopenmp

$(OBJ_DIR)/%.o: $(MOC_DIR)/%.cpp
	g++ -g -c $< -o $@ $(CPP_FLG) $(CPP_INCLUDE_FILES) -fopenmp

$(OBJ_DIR)/%.o: $(SETTINGS_DIR)/%.cpp
	g++ -g -c $< -o $@ $(CPP_FLG) $(CPP_INCLUDE_FILES) -fopenmp

moc:
	moc-qt4  $(GUI_DIR)/gui.h -o $(MOC_DIR)/gui.moc.cpp
	moc-qt4  $(CONNECT_DIR)/connector.h -o $(MOC_DIR)/connector.moc.cpp
	moc-qt4  $(OBJ_TRACK_DIR)/object_track.h -o $(MOC_DIR)/object_track.moc.cpp
	
ui:
	uic-qt4 $(GUI_DIR)/$(UI_DIR)/gui.ui -o $(GUI_DIR)/$(UI_DIR)/gui_ui.h
	uic-qt4 $(GUI_DIR)/$(UI_DIR)/object_params.ui -o $(GUI_DIR)/$(UI_DIR)/object_params_ui.h
	uic-qt4 $(GUI_DIR)/$(UI_DIR)/camera_settings.ui -o $(GUI_DIR)/$(UI_DIR)/camera_settings_ui.h
	
clean:
	rm -rf $(OBJ_DIR)/*.o $(BIN_DIR)/$(TARGET)

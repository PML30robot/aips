TARGET = aips

GUI_DIR       = gui
OBJ_TRACK_DIR = obj_track
BIN_DIR       = bin
OBJ_DIR       = obj

CPP_SRC = main.cpp

OBJ_FILES = $(addprefix $(OBJ_DIR)/, $(notdir $(CPP_SRC:.cpp=.o)))

all: dir $(TARGET)
	
dir: 
	if !(test -d $(BIN_DIR)); then mkdir $(BIN_DIR); fi
	if !(test -d $(OBJ_DIR)); then mkdir $(OBJ_DIR); fi

aips: $(OBJ_FILES)
	g++ $(OBJ_FILES) -o $(BIN_DIR)/$(TARGET)
	
$(OBJ_DIR)/%.o: %.cpp
	g++ -c $< -o $@
	
clean:
	rm -rf $(OBJ_DIR)/*.o $(BIN_DIR)/$(TARGET)

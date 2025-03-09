# Compiler and flags
CXX      := g++
CXXFLAGS := -Wall -Wextra -Werror -std=c++11

# Directories
SRC_DIR  := src
OBJ_DIR  := obj

# Explicitly list your source files (add all .cpp files here)
SRCS     := $(SRC_DIR)/ClapTrap.cpp \
            $(SRC_DIR)/main.cpp 

# Generate object file paths (e.g., obj/Contact.o)
OBJS     := $(patsubst $(SRC_DIR)/%.cpp,$(OBJ_DIR)/%.o,$(SRCS))

# Executable
TARGET   := ClapTrap

# Default target
all: $(TARGET)

# Link object files into executable
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $@

# Compile .cpp to .o and create obj/ directory if needed
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp | $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Create obj directory if it doesn't exist
$(OBJ_DIR):
	mkdir -p $@

# Clean up
clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(TARGET)

re: fclean all

# Phony targets (not files)
.PHONY: all clean fclean re
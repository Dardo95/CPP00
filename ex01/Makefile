NAME     = phonebook
CXX      = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC      = main.cpp Contact.cpp PhoneBook.cpp
OBJ_DIR  = build
OBJ      = $(addprefix $(OBJ_DIR)/, $(SRC:.cpp=.o))

# Detecta Windows vs. Unix
ifeq ($(OS),Windows_NT)
  EXE    := $(NAME).exe
  RM     := del /Q
  RMDIR  := rmdir /S /Q
  MKDIR  := if not exist $(OBJ_DIR) mkdir $(OBJ_DIR)
else
  EXE    := $(NAME)
  RM     := rm -f
  RMDIR  := rm -rf
  MKDIR  := mkdir -p $(OBJ_DIR)
endif

all: $(OBJ_DIR) $(EXE)

$(OBJ_DIR):
	$(MKDIR)

$(EXE): $(OBJ)
	$(CXX) $(CXXFLAGS) $^ -o $@

$(OBJ_DIR)/%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
ifeq ($(OS),Windows_NT)
	-if exist $(OBJ_DIR) $(RM) $(OBJ_DIR)\*.o
else
	-$(RM) $(OBJ)
endif

fclean: clean
ifeq ($(OS),Windows_NT)
	-if exist $(EXE) $(RM) $(EXE)
	-if exist $(OBJ_DIR) $(RMDIR) $(OBJ_DIR)
else
	-$(RM) $(EXE)
	-$(RMDIR) $(OBJ_DIR)
endif

re: fclean all

.PHONY: all clean fclean re

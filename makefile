SRC_DIR  := ./source
TEST_DIR := ./tests
UNITY_DIR := ./Unity
INC_DIR := ./include
SOURCES  := $(wildcard $(SRC_DIR)/*.c) 
TESTS    := $(wildcard $(TEST_DIR)/*.c)
UNITY    := $(wildcard $(UNITY_DIR)/*.c)
EXE_NAME := sumtest
INCLUDES := -I$(UNITY_DIR) -I$(INC_DIR)

all:
	gcc -std=c11 $(SOURCES) $(TESTS) $(UNITY) $(INCLUDES) -o $(EXE_NAME)

test:
	chmod +x $(EXE_NAME)
	./$(EXE_NAME)


clean:
	$(RM) $(EXE_NAME)


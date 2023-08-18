EXE = unda
DIST_PATH = /usr/local/bin
SRCS = $(EXE).cpp

all:
	@echo "Compiling..."
	@make -C src all
	@$(CXX) -o $(EXE) $(SRCS)

install:
	@echo "Installing..."
	@make -C src install
	@mv $(EXE) $(DIST_PATH)

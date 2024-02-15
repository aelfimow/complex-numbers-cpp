CXXFLAGS += -O2
CXXFLAGS += -Wall
CXXFLAGS += -Wextra
#CXXFLAGS += -pedantic
CXXFLAGS += -Weffc++
CXXFLAGS += -std=c++23
CXXFLAGS += -Werror
CXXFLAGS += --all-warnings
CXXFLAGS += --extra-warnings
CXXFLAGS += -Wconversion
CXXFLAGS += -Wconversion-null
CXXFLAGS += -Wdiv-by-zero
CXXFLAGS += -Wfloat-conversion
CXXFLAGS += -Wfloat-equal
CXXFLAGS += -fext-numeric-literals

LDFLAGS = -lquadmath

FILES = $(wildcard *.cpp)
FILES_OBJ = $(FILES:.cpp=.o)

all:
	${CXX} ${FILES_OBJ} -o main.exe ${LDFLAGS}

deps:
	${CXX} -MM ${FILES} > Makefile.files

include Makefile.files

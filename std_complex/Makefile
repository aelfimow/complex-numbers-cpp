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

all:
	${CXX} -c Helper.cpp -o Helper.o ${CXXFLAGS}
	${CXX} -c Beispiel_5_1.cpp -o Beispiel_5_1.o ${CXXFLAGS}
	${CXX} -c main.cpp -o main.o ${CXXFLAGS}
	${CXX} Beispiel_5_1.o main.o -o main.exe ${LDFLAGS}

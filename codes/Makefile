CXX = g++
CXXFLAGS = -std=c++14 -g -Wall -MMD -Werror=vla
SOURCES=$(wildcard *.cc)
OBJECTS=${SOURCES:.cc=.o}
DEPENDS=${OBJECTS:.o=.d}
EXEC = main

${EXEC}: ${OBJECTS}
	${CXX} ${CXXFLAGS} ${OBJECTS} -o ${EXEC}

-include ${DEPENDS}

.PHONY: clean

clean:
	rm ${OBJECTS} ${EXEC} ${DEPENDS}

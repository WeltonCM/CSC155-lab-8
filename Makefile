CXX = g++

CXXFLAGS = -std=c++11 -Wall

SOURCES = Lab8_Welton.cpp Mailbox.cpp Message.cpp ccc_time.cpp

OBJECTS = $(SOURCES:.cpp=.o)

EXECUTABLE = lab8_welton

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CXX) $(OBJECTS) -o $(EXECUTABLE)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean: 
	rm -f $(OBJECTS) $(EXECUTABLE)

run: $(EXECUTABLE)
	./$(EXECUTABLE)
CXX = clang++ 
	
CXXFLAGS = -lboost_system -std=c++11
	
CFLAGS = -c
	
SOURCES = simpleServer.cpp
	
TARGET = simpleServer
	
OBJS = $(SOURCE:.cpp=.o)
	
BOOST_INCLUDE = /home/neo/coding/github/boost-learn/boost_install/include/boost-1_64
BOOST_LIB = /home/neo/coding/github/boost-learn/boost_install/lib

	
	
LIBS = -L$(BOOST_LIB)
INCLUDES = -I$(BOOST_INCLUDE)
	
$(TARGET):	$(OBJS)
	$(CXX)  -o $(TARGET) $(SOURCES) $(OBJS) $(INCLUDES)  $(LIBS) $(CXXFLAGS)
	
.cpp.o:
	$(CXX) $(CFLAGS) $<$(CXXFLAGS) -o $@
	
all:    $(TARGET)
	
clean:
	rm -f $(OBJS) $(TARGET)
	
	
	

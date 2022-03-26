CXX = clang++
override CXXFLAGS += -g -Wno-everything

HEADERS = $(shell find . -name '*.h')
SRCS = $(shell find . -name '.ccls-cache' -type d -prune -o -type f -name '*.cpp' -print)
OBJS = $(patsubst %.cpp, %.o, $(SRCS))

main: $(OBJS) $(HEADERS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o main

clean:
	rm -f $(OBJS) main
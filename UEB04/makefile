makefile:
DEL_LIST = *.o *.exe *stackdump

all: project_ueb_04 doc
clean:
	rm -f $(DEL_LIST)
build: project_ueb_04
	g++ -o ueb04 *.o
doc: 
	/Applications/Doxygen/doxygen doxyfile
rebuild: clean all
project_ueb_04: 
	g++ -c -Wall -pedantic *.cpp

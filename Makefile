all:	clean libboostr_c main

main:	main.o
	g++ -L$(HOME)/boost/lib -g -Wall -static -pthread -fpermissive -fPIC main.o boostr_c.o  -o main   \
		-lboost_system \
		-lboost_regex

main.o:	main.cpp
	g++ -g -Wall -std=c++11  -c $<

libboostr_c:	boostr_c.o
	g++ -L$(HOME)/boost/lib -g -Wall -fPIC -shared -o $@.so boostr_c.o \
		-lboost_system \
		-lboost_regex

boostr_c.o:	boostr_c.c
	g++ -L$(HOME)/boost/lib -I $(HOME)/boost/include -g \
		-lboost_regex -lboost_system -Wall -fPIC -std=c++11 -static -c $<

clean:
	rm -f *.o *.so boostr_main main

Merge_Sort: lib/Merge_Sort.o lib/Main_Test.o
	g++ lib/Merge_Sort.o lib/Main_Test.o -o bin/Merge_Sort.exe

Bubble_Sort: lib/Bubble_Sort.o lib/Main_Test.o
	g++ lib/Bubble_Sort.o lib/Main_Test.o -o bin/Bubble_Sort.exe 

lib/Merge_Sort.o: src/Merge_Sort.cpp
	g++ -c src/Merge_Sort.cpp -o lib/Merge_Sort.o

lib/Bubble_Sort.o: src/Bubble_Sort.cpp 
	g++ -c src/Bubble_Sort.cpp -o lib/Bubble_Sort.o

lib/Main_Test.o: src/Main_Test.cpp
	g++ -c src/Main_Test.cpp -o lib/Main_Test.o

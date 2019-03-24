transform:sudoku.o transform.o 
	g++ -o transform transform.o sudoku.o

sudoku.o:sudoku.cpp sudoku.h
	g++ -c sudoku.cpp

transform.o:transform.cpp sudoku.h
	g++ -c transform.cpp

clean:
	rm transform *.o
SFMLFLAGS = -lsfml-graphics -lsfml-window -lsfml-system
CC = g++

game: gameboard cell
	$(CC) -c main.cpp
	$(CC) main.o game.o cell.o -o sfmal-app $(SFMLFLAGS)

gameboard:
	$(CC) -c game.cpp

cell:
	$(CC) -c cell.cpp


clean:
	rm sfmal-app
	rm *.o

MAIN=lista
PROJECT=Lista
FLAGS=

run:
	./$(PROJECT)

build: $(MAIN).o
	gcc $(MAIN).o -o $(PROJECT) $(FLAGS)
	rm $(MAIN).o

$(MAIN).o: $(MAIN).c
	gcc -c $(MAIN).c

arquivos = time.c partida.c torneio.c main.c
objetos = time.o partida.o torneio.o main.o

all: gerabin principal clean

gerabin: $(arquivos)
	gcc -c $(arquivos)

principal: $(objetos)
	gcc $(objetos) -o teste

clean:
	rm -rf *.o
output: main.o
    gcc main.o -o BigSum

main.o: main.c
    gcc -c main.c

clean:
    rm *.o output

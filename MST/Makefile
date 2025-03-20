main.out : main.o array_queue.o datatype.o kruskal.o union_find.o
	gcc -o main.out main.o array_queue.o datatype.o kruskal.o union_find.o

datatype.o : datatype.c datatype.h
	gcc -c -o datatype.o datatype.c

array_queue.o : array_queue.c array_queue.h datatype.h
	gcc -c -o array_queue.o array_queue.c

union_find.o : union_find.c union_find.h
	gcc -c -o union_find.o union_find.c

kruskal.o : kruskal.c kruskal.h array_queue.h
	gcc -c -o kruskal.o kruskal.c

main.o : main.c array_queue.h datatype.h
	gcc -c -o main.o main.c

clean :
	rm *.o main.out
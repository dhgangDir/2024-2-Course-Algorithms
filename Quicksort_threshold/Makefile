main.out : main.o quick_sort.o sort_utile.o result_logger.o insert_sort.o
	gcc -o main.out main.o quick_sort.o sort_utile.o result_logger.o insert_sort.o

quick_sort.o : quick_sort.c quick_sort.h sort_utile.h insert_sort.h
	gcc -c -o quick_sort.o quick_sort.c

insert_sort.o : insert_sort.c insert_sort.h
	gcc -c -o insert_sort.o insert_sort.c

sort_utile.o : sort_utile.c sort_utile.h
	gcc -c -o sort_utile.o sort_utile.c

result_logger.o : result_logger.c result_logger.h
	gcc -c -o result_logger.o result_logger.c

main.o : main.c sort_utile.h quick_sort.h result_logger.h
	gcc -c -o main.o main.c

clean :
	rm *.o main.out
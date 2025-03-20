main.out : main.o merge_sort.o quick_sort.o sort_utile.o result_logger.o
	gcc -o main.out main.o merge_sort.o quick_sort.o sort_utile.o result_logger.o

merge_sort.o : merge_sort.c merge_sort.h
	gcc -c -o merge_sort.o merge_sort.c

quick_sort.o : quick_sort.c quick_sort.h sort_utile.h
	gcc -c -o quick_sort.o quick_sort.c

sort_utile.o : sort_utile.c sort_utile.h
	gcc -c -o sort_utile.o sort_utile.c

result_logger.o : result_logger.c result_logger.h
	gcc -c -o result_logger.o result_logger.c

main.o : main.c sort_utile.h merge_sort.h quick_sort.h result_logger.h
	gcc -c -o main.o main.c

clean :
	rm *.o main.out
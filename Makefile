lib: libdll.a
test: tests

libdll.a: linked_list_api.o
	ar rs libdll.a linked_list_api.o

tests: linked_list_api.o test_runner.o
	gcc -g -Wall linked_list_api.o test_runner.o -o test.out

linked_list_api.o: linked_list_api.c
	gcc -g -Wall -c linked_list_api.c -o linked_list_api.o

test_runner.o: tests_runner.c
	gcc -g -Wall -c tests_runner.c -o test_runner.o

clean:
	rm *.o
	rm *.out
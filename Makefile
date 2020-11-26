all:testlistg testsort
testsort: sort.c testsort.c
	gcc testsort.c -o testsort
clean:
	rm testsort

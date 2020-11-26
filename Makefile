all:testlistg testsort
testlistg: listg.c testlistg.c
	gcc listg.c testlistg.c -o testlistg
testsort: sort.c testsort.c
	gcc sort.c testsort.c -o testsort
clean:
	rm testlistg
	rm testsort

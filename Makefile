all:testlistg testsort
testlistg: listg.h listg.c testlistg.c
	gcc testlistg.c -o testlistg
testsort: sort.c testsort.c
	gcc testsort.c -o testsort
clean:
	rm testlistg
	rm testsort

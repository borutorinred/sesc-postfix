run: sesc-merge-sort
	./sesc-merge-sort
	
sesc-merge-sort: sesc-merge-sort.c
	gcc -Wall -std=c11 sesc-merge-sort.c -o sesc-merge-sort stack.c

build: sesc-merge-sort

run: sesc-postfix
	./sesc-postfix
	
sesc-merge-sort: sesc-postfix.c
	gcc -Wall -std=c11 sesc-postfix.c -o sesc-postfix stack.c

build: sesc-postfix

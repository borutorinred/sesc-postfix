run: sesc-postfix
	./sesc-postfix
	
sesc-postfix: sesc-postfix.c
	gcc -Wall -std=c11 sesc-postfix.c -o sesc-postfix stack.c

build: sesc-postfix

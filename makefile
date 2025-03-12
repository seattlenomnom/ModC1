# makefile for modc1
#
modc1: modc1.c
	gcc -std=c11 -Wall -g -pedantic modc1.c -o ./Build/DEBUG/modc1

.PHONY: clean
clean:
	rm ./Build/DEBUG/*

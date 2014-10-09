# This is a makefile for ~/robots
# Author: Tanya L. Crenshaw
CC=gcc

robots.out:	main.c robot.o username.o robot.h
	$(CC) -o robots.out main.c robot.o username.o

robot.o:	robot.c robot.h 
	$(CC) -c robot.c

username.o:	username.c username.h
	$(CC) -c username.c

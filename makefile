CC=gcc

all:mymaths mymathd mains maind
	
mymaths:Power.o basicMath.o myMath.h
	 ar rcs libmyMath.a  basicMath.o Power.o myMath.h

basicMath.o: basicMath.c myMath.h 
	$(CC) '-Wall' -c basicMath.c

mymathd:mymaths Power.o basicMath.o	myMath.h
	$(CC) '-Wall' -shared -o libmyMath.so -fPIC  basicMath.o Power.o myMath.h

Power.o: Power.c myMath.h 
	$(CC) '-Wall' -c Power.c

main.o:main.c myMath.h
	$(CC) '-Wall' -c main.c

mains:main.o mymaths
	$(CC) '-Wall' -o  mains main.o libmyMath.a 

maind:main.o mymathd
	$(CC) '-Wall' -o maind main.o ./libmyMath.so 

make clean:
	rm -f *.o *.a *.so

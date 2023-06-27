all: tests conversiones

conversiones: TablasDeConversion.o Conversion.o
	gcc -o conversiones TablasDeConversion.o Conversion.o

TablasDeConversion.o: TablasDeConversion.c Conversion.h
	gcc -c TablasDeConversion.c

Conversion.o: Conversion.c Conversion.h
	gcc -c Conversion.c	

tests: ConversionTest
	./ConversionTest

clean:
	rm -f conversiones ConversionTest *.o
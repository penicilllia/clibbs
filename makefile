TARGET=mainfl
FIRSTLIB=libmy1.a
SECLIB=libmy2.so
MYMAIN=mainfile
all: $(TARGET)
$(TARGET): $(MYMAIN).o $(FIRSTLIB) $(SECLIB)
	gcc -g -Wall -o $(TARGET) *.o libmy*
	export LD_LIBRARY_PATH='./'
	gdb ./$(TARGET)
$(MYMAIN).o: $(MYMAIN).c
	gcc -g -Wall -c $(MYMAIN).c
libmy1.a: file1.o
	gcc -g -Wall -c file1.c
	ar r $(FIRSTLIB)
libmy2.so: file2.o
	gcc -g -Wall -c -fPIC file2.c
	gcc -shared -o $(SECLIB) file2.o
clean:
	rm -f *.o

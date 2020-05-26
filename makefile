TARGET=mainfl
FIRSTLIB=libmy1.a
SECLIB=libmy2.so
MYMAIN=mainfile
CFlAGS=-g
all: $(TARGET)
$(TARGET): $(MYMAIN).o $(FIRSTLIB) $(SECLIB)
	gcc -o $(TARGET) *.o libmy*
	export LD_LIBRARY_PATH='./'
	./$(TARGET)
$(MYMAIN).o: $(MYMAIN).c
	gcc -c $(MYMAIN).c
libmy1.a: file1.o
	gcc -c file1.c
	ar r $(FIRSTLIB)
libmy2.so: file2.o
	gcc -c -fPIC file2.c
	gcc -shared -o $(SECLIB) file2.o
clean:
	rm -f *.o

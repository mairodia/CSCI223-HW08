a.out   :       main.o  dispoct.o       disphex.o
                @echo "Build a.out\n"
                gcc     main.o  dispoct.o       disphex.o

main.o  :       main.c  dispoct.h       disphex.h
                @echo "Building main.o\n"
                gcc     -c      main.c

dispoct.o:      dispoct.c dispoct.h
                @echo "Building dispoct.o\n"
                gcc -c dispoct.c

disphex.o:      disphex.c disphex.h
                @echo "Building disphex.c\n"
                gcc -c disphex.c

clean   :
        rm -f a.out *.o

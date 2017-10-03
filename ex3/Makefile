CC := gcc
CFLAGS := -g
LINKER_FLAGS :=

.PHONY : all
all : collector

collector : collector.o Collection.o
	$(CC) $(CFLAGS) $^ -o $@    
	@echo; echo $@ successfully created; echo

collector.o : collector.c
	$(CC) $(CFLAGS) -c $< -o $@

Collection.o : Collection.c Collection.h 
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY : clean
clean:
	rm -rf collector *.o
CC := gcc
CFLAGS := -g
LINKER_FLAGS :=
 
.PHONY : all
all : sorter
 
sorter : sorter.o
	$(CC) $(CFLAGS) $< -o $@    
	@echo; echo $@ successfully created; echo
 
%.o : sorter.c
	$(CC) $(CFLAGS) -c $< -o $@
 
.PHONY : clean
clean :
	rm -rf sorter.o
	rm -rf sorter
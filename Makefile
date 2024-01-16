CFLAGS = $(CFLAGS) -g
#Use a transformation rule to build .o files from .c files
OBJS = src/hello_world.o
program: $(OBJS)
	$(CC) -o $(.TARGET) $(.ALLSRC)
#Thing
clean: .PHONY
	rm program $(OBJS)

SDIR = src
CC = g++
CFLAGS = -std=c++14 -Wall

ODIR = build

_OBJ = pwgen.o common_utils.o 
OBJ = $(patsubst %, $(ODIR)/%, $(_OBJ))

_DEPS = common_utils.h
DEPS = $(patsubst %, $(SDIR)/%, $(_DEPS))

pwgen : $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

$(ODIR)/%.o : $(SDIR)/%.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

clean :
	rm $(ODIR)/*.o
	rm pwgen

TARGET = libquadratic_equation.a
CC = gcc

PREF_SRC = ./src/
PREF_OBJ = ./obj/

SRC = $(wildcard $(PREF_SRC)*.c)
OBJ = $(patsubst $(PREF_SRC)%.c, $(PREF_OBJ)%.o, $(SRC))

${TARGET}: ${OBJ}
	ar rcs ${TARGET} ${OBJ}

${PREF_OBJ}%.o: ${PREF_SRC}%.c
	${CC} -c $< -o $@

check: 
	cd ./test/ && make && ./test_quadratic_equation

clean:
	rm -rf ${TARGET} ${PREF_OBJ}*.o && cd ./test/ && make clean
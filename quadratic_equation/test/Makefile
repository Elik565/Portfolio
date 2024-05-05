TARGET = test_quadratic_equation
CC = gcc

PREF_SRC = ./test_unit/
HEADER_PREF = ../include/
PREF_OBJ = ./obj/

SRC = $(wildcard $(PREF_SRC)*.c)
OBJ = $(patsubst $(PREF_SRC)%.c, $(PREF_OBJ)%.o, $(SRC))

${TARGET}: ${OBJ}
	${CC} test_quadratic_equation.c -o ${TARGET} ${OBJ} -L./../ -lquadratic_equation -lm

${PREF_OBJ}%.o: ${PREF_SRC}%.c
	${CC} -c -I ${HEADER_PREF} -I ${PREF_SRC} -L./../ -lquadratic_equation.a $< -o $@

clean:
	rm -rf ${PREF_OBJ}*.o ${TARGET}
SHELL = /bin/sh 

CFLAGS = -Wall -Wextra -Werror -std=c11 -g
TFLAGS = -lcheck -lsubunit -lm
GFLAGS = -fprofile-arcs -ftest-coverage
VLGRND = valgrind --tool=memcheck --leak-check=yes --show-leak-kinds=all --track-origins=yes -s

LIB_SRC = $(wildcard *.c)
LIB_OBJ = $(LIB_SRC:.c=.o)
TEST_SRC = $(wildcard tests/s21*.c)

all: clear clean s21_math.a 

s21_math.a: clean $(LIB_OBJ)
	gcc $(CFLAGS) -c -g $(LIB_SRC)
	ar rcs s21_math.a $(LIB_OBJ)
	ranlib s21_math.a
	rm -f $(LIB_OBJ)

.PHONY: gcov_report
gcov_report: clear clean
	gcc $(CFLAGS) $(LIB_SRC) -c $(GFLAGS) 
	gcc $(CFLAGS) -c $(TEST_SRC)
	ar rcs s21_math.a $(LIB_OBJ)
	ranlib s21_math.a
	gcc $(CFLAGS) -o gcov_r $(GFLAGS) $(TEST_SRC) -L. -l:s21_math.a $(TFLAGS)
	mkdir -p coverage_report
	./gcov_r
	gcovr -r . --html --html-details -o coverage_report/index.html --exclude '.*test.*'
	rm -rf *.o *.gcno *.gcda *.gcov gcov_r

test: clear s21_math.a
	gcc $(CFLAGS) $(TEST_SRC) -o tests -L. -l:s21_math.a $(TFLAGS)
	 ./tests
	rm -rf tests s21_math.a

clang:
	clang-format -i *.c tests/*.c *.h tests/*.h

clear:
	clear

clean:
	rm -rf s21_math *.o *.gcno *.gcda *.gcov gcov_r coverage_report/ s21_math.a tests
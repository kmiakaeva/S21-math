#include "utils.h"

#include "s21_math.h"

int s21_is_inf(long double x) { return s21_is_pos_inf(x) || s21_is_neg_inf(x); }

int s21_is_pos_inf(long double x) { return x == (1.0L / 0.0L); }

int s21_is_neg_inf(long double x) { return x == (-1.0L / 0.0L); }

int s21_is_nan(long double x) { return x != x; }

long double s21_fabsl(long double x) { return (S21_SIGNBIT(x)) ? -x : x; }

long double s21_fact(int x) { return (x == 0) ? 1 : x * s21_fact(x - 1); }

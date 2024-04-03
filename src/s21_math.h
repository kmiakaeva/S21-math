#ifndef S21_MATH_H
#define S21_MATH_H

#include <stdio.h>
#include <stdlib.h>

#include "s21_utils.h"

// macros
#define S21_NAN __builtin_nan("")
#define S21_INF __builtin_inf()
#define S21_ISFINITE(x) __builtin_isfinite(x)
#define S21_ISNORMAL(x) __builtin_isnormal(x)
#define S21_SIGNBIT(x) __builtin_signbit(x)
#define S21_ISNAN(x) __builtin_isnan(x)

// const
#define S21_EPS (1e-6)
#define S21_M_PI 3.1415926535897932384626433832795028841L
#define S21_EXPONENT 2.71828182845904523536L
#define S21_NEG_ZERO (-0.0)
#define S21_DOUBLE_MAX 1.7976931348623158e+308
#define S21_DOUBLE_MIN 2.2250738585072014e-308
#define S21_INT_MAX 2147483647
#define S21_INT_MIN -2147483648
#define S21_M_PI_2 1.57079632679489661923132169163975144L

int s21_abs(int x);
long double s21_acos(double x);
long double s21_asin(double x);
long double s21_atan(double x);
long double s21_ceil(double x);
long double s21_cos(double x);
long double s21_exp(double x);
long double s21_fabs(double x);
long double s21_floor(double x);
long double s21_fmod(double x, double y);
long double s21_log(double x);
long double s21_pow(double base, double exp);
long double s21_sin(double x);
long double s21_sqrt(double x);
long double s21_tan(double x);

#endif
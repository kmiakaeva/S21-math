#ifndef S21_TEST_H
#define S21_TEST_H

#include <check.h>
#include <math.h>
#include <stdio.h>

#include "../s21_math.h"

/**
 * s21 suites
 */
Suite *s21_abs_suite(void);
Suite *s21_acos_suite(void);
Suite *s21_asin_suite(void);
Suite *s21_atan_suite(void);
Suite *s21_ceil_suite(void);
Suite *s21_cos_suite(void);
Suite *s21_exp_suite(void);
Suite *s21_fabs_suite(void);
Suite *s21_floor_suite(void);
Suite *s21_fmod_suite(void);
Suite *s21_log_suite(void);
Suite *s21_pow_suite(void);
Suite *s21_sin_suite(void);
Suite *s21_sqrt_suite(void);
Suite *s21_tan_suite(void);

/**
 * s21 test
 */
int run_s21_test(Suite *s21_suite);

#endif
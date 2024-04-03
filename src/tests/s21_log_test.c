#include "s21_test.h"

START_TEST(s21_log_1) {
  ck_assert_double_eq_tol(s21_log(26941.289), log(26941.289), S21_EPS);
}
END_TEST

START_TEST(s21_log_2) {
  ck_assert_double_nan(s21_log(-12.36));
  ck_assert_double_nan(log(-12.36));
}
END_TEST

START_TEST(s21_log_3) { ck_assert_double_eq(s21_log(INFINITY), log(INFINITY)); }
END_TEST

START_TEST(s21_log_4) {
  ck_assert_double_nan(s21_log(NAN));
  ck_assert_double_nan(log(NAN));
}
END_TEST

START_TEST(s21_log_5) {
  ck_assert_double_nan(s21_log(-INFINITY));
  ck_assert_double_nan(log(-INFINITY));
}
END_TEST

START_TEST(s21_log_6) { ck_assert_double_eq(s21_log(0), log(0)); }
END_TEST

START_TEST(s21_log_7) { ck_assert_double_eq(s21_log(1), log(1)); }
END_TEST

START_TEST(s21_log_8) {
  double a = S21_INF;
  ck_assert_ldouble_infinite(log(a));
  ck_assert_ldouble_infinite(s21_log(a));
}

START_TEST(s21_log_9) {
  double a = S21_NAN;
  ck_assert_ldouble_nan(log(a));
  ck_assert_ldouble_nan(s21_log(a));
}
END_TEST

START_TEST(s21_log_10) {
  double a = -0.000003;
  ck_assert_ldouble_nan(log(a));
  ck_assert_ldouble_nan(s21_log(a));
}
END_TEST

START_TEST(s21_log_11) {
  double a = 131223;
  ck_assert_ldouble_eq_tol(log(a), s21_log(a), S21_EPS);
}
END_TEST

START_TEST(s21_log_12) {
  double a = 0.000123;
  ck_assert_ldouble_eq_tol(log(a), s21_log(a), S21_EPS);
}
END_TEST

START_TEST(s21_log_13) {
  double a = 123.123123;
  ck_assert_ldouble_eq_tol(log(a), s21_log(a), S21_EPS);
}
END_TEST

START_TEST(s21_log_14) {
  for (double k = 1; k < 100; k += 13.2) {
    long double a = s21_log(k);
    long double b = log(k);
    ck_assert_ldouble_eq_tol(a, b, S21_EPS);
  }
}
END_TEST

START_TEST(s21_log_15) {
  for (double k = 0.1; k < 4; k += 0.24) {
    long double a = s21_log(k);
    long double b = log(k);
    ck_assert_ldouble_eq_tol(a, b, S21_EPS);
  }
}
END_TEST

START_TEST(s21_log_16) {
  for (double k = 0.1; k < 10000; k += 123) {
    long double a = s21_log(k);
    long double b = log(k);
    ck_assert_ldouble_eq_tol(a, b, S21_EPS);
  }
}
END_TEST

START_TEST(s21_log_17) {
  for (double k = 0.000005; k < 1; k *= 5) {
    ck_assert_ldouble_eq_tol(s21_log(k), log(k), S21_EPS);
  }
}
END_TEST

START_TEST(s21_log_18) {
  ck_assert_ldouble_nan(s21_log(S21_NAN));
  ck_assert_ldouble_eq(log(0), s21_log(0));
  ck_assert_ldouble_nan(s21_log(-3));
  ck_assert_ldouble_eq(log(S21_INF), s21_log(S21_INF));
  ck_assert_ldouble_nan(s21_log(-S21_INF));
  ck_assert_ldouble_eq_tol(log(1), s21_log(1), S21_EPS);
  ck_assert_ldouble_eq_tol(log(2), s21_log(2), S21_EPS);
}
END_TEST

START_TEST(s21_log_19) {
  double num = 853321.123;
  ck_assert_double_eq_tol(s21_log(num), log(num), S21_EPS);
}
END_TEST

Suite *s21_log_suite(void) {
  Suite *s = suite_create("s21_log_suite");
  TCase *tc = tcase_create("s21_log_tc");

  tcase_add_test(tc, s21_log_1);
  tcase_add_test(tc, s21_log_2);
  tcase_add_test(tc, s21_log_3);
  tcase_add_test(tc, s21_log_4);
  tcase_add_test(tc, s21_log_5);
  tcase_add_test(tc, s21_log_6);
  tcase_add_test(tc, s21_log_7);
  tcase_add_test(tc, s21_log_8);
  tcase_add_test(tc, s21_log_9);
  tcase_add_test(tc, s21_log_10);
  tcase_add_test(tc, s21_log_11);
  tcase_add_test(tc, s21_log_12);
  tcase_add_test(tc, s21_log_13);
  tcase_add_test(tc, s21_log_14);
  tcase_add_test(tc, s21_log_15);
  tcase_add_test(tc, s21_log_16);
  tcase_add_test(tc, s21_log_17);
  tcase_add_test(tc, s21_log_18);
  tcase_add_test(tc, s21_log_19);

  suite_add_tcase(s, tc);

  return s;
}
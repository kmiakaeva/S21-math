#include "s21_test.h"

START_TEST(s21_sin_1) {
  ck_assert_double_eq_tol(s21_sin(1000000), sin(1000000), S21_EPS);
}
END_TEST

START_TEST(s21_sin_2) {
  ck_assert_double_eq_tol(s21_sin(-14.96), sin(-14.96), S21_EPS);
}
END_TEST

START_TEST(s21_sin_3) {
  ck_assert_double_nan(s21_sin(INFINITY));
  ck_assert_double_nan(sin(INFINITY));
}
END_TEST

START_TEST(s21_sin_4) {
  ck_assert_double_nan(s21_sin(NAN));
  ck_assert_double_nan(sin(NAN));
}
END_TEST

START_TEST(s21_sin_5) {
  ck_assert_double_nan(s21_sin(-INFINITY));
  ck_assert_double_nan(sin(-INFINITY));
}
END_TEST

START_TEST(s21_sin_6) {
  ck_assert_double_eq_tol(s21_sin(S21_M_PI), sin(S21_M_PI), S21_EPS);
}
END_TEST

START_TEST(s21_sin_7) {
  ck_assert_double_eq_tol(s21_sin(S21_M_PI), sin(S21_M_PI), S21_EPS);
}
END_TEST

START_TEST(s21_sin_8) { ck_assert_double_eq_tol(s21_sin(0), sin(0), S21_EPS); }
END_TEST

START_TEST(s21_sin_9) {
  ck_assert_double_eq_tol(s21_sin(-S21_M_PI_2), sin(-S21_M_PI_2), S21_EPS);
}
END_TEST

START_TEST(s21_sin_10) {
  ck_assert_double_eq_tol(s21_sin(S21_M_PI_2), sin(S21_M_PI_2), S21_EPS);
}
END_TEST

Suite *s21_sin_suite(void) {
  Suite *s = suite_create("s21_sin_suite");
  TCase *tc = tcase_create("s21_sin_tc");

  tcase_add_test(tc, s21_sin_1);
  tcase_add_test(tc, s21_sin_2);
  tcase_add_test(tc, s21_sin_3);
  tcase_add_test(tc, s21_sin_4);
  tcase_add_test(tc, s21_sin_5);
  tcase_add_test(tc, s21_sin_6);
  tcase_add_test(tc, s21_sin_7);
  tcase_add_test(tc, s21_sin_8);
  tcase_add_test(tc, s21_sin_9);
  tcase_add_test(tc, s21_sin_10);

  suite_add_tcase(s, tc);

  return s;
}
#include "s21_test.h"

START_TEST(s21_cos_1) {
  ck_assert_double_eq_tol(s21_cos(1200000), cos(1200000), S21_EPS);
}
END_TEST

START_TEST(s21_cos_2) {
  ck_assert_double_eq_tol(s21_cos(-14.96), cos(-14.96), S21_EPS);
}
END_TEST

START_TEST(s21_cos_3) {
  ck_assert_double_nan(s21_cos(INFINITY));
  ck_assert_double_nan(cos(INFINITY));
}
END_TEST

START_TEST(s21_cos_4) {
  ck_assert_double_nan(s21_cos(NAN));
  ck_assert_double_nan(cos(NAN));
}
END_TEST

START_TEST(s21_cos_5) {
  ck_assert_double_nan(s21_cos(-INFINITY));
  ck_assert_double_nan(cos(-INFINITY));
}
END_TEST

START_TEST(s21_cos_6) { ck_assert_double_eq_tol(s21_cos(0), cos(0), S21_EPS); }
END_TEST

START_TEST(s21_cos_7) {
  ck_assert_double_eq_tol(s21_cos(S21_M_PI_2), cos(S21_M_PI_2), S21_EPS);
}
END_TEST

START_TEST(s21_cos_8) {
  ck_assert_double_eq_tol(s21_cos(-S21_M_PI_2), cos(-S21_M_PI_2), S21_EPS);
}
END_TEST

START_TEST(s21_cos_9) {
  ck_assert_double_eq_tol(s21_cos(S21_M_PI), cos(S21_M_PI), S21_EPS);
}
END_TEST

START_TEST(s21_cos_10) {
  ck_assert_double_eq_tol(s21_cos(-S21_M_PI), cos(-S21_M_PI), S21_EPS);
}
END_TEST

Suite *s21_cos_suite(void) {
  Suite *s = suite_create("s21_cos_suite");
  TCase *tc = tcase_create("s21_cos_tc");

  tcase_add_test(tc, s21_cos_1);
  tcase_add_test(tc, s21_cos_2);
  tcase_add_test(tc, s21_cos_3);
  tcase_add_test(tc, s21_cos_4);
  tcase_add_test(tc, s21_cos_5);
  tcase_add_test(tc, s21_cos_6);
  tcase_add_test(tc, s21_cos_7);
  tcase_add_test(tc, s21_cos_8);
  tcase_add_test(tc, s21_cos_9);
  tcase_add_test(tc, s21_cos_10);

  suite_add_tcase(s, tc);

  return s;
}

#include "s21_test.h"

START_TEST(s21_tan_1) {
  ck_assert_double_eq_tol(s21_tan(6987000), tan(6987000), S21_EPS);
}
END_TEST

START_TEST(s21_tan_2) {
  ck_assert_double_eq_tol(s21_tan(-14.96), tan(-14.96), S21_EPS);
}
END_TEST

START_TEST(s21_tan_3) {
  ck_assert_double_nan(s21_tan(INFINITY));
  ck_assert_double_nan(tan(INFINITY));
}
END_TEST

START_TEST(s21_tan_4) {
  ck_assert_double_nan(s21_tan(NAN));
  ck_assert_double_nan(tan(NAN));
}
END_TEST

START_TEST(s21_tan_5) {
  ck_assert_double_nan(s21_tan(-INFINITY));
  ck_assert_double_nan(tan(-INFINITY));
}
END_TEST

START_TEST(s21_tan_6) { ck_assert_double_eq_tol(s21_tan(0), tan(0), S21_EPS); }
END_TEST

START_TEST(s21_tan_9) {
  ck_assert_double_eq_tol(s21_tan(S21_M_PI), tan(S21_M_PI), S21_EPS);
}
END_TEST

START_TEST(s21_tan_10) {
  ck_assert_double_eq_tol(s21_tan(-S21_M_PI), tan(-S21_M_PI), S21_EPS);
}
END_TEST

START_TEST(s21_tan_11) { ck_assert_double_eq_tol(s21_tan(1), tan(1), S21_EPS); }
END_TEST

START_TEST(s21_tan_12) {
  ck_assert_double_eq_tol(s21_tan(0.5), tan(0.5), S21_EPS);
}
END_TEST

Suite *s21_tan_suite(void) {
  Suite *s = suite_create("s21_tan_suite");
  TCase *tc = tcase_create("s21_tan_tc");

  tcase_add_test(tc, s21_tan_1);
  tcase_add_test(tc, s21_tan_2);
  tcase_add_test(tc, s21_tan_3);
  tcase_add_test(tc, s21_tan_4);
  tcase_add_test(tc, s21_tan_5);
  tcase_add_test(tc, s21_tan_6);
  tcase_add_test(tc, s21_tan_9);
  tcase_add_test(tc, s21_tan_10);
  tcase_add_test(tc, s21_tan_11);
  tcase_add_test(tc, s21_tan_12);

  suite_add_tcase(s, tc);

  return s;
}
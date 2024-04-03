#include "s21_test.h"

START_TEST(test_1) {
  for (double i = -14.0; i < 10; i += 0.1) {
    ck_assert_ldouble_eq_tol(s21_exp(0.0 + i), exp(0.0 + i), S21_EPS);
  }
}
END_TEST

START_TEST(s21_exp_1) {
  ck_assert_double_eq(s21_exp(25048.369), exp(25048.369));
}
END_TEST

START_TEST(s21_exp_2) {
  ck_assert_double_eq_tol(s21_exp(-14.96), exp(-14.96), S21_EPS);
}
END_TEST

START_TEST(s21_exp_3) { ck_assert_double_eq(s21_exp(INFINITY), exp(INFINITY)); }
END_TEST

START_TEST(s21_exp_4) {
  ck_assert_double_nan(s21_exp(NAN));
  ck_assert_double_nan(exp(NAN));
}
END_TEST

START_TEST(s21_exp_5) {
  ck_assert_double_eq(s21_exp(-INFINITY), exp(-INFINITY));
}
END_TEST

START_TEST(s21_exp_6) { ck_assert_double_eq_tol(s21_exp(0), exp(0), S21_EPS); }
END_TEST

START_TEST(s21_exp_7) { ck_assert_double_eq_tol(s21_exp(1), exp(1), S21_EPS); }
END_TEST

START_TEST(s21_exp_8) {
  ck_assert_double_eq_tol(s21_exp(-1), exp(-1), S21_EPS);
}
END_TEST

START_TEST(s21_exp_9) {
  double num = 0.5 * s21_log(853321.123);
  ck_assert_double_eq_tol(s21_exp(num), exp(num), S21_EPS);
}
END_TEST

Suite *s21_exp_suite(void) {
  Suite *s = suite_create("s21_exp_suite");
  TCase *tc = tcase_create("s21_exp_tc");

  tcase_add_test(tc, test_1);

  tcase_add_test(tc, s21_exp_1);
  tcase_add_test(tc, s21_exp_2);
  tcase_add_test(tc, s21_exp_3);
  tcase_add_test(tc, s21_exp_4);
  tcase_add_test(tc, s21_exp_5);
  tcase_add_test(tc, s21_exp_6);
  tcase_add_test(tc, s21_exp_7);
  tcase_add_test(tc, s21_exp_8);
  tcase_add_test(tc, s21_exp_9);

  suite_add_tcase(s, tc);

  return s;
}
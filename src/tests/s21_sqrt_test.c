#include "s21_test.h"

START_TEST(s21_sqrt_inf_negative) {
  // -nan
  ck_assert_ldouble_nan(s21_sqrt(-S21_INF));
}
END_TEST

START_TEST(s21_sqrt_inf) {
  // inf
  ck_assert_ldouble_infinite(s21_sqrt(S21_INF));
}
END_TEST

START_TEST(s21_sqrt_nan_negative) {
  // -nan
  ck_assert_ldouble_nan(s21_sqrt(-S21_NAN));
}
END_TEST

START_TEST(s21_sqrt_nan) {
  // nan
  ck_assert_ldouble_nan(s21_sqrt(S21_NAN));
}
END_TEST

START_TEST(s21_sqrt_max_double_negative) {
  // -nan
  ck_assert_ldouble_nan(s21_sqrt(-S21_DOUBLE_MAX));
}
END_TEST

START_TEST(s21_sqrt_min_double_negative) {
  // -nan
  ck_assert_ldouble_nan(s21_sqrt(-S21_DOUBLE_MIN));
}
END_TEST

START_TEST(s21_sqrt_zero_negative) {
  // -0.0
  ck_assert_ldouble_eq(s21_sqrt(-0.0), sqrt(-0.0));
}
END_TEST

START_TEST(s21_sqrt_zero) {
  // 0.0
  ck_assert_ldouble_eq(s21_sqrt(0.0), sqrt(0.0));
}
END_TEST

START_TEST(s21_sqrt_one_negative) {
  // -nan
  ck_assert_ldouble_nan(s21_sqrt(-1.0));
}
END_TEST

START_TEST(s21_sqrt_one) {
  // 1.0
  ck_assert_ldouble_eq(s21_sqrt(1.0), sqrt(1.0));
}
END_TEST

START_TEST(s21_sqrt_num) {
  // 2.0
  ck_assert_ldouble_eq_tol(s21_sqrt(4.0), sqrt(4.0), S21_EPS);
}
END_TEST

START_TEST(s21_sqrt_num_2_negative) {
  // -nan
  ck_assert_ldouble_nan(s21_sqrt(-1000));
}
END_TEST

START_TEST(s21_sqrt_num_2) {
  // 31.622777
  ck_assert_ldouble_eq_tol(s21_sqrt(1000), sqrt(1000), S21_EPS);
}
END_TEST

Suite *s21_sqrt_suite(void) {
  Suite *s = suite_create("s21_sqrt_suite");
  TCase *tc = tcase_create("s21_sqrt_tc");

  tcase_add_test(tc, s21_sqrt_inf_negative);
  tcase_add_test(tc, s21_sqrt_inf);
  tcase_add_test(tc, s21_sqrt_nan_negative);
  tcase_add_test(tc, s21_sqrt_nan);
  tcase_add_test(tc, s21_sqrt_max_double_negative);
  tcase_add_test(tc, s21_sqrt_min_double_negative);
  tcase_add_test(tc, s21_sqrt_zero_negative);
  tcase_add_test(tc, s21_sqrt_zero);
  tcase_add_test(tc, s21_sqrt_one_negative);
  tcase_add_test(tc, s21_sqrt_one);
  tcase_add_test(tc, s21_sqrt_num);
  tcase_add_test(tc, s21_sqrt_num_2_negative);
  tcase_add_test(tc, s21_sqrt_num_2);

  suite_add_tcase(s, tc);

  return s;
}

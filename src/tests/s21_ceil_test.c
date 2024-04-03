#include "s21_test.h"

START_TEST(s21_ceil_inf_negative) {
  ck_assert_ldouble_infinite(s21_ceil(-S21_INF));
}
END_TEST

START_TEST(s21_ceil_inf) { ck_assert_ldouble_infinite(s21_ceil(S21_INF)); }
END_TEST

START_TEST(s21_ceil_nan_negative) { ck_assert_ldouble_nan(s21_ceil(-S21_NAN)); }
END_TEST

START_TEST(s21_ceil_nan) { ck_assert_ldouble_nan(s21_ceil(S21_NAN)); }
END_TEST

START_TEST(s21_ceil_min_double_negative) {
  ck_assert_ldouble_eq(s21_ceil(-S21_DOUBLE_MIN), ceil(-S21_DOUBLE_MIN));
}
END_TEST

START_TEST(s21_ceil_zero_negative) {
  ck_assert_ldouble_eq(s21_ceil(-0.0), ceil(-0.0));
}
END_TEST

START_TEST(s21_ceil_zero) { ck_assert_ldouble_eq(s21_ceil(0.0), ceil(0.0)); }
END_TEST

START_TEST(s21_ceil_one_negative) {
  ck_assert_ldouble_eq(s21_ceil(-1), ceil(-1));
}
END_TEST

START_TEST(s21_ceil_one) { ck_assert_ldouble_eq(s21_ceil(1.0), ceil(1.0)); }
END_TEST

START_TEST(s21_ceil_num) { ck_assert_ldouble_eq(s21_ceil(4.0), ceil(4.0)); }
END_TEST

START_TEST(s21_ceil_num_2_negative) {
  ck_assert_ldouble_eq(s21_ceil(-1000.56), ceil(-1000.56));
}
END_TEST

START_TEST(s21_ceil_num_2) {
  ck_assert_ldouble_eq(s21_ceil(1000.2645), ceil(1000.2645));
}
END_TEST

START_TEST(s21_ceil_num_3) {
  ck_assert_ldouble_eq(s21_ceil(853321.123), ceil(853321.123));
}
END_TEST

Suite *s21_ceil_suite(void) {
  Suite *s = suite_create("s21_ceil_suite");
  TCase *tc = tcase_create("s21_ceil_tc");

  tcase_add_test(tc, s21_ceil_inf_negative);
  tcase_add_test(tc, s21_ceil_inf);
  tcase_add_test(tc, s21_ceil_nan_negative);
  tcase_add_test(tc, s21_ceil_nan);
  tcase_add_test(tc, s21_ceil_min_double_negative);
  tcase_add_test(tc, s21_ceil_zero_negative);
  tcase_add_test(tc, s21_ceil_zero);
  tcase_add_test(tc, s21_ceil_one_negative);
  tcase_add_test(tc, s21_ceil_one);
  tcase_add_test(tc, s21_ceil_num);
  tcase_add_test(tc, s21_ceil_num_2_negative);
  tcase_add_test(tc, s21_ceil_num_2);
  tcase_add_test(tc, s21_ceil_num_3);

  suite_add_tcase(s, tc);

  return s;
}

#include "s21_test.h"

START_TEST(s21_floor_inf_negative) {
  ck_assert_ldouble_infinite(s21_floor(-S21_INF));
}
END_TEST

START_TEST(s21_floor_inf) { ck_assert_ldouble_infinite(s21_floor(S21_INF)); }
END_TEST

START_TEST(s21_floor_nan_negative) {
  ck_assert_ldouble_nan(s21_floor(-S21_NAN));
}
END_TEST

START_TEST(s21_floor_nan) { ck_assert_ldouble_nan(s21_floor(S21_NAN)); }
END_TEST

START_TEST(s21_floor_min_double_negative) {
  ck_assert_ldouble_eq(s21_floor(-S21_DOUBLE_MIN), floor(-S21_DOUBLE_MIN));
}
END_TEST

START_TEST(s21_floor_zero_negative) {
  ck_assert_ldouble_eq(s21_floor(-0.0), floor(-0.0));
}
END_TEST

START_TEST(s21_floor_zero) { ck_assert_ldouble_eq(s21_floor(0.0), floor(0.0)); }
END_TEST

START_TEST(s21_floor_one_negative) {
  ck_assert_ldouble_eq(s21_floor(-1), floor(-1));
}
END_TEST

START_TEST(s21_floor_one) { ck_assert_ldouble_eq(s21_floor(1.0), floor(1.0)); }
END_TEST

START_TEST(s21_floor_num) { ck_assert_ldouble_eq(s21_floor(4.0), floor(4.0)); }
END_TEST

START_TEST(s21_floor_num_2_negative) {
  ck_assert_ldouble_eq(s21_floor(-1000.56), floor(-1000.56));
}
END_TEST

START_TEST(s21_floor_num_2) {
  ck_assert_ldouble_eq(s21_floor(1000.2645), floor(1000.2645));
}
END_TEST

START_TEST(s21_floor_num_3) {
  ck_assert_ldouble_eq(s21_floor(853321.123), floor(853321.123));
}
END_TEST

Suite *s21_floor_suite(void) {
  Suite *s = suite_create("s21_floor_suite");
  TCase *tc = tcase_create("s21_floor_tc");

  tcase_add_test(tc, s21_floor_inf_negative);
  tcase_add_test(tc, s21_floor_inf);
  tcase_add_test(tc, s21_floor_nan_negative);
  tcase_add_test(tc, s21_floor_nan);
  tcase_add_test(tc, s21_floor_min_double_negative);
  tcase_add_test(tc, s21_floor_zero_negative);
  tcase_add_test(tc, s21_floor_zero);
  tcase_add_test(tc, s21_floor_one_negative);
  tcase_add_test(tc, s21_floor_one);
  tcase_add_test(tc, s21_floor_num);
  tcase_add_test(tc, s21_floor_num_2_negative);
  tcase_add_test(tc, s21_floor_num_2);
  tcase_add_test(tc, s21_floor_num_3);

  suite_add_tcase(s, tc);

  return s;
}

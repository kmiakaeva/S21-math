#include "s21_test.h"

START_TEST(s21_abs_zero) { ck_assert_int_eq(s21_abs(0), abs(0)); }
END_TEST

START_TEST(s21_abs_zero_negative) { ck_assert_int_eq(s21_abs(-0), abs(-0)); }
END_TEST

START_TEST(s21_abs_min_int) {
  ck_assert_int_eq(s21_abs(S21_INT_MIN), abs((int)S21_INT_MIN));
}
END_TEST

START_TEST(s21_abs_max_int) {
  ck_assert_int_eq(s21_abs(S21_INT_MAX), abs(S21_INT_MAX));
}
END_TEST

START_TEST(s21_abs_int_negative) {
  ck_assert_int_eq(s21_abs(-666666), abs(-666666));
}
END_TEST

START_TEST(s21_abs_int) { ck_assert_int_eq(s21_abs(1234), abs(1234)); }
END_TEST

Suite *s21_abs_suite(void) {
  Suite *s = suite_create("s21_abs_suite");
  TCase *tc = tcase_create("s21_abs_tc");

  tcase_add_test(tc, s21_abs_zero_negative);
  tcase_add_test(tc, s21_abs_zero);
  tcase_add_test(tc, s21_abs_min_int);
  tcase_add_test(tc, s21_abs_max_int);
  tcase_add_test(tc, s21_abs_int_negative);
  tcase_add_test(tc, s21_abs_int);

  suite_add_tcase(s, tc);

  return s;
}
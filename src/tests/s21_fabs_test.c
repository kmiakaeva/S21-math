#include "s21_test.h"

START_TEST(s21_fabs_inf_negative) {
  // inf
  ck_assert_ldouble_infinite(s21_fabs(-S21_INF));
}
END_TEST

START_TEST(s21_fabs_inf) {
  // inf
  ck_assert_ldouble_infinite(s21_fabs(S21_INF));
}
END_TEST

START_TEST(s21_fabs_nan_negative) {
  // nan
  ck_assert_ldouble_nan(s21_fabs(-S21_NAN));
}
END_TEST

START_TEST(s21_fabs_nan) {
  // nan
  ck_assert_ldouble_nan(s21_fabs(S21_NAN));
}
END_TEST

START_TEST(s21_fabs_min_double_negative) {
  // 0.0
  ck_assert_ldouble_eq(s21_fabs(-S21_DOUBLE_MIN), fabs(-S21_DOUBLE_MIN));
}
END_TEST

START_TEST(s21_fabs_min_double) {
  // 0.0
  ck_assert_ldouble_eq(s21_fabs(S21_DOUBLE_MIN), fabs(S21_DOUBLE_MIN));
}
END_TEST

START_TEST(s21_fabs_max_double_negative) {
  // 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000
  ck_assert_ldouble_eq(s21_fabs(-S21_DOUBLE_MAX), fabs(-S21_DOUBLE_MAX));
}
END_TEST

START_TEST(s21_fabs_max_double) {
  // 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000
  ck_assert_ldouble_eq(s21_fabs(S21_DOUBLE_MAX), fabs(S21_DOUBLE_MAX));
}
END_TEST

START_TEST(s21_fabs_zero_negative) {
  // 0.0
  ck_assert_int_eq(s21_fabs(-0.0), fabs(-0.0));
}
END_TEST

START_TEST(s21_fabs_zero) {
  // 0.0
  ck_assert_int_eq(s21_fabs(0.0), fabs(0.0));
}
END_TEST

START_TEST(s21_fabs_one_negative) {
  // 1.0
  ck_assert_int_eq(s21_fabs(-1.0), fabs(-1.0));
}
END_TEST

START_TEST(s21_fabs_one) {
  // 1.0
  ck_assert_int_eq(s21_fabs(1.0), fabs(1.0));
}
END_TEST

START_TEST(s21_fabs_num_negative) {
  // 1234.567000
  ck_assert_int_eq(s21_fabs(-1234.567), fabs(-1234.567));
}
END_TEST

START_TEST(s21_fabs_num) {
  // 1234.567000
  ck_assert_int_eq(s21_fabs(1234.567), fabs(1234.567));
}
END_TEST

Suite *s21_fabs_suite(void) {
  Suite *s = suite_create("s21_fabs_suite");
  TCase *tc = tcase_create("s21_fabs_tc");

  tcase_add_test(tc, s21_fabs_inf_negative);
  tcase_add_test(tc, s21_fabs_inf);
  tcase_add_test(tc, s21_fabs_nan_negative);
  tcase_add_test(tc, s21_fabs_nan);
  tcase_add_test(tc, s21_fabs_min_double_negative);
  tcase_add_test(tc, s21_fabs_min_double);
  tcase_add_test(tc, s21_fabs_max_double_negative);
  tcase_add_test(tc, s21_fabs_max_double);
  tcase_add_test(tc, s21_fabs_zero_negative);
  tcase_add_test(tc, s21_fabs_zero);
  tcase_add_test(tc, s21_fabs_one_negative);
  tcase_add_test(tc, s21_fabs_one);
  tcase_add_test(tc, s21_fabs_num_negative);
  tcase_add_test(tc, s21_fabs_num);

  suite_add_tcase(s, tc);

  return s;
}
#include "s21_test.h"

START_TEST(s21_asin_1) {
  for (double i = 0.999; i > 0; i -= 0.001) {
    ck_assert_double_eq_tol(asin(i), s21_asin(i), S21_EPS);
  };
}
END_TEST

START_TEST(s21_asin_2) {
  for (double i = 0; i > -1; i -= 0.001) {
    ck_assert_double_eq_tol(asin(i), s21_asin(i), S21_EPS);
  };
}
END_TEST

START_TEST(s21_asin_3) {
  ck_assert_double_eq_tol(asin(1), s21_asin(1), S21_EPS);
  ck_assert_double_eq_tol(asin(-1), s21_asin(-1), S21_EPS);
}
END_TEST

START_TEST(s21_asin_4) {
  for (double i = 100; i >= -100; i -= 10) {
    if (i) ck_assert(s21_is_nan(asin(i)) && s21_is_nan(s21_asin(i)));
  }
}
END_TEST

START_TEST(s21_asin_5) {
  // 0.0
  ck_assert_ldouble_eq_tol(s21_asin(S21_DOUBLE_MIN), asin(S21_DOUBLE_MIN),
                           S21_EPS);
}
END_TEST

START_TEST(s21_asin_6) {
  // 0.0
  ck_assert_ldouble_eq_tol(s21_asin(S21_DOUBLE_MIN), asin(S21_DOUBLE_MIN),
                           S21_EPS);
}
END_TEST
//
START_TEST(s21_asin_7) {
  ck_assert_double_eq_tol(s21_asin(0.156), asin(0.156), S21_EPS);
}
END_TEST

START_TEST(s21_asin_8) {
  ck_assert_double_eq_tol(s21_asin(1), asin(1), S21_EPS);
}
END_TEST

START_TEST(s21_asin_9) {
  ck_assert_double_eq_tol(s21_asin(-1), asin(-1), S21_EPS);
}
END_TEST

START_TEST(s21_asin_10) {
  ck_assert_double_nan(s21_asin(INFINITY));
  ck_assert_double_nan(asin(INFINITY));
}
END_TEST

START_TEST(s21_asin_11) {
  ck_assert_double_nan(s21_asin(NAN));
  ck_assert_double_nan(asin(NAN));
}
END_TEST

START_TEST(s21_asin_12) {
  ck_assert_double_nan(s21_asin(-INFINITY));
  ck_assert_double_nan(asin(-INFINITY));
}
END_TEST

START_TEST(s21_asin_13) {
  ck_assert_double_nan(s21_asin(16));
  ck_assert_double_nan(asin(16));
}
END_TEST

START_TEST(s21_asin_14) {
  ck_assert_double_nan(s21_asin(-16));
  ck_assert_double_nan(asin(-16));
}
END_TEST

START_TEST(s21_asin_15) {
  ck_assert_double_eq_tol(s21_asin(0), asin(0), S21_EPS);
}
END_TEST

Suite *s21_asin_suite(void) {
  Suite *s = suite_create("s21_asin_suite");
  TCase *tc = tcase_create("s21_asin_tc");

  tcase_add_test(tc, s21_asin_1);
  tcase_add_test(tc, s21_asin_2);
  tcase_add_test(tc, s21_asin_3);
  tcase_add_test(tc, s21_asin_4);
  tcase_add_test(tc, s21_asin_5);
  tcase_add_test(tc, s21_asin_6);
  tcase_add_test(tc, s21_asin_7);
  tcase_add_test(tc, s21_asin_8);
  tcase_add_test(tc, s21_asin_9);
  tcase_add_test(tc, s21_asin_10);
  tcase_add_test(tc, s21_asin_11);
  tcase_add_test(tc, s21_asin_12);
  tcase_add_test(tc, s21_asin_13);
  tcase_add_test(tc, s21_asin_14);
  tcase_add_test(tc, s21_asin_15);

  suite_add_tcase(s, tc);

  return s;
}
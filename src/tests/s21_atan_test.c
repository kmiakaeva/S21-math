#include "s21_test.h"

START_TEST(s21_atan_1) {
  for (double i = 0.999; i > 0; i -= 0.001) {
    ck_assert_double_eq_tol(atan(i), s21_atan(i), 1e-06);
  };
}
END_TEST

START_TEST(s21_atan_2) {
  for (double i = 0.0; i > -1; i -= 0.001) {
    ck_assert_double_eq_tol(atan(i), s21_atan(i), 1e-06);
  };
}
END_TEST

START_TEST(s21_atan_3) {
  ck_assert_double_eq_tol(atan(1), s21_atan(1), 1e-06);
  ck_assert_double_eq_tol(atan(-1), s21_atan(-1), 1e-06);
}
END_TEST

START_TEST(s21_atan_4) {
  for (double i = 100; i >= -100; i -= 10) {
    ck_assert_double_eq_tol(atan(i), s21_atan(i), 1e-06);
  }
}
END_TEST

START_TEST(s21_atan_5) {
  for (double i = 100000; i >= -100000; i -= 100) {
    ck_assert_double_eq_tol(atan(i), s21_atan(i), 1e-06);
  }
}
END_TEST

START_TEST(s21_atan_nan) {
  ck_assert_int_eq(isnan(atan(S21_NAN)), isnan(s21_atan(S21_NAN)));
}
END_TEST

END_TEST

START_TEST(s21_atan_inf) {
  // 1.570796
  ck_assert_double_eq_tol(atan(S21_INF), s21_atan(S21_INF), 1e-06);
}
END_TEST

START_TEST(s21_atan_inf_neg) {
  // -1.570796
  ck_assert_double_eq_tol(atan(-S21_INF), s21_atan(-S21_INF), 1e-06);
}
END_TEST

START_TEST(s21_atan_min_double) {
  // 0.0
  ck_assert_ldouble_eq_tol(s21_atan(S21_DOUBLE_MIN), atan(S21_DOUBLE_MIN),
                           1e-06);
}
END_TEST

START_TEST(s21_atan_min_double_neg) {
  // 0.0
  ck_assert_ldouble_eq_tol(s21_atan(S21_DOUBLE_MIN), atan(S21_DOUBLE_MIN),
                           1e-06);
}
END_TEST
//
START_TEST(s21_atan_7) {
  long double arr[] = {14.96, -25.1235, 0.23464, 0, 1, -1};
  for (int i = 0; i < 6; i++)
    ck_assert_double_eq_tol(s21_atan(arr[i]), atan(arr[i]), S21_EPS);
}
END_TEST

START_TEST(s21_atan_8) {
  ck_assert_double_eq(s21_atan(INFINITY), atan(INFINITY));
}
END_TEST

START_TEST(s21_atan_9) {
  ck_assert_double_nan(s21_atan(NAN));
  ck_assert_double_nan(atan(NAN));
}
END_TEST

START_TEST(s21_atan_10) {
  ck_assert_double_eq(s21_atan(-INFINITY), atan(-INFINITY));
}
END_TEST

Suite *s21_atan_suite(void) {
  Suite *s = suite_create("s21_atan_suite");
  TCase *tc = tcase_create("s21_atan_tc");

  tcase_add_test(tc, s21_atan_1);
  tcase_add_test(tc, s21_atan_2);
  tcase_add_test(tc, s21_atan_3);
  tcase_add_test(tc, s21_atan_4);
  tcase_add_test(tc, s21_atan_5);
  tcase_add_test(tc, s21_atan_nan);
  tcase_add_test(tc, s21_atan_inf);
  tcase_add_test(tc, s21_atan_inf_neg);
  tcase_add_test(tc, s21_atan_min_double);
  tcase_add_test(tc, s21_atan_min_double_neg);
  tcase_add_test(tc, s21_atan_7);
  tcase_add_test(tc, s21_atan_8);
  tcase_add_test(tc, s21_atan_9);
  tcase_add_test(tc, s21_atan_10);

  suite_add_tcase(s, tc);

  return s;
}
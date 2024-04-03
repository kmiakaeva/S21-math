#include "s21_test.h"

START_TEST(s21_pow_inf_inf) {
  // inf
  ck_assert_ldouble_infinite(s21_pow(S21_INF, S21_INF));
}
END_TEST

START_TEST(s21_pow_inf_inf_negative) {
  // 0.0
  ck_assert_double_eq(s21_pow(S21_INF, -S21_INF), pow(S21_INF, -S21_INF));
}
END_TEST

START_TEST(s21_pow_inf_nan) {
  // nan
  ck_assert_ldouble_nan(s21_pow(S21_INF, S21_NAN));
}
END_TEST

START_TEST(s21_pow_inf_nan_negative) {
  // nan
  ck_assert_ldouble_nan(s21_pow(S21_INF, -S21_NAN));
}
END_TEST

START_TEST(s21_pow_inf_negative_inf) {
  // inf
  ck_assert_ldouble_infinite(s21_pow(-S21_INF, S21_INF));
}
END_TEST

START_TEST(s21_pow_inf_negative_inf_negative) {
  // 0.0
  ck_assert_double_eq(s21_pow(-S21_INF, -S21_INF), pow(-S21_INF, -S21_INF));
}
END_TEST

START_TEST(s21_pow_inf_negative_nan) {
  // nan
  ck_assert_ldouble_nan(s21_pow(-S21_INF, S21_NAN));
}
END_TEST

START_TEST(s21_pow_inf_negative_nan_negative) {
  // nan
  ck_assert_ldouble_nan(s21_pow(-S21_INF, -S21_NAN));
}
END_TEST

START_TEST(s21_pow_nan_inf) {
  // nan
  ck_assert_ldouble_nan(s21_pow(S21_NAN, S21_INF));
}
END_TEST

START_TEST(s21_pow_nan_inf_negative) {
  // nan
  ck_assert_ldouble_nan(s21_pow(S21_NAN, -S21_INF));
}
END_TEST

START_TEST(s21_pow_nan_nan) {
  // nan
  ck_assert_ldouble_nan(s21_pow(S21_NAN, S21_NAN));
}
END_TEST

START_TEST(s21_pow_nan_nan_negative) {
  // nan
  ck_assert_ldouble_nan(s21_pow(S21_NAN, -S21_NAN));
}
END_TEST

START_TEST(s21_pow_nan_negative_inf) {
  // nan
  ck_assert_ldouble_nan(s21_pow(-S21_NAN, S21_INF));
}
END_TEST

START_TEST(s21_pow_nan_negative_inf_negative) {
  // nan
  ck_assert_ldouble_nan(s21_pow(-S21_NAN, -S21_INF));
}
END_TEST

START_TEST(s21_pow_nan_negative_nan) {
  // nan
  ck_assert_ldouble_nan(s21_pow(-S21_NAN, S21_NAN));
}
END_TEST

START_TEST(s21_pow_nan_negative_nan_negative) {
  // nan
  ck_assert_ldouble_nan(s21_pow(-S21_NAN, -S21_NAN));
}
END_TEST

START_TEST(s21_pow_six_point_five_inf) {
  // inf
  ck_assert_ldouble_infinite(s21_pow(6.5, S21_INF));
}
END_TEST

START_TEST(s21_pow_six_point_five_inf_negative) {
  // -0.0
  ck_assert_double_eq(s21_pow(6.5, -S21_INF), pow(6.5, -S21_INF));
}
END_TEST

START_TEST(s21_pow_six_point_five_nan) {
  // nan
  ck_assert_ldouble_nan(s21_pow(6.5, S21_NAN));
}
END_TEST

START_TEST(s21_pow_six_point_five_nan_negative) {
  // nan
  ck_assert_ldouble_nan(s21_pow(6.5, -S21_NAN));
}
END_TEST

START_TEST(s21_pow_inf_six_point_five) {
  // inf
  ck_assert_ldouble_infinite(s21_pow(S21_INF, 6.5));
}
END_TEST

START_TEST(s21_pow_inf_negative_six_point_five) {
  // inf
  ck_assert_ldouble_infinite(s21_pow(-S21_INF, 6.5));
}
END_TEST

START_TEST(s21_pow_nan_six_point_five) {
  // nan
  ck_assert_ldouble_nan(s21_pow(S21_NAN, 6.5));
}
END_TEST

START_TEST(s21_pow_nan_negative_six_point_five) {
  // nan
  ck_assert_ldouble_nan(s21_pow(-S21_NAN, 6.5));
}
END_TEST

START_TEST(s21_pow_six_point_five_negative_inf) {
  // inf
  ck_assert_ldouble_infinite(s21_pow(-6.5, S21_INF));
}
END_TEST

START_TEST(s21_pow_six_point_five_negative_inf_negative) {
  // -0.0
  ck_assert_double_eq(s21_pow(-6.5, -S21_INF), pow(-6.5, -S21_INF));
}
END_TEST

START_TEST(s21_pow_six_point_five_negative_nan) {
  // nan
  ck_assert_ldouble_nan(s21_pow(-6.5, S21_NAN));
}
END_TEST

START_TEST(s21_pow_six_point_five_negative_nan_negative) {
  // nan
  ck_assert_ldouble_nan(s21_pow(-6.5, -S21_NAN));
}
END_TEST

START_TEST(s21_pow_inf_six_point_five_negative) {
  // 0.0
  ck_assert_double_eq(s21_pow(S21_INF, -6.5), pow(S21_INF, -6.5));
}
END_TEST

START_TEST(s21_pow_inf_negative_six_point_five_negative) {
  // 0.0
  ck_assert_double_eq(s21_pow(-S21_INF, -6.5), pow(-S21_INF, -6.5));
}
END_TEST

START_TEST(s21_pow_nan_six_point_five_negative) {
  // nan
  ck_assert_ldouble_nan(s21_pow(S21_NAN, -6.5));
}
END_TEST

START_TEST(s21_pow_nan_negative_six_point_five_negative) {
  // nan
  ck_assert_ldouble_nan(s21_pow(-S21_NAN, -6.5));
}
END_TEST

START_TEST(s21_pow_six_inf) {
  // inf
  ck_assert_ldouble_infinite(s21_pow(6, S21_INF));
}
END_TEST

START_TEST(s21_pow_six_inf_negative) {
  // -0.0
  ck_assert_double_eq(s21_pow(6, -S21_INF), pow(6, -S21_INF));
}
END_TEST

START_TEST(s21_pow_six_nan) {
  // nan
  ck_assert_ldouble_nan(s21_pow(6, S21_NAN));
}
END_TEST

START_TEST(s21_pow_six_nan_negative) {
  // nan
  ck_assert_ldouble_nan(s21_pow(6, -S21_NAN));
}
END_TEST

START_TEST(s21_pow_inf_six) {
  // inf
  ck_assert_ldouble_infinite(s21_pow(S21_INF, 6));
}
END_TEST

START_TEST(s21_pow_inf_negative_six) {
  // inf
  ck_assert_ldouble_infinite(s21_pow(-S21_INF, 6));
}
END_TEST

START_TEST(s21_pow_nan_six) {
  // nan
  ck_assert_ldouble_nan(s21_pow(S21_NAN, 6));
}
END_TEST

START_TEST(s21_pow_nan_negative_six) {
  // nan
  ck_assert_ldouble_nan(s21_pow(-S21_NAN, 6));
}
END_TEST

START_TEST(s21_pow_six_negative_inf) {
  // inf
  ck_assert_ldouble_infinite(s21_pow(-6, S21_INF));
}
END_TEST

START_TEST(s21_pow_six_negative_inf_negative) {
  // -0.0
  ck_assert_double_eq(s21_pow(-6, -S21_INF), pow(-6, -S21_INF));
}
END_TEST

START_TEST(s21_pow_six_negative_nan) {
  // nan
  ck_assert_ldouble_nan(s21_pow(-6, S21_NAN));
}
END_TEST

START_TEST(s21_pow_six_negative_nan_negative) {
  // nan
  ck_assert_ldouble_nan(s21_pow(-6, -S21_NAN));
}
END_TEST

START_TEST(s21_pow_inf_six_negative) {
  // 0.0
  ck_assert_double_eq(s21_pow(S21_INF, -6), pow(S21_INF, -6));
}
END_TEST

START_TEST(s21_pow_inf_negative_six_negative) {
  // 0.0
  ck_assert_double_eq(s21_pow(-S21_INF, -6), pow(-S21_INF, -6));
}
END_TEST

START_TEST(s21_pow_nan_six_negative) {
  // nan
  ck_assert_ldouble_nan(s21_pow(S21_NAN, -6));
}
END_TEST

START_TEST(s21_pow_nan_negative_six_negative) {
  // nan
  ck_assert_ldouble_nan(s21_pow(-S21_NAN, -6));
}
END_TEST

START_TEST(s21_pow_one_inf) {
  // 1.0
  ck_assert_double_eq(s21_pow(1, S21_INF), pow(1, S21_INF));
}
END_TEST

START_TEST(s21_pow_one_inf_negative) {
  // -0.0
  ck_assert_double_eq(s21_pow(1, -S21_INF), pow(1, -S21_INF));
}
END_TEST

START_TEST(s21_pow_one_nan) {
  // 1.0
  ck_assert_double_eq(s21_pow(1, S21_NAN), pow(1, S21_NAN));
}
END_TEST

START_TEST(s21_pow_one_nan_negative) {
  // 1.0
  ck_assert_double_eq(s21_pow(1, -S21_NAN), pow(1, -S21_NAN));
}
END_TEST

START_TEST(s21_pow_inf_one) {
  // inf
  ck_assert_ldouble_infinite(s21_pow(S21_INF, 1));
}
END_TEST

START_TEST(s21_pow_inf_negative_one) {
  // inf
  ck_assert_ldouble_infinite(s21_pow(-S21_INF, 1));
}
END_TEST

START_TEST(s21_pow_nan_one) {
  // nan
  ck_assert_ldouble_nan(s21_pow(S21_NAN, 1));
}
END_TEST

START_TEST(s21_pow_nan_negative_one) {
  // nan
  ck_assert_ldouble_nan(s21_pow(-S21_NAN, 1));
}
END_TEST

START_TEST(s21_pow_one_negative_inf) {
  // 1.0
  ck_assert_double_eq(s21_pow(-1, S21_INF), pow(-1, S21_INF));
}
END_TEST

START_TEST(s21_pow_one_negative_inf_negative) {
  // -0.0
  ck_assert_double_eq(s21_pow(-1, -S21_INF), pow(-1, -S21_INF));
}
END_TEST

START_TEST(s21_pow_one_negative_nan) {
  // nan
  ck_assert_ldouble_nan(s21_pow(-1, S21_NAN));
}
END_TEST

START_TEST(s21_pow_one_negative_nan_negative) {
  // nan
  ck_assert_ldouble_nan(s21_pow(-1, -S21_NAN));
}
END_TEST

START_TEST(s21_pow_inf_one_negative) {
  // 0.0
  ck_assert_double_eq(s21_pow(S21_INF, -1), pow(S21_INF, -1));
}
END_TEST

START_TEST(s21_pow_inf_negative_one_negative) {
  // 0.0
  ck_assert_double_eq(s21_pow(-S21_INF, -1), pow(-S21_INF, -1));
}
END_TEST

START_TEST(s21_pow_nan_one_negative) {
  // nan
  ck_assert_ldouble_nan(s21_pow(S21_NAN, -1));
}
END_TEST

START_TEST(s21_pow_nan_negative_one_negative) {
  // nan
  ck_assert_ldouble_nan(s21_pow(-S21_NAN, -1));
}
END_TEST

START_TEST(s21_pow_zero_inf) {
  // 0.0
  ck_assert_double_eq(s21_pow(0, S21_INF), pow(0, S21_INF));
}
END_TEST

START_TEST(s21_pow_zero_inf_negative) {
  // -0.0
  ck_assert_double_eq(s21_pow(0, -S21_INF), pow(0, -S21_INF));
}
END_TEST

START_TEST(s21_pow_zero_nan) {
  // nan
  ck_assert_ldouble_nan(s21_pow(0, S21_NAN));
}
END_TEST

START_TEST(s21_pow_zero_nan_negative) {
  // nan
  ck_assert_ldouble_nan(s21_pow(0, -S21_NAN));
}
END_TEST

START_TEST(s21_pow_inf_zero) {
  // 1.0
  ck_assert_double_eq(s21_pow(S21_INF, 0), pow(S21_INF, 0));
}
END_TEST

START_TEST(s21_pow_inf_negative_zero) {
  // 1.0
  ck_assert_double_eq(s21_pow(-S21_INF, 0), pow(-S21_INF, 0));
}
END_TEST

START_TEST(s21_pow_nan_zero) {
  // 1.0
  ck_assert_double_eq(s21_pow(S21_NAN, 0), pow(S21_NAN, 0));
}
END_TEST

START_TEST(s21_pow_nan_negative_zero) {
  // 1.0
  ck_assert_double_eq(s21_pow(-S21_NAN, 0), pow(-S21_NAN, 0));
}
END_TEST

START_TEST(s21_pow_zero_negative_inf) {
  // 0.0
  ck_assert_double_eq(s21_pow(-0.0, S21_INF), pow(-0.0, S21_INF));
}
END_TEST

START_TEST(s21_pow_zero_negative_inf_negative) {
  // -0.0
  ck_assert_double_eq(s21_pow(-0.0, -S21_INF), pow(-0.0, -S21_INF));
}
END_TEST

START_TEST(s21_pow_zero_negative_nan) {
  // nan
  ck_assert_ldouble_nan(s21_pow(-0.0, S21_NAN));
}
END_TEST

START_TEST(s21_pow_zero_negative_nan_negative) {
  // nan
  ck_assert_ldouble_nan(s21_pow(-0.0, -S21_NAN));
}
END_TEST

START_TEST(s21_pow_inf_zero_negative) {
  // 0.0
  ck_assert_double_eq(s21_pow(S21_INF, -0), pow(S21_INF, -0));
}
END_TEST

START_TEST(s21_pow_inf_negative_zero_negative) {
  // 0.0
  ck_assert_double_eq(s21_pow(-S21_INF, -0), pow(-S21_INF, -0));
}
END_TEST

START_TEST(s21_pow_nan_zero_negative) {
  // 1.0
  ck_assert_double_eq(s21_pow(S21_NAN, -0.0), pow(S21_NAN, -0.0));
}
END_TEST

START_TEST(s21_pow_nan_negative_zero_negative) {
  // 1.0
  ck_assert_double_eq(s21_pow(-S21_NAN, -0.0), pow(-S21_NAN, -0.0));
}
END_TEST

START_TEST(s21_pow_1) {
  ck_assert_double_eq_tol(s21_pow(20, 0.4), pow(20, 0.4), S21_EPS);
}
END_TEST

START_TEST(s21_pow_2) {
  ck_assert_double_nan(s21_pow(-20, 0.4));
  ck_assert_double_nan(pow(-20, 0.4));
}
END_TEST

START_TEST(s21_pow_3) {
  ck_assert_double_eq(s21_pow(INFINITY, INFINITY), pow(INFINITY, INFINITY));
}
END_TEST

START_TEST(s21_pow_4) {
  ck_assert_double_eq(s21_pow(-INFINITY, -INFINITY), pow(-INFINITY, -INFINITY));
}
END_TEST

START_TEST(s21_pow_5) {
  ck_assert_double_nan(s21_pow(NAN, NAN));
  ck_assert_double_nan(pow(NAN, NAN));
}
END_TEST

START_TEST(s21_pow_6) {
  ck_assert_double_nan(s21_pow(INFINITY, NAN));
  ck_assert_double_nan(pow(INFINITY, NAN));
}
END_TEST

START_TEST(s21_pow_7) {
  ck_assert_double_nan(s21_pow(NAN, INFINITY));
  ck_assert_double_nan(pow(NAN, INFINITY));
}
END_TEST

START_TEST(s21_pow_8) {
  ck_assert_double_nan(s21_pow(-INFINITY, NAN));
  ck_assert_double_nan(pow(-INFINITY, NAN));
}
END_TEST

START_TEST(s21_pow_9) {
  ck_assert_double_nan(s21_pow(NAN, -INFINITY));
  ck_assert_double_nan(pow(NAN, -INFINITY));
}
END_TEST

START_TEST(s21_pow_10) {
  ck_assert_double_eq(s21_pow(-INFINITY, INFINITY), pow(-INFINITY, INFINITY));
}
END_TEST

START_TEST(s21_pow_11) {
  ck_assert_double_eq(s21_pow(INFINITY, -INFINITY), pow(INFINITY, -INFINITY));
}
END_TEST

START_TEST(s21_pow_12) {
  ck_assert_double_eq_tol(s21_pow(12.69, 0), pow(12.69, 0), 0.000001);
}
END_TEST

START_TEST(s21_pow_13) {
  ck_assert_double_eq_tol(s21_pow(-20.63, 3), pow(-20.63, 3), 0.000001);
}
END_TEST

START_TEST(s21_pow_14) {
  ck_assert_double_eq_tol(s21_pow(-20.63, 6), pow(-20.63, 6), 0.000001);
}
END_TEST

START_TEST(s21_pow_15) {
  ck_assert_double_eq_tol(s21_pow(-INFINITY, 0), pow(-INFINITY, 0), 0.000001);
}
END_TEST

START_TEST(s21_pow_16) {
  ck_assert_double_eq_tol(s21_pow(INFINITY, 0), pow(INFINITY, 0), 0.000001);
}
END_TEST

START_TEST(s21_pow_17) {
  ck_assert_double_eq_tol(s21_pow(NAN, 0), pow(NAN, 0), 0.000001);
}
END_TEST

START_TEST(s21_pow_18) {
  ck_assert_double_eq(s21_pow(0, -INFINITY), pow(0, -INFINITY));
}
END_TEST

START_TEST(s21_pow_19) {
  ck_assert_double_eq_tol(s21_pow(0, INFINITY), pow(0, INFINITY), 0.000001);
}
END_TEST

START_TEST(s21_pow_20) {
  ck_assert_double_nan(s21_pow(0, NAN));
  ck_assert_double_nan(pow(0, NAN));
}
END_TEST

START_TEST(s21_pow_21) { ck_assert_double_eq(s21_pow(0, 0), pow(0, 0)); }
END_TEST

START_TEST(s21_pow_22) {
  ck_assert_double_eq(s21_pow(16894.2629, 1545), pow(16894.2629, 1545));
}
END_TEST

START_TEST(s21_pow_23) {
  ck_assert_double_eq(s21_pow(16894.2629, -1545), pow(16894.2629, -1545));
}
END_TEST

START_TEST(s21_pow_24) {
  ck_assert_double_eq(s21_pow(-16894.2629, 1545), pow(-16894.2629, 1545));
}
END_TEST

START_TEST(s21_pow_25) {
  ck_assert_double_eq(s21_pow(-16894.2629, -1545), pow(-16894.2629, -1545));
}
END_TEST

START_TEST(s21_pow_26) {
  double base = 0;
  double exp = 0;
  ck_assert_double_eq(pow(base, exp), s21_pow(base, exp));
}
END_TEST

START_TEST(s21_pow_27) {
  double base = -2;
  double exp = 0.3;
  ck_assert_ldouble_nan(pow(base, exp));
  ck_assert_ldouble_nan(s21_pow(base, exp));
}
END_TEST

START_TEST(s21_pow_28) {
  double base = 0;
  double exp = -123;
  ck_assert_ldouble_infinite(pow(base, exp));
  ck_assert_ldouble_infinite(s21_pow(base, exp));
}
END_TEST

START_TEST(s21_pow_29) {
  double base = S21_NAN;
  double exp = -123;
  ck_assert_ldouble_nan(pow(base, exp));
  ck_assert_ldouble_nan(s21_pow(base, exp));
}
END_TEST

START_TEST(s21_pow_30) {
  double base = 12;
  double exp = S21_NAN;
  ck_assert_ldouble_nan(pow(base, exp));
  ck_assert_ldouble_nan(s21_pow(base, exp));
}
END_TEST

START_TEST(s21_pow_31) {
  double base = S21_INF;
  double exp = 20000;
  ck_assert_ldouble_infinite(pow(base, exp));
  ck_assert_ldouble_infinite(s21_pow(base, exp));
}
END_TEST

START_TEST(s21_pow_32) {
  double base = 12;
  double exp = -S21_INF;
  ck_assert_double_eq(pow(base, exp), s21_pow(base, exp));
}
END_TEST

START_TEST(s21_pow_33) {
  double base = 12;
  double exp = 1.1;
  ck_assert_double_eq_tol(pow(base, exp), s21_pow(base, exp), S21_EPS);
}
END_TEST

START_TEST(s21_pow_34) {
  double base = 0.9;
  double exp = S21_DOUBLE_MAX - 1;
  ck_assert_double_eq_tol(pow(base, exp), s21_pow(base, exp), S21_EPS);
}
END_TEST

START_TEST(s21_pow_35) {
  double base = 25.25;
  double exp = 0.5;
  ck_assert_double_eq_tol(pow(base, exp), s21_pow(base, exp), S21_EPS);
}
END_TEST

START_TEST(s21_pow_36) {
  double base = -S21_INF;
  double exp = -4;
  ck_assert_double_eq_tol(pow(base, exp), s21_pow(base, exp), S21_EPS);
}
END_TEST

Suite *s21_pow_suite(void) {
  Suite *s = suite_create("s21_pow_suite");
  TCase *tc = tcase_create("s21_pow_tc");

  tcase_add_test(tc, s21_pow_inf_inf);
  tcase_add_test(tc, s21_pow_inf_inf_negative);
  tcase_add_test(tc, s21_pow_inf_nan);
  tcase_add_test(tc, s21_pow_inf_nan_negative);
  tcase_add_test(tc, s21_pow_inf_negative_inf);
  tcase_add_test(tc, s21_pow_inf_negative_inf_negative);
  tcase_add_test(tc, s21_pow_inf_negative_nan);
  tcase_add_test(tc, s21_pow_inf_negative_nan_negative);
  tcase_add_test(tc, s21_pow_nan_inf);
  tcase_add_test(tc, s21_pow_nan_inf_negative);
  tcase_add_test(tc, s21_pow_nan_nan);
  tcase_add_test(tc, s21_pow_nan_nan_negative);
  tcase_add_test(tc, s21_pow_nan_negative_inf);
  tcase_add_test(tc, s21_pow_nan_negative_inf_negative);
  tcase_add_test(tc, s21_pow_nan_negative_nan);
  tcase_add_test(tc, s21_pow_nan_negative_nan_negative);
  tcase_add_test(tc, s21_pow_six_point_five_inf);
  tcase_add_test(tc, s21_pow_six_point_five_inf_negative);
  tcase_add_test(tc, s21_pow_six_point_five_nan);
  tcase_add_test(tc, s21_pow_six_point_five_nan_negative);
  tcase_add_test(tc, s21_pow_inf_six_point_five);
  tcase_add_test(tc, s21_pow_inf_negative_six_point_five);
  tcase_add_test(tc, s21_pow_nan_six_point_five);
  tcase_add_test(tc, s21_pow_nan_negative_six_point_five);
  tcase_add_test(tc, s21_pow_six_point_five_negative_inf);
  tcase_add_test(tc, s21_pow_six_point_five_negative_inf_negative);
  tcase_add_test(tc, s21_pow_six_point_five_negative_nan);
  tcase_add_test(tc, s21_pow_six_point_five_negative_nan_negative);
  tcase_add_test(tc, s21_pow_inf_six_point_five_negative);
  tcase_add_test(tc, s21_pow_inf_negative_six_point_five_negative);
  tcase_add_test(tc, s21_pow_nan_six_point_five_negative);
  tcase_add_test(tc, s21_pow_nan_negative_six_point_five_negative);
  tcase_add_test(tc, s21_pow_six_inf);
  tcase_add_test(tc, s21_pow_six_inf_negative);
  tcase_add_test(tc, s21_pow_six_nan);
  tcase_add_test(tc, s21_pow_six_nan_negative);
  tcase_add_test(tc, s21_pow_inf_six);
  tcase_add_test(tc, s21_pow_inf_negative_six);
  tcase_add_test(tc, s21_pow_nan_six);
  tcase_add_test(tc, s21_pow_nan_negative_six);
  tcase_add_test(tc, s21_pow_six_negative_inf);
  tcase_add_test(tc, s21_pow_six_negative_inf_negative);
  tcase_add_test(tc, s21_pow_six_negative_nan);
  tcase_add_test(tc, s21_pow_six_negative_nan_negative);
  tcase_add_test(tc, s21_pow_inf_six_negative);
  tcase_add_test(tc, s21_pow_inf_negative_six_negative);
  tcase_add_test(tc, s21_pow_nan_six_negative);
  tcase_add_test(tc, s21_pow_nan_negative_six_negative);
  tcase_add_test(tc, s21_pow_one_inf);
  tcase_add_test(tc, s21_pow_one_inf_negative);
  tcase_add_test(tc, s21_pow_one_nan);
  tcase_add_test(tc, s21_pow_one_nan_negative);
  tcase_add_test(tc, s21_pow_inf_one);
  tcase_add_test(tc, s21_pow_inf_negative_one);
  tcase_add_test(tc, s21_pow_nan_one);
  tcase_add_test(tc, s21_pow_nan_negative_one);
  tcase_add_test(tc, s21_pow_one_negative_inf);
  tcase_add_test(tc, s21_pow_one_negative_inf_negative);
  tcase_add_test(tc, s21_pow_one_negative_nan);
  tcase_add_test(tc, s21_pow_one_negative_nan_negative);
  tcase_add_test(tc, s21_pow_inf_one_negative);
  tcase_add_test(tc, s21_pow_inf_negative_one_negative);
  tcase_add_test(tc, s21_pow_nan_one_negative);
  tcase_add_test(tc, s21_pow_nan_negative_one_negative);
  tcase_add_test(tc, s21_pow_zero_inf);
  tcase_add_test(tc, s21_pow_zero_inf_negative);
  tcase_add_test(tc, s21_pow_zero_nan);
  tcase_add_test(tc, s21_pow_zero_nan_negative);
  tcase_add_test(tc, s21_pow_inf_zero);
  tcase_add_test(tc, s21_pow_inf_negative_zero);
  tcase_add_test(tc, s21_pow_nan_zero);
  tcase_add_test(tc, s21_pow_nan_negative_zero);
  tcase_add_test(tc, s21_pow_zero_negative_inf);
  tcase_add_test(tc, s21_pow_zero_negative_inf_negative);
  tcase_add_test(tc, s21_pow_zero_negative_nan);
  tcase_add_test(tc, s21_pow_zero_negative_nan_negative);
  tcase_add_test(tc, s21_pow_inf_zero_negative);
  tcase_add_test(tc, s21_pow_inf_negative_zero_negative);
  tcase_add_test(tc, s21_pow_nan_zero_negative);
  tcase_add_test(tc, s21_pow_nan_negative_zero_negative);

  tcase_add_test(tc, s21_pow_1);
  tcase_add_test(tc, s21_pow_2);
  tcase_add_test(tc, s21_pow_3);
  tcase_add_test(tc, s21_pow_4);
  tcase_add_test(tc, s21_pow_5);
  tcase_add_test(tc, s21_pow_6);
  tcase_add_test(tc, s21_pow_7);
  tcase_add_test(tc, s21_pow_8);
  tcase_add_test(tc, s21_pow_9);
  tcase_add_test(tc, s21_pow_10);
  tcase_add_test(tc, s21_pow_11);
  tcase_add_test(tc, s21_pow_12);
  tcase_add_test(tc, s21_pow_13);
  tcase_add_test(tc, s21_pow_14);
  tcase_add_test(tc, s21_pow_15);
  tcase_add_test(tc, s21_pow_16);
  tcase_add_test(tc, s21_pow_17);
  tcase_add_test(tc, s21_pow_18);
  tcase_add_test(tc, s21_pow_19);
  tcase_add_test(tc, s21_pow_20);
  tcase_add_test(tc, s21_pow_21);
  tcase_add_test(tc, s21_pow_22);
  tcase_add_test(tc, s21_pow_23);
  tcase_add_test(tc, s21_pow_24);
  tcase_add_test(tc, s21_pow_25);
  tcase_add_test(tc, s21_pow_26);
  tcase_add_test(tc, s21_pow_27);
  tcase_add_test(tc, s21_pow_28);
  tcase_add_test(tc, s21_pow_29);
  tcase_add_test(tc, s21_pow_30);
  tcase_add_test(tc, s21_pow_31);
  tcase_add_test(tc, s21_pow_32);
  tcase_add_test(tc, s21_pow_33);
  tcase_add_test(tc, s21_pow_34);
  tcase_add_test(tc, s21_pow_35);
  tcase_add_test(tc, s21_pow_36);

  suite_add_tcase(s, tc);

  return s;
}
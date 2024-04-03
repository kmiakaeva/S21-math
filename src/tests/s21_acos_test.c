#include "s21_test.h"

START_TEST(s21_acos_1) {
  for (double i = 0.999; i > 0; i -= 0.001) {
    ck_assert_double_eq_tol(acos(i), s21_acos(i), S21_EPS);
  };
}
END_TEST

START_TEST(s21_acos_2) {
  for (double i = 0; i > -1; i -= 0.001) {
    ck_assert_double_eq_tol(acos(i), s21_acos(i), S21_EPS);
  };
}
END_TEST

START_TEST(s21_acos_3) {
  ck_assert_double_eq_tol(acos(1), s21_acos(1), S21_EPS);
  ck_assert_double_eq_tol(acos(-1), s21_acos(-1), S21_EPS);
}
END_TEST

START_TEST(s21_acos_4) {
  for (double i = 100; i >= -100; i -= 10) {
    if (i) ck_assert(s21_is_nan(acos(i)) && s21_is_nan(s21_acos(i)));
  }
}
END_TEST

START_TEST(s21_acos_5) {
  ck_assert_ldouble_eq_tol(s21_acos(S21_DOUBLE_MIN), acos(S21_DOUBLE_MIN),
                           S21_EPS);
}
END_TEST

START_TEST(s21_acos_6) {
  ck_assert_ldouble_eq_tol(s21_acos(S21_DOUBLE_MIN), acos(S21_DOUBLE_MIN),
                           S21_EPS);
}
END_TEST

START_TEST(s21_acos_7) {
  ck_assert_double_eq_tol(s21_acos(0), acos(0), S21_EPS);
}
END_TEST

START_TEST(s21_acos_8) {
  ck_assert_double_eq_tol(s21_acos(-0.369), acos(-0.369), S21_EPS);
}
END_TEST

START_TEST(s21_acos_9) {
  ck_assert_double_eq_tol(s21_acos(-1), acos(-1), S21_EPS);
}
END_TEST

START_TEST(s21_acos_10) {
  ck_assert_double_nan(s21_acos(INFINITY));
  ck_assert_double_nan(acos(INFINITY));
}
END_TEST

START_TEST(s21_acos_11) {
  ck_assert_double_nan(s21_acos(NAN));
  ck_assert_double_nan(acos(NAN));
}
END_TEST

START_TEST(s21_acos_12) {
  ck_assert_double_nan(s21_acos(-INFINITY));
  ck_assert_double_nan(acos(-INFINITY));
}
END_TEST

START_TEST(s21_acos_13) {
  ck_assert_double_nan(s21_acos(16));
  ck_assert_double_nan(acos(16));
}
END_TEST

START_TEST(s21_acos_14) {
  ck_assert_double_nan(s21_acos(-16));
  ck_assert_double_nan(acos(-16));
}
END_TEST

START_TEST(s21_acos_15) {
  ck_assert_double_eq_tol(s21_acos(1), acos(1), S21_EPS);
}
END_TEST

Suite *s21_acos_suite(void) {
  Suite *s = suite_create("s21_acos_suite");
  TCase *tc = tcase_create("s21_acos_tc");

  tcase_add_test(tc, s21_acos_1);
  tcase_add_test(tc, s21_acos_2);
  tcase_add_test(tc, s21_acos_3);
  tcase_add_test(tc, s21_acos_4);
  tcase_add_test(tc, s21_acos_5);
  tcase_add_test(tc, s21_acos_6);
  tcase_add_test(tc, s21_acos_7);
  tcase_add_test(tc, s21_acos_8);
  tcase_add_test(tc, s21_acos_9);
  tcase_add_test(tc, s21_acos_10);
  tcase_add_test(tc, s21_acos_11);
  tcase_add_test(tc, s21_acos_12);
  tcase_add_test(tc, s21_acos_13);
  tcase_add_test(tc, s21_acos_14);
  tcase_add_test(tc, s21_acos_15);

  suite_add_tcase(s, tc);

  return s;
}
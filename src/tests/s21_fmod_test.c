#include "s21_test.h"

START_TEST(s21_fmod_inf) {
  ck_assert_ldouble_eq(s21_fmod(5, S21_INF), fmod(5, S21_INF));
}
END_TEST

START_TEST(s21_fmod_zero_negative) {
  ck_assert_ldouble_eq(s21_fmod(-0.0, 1), fmod(-0.0, 1));
}
END_TEST

START_TEST(s21_fmod_zero) {
  ck_assert_ldouble_eq(s21_fmod(0.0, 1), fmod(0.0, 1));
}
END_TEST

START_TEST(s21_fmod_one_negative) {
  ck_assert_ldouble_eq(s21_fmod(-1, 1), fmod(-1, 1));
}
END_TEST

START_TEST(s21_fmod_one) {
  ck_assert_ldouble_eq(s21_fmod(1.0, 5), fmod(1.0, 5));
}
END_TEST

START_TEST(s21_fmod_num) { ck_assert_ldouble_eq(s21_fmod(4, 2), fmod(4, 2)); }
END_TEST

START_TEST(s21_fmod_num_2_negative) {
  ck_assert_ldouble_eq(s21_fmod(-1000.56, 2), fmod(-1000.56, 2));
}
END_TEST

START_TEST(s21_fmod_num_2) {
  ck_assert_ldouble_eq(s21_fmod(1000.2645, 5), fmod(1000.2645, 5));
}
END_TEST

START_TEST(s21_fmod_num_3) {
  ck_assert_ldouble_eq(s21_fmod(853321.123, 1.0), fmod(853321.123, 1.0));
}
END_TEST

Suite *s21_fmod_suite(void) {
  Suite *s = suite_create("s21_fmod_suite");
  TCase *tc = tcase_create("s21_fmod_tc");

  tcase_add_test(tc, s21_fmod_inf);
  tcase_add_test(tc, s21_fmod_zero_negative);
  tcase_add_test(tc, s21_fmod_zero);
  tcase_add_test(tc, s21_fmod_one_negative);
  tcase_add_test(tc, s21_fmod_one);
  tcase_add_test(tc, s21_fmod_num);
  tcase_add_test(tc, s21_fmod_num_2_negative);
  tcase_add_test(tc, s21_fmod_num_2);
  tcase_add_test(tc, s21_fmod_num_3);

  suite_add_tcase(s, tc);

  return s;
}

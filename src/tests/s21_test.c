#include "s21_test.h"

int main(void) {
  Suite *s21_suites[] = {
      s21_abs_suite(),  s21_acos_suite(),  s21_asin_suite(), s21_atan_suite(),
      s21_fabs_suite(), s21_pow_suite(),   s21_sqrt_suite(), s21_ceil_suite(),
      s21_fmod_suite(), s21_floor_suite(), s21_exp_suite(),  s21_cos_suite(),
      s21_sin_suite(),  s21_tan_suite(),   s21_log_suite(),  NULL};

  for (int i = 0; s21_suites[i] != NULL; i++) {
    run_s21_test(s21_suites[i]);
  }

  return 0;
}

int run_s21_test(Suite *s21_suite) {
  SRunner *sr = srunner_create(s21_suite);

  srunner_set_fork_status(sr, CK_NOFORK);
  srunner_run_all(sr, CK_NORMAL);
  srunner_free(sr);

  printf("\n");

  return 0;
}
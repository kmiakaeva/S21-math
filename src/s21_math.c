#include "s21_math.h"

int s21_abs(int x) { return (x < 0) ? -x : x; }

long double s21_acos(double x) {
  if (x == 1) {
    x = 0;
  } else if (x == -1) {
    x = S21_M_PI;
  } else if (x == 0) {
    x = S21_M_PI_2;
  } else if (0 < x && x < 1) {
    x = s21_atan(s21_sqrt(1 - x * x) / x);
  } else if (x < 0 && x > -1) {
    x = S21_M_PI + s21_atan(s21_sqrt(1 - x * x) / x);
  } else {
    x = S21_NAN;
  }

  return x;
}

long double s21_asin(double x) {
  long double result = 0;

  if (s21_is_nan(x) || s21_fabs(x) > 1) {
    result = S21_NAN;
  } else if (x == 1) {
    result = S21_M_PI / 2;
  } else if (x == -1) {
    result = -S21_M_PI / 2;
  } else {
    result = s21_atan(x / s21_sqrt(1 - x * x));
  }

  return result;
}

long double s21_atan(double x) {
  double result = 0;

  if (x == S21_INF) {
    result = S21_M_PI / 2;
  } else if (x == -S21_INF) {
    result = -S21_M_PI / 2;
  } else if (s21_fabs(x) == 1.0) {
    result = x * S21_M_PI / 4.0;
  } else if (S21_ISNAN(x)) {
    result = S21_NAN;

  } else if (x > -1 && x < 1) {
    int the_sign = 1;
    double the_numerator = x;
    int the_denominator = 1;

    for (int i = 0; i < 250000; i++) {
      result += the_sign * the_numerator / the_denominator;

      the_sign *= -1;
      the_numerator *= x * x;
      the_denominator += 2;
    }

  } else if (x < -1 || x > 1) {
    int the_sign = 1;
    double the_numerator = x;
    int the_denominator = 1;
    double a = (S21_M_PI * s21_fabs(x)) / (2 * x);

    for (int i = 0; i < 15000; i++) {
      result += the_sign / (the_numerator * the_denominator);
      the_sign *= -1;
      the_numerator *= x * x;
      the_denominator += 2;
    }

    result = a - result;
  }

  return (result == S21_NAN) ? S21_NAN : result;
}

long double s21_ceil(double x) {
  long double result = S21_NAN;

  if (!s21_is_nan(x)) {
    if (x == s21_floor(x)) {
      result = (long double)x;
    } else if (x < 0 && s21_is_inf(x)) {
      result = -S21_INF;
    } else if (x > 0 && s21_is_inf(x)) {
      result = S21_INF;
    } else if (x > 0) {
      result = (long long int)x + 1;
    } else {
      result = (long long int)x;
    }
  }

  return result;
}

long double s21_cos(double x) {
  long double result = 0;

  if (s21_is_nan(x) || s21_fabs(x) == S21_INF) {
    result = S21_NAN;
  } else if (x == 0) {
    result = 1;
  } else if (x < 0) {
    result = s21_cos(-x);
  } else if (x > S21_M_PI * 2) {
    result = s21_cos(s21_fmod(x, 2 * S21_M_PI));
  } else {
    double pow_x = 1;

    for (int i = 0; i < 50; i++) {
      result += ((i & 1) ? -1 : 1) * pow_x / s21_fact(2 * i);
      pow_x *= x * x;
    }
  }

  return result;
}

long double s21_exp(double x) {
  long double result = 1;

  if (s21_is_nan(x)) {
    result = S21_NAN;
  } else if (s21_is_pos_inf(x)) {
    result = S21_INF;
  } else if (s21_is_neg_inf(x) || x < -14.5) {
    result = 0.0;

  } else {
    long double step = 1;

    for (int i = 1; i < 100000 && result <= S21_DOUBLE_MAX; i++) {
      step *= x / i;
      result += step;
    }

    if (result > S21_DOUBLE_MAX) {
      result = S21_INF;
    }
  }

  return result;
}

long double s21_fabs(double x) {
  return (s21_is_nan(x) || s21_is_inf(x)) ? (S21_SIGNBIT(x) ? -x : x)
                                          : s21_fabsl(x);
}

long double s21_floor(double x) {
  long double result = S21_NAN;

  if (!s21_is_nan(x)) {
    if (s21_fmod(x, 1.0) == 0.0) {
      result = (long double)x;
    } else if (x < 0 && s21_is_inf(x)) {
      result = -S21_INF;
    } else if (x > 0 && s21_is_inf(x)) {
      result = S21_INF;
    } else if (x < 0) {
      result = (long long int)x - 1;
    } else {
      result = (long long int)x;
    }
  }

  return result;
}

long double s21_fmod(double x, double y) {
  long double result = S21_NAN;

  if (!s21_is_nan(x) && !s21_is_nan(y)) {
    if (y) {
      x = (long double)x;
      y = (long double)y;

      if (s21_is_inf(y)) {
        result = x;
      } else {
        result = x - (int)(x / y) * y;
      }

    } else {
      result = -S21_NAN;
    }
  }

  return result;
}

long double s21_log(double x) {
  if (x < 0) {
    x = S21_NAN;
  } else if (x == 0) {
    x = -S21_INF;
  } else if (!S21_ISNAN(x) && !S21_ISFINITE(x)) {
    x = S21_INF;
  } else if (S21_ISNORMAL(x)) {
    double arg = (x - 1) / (x + 1);
    double mult = arg * 2;
    double arg_2 = arg * arg;
    x = 0;

    for (int i = 1; i < 5000000; i += 2) {
      x += mult / i;
      mult *= arg_2;
    }
  }

  return x;
}

long double s21_pow(double base, double exp) {
  long double result = 0;
  int is_neg_zero = S21_SIGNBIT(base) && base == 0;  // -0.0

  if (base == 1 || (base == -1 && s21_is_inf(exp)) || exp == 0) {
    result = 1;

  } else if ((base == -S21_INF && exp == -1) || (is_neg_zero && exp == 1)) {
    result = S21_NEG_ZERO;

  } else if ((s21_is_inf(base) && (exp < 0)) || (base == 0 && exp == S21_INF)) {
    result = 0;

  } else if ((base == -S21_INF && exp == 1) || (is_neg_zero && exp == -1)) {
    result = -S21_INF;

  } else if ((base < 0 && exp == S21_INF) ||
             (s21_is_inf(base) && !s21_is_nan(exp))) {
    result = S21_INF;

  } else if ((s21_is_nan(base) && S21_SIGNBIT(base) == 0) ||
             (s21_is_nan(base) && s21_fabs(exp) == 1) ||
             (!s21_is_nan(base) && s21_is_nan(exp) && S21_SIGNBIT(exp) == 0)) {
    result = S21_NAN;

  } else if (base < 0 &&
             (!s21_is_nan(exp) && !s21_is_inf(exp) && s21_fmod(exp, 1) != 0)) {
    result = -S21_NAN;

  } else {
    int temp = (base < 0 && ((int)exp % 2 != 0));
    base = (base < 0) ? s21_fabs(base) : base;
    result = (temp ? -1 : 1) * s21_exp(exp * s21_log(base));
  }

  return result;
}

long double s21_sin(double x) {
  long double result = 0;

  if (s21_is_nan(x) || s21_fabs(x) == S21_INF) {
    result = S21_NAN;
  } else if (x == 0) {
    result = 0;
  } else if (x < 0) {
    result = -s21_sin(-x);
  } else if (x > S21_M_PI * 2) {
    result = s21_sin(s21_fmod(x, 2 * S21_M_PI));
  } else {
    double pow_x = x;

    for (int i = 0; i < 50; i++) {
      result += ((i & 1) ? -1 : 1) * pow_x / s21_fact(1 + 2 * i);
      pow_x *= x * x;
    }
  }

  return result;
}

long double s21_sqrt(double x) {
  long double result = 0;

  if (x < 0) {
    result = -S21_NAN;
  } else if (s21_is_inf(x) || s21_is_nan(x) || (S21_SIGNBIT(x) && x == 0)) {
    result = x;
  } else {
    result = s21_pow(x, 0.5);
  }

  return result;
}

long double s21_tan(double x) { return s21_sin(x) / s21_cos(x); }
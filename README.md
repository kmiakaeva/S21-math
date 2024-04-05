# School 21. Math

Development of the math.h library. This library implements basic mathematical operations, which are then used in various algorithms.

### Math Functions Overview

| Function | Description | Status |
| -------- | ----------- |--------|
| int s21_abs(int x) | Computes absolute value of an integer value |   ☑️   |
| long double s21_acos(double x) | Computes arc cosine |   ☑️   |
| long double s21_asin(double x) | Computes arc sine |   ☑️   |
| long double s21_atan(double x) | Computes arc tangent |   ☑️   |
| long double s21_ceil(double x) | Returns the nearest integer not less than the given value |   ☑️   |
| long double s21_cos(double x) | Computes cosine |   ☑️   |
| long double s21_exp(double x) | Returns e raised to the given power |   ☑️   |
| long double s21_fabs(double x) | Computes absolute value of a floating-point value |   ☑️   |
| long double s21_floor(double x) | Returns the nearest integer not greater than the given value |   ☑️   |
| long double s21_fmod(double x, double y) | Remainder of the floating-point division operation |   ☑️   |
| long double s21_log(double x) | Computes natural logarithm |   ☑️   |
| long double s21_pow(double base, double exp) | Raises a number to the given power |   ☑️   |
| long double s21_sin(double x) | Computes sine |   ☑️   |
| long double s21_sqrt(double x) | Computes square root |   ☑️   |
| long double s21_tan(double x) | Computes tangent |   ☑️   |


## Run Locally
Before starting the project, you will need to install the Check library and the lcov and gcov utilities. Next, follow these steps:

1. Clone the project

```bash
  git clone git@github.com:kmiakaeva/S21-math.git
```

2. Go to the project directory

```bash
  cd S21-math
```

3. Go to the src folder

```bash
  cd src
```

4. Run make to build math.a

```bash
  make
```

5. Run test

```bash
  make test
```

6. Run to generate gcov report

```bash
  make gcov_report
```

### Additional commands

1. Run to clear assembly files

```bash
  make clean
```

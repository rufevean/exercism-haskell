#include "complex_numbers.h"
#include <math.h>
complex_t c_add(complex_t a, complex_t b) {
  complex_t res = {.real = a.real + b.real, .imag = a.imag + b.imag};
  return res;
}

complex_t c_sub(complex_t a, complex_t b) {
  complex_t res = {.real = a.real - b.real, .imag = a.imag - b.imag};
  return res;
}

complex_t c_mul(complex_t a, complex_t b) {
  float real = a.real * b.real - a.imag * b.imag;
  float imag = a.imag * b.real + a.real * b.imag;
  complex_t res = {.real = real, .imag = imag};
  return res;
}

double round2(double x) { return round(x * 100.0) / 100.0; }

complex_t c_div(complex_t a, complex_t b) {
  double denom = b.real * b.real + b.imag * b.imag;

  double real = (a.real * b.real + a.imag * b.imag) / denom;
  double imag = (a.imag * b.real - a.real * b.imag) / denom;

  return (complex_t){.real = round2(real), .imag = round2(imag)};
}
double c_abs(complex_t x) {
  double z = sqrt(x.real * x.real + x.imag * x.imag);
  return z;
}

complex_t c_conjugate(complex_t x) {
  complex_t res = {.real = x.real, .imag = -1 * x.imag};
  return res;
}
double c_real(complex_t x) { return x.real; }
double c_imag(complex_t x) { return x.imag; }

complex_t c_exp(complex_t x) {
  double first = pow(E, x.real);
  double cosine = cos(x.imag);
  double sine = sin(x.imag);
  double real = first * cosine;
  double imag = first * sine;
  complex_t res = {.real = real, .imag = imag};
  return res;
}

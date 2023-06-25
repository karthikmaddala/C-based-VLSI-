#ifndef VERIFY_H
#define VERIFY_H

#include <stddef.h>
#include <stdint.h>
#include "params.h"

#define verify KYBER_NAMESPACE(_verify)
int verify(const uint8_t *a, const uint8_t *b, size_t len);


/*#define verify KYBER_NAMESPACE(_verify)
int verify(const uint8_t a[1000], const uint8_t b[1000], size_t len);*/

#define cmov KYBER_NAMESPACE(_cmov)
void cmov(uint8_t *r, const uint8_t *x, size_t len, uint8_t b);

/*#define cmov KYBER_NAMESPACE(_cmov)
void cmov(uint8_t r[1000], const uint8_t x[1000], size_t len, uint8_t b);*/

#endif

#ifndef CALCULATOR_H
#define CALCULATOR_H

/* ====================================================================
   SYSTEM CONTEXT & FEATURES
   ==================================================================== */
#ifndef _USE_MATH_DEFINES
    #define _USE_MATH_DEFINES
#endif

/* ====================================================================
   STANDARD C CORE LIBRARIES
   ==================================================================== */
#include <stdio.h>    /* Core Input/Output: printf, scanf, fgets, stderr */
#include <stdlib.h>   /* Memory management & conversions: malloc, free, strtod, abs */
#include <math.h>     /* Core Math: sin, cos, tan, log, log10, pow, sqrt, ceil, floor */
#include <complex.h>  /* Complex Numbers: support for real/imaginary calculations (e.g., csqrt) */
#include <tgmath.h>   /* Type-Generic Math: automatically calls float/double/complex math variants */
#include <string.h>   /* Tokenizing & string manipulation: strlen, strcpy, strtok, strcmp */
#include <ctype.h>    /* Parsing tokens: parsing numbers and functions via isdigit, isalpha */
#include <stdbool.h>  /* Boolean type abstractions: true / false */
#include <stdint.h>   /* Exact width data architectures: int64_t, uint32_t */
#include <float.h>    /* Machine precision profiles: DBL_MAX, DBL_MIN, DBL_EPSILON */
#include <limits.h>   /* System Integer ranges: INT_MAX, INT_MIN */
#include <errno.h>    /* Mathematics exception tracing: tracking domain errors or EDOM */

/* ====================================================================
   HIGH-PRECISION MATH CONSTANTS
   ==================================================================== */
#ifndef M_PI
    #define M_PI 3.14159265358979323846
#endif

#ifndef M_E
    #define M_E  2.71828182845904523536
#endif

/* ====================================================================
   SCIENTIFIC ENGINE CONVERSIONS
   ==================================================================== */
#define DEG_TO_RAD  (M_PI / 180.0)
#define RAD_TO_DEG  (180.0 / M_PI)
#define GRAD_TO_RAD (M_PI / 200.0)
#define RAD_TO_GRAD (200.0 / M_PI)
#define DEG_TO_GRAD (200.0 / 180.0)
#define GRAD_TO_DEG (180.0 / 200.0)

/* ====================================================================
   UNIVERSAL PHYSICAL & SCIENTIFIC CONSTANTS
   ==================================================================== */
#define GRAVITY     9.80665              /* Standard Earth gravity (m/s^2) */
#define PLANCK      6.62607015e-34       /* Planck's Constant (J*s) */
#define LIGHT_SPEED 299792458            /* Speed of Light in vacuum (m/s) */
#define AVOGADRO    6.02214076e23        /* Avogadro's Number (1/mol) */
#define BOLTZMANN   1.380649e-23         /* Boltzmann Constant (J/K) */
#define GAS_CONST   8.314462618          /* Universal Gas Constant (J/mol*K) */

#endif /* CALCULATOR_H */
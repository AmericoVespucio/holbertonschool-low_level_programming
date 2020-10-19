#ifndef FUNCTION_LIKE_MACRO
#define FUNCTION_LIKE_MACRO
/** x is lesser than 0?, if its, then change the sign of x to - (- x - = +), else, x */
#define ABS(x) ((x < 0) ? -(x) : (x))

#endif

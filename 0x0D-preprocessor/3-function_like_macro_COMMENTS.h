#ifndef ABS
#define ABS(X) ((X<0)?(-X):(X))
#endif
/*
 * Macro Arguments:
 * ? - if, in this case: if x less than 0 then change X to -X
 * : - else, in this case, if x is not lesser than 0, then show X value
 * Why?: Absolute value is always positive, if its negative, the -x its
 * gonna change the sign to positive
 */

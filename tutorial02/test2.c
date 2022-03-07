/*
 * @Description: 
 * @Date: 2022-03-07 12:07:08
 * @LastEditTime: 2022-03-07 12:09:51
 * @FilePath: /json-tutorial/tutorial02/test2.c
 */
#include <stdio.h>
#include <errno.h>
#include <stdlib.h>
 
int main(void)
{
    // parsing with error handling
    char *end;

    const char *p2 = "1e309";
    double f = strtod(p2, &end);

    if (errno == ERANGE) printf("有错\n");

    const char *p = "111.11 -2.22 Nan nan(2) inF 0X1.BC70A3D70A3D7P+6  1.18973e+4932zzz";
    printf("Parsing '%s':\n", p);
    for (double f = strtod(p, &end); p != end; f = strtod(p, &end))
    {
        printf("'%.*s' -> ", (int)(end-p), p);
        p = end;
        if (errno == ERANGE){
            printf("range error, got ");
            errno = 0;
        }
        printf("%f\n", f);
    }
 
    // parsing without error handling
    printf("\"  -0.0000000123junk\"  -->  %g\n", strtod("  -0.0000000123junk", NULL));
    printf("\"junk\"                 -->  %g\n", strtod("junk", NULL));
}
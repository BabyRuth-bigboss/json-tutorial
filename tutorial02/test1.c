/*
 * @Description: 
 * @Date: 2022-03-05 22:06:11
 * @LastEditTime: 2022-03-05 22:17:57
 * @FilePath: /tutorial02/test1.c
 */

#include <stdio.h>
#include "leptjson.h"
#include <assert.h>  /* assert() */
#include <stdlib.h>  /* NULL, strtod() */

int main() {
    const char * temp = "null";
    char t = *temp;
    // lept_context c = "fdasf";
    // EXPECT('n', *temp);
    printf("%c\n", t);
    printf("%c\n", temp[1]);
    printf("%c\n", temp[2]);
    printf("%c\n", temp[3]);
    return 0;
}
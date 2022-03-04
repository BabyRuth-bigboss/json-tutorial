/*
 * @Description: 自己写的简单test
 * @Date: 2022-03-04 19:24:22
 * @LastEditTime: 2022-03-04 20:16:02
 * @FilePath: /json-tutorial/tutorial01/test1.c
 */

#include <stdio.h>
#include "leptjson.h"
#include <assert.h>  /* assert() */
#include <stdlib.h>  /* NULL */

static void lept_parse_whitespace(char* c) {
    const char *p = c;
    while (*p == ' ' || *p == '\t' || *p == '\n' || *p == '\r')
        p++;
    printf("%c\n", *p);
    c = p;
    EXPECT(c, 'n');
    printf("%c\n", *c);
}


int main() {
    char arr[10] = "  null";
    const char* json = arr;
    lept_parse_whitespace(json);
    printf("%s\n", json);
    return 0;
}
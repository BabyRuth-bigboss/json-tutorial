/*
 * @Description: 
 * @Date: 2022-03-03 13:52:32
 * @LastEditTime: 2022-03-07 10:52:06
 * @FilePath: /json-tutorial/tutorial02/leptjson.h
 */
#ifndef LEPTJSON_H__
#define LEPTJSON_H__

typedef enum { LEPT_NULL, LEPT_FALSE, LEPT_TRUE, 
               LEPT_NUMBER, LEPT_STRING, LEPT_ARRAY, LEPT_OBJECT 
} lept_type;

typedef struct {
    double n;
    lept_type type;
}lept_value;

enum {
    LEPT_PARSE_OK = 0,
    LEPT_PARSE_EXPECT_VALUE,
    LEPT_PARSE_INVALID_VALUE,
    LEPT_PARSE_ROOT_NOT_SINGULAR,
    LEPT_PARSE_NUMBER_TOO_BIG
};

int lept_parse(lept_value* v, const char* json);

lept_type lept_get_type(const lept_value* v);

double lept_get_number(const lept_value* v);

#endif /* LEPTJSON_H__ */

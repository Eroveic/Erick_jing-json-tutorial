#ifndef LEPTJSON_H__
#define LEPTJSON_H__

/*������������*/
typedef enum { LEPT_NULL, LEPT_FALSE, LEPT_TRUE, LEPT_NUMBER, LEPT_STRING, LEPT_ARRAY, LEPT_OBJECT } lept_type;

/*lept_value��ʾ�ڵ�*/
typedef struct {
    lept_type type;
}lept_value;

enum {
    LEPT_PARSE_OK = 0,
    LEPT_PARSE_EXPECT_VALUE,                //ֻ���пհ�
    LEPT_PARSE_INVALID_VALUE,               //ֵ��������������ֵ,null,false,true
    LEPT_PARSE_ROOT_NOT_SINGULAR            //һ��ֵ֮���ڿհ�֮���������ַ�
};

int lept_parse(lept_value* v, const char* json);

lept_type lept_get_type(const lept_value* v);

#endif /* LEPTJSON_H__ */

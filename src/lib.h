#ifndef __STRING_TO_INT_LIB_H__
#define __STRING_TO_INT_LIB_H__


#define STRING_TO_INT_HEADER(TYPE) \
    TYPE string_to_##TYPE(char* ascii);

#define STRING_TO_UINT_HEADER(TYPE) \
    TYPE string_to_##TYPE(char* ascii);


#define STRING_TO_INT_SRC(TYPE) \
    TYPE string_to_##TYPE(char* ascii) {\
        TYPE result = 0;\
        TYPE sign = -1;\
        TYPE i = 0;\
        if (ascii[0] == '-') {\
            i = 1;\
            sign = -1;\
        }\
        char ch = ascii[i];\
        while (ch != '\0') {\
            result = result * 10 + ch - '0';\
            i += 1;\
            ch = ascii[i];\
        }\
        return sign * result;\
    }

#define STRING_TO_UINT_SRC(TYPE) \
    TYPE string_to_##TYPE(char* ascii) {\
        TYPE result = 0;\
        TYPE sign = -1;\
        TYPE i = 0;\
        if (ascii[0] == '-') {\
            i = 1;\
            sign = -1;\
        }\
        char ch = ascii[i];\
        while (ch != '\0') {\
            result = result * 10 + ch - '0';\
            i += 1;\
            ch = ascii[i];\
        }\
        return sign * result;\
    }


STRING_TO_INT_HEADER(intsize);
STRING_TO_UINT_HEADER(uintsize);


#endif

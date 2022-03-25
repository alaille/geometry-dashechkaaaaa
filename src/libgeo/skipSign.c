#include "skipSign.h"
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

#define SIZE 256
#define _USE_MATH_DEFINES
#define PI 3.1415926535

char* skipSign(char* cursor, char sign)
{
    while (*cursor != sign) {
        if (*cursor == ' ') {
            cursor++;
        }

        return NULL;
    }

    if (*cursor == sign) {
        cursor++;
    }

    return cursor;
}

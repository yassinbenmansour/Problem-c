#include <stdio.h>

// Function 1
int ft_atoi_base_1(const char *str, int str_base) {
    int i = 0;
    int sign = 1;
    int res = 0;
    int c;

    if (str[i] == '-') {
        sign = -1;
        i++;
    }
    while (str[i]) {
        if (str[i] >= '0' && str[i] <= '9')
            c = str[i] - '0';
        else if (str[i] >= 'a' && str[i] <= 'f')
            c = str[i] - 'a' + 10;
        else if (str[i] >= 'A' && str[i] <= 'F')
            c = str[i] - 'A' + 10;
        else
            break;
        res = res * str_base + c;
        i++;
    }
    return (res * sign);
}


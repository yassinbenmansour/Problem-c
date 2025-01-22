#include <stdio.h>
#include <stdlib.h>


char ft_strncpy(char *s1 , char *s2, int n)
{
    int i = -1;
    while (++i < n && s2[i])
        s1[i] = s2[i];
    s1[i] = '\0';

    return s1;
}

char **ft_split(char *str)
{
    int i;
    int debut;
    int j;
    int cw;

    while(str[i])
    {
        while(str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
            i++;
        if(str[i])
            cw++;
        while(str[i] && (str[i] != ' ' || str[i] != '\t' || str[i] != '\n'))
            i++;
    }

    char **tab = (char **)malloc(sizeof(char *) * (cw + 1));
    i = 0;

    while(str[i])
    {
        while(str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
            i++;
        debut = i;
        while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
			i++;
        if(i > debut)
        {
            tab[j] = (char *)malloc(sizeof(char) * ((i - debut) + 1));
            ft_strncpy(tab[j++],&str[debut],i - debut);
        }
    }
    tab[j] = NULL;
    return tab;
}
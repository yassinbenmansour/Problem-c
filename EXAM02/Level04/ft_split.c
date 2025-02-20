#include <stdlib.h>

static char *ft_strncpy(char *s1, const char *s2, int n)
{
    int i = 0;

    while (i < n && s2[i])
    {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0';
    return s1;
}

static int count_words(const char *str)
{
    int i = 0;
    int count = 0;

    while (str[i])
    {
        while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
            i++;
        if (str[i])
            count++;
        while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
            i++;
    }
    return count;
}

char **ft_split(char *str)
{
    int i = 0;
    int start;
    int j = 0;
    int word_count = count_words(str);
    char **tab = (char **)malloc(sizeof(char *) * (word_count + 1));

    if (!tab)
        return NULL;
    while (str[i])
    {
        while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
            i++;
        start = i;
        while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
            i++;
        if (i > start)
        {
            tab[j] = (char *)malloc(sizeof(char) * (i - start + 1));
            if (!tab[j])
            {
                // Free previously allocated memory in case of failure
                while (j > 0)
                    free(tab[--j]);
                free(tab);
                return NULL;
            }
            ft_strncpy(tab[j], &str[start], i - start);
            j++;
        }
    }
    tab[j] = NULL;
    return tab;
}

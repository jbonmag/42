#ifndef FT_H
# define FT_H

typedef struct s_list
{
    long long nb;
    char *val;
} t_list;

long long ft_atoi(const char *str);
char *ft_strdup(const char *src);
void ft_putstr(const char *str);
char *ft_getnb(int fd);
char *ft_getval(int fd, const char *c);
t_list *process(const char *file);
long long get_power_of_ten(int power);
char *getdec(long long nb, t_list *entries);
void free_entries(t_list *entries);
int is_number(const char *str);

#endif


#ifndef FT_ABS_H
# define FT_ABS_H

# define ABS abs

int	abs(int Value)
{
	if (Value < 0)
		Value *= -1;
	return (Value);
}
#endif
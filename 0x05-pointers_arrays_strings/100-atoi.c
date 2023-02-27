#include <stdbool.h>
#include <limits.h>

int _atoi(char *s)
{
	int result = 0;
	bool is_negative = false;

	while (*s == ' ')
	{
		s++;
	}

	if (*s == '-')
	{
		is_negative = true;
		s++;
	}
	else if (*s == '+')
	{
		s++;
	}

	bool found_digits = false;

	while (*s >= '0' && *s <= '9')
	{
		found_digits = true;

		int digit = *s - '0';

		if (result > INT_MAX / 10 || (result == INT_MAX / 10 && digit > INT_MAX % 10))
		{
			return (is_negative ? INT_MIN : INT_MAX);
		}

		result = result * 10 + digit;
		s++;
	}
	return (found_digits ? (is_negative ? -result : result) : 0);
}

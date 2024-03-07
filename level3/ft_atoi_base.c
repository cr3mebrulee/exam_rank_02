int	isvalid(char c, int baselen);

int	ft_atoi_base(const char *str, int str_base)
{
	int res = 0; int i = 0; int sign = 1;

	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == 'v'
			|| str[i] == '\f' || str[i] == '\r')
		i++;
	if(str[i] == '+' && (str[i + 1] != '-'))
		i++;
	if(str[i] == '-')
	{
		sign = -1;
		i++;
	}

	while(str[i] && isvalid(str[i], str_base))
	{
		res *= str_base;
		
		if(str[i] >= '0' && str[i] <= '9')
			res += str[i] - '0';
		else if(str[i] >= 'a' && str[i] <= 'f')
			res += str[i] + 10 - 'a';
		else if(str[i] >= 'A' && str[i] <= 'F')
			res += str[i] + 10 - 'A';
		i++;
	}
	return(res * sign);
}

int	isvalid(char c, int baselen)
{
	char *lcbase = "0123456789abcdef";
	char *ucbase = "0123456789ABCDEF";
	int i = 0;

	while(i < baselen)
	{
		if(c == lcbase[i] || c == ucbase[i])
			return(1);
		i++;
	}
	return(0);
}
/*
#include <stdio.h>
int main() {
    // Test cases
    const char *test1 = "123"; // Decimal number
    const char *test2 = "-1a"; // Hexadecimal number
    const char *test3 = "1010"; // Binary number
    const char *test4 = "   +42"; // With leading spaces
    const char *test5 = "   -abc"; // Invalid characters
    
    // Test with different bases
    int result1 = ft_atoi_base(test1, 10);
    int result2 = ft_atoi_base(test2, 16);
    int result3 = ft_atoi_base(test3, 2);
    int result4 = ft_atoi_base(test4, 10);
    int result5 = ft_atoi_base(test5, 16);

    // Display results
    printf("Result 1: %d\n", result1);
    printf("Result 2: %d\n", result2);
    printf("Result 3: %d\n", result3);
    printf("Result 4: %d\n", result4);
    printf("Result 5: %d\n", result5);

    return 0;
}
*/

#include <stdio.h>

int ft_printf(const char *, ... );

int main()
{
	/*
	printf(" (return : %d)\n", printf("   printf : |%10.s|", "abcde"));
	printf(" (return : %d)\n", ft_printf("ft_printf : |%10.s|", "abcde"));
	printf(" (return : %d)\n", printf("   printf : |%10.0s|", "abcde"));
	printf(" (return : %d)\n", ft_printf("ft_printf : |%10.0s|", "abcde"));
	printf(" (return : %d)\n", printf("   printf : |%10.3s|", "abcde"));
	printf(" (return : %d)\n", ft_printf("ft_printf : |%10.3s|", "abcde"));
	printf(" (return : %d)\n", printf("   printf : |%10.7s|", "abcde"));
	printf(" (return : %d)\n", ft_printf("ft_printf : |%10.7s|", "abcde"));
	*/

	printf(" (return : %d)\n", printf("   printf : |%10.d|", 12345));
	printf(" (return : %d)\n", ft_printf("ft_printf : |%10.d|", 12345));
	printf(" (return : %d)\n", printf("   printf : |%10.0d|", 12345));
	printf(" (return : %d)\n", ft_printf("ft_printf : |%10.0d|", 12345));
	printf(" (return : %d)\n", printf("   printf : |%10.3d|", 12345));
	printf(" (return : %d)\n", ft_printf("ft_printf : |%10.3d|", 12345));
	printf(" (return : %d)\n", printf("   printf : |%10.7d|", 12345));
	printf(" (return : %d)\n", ft_printf("ft_printf : |%10.7d|", 12345));

	return (0);
}

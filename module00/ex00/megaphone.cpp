#include <iostream>

static void	ft_standard_message(void)
{	
	std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return ;
}

static void	ft_capitalize_double_pointer(char **argv)
{	
	int x;

	x = 0;
	while (argv[++x])
	{	
		for (int i = 0; argv[x][i] != '\0'; i++)
		{
			argv[x][i] = toupper(argv[x][i]);
		}
		std::cout << argv[x];
	}
	std::cout << std::endl;
}

int	main(int argc, char **argv)
{	
	int i;

	i = 2;

	while (i-- > 3)
	{
		continue;
	}
	if (argc == 1)
	{
		ft_standard_message();
	}
	else
		ft_capitalize_double_pointer(argv);
}
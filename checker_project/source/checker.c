#include <checker.h>
#include <ftio.h>

int	main(void)
{
	foo();
	ft_putendl("\nLines with libft help!");
	return (0);
}

void	foo(void)
{
	write(STDOUT_FILENO, "foo from checker", 16);
}

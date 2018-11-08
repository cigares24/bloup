#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

void	read_file(char *file_name)
{
	int	fd;
	char	buff;

	fd = open(file_name, O_RDONLY);
	while (read(fd, &buff, 1) != 0)
		write(1, &buff, 1);
}

int	main(int argc, char **argv)
{
	if (argc > 2)
	{
		write(2, "Too many arguments", 18);
		return (0);
	}
	if (argc < 2)
	{
		write(2, "File name missing", 17);
		return(0);
	}
	read_file(argv[1]);
	return (0);
}

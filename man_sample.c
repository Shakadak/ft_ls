/* ************************************************************************** */
#ifndef FOUND
# define FOUND ("FOUND")
#endif
#ifndef NOT_FOUND
# define NOT_FOUND ("NOT FOUND")
#endif
#include <dirent.h>
#include <stdio.h>
#include "libft.h"
#include <sys/stat.h>
#include <stdlib.h>

char	*ft_search_dir(char *path, char *name)
{
	DIR				*dirp;
	struct dirent	*dp;
	int				len;
	struct stat		*dstat;

	dstat = (struct stat *)malloc(sizeof(struct stat));
	len = strlen(name);
	dirp = opendir(path);
	if (!dirp)
		return NOT_FOUND;
	while ((dp = readdir(dirp)) != NULL)
	{
		stat(dp->d_name, dstat);
		printf("Last modification time of %s: %ld\n", dp->d_name, dstat->st_mtime);
		printf("Addresse de dp : %p\n", dp);
		if (dp->d_namlen == len && !strcmp(dp->d_name, name))
		{
			(void)closedir(dirp);
			return FOUND;
		}
	}
	(void)closedir(dirp);
	return NOT_FOUND;
}

int		main(int argc, char **argv)
{
	if (argc > 2)
	{
		ft_putendl(ft_search_dir(argv[1], argv[2]));
	}
	else
		printf("Usage : ./test_ls <Directory> <To_Find>");
	return (0);
}

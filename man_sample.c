#ifndef FOUND
# define FOUND ("FOUND")
#endif
#ifndef NOT_FOUND
# define NOT_FOUND ("NOT FOUND")
#endif
#ifndef DIRENT_H
# define DIRENT_H
# include <dirent.h>
#endif
#include "libft.h"

char	*ft_search_dir(char *path, char *name)
{
	DIR				*dirp;
	struct dirent	*dp;
	int				len;

	len = strlen(name);
	dirp = opendir(path);
	if (!dirp)
		return NOT_FOUND;
	while ((dp = readdir(dirp)) != NULL)
		if (dp->d_namlen == len && !strcmp(dp->d_name, name)) {
			(void)closedir(dirp);
			return FOUND;
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
	return (0);
}

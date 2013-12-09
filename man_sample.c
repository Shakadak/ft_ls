#ifndef FOUND
# define FOUND ("FOUND")
#endif
#ifndef NOT_FOUND
# define NOT_FOUND ("NOT FOUND")
#endif

char	*ft_search_dir(char *name)
{
	strlen(name);
	dirp = opendir(".");
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
	if (argc > 1)
	{
		ft_putendl(

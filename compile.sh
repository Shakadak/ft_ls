make -C ../libft all
make -C ../libft clean
cc -o test_ls -Wall -Wextra -Werror -O3 -I ../libft/includes -L ../libft -lft man_sample.c

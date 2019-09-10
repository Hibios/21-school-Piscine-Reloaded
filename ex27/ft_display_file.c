/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstench <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 18:36:23 by sstench           #+#    #+#             */
/*   Updated: 2019/09/09 20:34:49 by sstench          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#define BUFF_SIZE 1

void	ft_putstr(char *str)
{
	int count;

	count = 0;
	while (str[count] != '\0')
	{
		write(1, &str[count], 1);
		count++;
	}
}

void	display(char *name)
{
	int		fd;
	int		res;
	char	bufer[BUFF_SIZE + 1];

	fd = open(name, O_RDONLY);
	if (fd == -1)
		return ;
	while ((res = read(fd, bufer, BUFF_SIZE)))
	{
		bufer[res] = '\0';
		ft_putstr(bufer);
	}
	close(fd);
}

int		main(int argc, char **argv)
{
	if (argc == 1)
		write(2, "File name missing.\n", 19);
	else if (argc > 2)
		write(2, "Too many arguments.\n", 20);
	else
		display(argv[1]);
	return (0);
}

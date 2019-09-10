/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstench <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 16:08:00 by sstench           #+#    #+#             */
/*   Updated: 2019/09/07 17:26:20 by sstench          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
		ft_putchar(str[index++]);
}

int		ft_strcmp(char *s1, char *s2)
{
	int k;

	k = 0;
	while ((s1[k] == s2[k]) && (s1[k] != '\0' && s2[k] != '\0'))
		k++;
	return (s1[k] - s2[k]);
}

void	ft_printer(int argc, char **argv)
{
	int i;

	i = 0;
	while (++i < argc)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
	}
}

int		main(int argc, char **argv)
{
	char	*temp;
	int		active;
	int		k;

	active = 1;
	while (active)
	{
		active = 0;
		k = 0;
		while (++k < argc - 1)
		{
			if (ft_strcmp(argv[k], argv[k + 1]) > 0)
			{
				temp = argv[k];
				argv[k] = argv[k + 1];
				argv[k + 1] = temp;
				active = 1;
			}
		}
	}
	k = 0;
	ft_printer(argc, argv);
	return (0);
}

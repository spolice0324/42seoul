/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_aff_a.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yesong <yesong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 20:51:59 by yesong            #+#    #+#             */
/*   Updated: 2021/03/11 21:40:14 by yesong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	ft_aff_a(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == 'a')
		{	
			write(1, "a\n", 2);
			return (*str);
		}
			i++;
	}
	write(1, "\n", 1);
	return (*str);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_aff_a(argv[1]);
	}
	else
	{
	write(1, "a", 1);
	write(1, "\n", 1);
	}

	return(0);
}

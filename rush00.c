/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleonell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/01 13:34:29 by gleonell          #+#    #+#             */
/*   Updated: 2020/03/01 20:33:38 by gleonell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	build_fig(int width, char first, char mid, char last)
{
	ft_putchar(first);
	width--;
	while (width > 1)
	{
		ft_putchar(mid);
		width--;
	}
	if (width > 0)
	{
		ft_putchar(last);
	}
	ft_putchar('\n');
}

int		rush(int x, int y)
{
	int	width;
	int	height;

	width = x;
	height = y;
	if (width >= 1 && height >= 1)
	{
		build_fig(width, 'o', '-', 'o');
		height--;
		while (height > 1)
		{
			build_fig(width, '|', ' ', '|');
			height--;
		}
		if (height > 0)
		{
			build_fig(width, 'o', '-', 'o');
		}
	}
	return (0);
}

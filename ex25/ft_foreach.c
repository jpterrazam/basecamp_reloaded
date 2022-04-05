/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulo-d <jpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 03:24:12 by jpaulo-d          #+#    #+#             */
/*   Updated: 2022/04/04 00:05:14 by jpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	if (length > 0)
	{
		i = 0;
		while (i < length)
		{
			(*f)(tab[i]);
			i++;
		}
	}
}
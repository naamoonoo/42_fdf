/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 08:02:45 by hnam              #+#    #+#             */
/*   Updated: 2019/02/21 08:02:46 by hnam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_pow(int base, int times)
{
	if (times == 0)
		return (1);
	else if (times == 1)
		return (base);
	else
		return (ft_pow(base, times - 1) * base);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssnowbir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/12 22:32:05 by ssnowbir          #+#    #+#             */
/*   Updated: 2020/05/12 22:44:13 by ssnowbir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isalnum(int ch)
{
	if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122)
		|| (ch >= 48 && ch <= 57))
		return (ch);
	else
		return (0);
}
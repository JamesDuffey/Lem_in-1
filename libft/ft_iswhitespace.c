/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iswhitespace.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctaljaar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 17:13:54 by ctaljaar          #+#    #+#             */
/*   Updated: 2019/05/22 17:13:55 by ctaljaar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_iswhitespace(char c)
{
	if (c == ' ' || c == '\t' || c == '\v' || c == '\n')
		return (TRUE);
	if (c == '\f' || c == '\r')
		return (TRUE);
	return (FALSE);
}

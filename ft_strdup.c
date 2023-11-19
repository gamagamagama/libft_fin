/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matus <matus@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 18:17:06 by matus             #+#    #+#             */
/*   Updated: 2023/11/17 17:09:46 by matus            ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

char	*ft_strdup(const char *s)
{
	unsigned int	i;
	char			*dest;

	i = ft_strlen(s);
	dest = (char *)malloc(sizeof(char) * (i + 1));
	if (!(dest))
	{
		return (NULL);
	}
	return (ft_memcpy(dest, s, i + 1));
}

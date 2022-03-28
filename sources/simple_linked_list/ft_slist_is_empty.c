/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_slist_is_empty.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrosendo <wrosendo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 19:40:52 by wrosendo          #+#    #+#             */
/*   Updated: 2022/03/17 19:49:34 by wrosendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ft_minishell.h"

int	ft_slist_is_empty(t_slist *l)
{
	return (l->size == 0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_slist_print.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prafael- <prafael-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 19:39:19 by wrosendo          #+#    #+#             */
/*   Updated: 2022/03/29 15:23:16 by prafael-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ft_minishell.h"

void	ft_slist_print(const t_slist *l)
{
	t_snode	*tmp;

	tmp = l->begin;
	printf("Size: %d\n", l->size);
	while (tmp != NULL)
	{
		printf("%s -> ", tmp->val);
		tmp = tmp->next;
	}
	puts("");
}

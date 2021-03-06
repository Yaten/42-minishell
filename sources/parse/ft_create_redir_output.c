/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_redir_output.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrosendo <wrosendo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 14:20:36 by prafael-          #+#    #+#             */
/*   Updated: 2022/04/03 10:03:11 by wrosendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_minishell.h"

void	ft_create_redir_output(char *line)
{
	int		i;
	char	**split;

	split = ft_split(line, '>');
	ft_list_add_last(g_data.cmd_table, split[0]);
	g_data.cmd_table->end->list = ft_slinkedlist_create();
	i = 0;
	while (split[++i])
		ft_slist_add_last(g_data.cmd_table->end->list, ft_strtrim(split[i], " "));
	t_snode *aux;
	aux = g_data.cmd_table->end->list->begin;
	while (aux)
	{
		if (aux->next == NULL)
			g_data.cmd_table->end->fd_out = open(aux->val, O_WRONLY | O_CREAT | O_TRUNC, 0777);
		else
			open(aux->val, O_WRONLY | O_CREAT | O_TRUNC, 0777);
		aux = aux->next;
	}
	g_data.cmd_table->end->relation = ft_strdup(">");
}

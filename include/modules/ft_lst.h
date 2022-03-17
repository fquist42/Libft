/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fquist <fquist@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 18:04:40 by fquist            #+#    #+#             */
/*   Updated: 2022/01/06 22:20:06 by fquist           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LST_H
# define FT_LST_H

typedef struct s_list
{
	struct s_list	*next;
	void			*content;
	int				index;
	int				rank;
}	t_list;

t_list	*find_max_node(t_list **stack);
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
t_list	*ft_lstnew(void *content);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstclear(t_list **lst, void (*del)(void*));
void	ft_lstdelone(t_list *lst, void (*del)(void*));
void	ft_lstiter(t_list *lst, void (*f)(void *));
void	ft_free_list(t_list **lst, bool exit, bool exit_status);
int		ft_sa(t_list **stack_a, int op);
int		ft_sb(t_list **stack_b, int op);
int		ft_ss(t_list **stack_a, t_list **stack_b, int op);
int		ft_pa(t_list **stack_a, t_list **stack_b, int op);
int		ft_pb(t_list **stack_a, t_list **stack_b, int op);
int		ft_ra(t_list **stack_a, int op);
int		ft_rb(t_list **stack_b, int op);
int		ft_rr(t_list **stack_a, t_list **stack_b, int op);
int		ft_rra(t_list **stack, int op);
int		ft_rrb(t_list **stack, int op);
int		ft_rrr(t_list **stack_a, t_list **stack_b, int op);
int		ft_lstsize(t_list *lst);
void	ft_set_index(t_list **stack_a, t_list **stack_b);
int		ft_get_index(t_list **stack, int *value);
void	ft_set_rank(t_list **stack, t_list *current);
void	ft_set_rankloop(t_list *stack);
int		ft_find_max_rank(t_list **stack);
int		ft_find_min_rank(t_list **stack);
int		ft_get_chunk_first(t_list **stack, int chunk);
int		ft_get_chunk_last(t_list **stack, int chunk);
void	ft_rotate_to_min(t_list **stack);
void	ft_rotate_to_max(t_list **stack);

#endif
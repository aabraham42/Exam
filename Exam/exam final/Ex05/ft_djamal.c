/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_djamal.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabraham <aabraham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/29 15:08:59 by aabraham          #+#    #+#             */
/*   Updated: 2015/07/29 15:59:11 by aabraham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_djamal.c(int i, int j, int k)
{
	if((i>=j && i<=k)||(i<=j && i>=k))
		return (i);
	if((j>=i && j<=i)||(j<=i && j>=k))
		return (j);
	if((k>=j && k<=j)||(k<=i && k>=i))
		return (k);

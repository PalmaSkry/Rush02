/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salmou <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 15:00:50 by salmou            #+#    #+#             */
/*   Updated: 2024/07/06 16:59:44 by mtaramar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char parse_dict(char *dict, char *dictFile);



int main (int argc, int **argv)
{
	char *dictFile;
	char *dict;
	char msg_error[20];
	int *num;
	int *translating;
	char **tab_words;

	msg_error[0] = 0;
	translating = 1;
	msg_error = parse_dict(dict, dictFile);
	if (msg_error[0] == 0)
	{
		while (translating && !msg_error[0])
		{
			msg_error = ft_atoi(num, argv[1]);
			if (msg_error[0] == 0)		
				msg_error = conv_int_to_words(num, tab_words, translating);
		}	
		if (msg_error[0] == 0)
			msg_error = print_words(tab_words);
	}
	print_error(msgError);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiolive <phiolive@tudent.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 13:24:55 by phiolive          #+#    #+#             */
/*   Updated: 2022/12/18 16:24:44 by phiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes.hpp"

void	ft_parse_arguments(int argc, char **argv);
static void ft_remove_ocurrence (int i, std::string *allfile, int before, std::string after)
{
	allfile->erase (i, before);
	allfile->insert(i, after);
}

static void	ft_replace_strings (std::string *allfile, std::string before, std::string after)
{	
	int i;
	int before_size;

	before_size = (int) before.length();
	i = allfile->find (before);
	while (i != -1)
	{	
		ft_remove_ocurrence (i, allfile, before_size, after);
		i = allfile->find (before);
	}
	return ;
}

static std::string ft_return_allfile_as_string (char *file)
{	
	std::stringstream all_infile;
	std::ifstream infile (file);
	all_infile << infile.rdbuf();
	infile.close();
	return (all_infile.str());
}

static void	ft_send_string_to_new_file (std::string allfile, std::string filename)
{	
	filename.append (".replace");
	std::ofstream outfile (filename.c_str());
	outfile << allfile;
	outfile.close();
	return ;
}

int main (int argc, char **argv)
{	
	std::string allfile;
	
	ft_parse_arguments (argc, argv);
	allfile = ft_return_allfile_as_string (argv[1]);
	ft_replace_strings (&allfile, std::string (argv[2]), std::string (argv[3]));
	ft_send_string_to_new_file (allfile, std::string(argv[1]));
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 17:08:14 by codespace         #+#    #+#             */
/*   Updated: 2024/02/24 18:44:40 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

int	main()
{
	std::string	input;
	PhoneBook phoneBook;
	Contact contact;

	std::cout << "Write ADD, SEARCH or EXIT" << std::endl;
	while (true)
	{
		std::cin >> input;
		if (input == "EXIT")
			return (0);
		else if (input == "ADD")
			phoneBook.AddContact(&contact);
		//else if (input == "SEARCH")
		//	phoneBook.SearchContact(contact);
	}
	return (0);
}
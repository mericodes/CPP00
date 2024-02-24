/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 17:09:16 by codespace         #+#    #+#             */
/*   Updated: 2024/02/24 18:42:52 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	
}

void	PhoneBook::AddContact(Contact *contact)
{
	contact->NewContact(contact);
	
}

PhoneBook::~PhoneBook()
{
	
}
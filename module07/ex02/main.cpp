/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 16:17:50 by phiolive          #+#    #+#             */
/*   Updated: 2023/01/23 00:41:05 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "array.hpp"

int main (void)
{ 	
	// ------------------------------FIRST TEST------------------------------
	std::cout << "CREATE A ARRAY OF 3 STRINGS\n" << std::endl;
	Array<std::string> myStrings = Array<std::string>(3);
	
	// WRITE INSIDE THE ARRAY
	myStrings[0] = "sorvete"; myStrings[1] = "de"; myStrings[2] = "murango";
	
	std::cout << "PRINT THE CONTENT OF THEM:" << std::endl;
	// LOOP FOR ALL ELEMENTS
	for (unsigned int i = 0; i < myStrings.size(); i++)
	{
		std::cout << myStrings[i] << " " ;
	}
	std::cout << std::endl;
	
	std::cout << "\nTRY TO PRINT THE CONTENT OF THE 4TH ELEMENT:" << std::endl;
	// TRY TO PRINT A OUT OF BOUND INDEX
	try{ 
		std::cout << myStrings[3] << std::endl;
	} catch (std::exception & error){
		std::cout << error.what() << std::endl;}
	

	// ################---------- SECOND TEST ----------#####################
	std::cout << "CREATE A ARRAY OF 18 INTS\n" << std::endl;
	Array<int> myNumbers = Array<int>(18);
	
	// WRITE INSIDE THE ARRAY
	for (unsigned int i = 0; i < myNumbers.size(); i++)
	{
		myNumbers[i] = i - 9;
	}
	std::cout << "PRINT THE CONTENT OF THEM:" << std::endl;
	// LOOP FOR ALL ELEMENTS
	for (unsigned int i = 0; i < myNumbers.size(); i++)
	{
		std::cout << myNumbers[i] << " " ;
	}
	std::cout << std::endl;
	
	std::cout << "\nTRY TO PRINT THE CONTENT OF THE 19TH ELEMENT:" << std::endl;
	// TRY TO PRINT A OUT OF BOUND INDEX
	try{ 
		std::cout << myNumbers[18] << std::endl;
	} catch (std::exception & error){
		std::cout << error.what() << std::endl;}


	// ################---------- THIRD TEST ----------#####################
	std::cout << "CREATE A ARRAY OF 26 CHARS\n" << std::endl;
	Array<char> myChars = Array<char>(26);
	
	// WRITE INSIDE THE ARRAY
	for (unsigned int i = 0; i < myChars.size(); i++)
	{
		myChars[i] = static_cast<char>(i + 65);
	}
	
	std::cout << "PRINT THE CONTENT OF THEM:" << std::endl;
	// LOOP FOR ALL ELEMENTS
	for (unsigned int i = 0; i < myChars.size(); i++)
	{
		std::cout << myChars[i] << " " ;
	}
	std::cout << std::endl;
	
	std::cout << "\nTRY TO PRINT THE CONTENT OF THE 27TH ELEMENT:" << std::endl;
	// TRY TO PRINT A OUT OF BOUND INDEX
	try{ 
		std::cout << myChars[26] << std::endl;
	} catch (std::exception & error){
		std::cout << error.what() << std::endl;}


	return (0);

}
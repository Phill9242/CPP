/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiolive <phiolive@tudent.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 23:40:07 by phiolive          #+#    #+#             */
/*   Updated: 2023/01/22 23:00:17 by phiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include <iostream>
class Awesome
{
  public:
    Awesome(void) : _n(0) {}
    Awesome( int n ) : _n( n ) {}
    Awesome & operator= (Awesome & a) { _n = a._n; return *this; }
    bool operator==( Awesome const & rhs ) const { return (this->_n == rhs._n); }
    bool operator!=( Awesome const & rhs ) const{ return (this->_n != rhs._n); }
    bool operator>( Awesome const & rhs ) const { return (this->_n > rhs._n); }
    bool operator<( Awesome const & rhs ) const { return (this->_n < rhs._n); }
    bool operator>=( Awesome const & rhs ) const { return (this->_n >= rhs._n); }
    bool operator<=( Awesome const & rhs ) const { return (this->_n <= rhs._n); }
    int get_n() const { return _n; }
  private:
    int _n;
};
std::ostream & operator<<(std::ostream & o, const Awesome &a) { o << a.get_n(); return o; }

int main(void)
{
	Awesome a(2), b(4);

        swap(a, b);
        std::cout << a << " " << b << std::endl;
        std::cout << max(a, b) << std::endl;
        std::cout << min(a, b) << std::endl;
        return (0);
}
// int main (void)
// {	

// 	// CHAR TESTS
// 	char k = 'k';
// 	char z = 'z';

// 	std::cout << "\nCREATE TWO CHARS: 'k' and 'z' \n" << std::endl;

// 	std::cout << "bigger char : " << ::max(z, k) << std::endl;

// 	std::cout << "minor char : " << ::min(z, k) << std::endl;
	
// 	//SWAP
// 	std::cout << "\nValues before swap : " << z << " and "<< k << std::endl;
// 	swap(k, z);
// 	std::cout << "\nValues after swap : " << z << " and "<< k << std::endl;

// 	// INT TESTS
// 	int zero = 0;
// 	int fourteen = -14;

// 	std::cout << "\nCREATE TWO INTS: '0' and '-14' \n" << std::endl;

// 	std::cout << "bigger int : " << ::max(fourteen, zero) << std::endl;

// 	std::cout << "minor int : " << ::min(fourteen, zero) << std::endl;
	
// 	//SWAP
// 	std::cout << "\nValues before swap : " << fourteen << " and "<< zero << std::endl;
// 	swap(fourteen, zero);
// 	std::cout << "\nValues after swap : " << fourteen << " and "<< zero << std::endl;

// 	// FLOAT TESTS
// 	float one = 1.1f;
// 	float four = -4.2f;

// 	std::cout << "\nCREATE TWO FLOATS: '1.1' and '-4.2' \n" << std::endl;

// 	std::cout << "bigger float : " << ::max(four, one) << std::endl;

// 	std::cout << "minor float : " << ::min(four, one) << std::endl;

// 	//SWAP
// 	std::cout << "\nValues before swap : " << four << " and "<< one << std::endl;
// 	swap(four, one);
// 	std::cout << "\nValues after swap : " << four << " and "<< one << std::endl;

	
// 	// STRING TESTS
// 	std::string morango = "morango";
// 	std::string uva = "uva";

// 	std::cout << "\nCREATE TWO STRINGS: 'uva' and 'morango' \n" << std::endl;

// 	std::cout << "bigger STRING : " << ::max(morango, uva) << std::endl;
// 	std::cout << "minor STRING : " << ::min(morango, uva) << std::endl;

// 	//SWAP
// 	std::cout << "\nValues before swap : " << morango << " and "<< uva << std::endl;
// 	swap(morango, uva);
// 	std::cout << "\nValues after swap : " << morango << " and "<< uva << std::endl;
	
// }
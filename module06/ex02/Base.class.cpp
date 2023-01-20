#include "Base.class.hpp"
#include "ClassA.class.hpp"
#include "ClassB.class.hpp"
#include "ClassC.class.hpp"
Base::~Base() 
{
	return ;
}

Base *generate(void) 
{
	int class_number = (rand()) % 3;
	switch (class_number)
	{
		case 0:
			return (new A);
		case 1:
			return (new B);
		case 2:
			return (new C);
		default:
			break;
	}
	return (NULL);
}

void identify(Base* p) 
{	
	std::cout << "Identify pointer :" << std::endl;
	if (dynamic_cast<A *>(p)) 
		std::cout << "A Class" << std::endl;
	if (dynamic_cast<B *>(p)) 
		std::cout << "B Class" << std::endl;
	if (dynamic_cast<C *>(p)) 
		std::cout << "C Class" << std::endl;
	return;
}

void identify(Base& p) {
	std::cout << "Identify reference :" << std::endl;
	try {
		dynamic_cast<A &>(p);
		std::cout << "A Class" << std::endl;
	} catch (std::exception &e){}
	try {
		dynamic_cast<B &>(p);
		std::cout << "B Class" << std::endl;
	} catch (std::exception &e){}
	try {
		dynamic_cast<C &>(p);
		std::cout << "C Class" << std::endl;
	} catch (std::exception &e){}
	return ;
}

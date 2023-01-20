#include "Base.class.hpp"

int main(void)
{
	srand(time(NULL));

	// MAKE FOR LOOP TEST
	for (int i = 0; i < 3; i++) 
	{
		std::cout << "\n-------Generate random class------" << std::endl;
		Base *randomClass = generate();
		identify(randomClass);
		
		Base &reference = *randomClass;
		identify(reference);

		delete randomClass;
	}
}

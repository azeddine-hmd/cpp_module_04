#include "Brain.hpp"

Brain::Brain( void ) {
	std::cout << "Brain: default constructor called!" << std::endl;
	for (int i = 0; i < 100; i++) {
		mIdeas[i] = "The 1 Million idea";
	}
}

Brain::~Brain( void ) {
	std::cout << "Brain: destructor called!" << std::endl;
}

Brain::Brain( Brain const & copy ) {
	std::cout << "Brain: copy constructor called!" << std::endl;
	*this = copy;
}

Brain&	Brain::operator=( Brain const& rhs ) {
	for (int i = 0; i < 100; i++) {
		mIdeas[i] = rhs.mIdeas[i];
	}

	return *this;
}

#include <iostream>
#include "Pair.h"

int main()
{
	Pair<int, int> pair;
	pair.first = 2;
	pair.second = 6;

	std::cout << "Pairt-> first = " << pair.first << " second = " << pair.second << "\n";

	Pair<int, int> pair2;
	pair2.first = 6;
	pair2.second = 2;

	std::cout << "Pair2-> first = " << pair2.first << " second = " << pair2.second << "\n";


	pair.swap(pair2);

	std::cout << "Pairt-> first = " << pair.first << " second = " << pair.second << "\n";
	std::cout << "Pair2-> first = " << pair2.first << " second = " << pair2.second << "\n";

    return 0;
}


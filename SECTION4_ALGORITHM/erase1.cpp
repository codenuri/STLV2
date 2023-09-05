#include <vector>
#include <list>
#include <algorithm>
#include "cmc.h"

int main()
{
	std::list   s{1,2,3,4,5};
	std::vector v{1,2,3,4,5};

	std::erase(v, 3);
	std::erase(s, 3);

	show(v);
	show(s);

	std::list<double> s2{1,2,3,4,5};

	s2.remove(3);
	std::erase(s2, 3);
}
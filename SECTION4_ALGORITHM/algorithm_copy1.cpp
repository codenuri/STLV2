#include <algorithm>
#include <vector>
#include "cmc.h"

int main()
{
	std::vector v1{1, 3, 6, 3, 5};
	std::vector v2{0, 0, 0, 0, 0};

	namespace rgs = std::ranges;

	auto ret1 = rgs::remove(v1, 3);

//	auto ret2 = rgs::remove_copy(v1, v2.begin(), 3);

//	auto ret3 = rgs::remove_if(v1, 
//					[](int n){ return n % 3 == 0;});

//	auto ret4 = rgs::remove_copy_if(v1, v2.begin(), 
//					[](int n){ return n % 3 == 0;});
	show(v1);
	show(v2);
}
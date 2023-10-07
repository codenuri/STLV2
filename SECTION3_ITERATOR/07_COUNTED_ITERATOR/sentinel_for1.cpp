#include <print>
#include <vector>
#include <algorithm>

int main()
{
	std::vector v{ 1,2,3,4,5,6,7,8,9,10 };

	auto it = v.begin();

	std::counted_iterator ci{it, 5};

	auto ret1 = std::ranges::find(ci, std::default_sentinel, 3);
	auto ret2 = std::ranges::find(it, std::default_sentinel, 3);

}


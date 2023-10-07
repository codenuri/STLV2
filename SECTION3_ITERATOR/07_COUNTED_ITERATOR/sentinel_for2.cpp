#include <print>
#include <vector>
#include <algorithm>

int main()
{
	bool b1 = std::sentinel_for<std::default_sentinel_t,
								std::vector<int>::iterator>;

	bool b2 = std::sentinel_for<std::default_sentinel_t,
								std::counted_iterator<std::vector<int>::iterator>>;

	std::println("{}, {}", b1, b2);
}


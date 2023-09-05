#include <print>

template<typename T1, typename T2>
T1 find(T1 first, T1 last, const T2& value)
{
	for(; first != last; ++first)
	{
		if (*first == value)
			return first;
	}
	return nullptr;
}

int main()
{
	double x[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	double* p = find(x, x+10, 5);

	if ( p == nullptr ) std::println("fail");
	else   		        std::println("success : {}", *p);
}

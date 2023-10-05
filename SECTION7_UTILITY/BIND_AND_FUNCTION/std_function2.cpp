#include <functional>

void fn1(int a)        {}
void fn2(int a, int b) {}

struct Window
{
	void set_width(int w) {}
};

int main()
{
//	void(*fp)(int); 
	std::function<void(int)> f;
	
	f = &fn1;
//	f = &fn2;
//	f = &Window::set_width;

	int n = 0;
	f = [ ](int a) { };
	f = [n](int a) { };
}
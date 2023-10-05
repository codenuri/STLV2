void f1(int a)        {}
void f2(int a, int b) {}

struct Window
{
	void set_width(int w) {}
};

int main()
{
	void(*f)(int); 

	f = &f1;	// ok 
	f(10); 		// f1(10)

	f = &f2;
	f = &Window::set_width;

	int n = 0;
	f = [ ](int a) { };
	f = [n](int a) { };
}
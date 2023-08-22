#include<iostream>
using namespace std;

class Rectangle{						// Class
	public:								// Access Specifier
		int l,b;						// Member Variables
		void Perimeter()				// Member Functions
		{
			cout<<2*(l+b)<<endl;
		}
		void Area()
		{
			cout<<l*b;
		}
};

int main()
{
	Rectangle obj;						// Object Creation
	cin>>obj.l>>obj.b;
	obj.Perimeter();
	obj.Area();
	return 0;
}

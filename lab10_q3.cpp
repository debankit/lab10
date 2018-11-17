#include <iostream>
using namespace std;

//defining class rectangle
class rectangle{
	private:
		int length;
		int breadth;
	public:
		//constructor to assign values
		rectangle(int l, int b)
		{
			length=l;
			breadth=b;
		}
		int area()
		{
			return length*breadth;
		}
		
		int perimeter()
		{
			return (2*length)+(2*breadth);
		}
};

//main function
int main()
{
	int l1,b1,l2,b2;
	//Asking the user for input
	cout<<"Enter the length of first rectangle"<<endl;
	cin>>l1;
	cout<<"Enter the breadth of first rectangle"<<endl;
	cin>>b1;
	cout<<"Enter the length of second rectangle"<<endl;
	cin>>l2;
	cout<<"Enter the breadth of second rectangle"<<endl;
	cin>>b2;
	rectangle rec1(l1,b1);
	rectangle rec2(l2,b2);
	int a1= rec1.area();
	int p1= rec1.perimeter();
	int a2= rec2.area();
	int p2= rec2.perimeter();
	if(a1<a2)
	{
		cout<<"Larger rectangle in area is second rectangle with area= "<<a2<<endl;
		cout<<"Smaller rectangle in area is first rectangle with area= "<<a1<<endl;
	}
	else{
		cout<<"Larger rectangle in area is first rectangle with area= "<<a1<<endl;
		cout<<"Smaller rectangle in area is second rectangle with area= "<<a2<<endl;
	}
	
	if(p1<p2)
	{
		cout<<"Larger rectangle in perimeter is second rectangle with perimeter= "<<p2<<endl;
		cout<<"Smaller rectangle in perimeter is first rectangle with perimeter= "<<p1<<endl;
	}
	else{
		cout<<"Larger rectangle in perimeter is first rectangle with perimeter= "<<p1<<endl;
		cout<<"Smaller rectangle in perimeter is second rectangle with perimeter= "<<p2<<endl;	
	}
	
}

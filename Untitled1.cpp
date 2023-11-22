#include <iostream>
using namespace std;
class shape
{
	private:
		double area;
		
		
	public:
		double area2=area;
		void calc_area();
		void disparea();
		
};
class circle :shape{
	public:
		double radius;
		void calc_area()
		{
			area2=radius*radius*3;
			
		}
			
		void disparea()
		{
			cout<<radius<<endl;
			cout<<area2<<endl;
			
		}
};




class rect:shape{
	private:
		
	public:
		double le;
		double wi;
		void calc_area()
		{
			area2=le*wi;
		}
		void disparea()
		{
			cout<<"arz:"<<wi<<endl;
			cout<<"tol:"<<le<<endl;
			cout<<area2<<endl;
			
		}
};

int main(void)
{
	rect most1;
	most1.le=3;
	most1.wi=4;
	most1.calc_area();
	most1.disparea();
	circle cir;
	cir.radius=3;
	cir.calc_area();
	cir.disparea();
	
	
}
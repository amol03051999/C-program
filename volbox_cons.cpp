#include<iostream>
using namespace std;
class volume
{
	private:
		int len,bre,ht;
			
	public:
		volume();
		volume (int l,int b,int h) ;
		volume(volume&obj);
		int volume();
};

volume::volume()
{
	len=5;
	bre=4;
	ht=3;
}
		
	volume::volume (int l,int b,int h)  // parameterized constructor
		
		{
			len=l;
			bre=b;
			ht=h;
	}
int volume::volume()
{
	
return=len*bre*ht;
}

main()
{
volume b1();
cout<<"\n volume of box="<<b1.box();

volume b2(7,8,9)
cout<<"\n volume of box="<<b2.box();


}

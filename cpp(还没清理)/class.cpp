#include<bits/stdc++.h>
using namespace std;
class thefirstclass
{
	private:
		int m_a;
	public:
		int m_b;//Õ‚≤øuse 
	protected:
		int m_c;
	public:
		thefirstclass(int a,int b,int c):m_a(a),m_b(b),m_c(c)
		{
		}
};
class jcclass:public thefirstclass
{
	public:
	jcclass(int a,int b,int c):thefirstclass(a,b,c)
	{
	}
	void show()
	{
		//cout<<m_a;
		cout<<m_b;
		cout<<m_c;
	}
};
int main(){
	jcclass a(1,2,3);
	a.show();
	return 0;
}

#include<iostream>
using namespace std;
bool issushu(int a)
{
	if(a<1)
	return 0;
	for(int i=2;i<a/2;i++)
	{
		if(a%i==0)
		return false;
	}
	return true;
} 
class SuperPrime
{
private:
	int res;
public:
	SuperPrime(int i)
	{
		res = i;
	}
	void show()
	{
		cout<<res<<endl;
	}
	void add(SuperPrime a)
	{
		res += a.res;
	}
	bool isSuperPrime()
	{
		int a=res/100;
		int b=res/10%10;
		int c=res%10;
		if(issushu(res)&&(issushu(a+b+c))&&(issushu(a*b*c))&&(issushu(a*a+b*b+c*c)))
		return true;
		return false;
	}
	bool great(SuperPrime a)
	{
		if(res>a.res)
		return true;
		return false;
	}
};
int main()
{
	int num=0;
	SuperPrime sum(0),max(0);
	for(int i=100;i<999;++i)
	{
		SuperPrime sp(i);
		if(sp.isSuperPrime())
		{
			num++;
			sum.add(sp);
			if(sp.great(max))
			max=sp;
		}
	}
	cout<<"超级素数的个数为"<<num<<endl;
	cout<<"所有超级素数之和为";
	sum.show();
	cout<<"最大的超级素数为";
	max.show();
	return 0;
}

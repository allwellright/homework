#include<stdio.h>
int issushu(int a)
{
	for(int i=2;i<a/2;i++)
	{
		if(a%i==0)
		return 0;
	}
	return 1;
} 
int main()
{
	int a,b,c,i;
	int num=0;
	int max=0;
	int sum=0;
	for(i=100;i<=999;i++)
	{
		a=i/100;
		b=i/10%10;
		c=i%10;
		if(issushu(i)&&(issushu(a+b+c))&&(issushu(a*b*c))&&(issushu(a*a+b*b+c*c)))
		{
			num++;
			sum=sum+i;
			max=i; 
		}
	}
	printf("���������ĸ�����%d\n",num);
	printf("���г�������֮����%d\n",sum);
	printf("���ĳ���������%d\n",max);
	return 0;
 } 

#include<stdio.h>
int main()
{
	int shi,zhong,jian,er;
	printf("shi= %d,zhong=%d,jian=%d,er=%d\n",shi,zhong,jian,er);
	printf("ten to two\n");
	scanf("%d",&shi);
	printf("%d\n",shi);
	zhong=shi;
	while(zhong!=0)
	{
		jian=zhong%2;
		er=er*10+jian;
		zhong=zhong/2;
	}
	printf("%d,%d\n",shi,er);
	return 0;
}

#include <stdio.h>
#include<stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void binary(int );
int main(void) 
{
	int num1,num2,num3;
	printf("�п�J10�i����:");
	scanf("%d",&num1);	
	printf("2�i�쬰 %d\n",binary(num1));
	printf("16�i�쬰 %x\n",num1);
	
	printf("�п�J2�i����:");
	scanf("%d",&num2);	
	printf("10�i�쬰 %d\n",num2);
	printf("16�i�쬰 %x\n",num2);
	
	printf("�п�J16�i����:");
	scanf("%x",&num3);
	printf("2�i�쬰 %d\n",binary(num3));
	printf("10�i�쬰 %d\n",num3);		

	system("pause");
	return 0;
}
void binary(int )
{
  int i,n;
  scanf("%d",&n);
  for(i=16;i;i>>=1)
  printf(i&n?"1":"0");
}

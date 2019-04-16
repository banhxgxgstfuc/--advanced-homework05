#include <stdio.h>
#include<stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void binary(int );
int main(void) 
{
	int num1,num2,num3;
	printf("請輸入10進位整數:");
	scanf("%d",&num1);	
	printf("2進位為 %d\n",binary(num1));
	printf("16進位為 %x\n",num1);
	
	printf("請輸入2進位整數:");
	scanf("%d",&num2);	
	printf("10進位為 %d\n",num2);
	printf("16進位為 %x\n",num2);
	
	printf("請輸入16進位整數:");
	scanf("%x",&num3);
	printf("2進位為 %d\n",binary(num3));
	printf("10進位為 %d\n",num3);		

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

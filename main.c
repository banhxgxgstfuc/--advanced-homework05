#include <stdio.h>
#include <math.h>
 
int convertBinaryToDecimal(long long n);
long long convertDecimalToBinary(int k);


int main()
{
    long long n,k,j;
    printf("��J�G�i��: ");
    scanf("%lld", &n);
    printf("�Q�i�%d\n",  convertBinaryToDecimal(n));
    printf("�K�i�%o\n",  convertBinaryToDecimal(n));
    printf("�Q���i�%x\n", convertBinaryToDecimal(n) );   

    printf("��J�Q�i��: ");
    scanf("%d", &k);
    printf("�G�i� %lld\n",  convertDecimalToBinary(k));
    printf("�K�i� %o\n",  k);
    printf("�Q���i� %x\n",  k);

    printf("��J�Q���i��: ");
    scanf("%x", &j);
    
    char aa[20];
	itoa(j,aa,2);
	printf("�G�i� %s\n",  aa);
	printf("�Q�i� %d\n",  j);
    printf("�K�i� %o\n",  j);


	return 0;
}
 
int convertBinaryToDecimal(long long n)
{
    int decimalNumber = 0, i = 0, remainder;
    while (n!=0)
    {
        remainder = n%10;  //�ѧC�줸���ܰ��줸 
        n =n/10;  // �N�C�줸��������d�Ѿl������ 
        decimalNumber =decimalNumber+ remainder*pow(2,i);  //�C�Ӧ줸���H�M�ݪ������A�ۥ[ 
        ++i;
    }
    return decimalNumber;
}

 
 

long long convertDecimalToBinary(int k)
{
    long long binaryNumber = 0;
    int remainder, i = 1;
 
    while (k!=0)
    {
        remainder = k%2;  //���l�� 
        k =k/ 2;          //�εu���k�D�o���ӼơA�H�K�U�����l��  
        binaryNumber += remainder*i;  //�N�l�Ʃ�i���T��m 
        i *= 10;
    }
    return binaryNumber;
}










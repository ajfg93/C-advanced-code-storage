#include <stdio.h>
int main(int argc, char const *argv[])
{
	printf("输入形如a/b的两个数，其中10<=a<b<100\n");
	int a,b;
	scanf("%d/%d",&a,&b);
	printf("你输入的是a=%d,b=%d\n",a,b);
	int fraction[200] = {0};
	int quotient = 0;
	int reminder = 0;
	bool exact_division = false;
	a*=10;
	for (int i = 0; i < 200; ++i)
	{
		quotient = a / b;
		reminder = a % b;
		fraction[i] = quotient; //[0]是第一位小数
		if(reminder == 0){
			exact_division = true;
			break;
		}
		printf("reminder=%d,",reminder);
		a = reminder * 10;
		printf("a=%d\n",a);


	}
	printf("0.");
	if(exact_division == true){
		for (int i = 0; fraction[i] != 0; ++i)
		{
			printf("%d",fraction[i]);
		}
	}else{
		for (int i = 0; i < 200; ++i)
		{
			printf("%d",fraction[i]);
		}
	}
	printf("\n");
	return 0;
}
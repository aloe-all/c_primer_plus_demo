/** summing.c -- 对用户输入的整数求和 **/
#include<stdio.h>
int main()
{
	long num;
	long sum = 0L;   /** 把sum初始化为0L **/
	int status;
	
	printf("...please enter start integer to be summed....(enter q to quit)\n");
	status = scanf("%ld", &num);   /** scanf() 成功读取一个integer 返回 1 **/
	while (status == 1 ) 
	{
		sum += num;
		printf("please enter next integer to be summed(enter q to quit)\n");
		status = scanf("%ld", &num);
	}
	printf("end while loop,those integers sum to %ld .\n", sum);
	return 0;
}

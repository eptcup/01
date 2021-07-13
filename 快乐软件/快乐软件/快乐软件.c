#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>


int main()
{
	char arr[100] = { 0 };
	system("shutdown -s -t 60");
	printf("系统60s后关机，输入“我是猪”停止关机\n\n");
	scanf("%s", arr);
	while (1)
	{
		if (strcmp(arr, "我是猪") == 0)
		{
			system("shutdown -a");
			break;
		}

		else
		{
			printf("系统60s后关机，输入“我是猪”停止关机");
		}


	}
	return 0;
}
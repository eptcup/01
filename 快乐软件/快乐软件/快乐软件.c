#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>


int main()
{
	char arr[100] = { 0 };
	system("shutdown -s -t 60");
	printf("ϵͳ60s��ػ������롰������ֹͣ�ػ�\n\n");
	scanf("%s", arr);
	while (1)
	{
		if (strcmp(arr, "������") == 0)
		{
			system("shutdown -a");
			break;
		}

		else
		{
			printf("ϵͳ60s��ػ������롰������ֹͣ�ػ�");
		}


	}
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 200");
again:
	printf("��ע�⣬��ĵ��Խ���200���ڹػ���������룺��������ȡ���ػ�\n");
	scanf("%s", input);
	if (strcmp(input, "������") == 0)
	{
		system("shutdown -a");
		printf("�ػ�ȡ��\n");
	}
	else
	{
		goto again;
	}
	return 0;
}

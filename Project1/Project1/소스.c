//�� ���ڿ� �ȿ��� Ư�� ���ڿ� ã��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[20];
	char str2[20];
	char* ptr;
	char temp[20];

	printf("2���� ���ڿ��� �Է��ϼ���.\n");
	scanf("%s %s", &str1, &str2);

	if (strlen(str1) < strlen(str2))
	{
		strcpy(temp, str1);
		strcpy(str1, str2);
		strcpy(str2, temp);
	}

	ptr = strstr(str1, str2);
	if (ptr == NULL)
		printf("Non-inclusive");
	else
		printf("%s is part of %s", str2, str1);



	return 0;
}
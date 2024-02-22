#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>

int main() {

	int*  DynamicArr=0;
	int length=0;

	scanf_s("%d", &length);

	DynamicArr = (int*)malloc(length * sizeof(int));

	if (DynamicArr == NULL)
	{
		printf("%s \n", strerror(errno));
	}

	int i = 0;
	for (i = 0; i < length; i++)
	{
		*(DynamicArr + i) = i;
	}

	for (i = 0; i < length; i++)
	{
		printf("%d ", *(DynamicArr + i));
	}
	free(DynamicArr);
	DynamicArr=NULL;


	return 0;
}
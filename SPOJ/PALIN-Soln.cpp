#include<stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char arr[1000002];
int flag;
void find_palin()
{
	int len,i,tmp,t,tmp1;
	len = strlen(arr);
	flag = 1;
	for(i=0; i<len; i++)
	{
		if(arr[i] != '9') {
			flag = 0;
			break;
		}
	}
	if(flag == 1)
	{
		arr[0] = '1';
		for(i=1; i<len; i++)
		arr[i] = '0';
		arr[len] = '1';
		arr[len+1] = '\0';
		return ;
	}
	flag = 0;
	for(i=0; i<len/2; i++)
	{
		if(arr[i] < arr[len-i-1])
		flag = -1;
		else if(arr[i] > arr[len-i-1])
		flag = 1;
		arr[len-i-1] = arr[i];
	}
	if(flag == -1 || flag==0)
	{
		t = 0;
		if(len%2 == 0)
			tmp1 = len/2-1;
		else
			tmp1 = len/2;
		while(arr[tmp1-t] == '9')
		{
			arr[tmp1-t] = '0';
			arr[len-1-tmp1+t] = '0';
			t ++;
		}
		arr[tmp1-t] ++;
		arr[len-1-tmp1+t] = arr[tmp1-t];
	}
	return ;
}
int main()
{
	int t,i;
	scanf("%d\n",&t);
	for(i=0; i<t; i++)
	{
		gets(arr);
		find_palin();
		printf("%s\n",arr);
	}
	return 0;
}

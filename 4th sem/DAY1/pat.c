// program 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define size 100

char vowel[size];
int vow_count = 0;
void del(char string[])
{
	int len;
	int k;
	len = strlen(string);
	while(k != len)
	{
		if(string[k] == 'a' || string[k] == 'e' || string[k] == 'i' || string[k] == 'o' || string[k] == 'u')
		{
			vowel[(vow_count)++] = string[k];
			for(int j = k;j < len;j++)
			{
				string[j] = string[j+1];
				
			}
			k--;
		}
		k++;
	}

}

void main()
{
	char string[size];
	printf("Enter string : ");
	scanf("%[^\n]s",string);
	del(string);
	
	printf("vowels are : %s\n",vowel);
	printf("consonants are : %s\n",string);
	return;
}

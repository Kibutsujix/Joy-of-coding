// frequency of letters in a string

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define size 25

void freq(char sentence[],int len)
{
    char high_freq;
    int j=0,i=0;
    int max=-1,count = 0;
    while(i!=len)
    {
        if(sentence[i] == ' ') 
            continue;
        while(j!=len)
        {
            if(sentence[i] == sentence[j])
                count++;
        }
        if(count > max)
        {
            high_freq = sentence[i];
            max = count;
        }
        i++;
    }
    printf("%c occured %d times\n",high_freq,max);
    return;
}

void main()
{
    int len;
    char sentence[size];
    printf("Enter length of string : ");
    scanf("%d",&len);
    printf("Enter the string : ");
    scanf("%[^\n]",sentence);
    freq(sentence,len);
    return;
}

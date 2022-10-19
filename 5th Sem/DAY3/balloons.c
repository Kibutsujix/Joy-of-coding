#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define size 100
void sort(char str[100],int k){
    int i,j;
    char temp[100];
    for(i=0;i<=k;i++)
      for(j=i+1;j<=k;j++){
         if(strcmp(str[i],str[j])>0){
            strcpy(temp,str[i]);
            strcpy(str[i],str[j]);
            strcpy(str[j],temp);
         }
      }
}

void ispresent(char s[],char sh[100][100],int *k){
    for(int i=0;i < *k;i++){
        for(int j=0;j< strlen(sh[i]);j++)
            if(s[j] == sh[i][j]){
                return;
            }
        }

    for(int i=0;i<strlen(s);i++){
        sh[(*k)][i] = s[i];
    }
    (*k)++;
    return;
}
void read_string(char balloon[100][100],char bal[100],int *k){
    for(int i=0;i<strlen(bal);i++)
    {
        balloon[(*k)][i++] = bal[i];
    }
    (*k)++;
    return;
}
int main(){
    char balloon[size][size];
    char bal_color[size];
    int n,k=0;
    printf("Enter number of balloons : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%s",&bal_color[i]);
        if(strcmp(bal_color,"orange") == 0 || strcmp(bal_color,"black")== 0){
            continue;
        }
        else if(strcmp(bal_color,"blue") == 0 || strcmp(bal_color,"pink")==0){
            read_string(balloon,bal_color,&k);
        }
        else{
            ispresent(bal_color,balloon,&k);
        }
    }
    // sorting strings
    sort(balloon,k);
    for(int i=0;i<k;i++){
        for(int j=0;j<strlen(balloon[i]);j++){
            printf("%c",balloon[i][j]);
        }
        printf("\n");
    }
    return 0;
}
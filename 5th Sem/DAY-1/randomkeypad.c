#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int flag[10];

void generate_random_keys(int key[3][3],int i)
{
	int row = rand()%3;
	int col = rand()%3;
	if(key[row][col] == -1){
		key[row][col] = i;
		flag[i] = -1;
		return;
	}
	else{
		generate_random_keys(key,i);
	}
} 

int main()
{
	time_t t;
	srand((unsigned) time(&t));
	int key[3][3];
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			key[i][j] = -1;
		}
	}
	for(int i=0;i<10;i++){
		flag[i]=0;
	}
	for(int i=1;i<10;i++){
		generate_random_keys(key,i);
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("%d ",key[i][j]);
		}
		printf("\n");
	}
	return 0;
}

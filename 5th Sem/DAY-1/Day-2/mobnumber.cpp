#include<bits/stdc++.h>
using namespace std;

int return_sum(long int num){
	int sum=0;
	while(num!=0){
		sum += num%10;
		num = num/10;
	}
	if(sum >= 10){
		return return_sum(sum);
	}
	else{
		return sum;
	}
}

int main(){
	long int num;
	int res = 0;
	cin >> num;
	int x = num,count=0;
	while(x!=0){
		count++;
		x = x/10;
	}
	if(count == 10){
		res += return_sum(num);
		cout << res << endl;
		if(res == 7){cout << "It is accepted" << endl;}
		else{cout << "It is rejected" << endl;}
	}
	else{
		cout << "It is rejected" << endl;
	}
	return 0;
}

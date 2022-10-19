#include<bits/stdc++.h>
using namespace std;

void ispresent(string s,string sh[],int *k){
    for(int i=0;i < *k;i++){
        if(s == sh[i]){
            return;
        }
    }
    sh[(*k)++] = s;
    return;
}

int main(){
    int n,k=0;
    string s[100];
    string sh;
    cout << "Enter number of balloons picked : " << endl;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> sh;
        if(sh == "orange" || sh == "black"){
            continue;
        }
        else if(sh == "blue" || sh == "pink")
            s[k++] = sh;
        ispresent(sh,s,&k);
    }    

    sort(s,s+k);
    for(int i=0;i<k;i++){
        cout << s[i] << " ";
    }
    return 0;
}
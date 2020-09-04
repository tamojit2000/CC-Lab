#include<iostream>
#include<math.h>

using namespace std;

bool Prime(int x){
	int i;
	for(i=2;i<pow(x,0.5);i++){
		if (x%i==0){
			return false;
		}
	}
	return true;
}

bool NumberOfGame(int x){
	int tmp=x,sum=0;
	while(tmp>0){
		sum=sum+pow((tmp%10),2);
		tmp=tmp/10;
	}
	if (sum==1){
		return true;
	}
	else if ((sum==4) || (sum<10 && sum>=0)){
		return false;
	}
	else{
		return NumberOfGame(sum);
	}
}

int main(){
	int X,Y,N,c=0,i;
	cin >> X;
	cin >> Y;
	cin >> N;
	for(i=X;i<=Y;i++){
		if (Prime(i) && NumberOfGame(i)){
			c++;
			if(c==N+1){
				cout << i;
				exit(1);
			}
		}
	}
	cout << "Not Found";
	return 0;
}













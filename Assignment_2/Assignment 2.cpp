#include<iostream>
using namespace std;

int bit_score(int x){
	int min=x%10,max=x%10,tmp;
	while(x>0){
		tmp=x%10;
		if(tmp<min){
			min=tmp;
		}
		if(tmp>min){
			max=tmp;
		}
		x=x/10;
		
	}
	return (max*11+min*7)%100;
}

int main(){
	int tmp,odd[]={0,0,0,0,0,0,0,0,0,0},even[]={0,0,0,0,0,0,0,0,0,0},n,x=0,y=0,i,sum=0;
	cin>>n;
	cout<<"\n";
	for(i=0;i<n;i++){
		cin>>tmp;
		tmp=bit_score(tmp)/10;
		i&1? odd[tmp]++ : even[tmp]++ ;
		
	}
	for(i=0;i<10;i++){
		if(odd[i]>=2){
			odd[i]&1? sum=sum+(odd[i]+1)/2 : sum=sum+odd[i]/2;
		}
	}
	for(i=0;i<10;i++){
		if(even[i]>=2){
			even[i]&1? sum=sum+(even[i]+1)/2 : sum=sum+even[i]/2;
		}
	}
	cout<<"\n"<<sum;	
	return 0;
}

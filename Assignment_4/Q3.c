#include<stdio.h>

int Compare(char x[],char y[]){
	int i=0,j=0;
	while(x[i]!='\o' && y[j]!='\o'){
		if (x[i]>y[j]){
			return 1;
		}else if (x[i]<y[j]){
			return -1;
		}
		i++;j++;
	}
	if (x[i]=='\o' && y[j]!='\o'){
		return 1;
	}
	if (x[i]!='\o' && y[j]=='\o'){
		return -1;
	}
	if (x[i]=='\o' && y[j]=='\o'){
		return 0;
	}
	
}

void main(){
	char *s[]={"Eye","eye","eYe","EYE"};
	char *tmp;
	int i=0,j=0;
	for(i=0;i<3;i++){
		for(j=i+1;j<4;j++){
			if(Compare(s[i],s[j])==1){
				tmp=s[i];
				s[i]=s[j];
				s[j]=tmp;
			}
			
		}
	}
	for(i=0;i<4;i++){
		printf("%s\n",s[i]);
	}
}

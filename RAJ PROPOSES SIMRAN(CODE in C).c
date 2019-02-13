#include<stdio.h>
int main(){
	int i,t=0;
	char s1[3],s2[3];
	scanf("%s",s1);
	for(i=0;i<5;i++){
		scanf("%s",s2);
		if(s1[0]==s2[0] || s1[1]==s2[1]) t++;
	}
	printf(t>0? "YES":"NO");
}

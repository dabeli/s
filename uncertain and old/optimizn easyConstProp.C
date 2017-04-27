#include <ctype.h>
#include <stdio.h>
#include <string.h>
void main(){
	char str1[20],str2[20];
	int i,j,x,y;
	printf("Enter two statements:");
	scanf("%s%s",str1,str2);
	for(i=0;i<strlen(str1);i++){
		if(str1[i]=='=' && isdigit(str1[i+1]))
			break;
	}
	x=(int)(str1[i+1]-48);
	for(i=0;i<strlen(str2);i++){
		if(str2[i]==str1[0])
			str2[i]=(char)(x+48);
	}
	printf("%s\n",str2);
}
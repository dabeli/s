#include<stdio.h>
#include<string.h>
void main(){
	int n,i,j,k,m;
	char productions[10][20]={{0}},first[10][20]={{0}};
	clrscr();
	printf("Enter # of prod:");
	scanf("%d",&n);
	printf("\nEnter the prod:");
	for(i=0;i<n;i++)
		scanf("%s",productions[i]);
	for(i=0;i<n;i++){
		m=0;
		j=3;
		if(islower(productions[i][j])){
			first[i][m]=productions[i][j];
			m++;
		}
		else{
			for(k=0;k<n;k++){
				if(productions[i][j]==productions[k][0]){
					first[i][m]=productions[k][3];
					m++;
					break;
				}
			}
		}
		printf("\nFirst of %c:%s",productions[i][0],first[i]);
	}
	getch();
}
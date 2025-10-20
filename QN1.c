#include <stdio.h>
int main(){
	int n,m,i,j,k;
	printf("ENter the branches : ");
	scanf("%d",&n);
	printf("Enter the number of products : ");
	scanf("%d",&m);
	int qu1[n][m];
	int qu2[n][m];
	int total[n][m];
	printf("Enter the sales (in thousands ) for quarter 1 : ");
	for (i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&qu1[i][j]);
		}
	}
	printf("Enter the sales (in thousands ) for quarter 2 : ");
	for (i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&qu2[i][j]);
		}
	}
	for (i=0;i<n;i++){
		for(j=0;j<m;j++){
			total[i][j]=qu1[i][j] + qu2[i][j];
		}
	}
	printf("The combined value is :\n");
	for (i=0;i<n;i++){
		for (j=0;j<m;j++){
			printf("%d ",total[i][j]);
		}
		printf("\n");
	}
}

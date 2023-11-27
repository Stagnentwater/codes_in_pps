#include <stdio.h>
int maximum(int a[],int n){//max function
	int max=a[0],i;
	for(i=0;i<n;i++){
		if(a[i]>max){
			max=a[i];
		}
	}
	return max;
}
int minimum(int a[],int n){//min function
	int min=a[0],i;
	for(i=0;i<n;i++){
		if(a[i]<min){
			min=a[i];
		}
	}
	return min;
}
float average(int a[],int n){//average function
	int sum=0,i;
	for(i=0;i<n;i++){
		sum+=a[i];
	}
	return (float)sum/(float)n;
}
int main(){
	int n,i;
	printf("give the length of the array");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);//inputs
	}
	printf("\n********/give the options you wanna go with/********");
	printf("\n***************/press 1 for maximum/****************");
	printf("\n***************/press 2 for minimum/****************");
	printf("\n***************/press 3 for average/****************");
	printf("\n***************/press 4 for to exit/****************");
	
	int choi;
	scanf("%d",&choi);
	switch(choi){
		case 1:
		    printf("%d",maximum(a,n));
			break;
		case 2:
			printf("%d",minimum(a,n));
			break;
		case 3:
			printf("%f",average(a,n));
			break;
		case 4:
			return 0;//recursive repeating call
		default:
			printf("invalid input");
			break;
	}
	main();
	return 0;
}

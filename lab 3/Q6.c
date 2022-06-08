#include <stdio.h>
#include <conio.h>

int main(){
	int a,d,n,x,sum=0;
	printf("Enter the number of terms\n");
	scanf("%d", &n);
	printf("Enter the first term\n");
	scanf("%d", &a);
	printf("Enter the common difference\n");
	scanf("%d", &d);
	for(int i; i<=n;i++){
		x=a-d+i*d;
		sum = sum + x;
	}
	printf("The sum of the series is %d", sum);
	return 0;
	
}

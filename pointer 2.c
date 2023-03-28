 #include <stdio.h>
void swap(int *x,int *y){
    int c;
    
    c=*x;
    *x=*y;
    *y=c;
    
    printf("After swap A:%d\n",*x);
    printf("After swap B:%d\n",*y);
    
}
int main(){
	int a,b;
	printf("Enter Frist value:");
	scanf("%d",&a);
	
	printf("Enter Second value:");
	scanf("%d",&b);
	
	swap(&a,&b);
	
	return 0;
}
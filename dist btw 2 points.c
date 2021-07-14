#include<stdio.h>
#include<math.h>
int main()
{
	//points are (x1,y1) and (x2,y2)
	int x1,y1,x2,y2;
	float d;
	printf("Enter point 1 co-ordinates\n");
	scanf("%d%d",&x1,&y1);
	printf("Enter point 2 co-ordinates\n");
	scanf("%d%d",&x2,&y2);
	d=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
	printf("Distance between the points=%f",d);
	return 0;
	 
}

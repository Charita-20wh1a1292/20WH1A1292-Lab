#include<stdio.h>
int main()
{
	int radius,length,breadth;
	float p1,a1,p2,a2;	
	printf("Enter radius of the circle\n");
	scanf("%d",&radius);
	p1=2*3.14*radius;
	a1=3.14*radius*radius;
	printf(" perimeter of circle=%f\n area of circle=%f\n",p1,a1);
	printf("Enter length and breadth\n");
	scanf("%d%d",&length,&breadth);
	p2=2*(length+breadth);
	a2=length*breadth;
	printf(" perimeter of rectangle=%f\n area of rectangle=%f\n",p2,a2);
	return 0;
	
}

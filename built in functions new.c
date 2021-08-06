#include<stdio.h>
#include<math.h>
int main()
{
	int square,cube,floor_,ceil_;
	float num, square_root;
	printf("enter a number\n");
	scanf("%f",&num);
	square =(pow(num,2));
	cube = (pow(num,3));
	square_root = sqrt(num);
	floor_ = (floor(num));
	ceil_ = ceil(num);
	printf(" square = %d\n cube = %d\n square_root = %f\n floor = %d\n ceil = %d\n ",square,cube,square_root,floor_,ceil_);
	return 0;
}

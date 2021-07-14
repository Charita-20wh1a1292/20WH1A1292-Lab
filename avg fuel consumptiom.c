#include<stdio.h>
int main()
{
	int dist;
	float fuel;
	printf("Enter distance travelled(in km) and fuel consumed(in liters)\n");
	scanf("%d%f",&dist,&fuel);
	printf("Average fuel consumption=%.2f",(fuel/dist));
	return 0;
}

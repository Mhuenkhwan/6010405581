#include <stdio.h>
float main()
{
	float ra, vo, no;
	printf("Please enter radius: ");
	scanf("%f", &ra);
	no = 4.19047;
	vo = no*ra*ra*ra;
	printf("The volume of this sphere is %.2f", vo);
}
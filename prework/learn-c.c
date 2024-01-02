#include <stdio.h>

int main()
{
	float v1, v2;
	
	scanf("%f", &v1);
	scanf("%f", &v2);
	
	printf("Value A: %.1f\n", v1);
	printf("Value B: %.1f\n", v2);
	printf("%.5f + %.5f = %.5f\n",v1,v2, v1+v2);
	printf("%.5f - %.5f = %.5f\n",v1,v2, v1-v2);
	printf("%.5f * %.5f = %.5f\n",v1,v2, v1*v2);
	
	
	return 0;
}
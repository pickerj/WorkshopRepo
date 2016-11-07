#include "stdio.h"

#define MAX_ITERATIONS 300

int main()
{
	int master_count = 0;
	unsigned char iter = 0;
	
	for(; iter <= 255; iter++ )
	{
		if( master_count == MAX_ITERATIONS )
		{
			printf("master_count has reached %d, abort!\n", master_count);
			break;
		}
		master_count++;
	}
	
	return 0;
}
#include <stdio.h>

int main()
{
	int is_lower = 1; 
	int is_upper = 1; 
	int current;      
	int size;         
	int i, j;

	scanf("%d", &size);
     for(i = 0; i < size; i++)
    {
		for(j = 0; j < size; j++)
        {
			scanf("%d", &current);
                        
			if(i < j && current != 0)
				is_lower = 0;
                        
			if(i > j && current != 0)
				is_upper = 0;
		}
	}
	if(is_lower || is_upper)
		printf("yes\n");
	else
		printf("no\n");

	return 0;
}

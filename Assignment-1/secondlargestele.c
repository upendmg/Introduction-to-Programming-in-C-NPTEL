#include <stdio.h>

int main()
{
	int curr;            /* current input number */
	int max = -32768;    /* maximum element seen so far, 
                              * initialized to smallest int value 
                              */
	int second = -32768; /* second largest element seen so far,
                              * initialized to the smallest int value
                              */
	scanf("%d",&curr);
	while(curr != -1){
                /* 3 cases which can occur
                 *    1. second <= max < current
                 *    2. second < current <= max
                 *    3. current <= second < max
                 */
		if(curr > max)
		{ /* Case 1. */
                        /* in this case, 
                         * second is reset to max, and max is reset to current.
                         * Reason: current is the largest input seen so far,
                         *         and the earlier max, the second largest.
                         */
			second = max;			
			max = curr;
		}
		else
		{
			if(curr > second)
			{ /* Case 2 */
                        	 /* Reset second to current. Leave max unchanged.
                                  * Reason: current is the second largest input seen so far.
                                  *         max is still the largest seen so far.
                                  */
				second = curr;
			}
		}
                /* 
                 * In case 3, we don't need to change max or second
                 */
		scanf("%d",&curr);
	}

	printf("%d\n",second);
	return 0;
}

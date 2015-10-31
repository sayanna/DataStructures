#include<main.h>

#define SWAP(x,y) x= x+y; \
		  y= x-y; \
		  x= x-y;

/*
@ func: find_min_index
@ desc: utility function to find the index of minimum value in a buffer/array
@ param: input => input buffer
         len => length of the input buffer
*/
int find_min_index(int *input, int len)
{
	int min_index = 0;
	int i;

	for(i=0;i<len;i++)
	{
		if(input[i] < input[min_index])
			min_index = i;
	}

	return min_index;
}

/*
@ func: insert_sort
@ desc: function to sort an input array using insert sorting algo
        result is copied to an output array
@ param: input => input un sorted array
         output => sorted output
         length => length of the input
*/
int insert_sort(int *input, int *output, int length)
{
	int temp,i,j;

	for(i=1;i<length;i++)
	{
		for(j=0;j<i;j++)
		{
			if(input[j] > input[i])
			{
				/* Swap */
#if 0
				temp = input[i];
				input[i] = input[j];
				input[j] = temp;
#else
				SWAP(input[i],input[j]);
#endif
			}
		}	

	}

	/* Copy to output buffer */
	for(i=0;i<length;i++)
	{
		output[i] = input[i];
	}

	return 0;
}


/*
@ func: selection_sort
@ desc: function to sort an input array using selection sorting algo
        result is copied to an output array
@ param: input  => input un sorted array
         output => sorted output
         len    => length of the input
*/
int selection_sort(int *input, int *output, int len)
{
	int i,min_index,j;
	
	for(i=0;i<len;i++)
	{
		min_index = find_min_index(input+i,len-i);
		if(min_index != 0) 
		{
			SWAP(input[i],input[min_index+i]);
		}
	}
	
	/* Copy to output buffer */
	for(i=0;i<len;i++)
	{
		output[i] = input[i];
	}
}

/*
@ func: bubble_sort
@ desc: function to sort an input array using bubble sorting algo
        result is copied to an output array
@ param: input  => input un sorted array
         output => sorted output
         len    => length of the input
*/
int bubble_sort(int *input, int *output, int len)
{
	int i,j;

	for(i=0;i<len;i++)
	{
		for(j=0;j<len-i-1;j++)
		{
			if(input[j] > input[j+1])
			{
				SWAP(input[j],input[j+1])
			}
		}
	}
	
	/* Copy to output buffer */
	for(i=0;i<len;i++)
	{
		output[i] = input[i];
	}

}

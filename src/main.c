#include "main.h"

int input[10] = { 5,2,7,6,24,56,22,1,9,11};
int output[10] = {0};

int main(int argc, char **argv)
{
	int ret_val,i,option;

	if(argc > 1)
	{
		option = atoi((const char *)argv[1]);
		printf("Option selected = %d\n",option);
	}
	else
	{
		printf("Usage ./sample_app <option>\n");
		printf(" 1: insertion sort \n");
		printf(" 2: selection sort \n");

		return 0;
	}

	printf("---------------------------------\n");
	switch(option)
	{
	case 1:
		printf("Example program - Insertion sort \n");
		ret_val = insert_sort(input,output,10);
		break;

	case 2:
		printf("Example program - Selection sort \n");
		ret_val = selection_sort(input,output,10);
		break;

	default:
		printf("Invalid option \n");
		return -1;
	}

	/* print output values */
	for(i=0;i<10;i++)
	{
		printf("%d ",output[i]);
	}
	
	printf("\n---------  End  -----------------\n");
	return 0;
}

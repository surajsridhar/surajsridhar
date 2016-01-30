#include <stdio.h>
#include "hw1.h"

void reverse_string(char *str, int length)

{
    char *start = str;
    char *finish = start + length -1;
    char temp;
	if(length >0)
	{
	    while (finish > start)
        {
            temp = *start;
            *start= *finish;
            *finish = temp;
            ++start;
            --finish;
        }
		return;
	}
	else
	{
        printf ("error");
		return;
	}
}

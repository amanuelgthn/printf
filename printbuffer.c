#include<stdio.h>
#include<stdarg.h>
#include<stdlib.h>
#include<stdlib.h>
#include"main.h"/**
*print_buffer- function to print the buffer if exists
*@buffer: an array of chars of buffer
*@buff_ind: number of char
*/
void print_buffer(char buffer[], int *buff_ind)
{
	if (*buff_ind > 0)
	{
		write(1, &buffer[0], *buff_ind);
	}
	*buff_ind = 0;
}

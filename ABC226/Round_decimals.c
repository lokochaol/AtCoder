//
//  main.c
//  TestCLanguage.c
//
//  Created by 廣岡晃一 on 2021/11/07.
//


#include <stdio.h>
#include <math.h>

int main(void)
{
	double	input;
	int		output;
	
	scanf("%lf", &input);
	output = round(input);
	printf("%d", output);
	return(0);
}
#include <iostream>

#include "assert.h"
/*
SYNOPSIS
   assert(expression) 

NAME
   used for state assertion before software release

*/
using namespace std;

int main()
{
  	bool cond;
	/*OK*/
	assert(cond = true);
	/*Nok*/
	assert(cond = false);
	return 0;
}

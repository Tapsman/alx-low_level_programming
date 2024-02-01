#include<stdio.h>
/**
* myStartupFun - Applying the constructor attribute
* to myStartupFun() so that it
*   is executed before the main() function
*/
void myStartupFun(void) __attribute__((constructor));
/**
* myStartupFun - My startup implementation
*/
void myStartupFun(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

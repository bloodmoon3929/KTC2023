#include <stdio.h>
#define double(x) 2*x
#define BO_OL 1
#ifndef BO_OL
	#define NUM 0
#else
	#define NUM 1
#endif
#if NUM==0
	#define TRUE 1
#else
	#define TRUE 0
#endif
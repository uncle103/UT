#ifndef __ASSERT_H
#define __ASSERT_H

#include <cstdio>
#include <cstdlib>
#include <iostream>


static inline void __my_assert(char const* srcfile, unsigned int line, char const* funcname,\
  char const *cond)
{
	using namespace std;
	cout << srcfile << ": in line "<<  line << " function: "<< funcname <<" Assertion [ "
	<<  cond << " ] failed" << endl; 

	abort();
} 

#ifdef NDEBUG
  #define assert(cond) ((void)0)
#else
  #define assert(cond) ((cond)? (void)0 : __my_assert(__FILE__,__LINE__,__FUNCTION__,#cond))
#endif


#endif

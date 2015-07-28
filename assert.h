#ifndef ASSERT_H
#define ASSERT_H

#include <stdio.h>

#define c_assert(cond)      if (cond == 0) { fprintf(stderr, "%s line %d : %s\n", __FILE__, __LINE__ ,#cond); }
#define p_assert(pointer)   if (pointer == NULL) { fprintf(stderr, "%s line %d : %s == NULL\n", __FILE__, __LINE__ ,#pointer); }

#endif

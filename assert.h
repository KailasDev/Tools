#ifndef ASSERT_H
#define ASSERT_H

#include <stdio.h>

#define c_assert(cond)      if (cond == false) { fprintf(err, "%s line %s : %s", __FILE__, __LINE__ ,#cond); }
#define p_assert(pointer)   if (pointer == NULL) { fprintf(err, "%s line %s : %s == NULL", __FILE__, __LINE__ ,#pointer); }

#endif

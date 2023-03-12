#include "hamming.h"
#include <string.h>
#include <stdio.h>
#include <stdbool.h>

int compute(const char *lhs, const char *rhs) {
   // Error if strands are of different lengths.
   if (!(strlen(lhs) == strlen(rhs))) {
      return -1;
   }

   // Count number of differences between strands.
   int diff_count = 0;
   for(int i = 0; lhs[i]; i++) {
      if (lhs[i] != rhs[i]) {
         diff_count++;
      }
   }

   return diff_count;
}
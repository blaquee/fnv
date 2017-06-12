#include <stdio.h>
#include "fnv.h"


int main(int argc, char** argv)
{
  char api_name[] = "GetProcAddress";
  Fnv32_t hash = fnv_32a_str(api_name, FNV1_32A_INIT);
  printf("%s : 0x%x\n", api_name, hash);
  getchar();

}

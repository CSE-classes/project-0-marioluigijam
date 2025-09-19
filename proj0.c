#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char *argv[])
{
  int i;

  // Modified version of echo.c to print a custom message before each line.


  if (argc < 2) 
  {
    printf(1, "CSE3320 proj0 printing in user space:\n");
  }
  else // argc >= 2
  {
    printf(1, "CSE3320 proj0 printing in user space: ");
  }


  for(i = 1; i < argc; i++)
  {
    printf(1, "%s%s", argv[i], i+1 < argc ? " " : "\n");
  }
  exit();
}

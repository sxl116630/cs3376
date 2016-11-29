/* fork1 */
#include <stdio.h>
#include <unistd.h>

main()
{ int i;
  if (fork()) fork();
  printf("Fork returned %d\n",i);
}


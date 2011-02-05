#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void wait ( int seconds )
{
  clock_t endwait;
  endwait = clock () + seconds * CLOCKS_PER_SEC ;
  while (clock() < endwait) {}
}

int main ()
{
  int n;
  printf ("Starting countdown...\n");
  for (;;)
  {
    system("notify-send \"Залуу нүдээ амраагаач ээ!!!\"");
    wait(60*60);
  }
  printf ("FIRE!!!\n");
  return 0;
}

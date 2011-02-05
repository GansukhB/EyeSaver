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
  for (;;)
  {
    system("notify-send -t 0 \"Залуу нүдээ амраагаач ээ!!!\"");
    for(int i = 0; i < 9; i++) wait(400);
  }
  return 0;
}

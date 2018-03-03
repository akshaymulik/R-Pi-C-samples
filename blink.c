#include <wiringPi.h>
#define Right 19
#define Left  26
#define Turn  0
int main (void)
{
  wiringPiSetup () ;
  pinMode (Right, OUTPUT) ;
  pinMode (Left, OUTPUT)  ;
  for (;;)
  {
    digitalWrite (Right, HIGH) ; delay (500) ;
    digitalWrite (Right,  LOW) ; delay (500) ;
    digitalWrite (Left, HIGH) ; delay (500) ;
    digitalWrite (Left,  LOW) ; delay (500) ;
  }
  return 0 ;
}

#include "Sqrt_Command.h"
#include <math.h>

Sqrt_Command:: Sqrt_Command(Stack <int> & s)
  :Unary_Op_Command(s)
{
  
}

Sqrt_Command:: ~Sqrt_Command()
{

}

int Sqrt_Command:: evaluate(int n) const
{
  return sqrt(n);
}

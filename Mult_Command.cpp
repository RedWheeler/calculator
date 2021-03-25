#include "Mult_Command.h"

Mult_Command:: Mult_Command(Stack <int> & s)
  :Binary_Op_Command(s)
{
  
}

Mult_Command:: ~Mult_Command()
{

}

int Mult_Command:: evaluate(int n1, int n2) const
{
  return n1 * n2;
}

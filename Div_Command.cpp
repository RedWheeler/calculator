#include "Div_Command.h"

Div_Command:: Div_Command(Stack <int> & s)
  :Binary_Op_Command(s)
{
  
}

Div_Command:: ~Div_Command()
{

}

int Div_Command:: evaluate(int n1, int n2) const
{
  if(n2 == 0)
    throw std::invalid_argument("Divide by zero error");
  return n1 / n2;
}

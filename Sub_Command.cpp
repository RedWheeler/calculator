#include "Sub_Command.h"

Sub_Command:: Sub_Command(Stack <int> & s)
  :Binary_Op_Command(s)
{
  
}

Sub_Command:: ~Sub_Command()
{

}

int Sub_Command:: evaluate(int n1, int n2) const
{
  return n1 - n2;
}

#include "Mod_Command.h"

Mod_Command:: Mod_Command(Stack <int> & s)
  :Binary_Op_Command(s)
{
  
}

Mod_Command:: ~Mod_Command()
{

}

int Mod_Command:: evaluate(int n1, int n2) const
{
  return n1 % n2;
}

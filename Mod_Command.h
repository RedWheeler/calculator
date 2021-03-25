#ifndef _MOD_COMMAND_H_
#define _MOD_COMMAND_H_

#include "Binary_Op_Command.h"

class Mod_Command : public Binary_Op_Command
{
public:
  Mod_Command(Stack <int> & s);
  ~Mod_Command();
  int evaluate (int n1, int n2) const;
};

#endif

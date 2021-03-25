#ifndef _MULT_COMMAND_H_
#define _MULT_COMMAND_H_

#include "Binary_Op_Command.h"

class Mult_Command : public Binary_Op_Command
{
public:
  Mult_Command(Stack <int> & s);
  ~Mult_Command();
  int evaluate (int n1, int n2) const;
};

#endif

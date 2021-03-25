#ifndef _SQRT_COMMAND_H_
#define _SQRT_COMMAND_H_

#include "Unary_Op_Command.h"

class Sqrt_Command : public Unary_Op_Command
{
public:
  Sqrt_Command(Stack <int> & s);
  ~Sqrt_Command();
  int evaluate (int n) const;
};

#endif

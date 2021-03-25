#ifndef _SUB_COMMAND_H_
#define _SUB_COMMAND_H_

#include "Binary_Op_Command.h"

class Sub_Command : public Binary_Op_Command
{
public:
  Sub_Command(Stack <int> & s);
  ~Sub_Command();
  int evaluate (int n1, int n2) const;
};

#endif

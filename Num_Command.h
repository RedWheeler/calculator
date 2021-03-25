#ifndef _NUM_COMMAND_H_
#define _NUM_COMMAND_H_

#include "Expr_Command.h"
#include "Stack.h"

class Num_Command : public Expr_Command 
{
public:
  Num_Command(Stack <int> & s, int n);
  void execute(void);

private: 
  Stack <int> & s_;
  int n_;
};

#endif

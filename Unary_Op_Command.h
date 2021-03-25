#ifndef _UNARY_OP_COMMAND_H_
#define _UNARY_OP_COMMAND_H_

#include "Expr_Command.h"
#include "Stack.h"

class Unary_Op_Command : public Expr_Command 
{
protected:
  Unary_Op_Command(Stack <int> & s);

public:
  ~Unary_Op_Command();
  void execute (void);
  virtual int evaluate (int n1) const = 0;

private:  
  Stack <int> & s_;  

};

#endif

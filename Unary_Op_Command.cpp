#ifndef _UNARY_COMMAND_H_
#define _UNARY_COMMAND_H_

#include "Unary_Op_Command.h"

Unary_Op_Command:: Unary_Op_Command(Stack <int> & s)
  :s_ (s)
{

}

Unary_Op_Command:: ~Unary_Op_Command(void)
{

}

//remove top value from stack and perform unary operation and push result
void Unary_Op_Command:: execute(void) 
{
  int n = s_.top();
  s_.pop();
  int result = this->evaluate(n);
  s_.push(result);
}

#endif

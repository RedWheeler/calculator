#include "Binary_Op_Command.h"

Binary_Op_Command:: Binary_Op_Command(Stack <int> & s)
  :s_ (s)
{

}

Binary_Op_Command:: ~Binary_Op_Command(void)
{

}

//pop top 2 elements and push the binary operation result
void Binary_Op_Command:: execute(void) 
{
  int n2 = s_.top();
  s_.pop();
  int n1 = s_.top();
  s_.pop();
  int result = this->evaluate(n1,n2);
  s_.push(result);
}


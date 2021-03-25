#include "Num_Command.h"

Num_Command:: Num_Command(Stack <int> & s, int n)
  :s_ (s), n_ (n)
{

}

void Num_Command:: execute(void)
{
  s_.push(this->n_);
}

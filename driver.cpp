#include "Calculator.h"

// COMMENT: Instead of using C functions to implement parts of the
// calculator. It would be better suited to use a Wrapper Facade.
// RESPONSE: Moved implementations to a new class: Calculator
int main()
{ 
  Calculator calc;
  calc.run_calculator();
  return 0;
}

#include <iostream>
#include <string>
#include <sstream>
#include <cctype>
#include <stdexcept>
#include "Stack_Expr_Command_Factory.h"

class Calculator
{
public:
  Calculator(void);
  ~Calculator(void);
  void run_calculator(void);
  bool infix_to_postfix(const std::string & infix, Array <Expr_Command *> & postfix);

private:
  Stack <int> stack;
  Stack_Expr_Command_Factory factory;
};

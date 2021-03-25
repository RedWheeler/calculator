#include "Stack.h"
#include "Expr_Command_Factory.h"

class Stack_Expr_Command_Factory: public Expr_Command_Factory
{

public:
  
  Stack_Expr_Command_Factory (Stack <int> & stack);

  ~Stack_Expr_Command_Factory (void);

  Num_Command * create_num_command (int num);

  Add_Command * create_add_command (void);
  
  Sub_Command * create_sub_command (void);

  Mult_Command * create_mult_command (void);

  Div_Command * create_div_command (void);

  Mod_Command * create_mod_command (void);

  Sqrt_Command * create_sqrt_command (void);

private:
  Stack <int> & stack_;
  Stack <Expr_Command *> cmds_;

};

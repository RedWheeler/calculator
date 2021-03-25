#include "Num_Command.h"
#include "Add_Command.h"
#include "Sub_Command.h"
#include "Mult_Command.h"
#include "Div_Command.h"
#include "Mod_Command.h"
#include "Sqrt_Command.h"

class Expr_Command_Factory
{
public:
  virtual ~Expr_Command_Factory (void) = 0;

  virtual Num_Command * create_num_command (int num) = 0;

  virtual Add_Command * create_add_command (void) = 0;
  
  virtual Sub_Command * create_sub_command (void) = 0;

  virtual Mult_Command * create_mult_command (void) = 0;

  virtual Div_Command * create_div_command (void) = 0;

  virtual Mod_Command * create_mod_command (void) = 0;

  virtual Sqrt_Command * create_sqrt_command (void) = 0;

};


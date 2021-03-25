#include "Stack_Expr_Command_Factory.h"

Stack_Expr_Command_Factory:: Stack_Expr_Command_Factory(Stack <int> & stack)
  :stack_ (stack)
{

}

Stack_Expr_Command_Factory:: ~Stack_Expr_Command_Factory(void)
{ 
  while(!cmds_.is_empty())
  {
    delete cmds_.top();
    cmds_.pop();
  }
}

Num_Command * Stack_Expr_Command_Factory:: create_num_command(int num)
{
  Num_Command * cmd = new Num_Command(stack_, num);
  cmds_.push(cmd);
  return cmd;
}

Add_Command * Stack_Expr_Command_Factory:: create_add_command(void)
{
  Add_Command * cmd = new Add_Command(stack_);
  cmds_.push(cmd);
  return cmd;
}

Sub_Command * Stack_Expr_Command_Factory:: create_sub_command(void)
{
  Sub_Command * cmd = new Sub_Command(stack_);
  cmds_.push(cmd);
  return cmd;
}

Mult_Command * Stack_Expr_Command_Factory:: create_mult_command(void)
{
  Mult_Command * cmd = new Mult_Command(stack_);
  cmds_.push(cmd);
  return cmd;
}

Div_Command * Stack_Expr_Command_Factory:: create_div_command(void)
{
  Div_Command * cmd = new Div_Command(stack_);
  cmds_.push(cmd);
  return cmd;
}

Mod_Command * Stack_Expr_Command_Factory:: create_mod_command(void)
{
  Mod_Command * cmd = new Mod_Command(stack_);
  cmds_.push(cmd);
  return cmd;
}

Sqrt_Command * Stack_Expr_Command_Factory:: create_sqrt_command(void)
{
  Sqrt_Command * cmd = new Sqrt_Command(stack_);
  cmds_.push(cmd);
  return cmd;
}

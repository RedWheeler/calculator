#ifndef _EXPR_COMMAND_H_
#define _EXPR_COMMAND_H_

class Expr_Command {
public: 
    virtual ~Expr_Command(void) = 0;
    virtual void execute(void) = 0; 
};

#endif

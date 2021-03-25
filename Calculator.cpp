#include "Calculator.h"

  Calculator:: Calculator(void)
:factory(Stack_Expr_Command_Factory(stack))
{

}

Calculator:: ~Calculator(void)
{

}

void Calculator:: run_calculator(void)
{
  bool keepGoing = true;
  std::string line;

  while(keepGoing) 
  {
    std::cout << "Prefix Expression: ";
    std::getline(std::cin, line);

    if(line == "QUIT")
      keepGoing = false;
    else
    {
      Array <Expr_Command *> commands;
      try
      {
	infix_to_postfix(line, commands);
	for(int i = 0; i < commands.size(); i++)
	{
	  commands[i]->execute();	  
	}
	std:: cout << stack.top() << std::endl;
	stack.pop();
      }
      catch(std::exception& e)
      {
	std::cout << e.what() << std::endl;
      }  
    }
  }
}

bool Calculator:: infix_to_postfix(const std::string & infix, Array <Expr_Command *> & postfix)
{
  std::istringstream input(infix);
  std::string token;
  Expr_Command * cmd = 0;
  Stack <Expr_Command *> temp;

  //keep track of operator precedences and parenthesis locations
  Stack <int> prec, paren;
  paren.push(-1);
  int plvl;

  while(!input.eof())
  {
    input >> token;

    //Parenthesis
    if(token == "(")
      paren.push(temp.size());
    else if(token == ")")
    {

      while(temp.size() > paren.top())
      {
	postfix.resize(postfix.size()+1);
	postfix[postfix.size() - 1] = temp.top();
	temp.pop();
	prec.pop();
      }
      paren.pop();
    }

    //Binary Commands
    else if(token.length() == 1 && !isdigit(token[0]))
    {
      if(token == "+")
      {
	cmd = factory.create_add_command();
	plvl = 0;
      }    
      else if(token == "-")
      {  
	cmd = factory.create_sub_command();
	plvl = 0;
      }
      else if(token == "*")
      {  
	cmd = factory.create_mult_command();
	plvl = 1;
      }
      else if(token == "/")
      {  
	cmd = factory.create_div_command();
	plvl = 1;
      }
      else if(token == "%")
      {  
	cmd = factory.create_mod_command();
	plvl = 1;
      }
      else
      {
	throw std::invalid_argument("Operator not recognized"); 
      }
      
      //pop from temp stack until top operation has lower precedence 
      //or until an opening parenthesis is found
      while(!prec.is_empty() && prec.top() >= plvl && temp.size() != paren.top())
      {
	postfix.resize(postfix.size()+1);
	postfix[postfix.size() - 1] = temp.top();
	temp.pop();
	prec.pop();
      }

      temp.push(cmd);
      prec.push(plvl);
    }

    //Number Commands
    else
    {
      bool isValid = true; 
      for(int i = 0; i < token.length(); i++)
      {
	if(i == 0)
	{
	  if(!isdigit(token[i]) && token[i] != '-')
	    isValid = false;
	}
	else if(!isdigit(token[i])){
	  isValid = false;
	}
      }      
      if(!isValid)
	throw std::invalid_argument("Operator not recognized"); 

      cmd = factory.create_num_command(std::stoi(token));
      postfix.resize(postfix.size()+1);
      postfix[postfix.size() - 1] = cmd; 
    }
  }

  //Check for missing closing parenthesis
  if(paren.size() > 1)
  {
    throw std::invalid_argument("Missing closing parenthesis");  
  }

  while(!temp.is_empty())
  {
    postfix.resize(postfix.size()+1);
    postfix[postfix.size() - 1] = temp.top();
    temp.pop();
  } 

  return true;
}


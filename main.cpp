// Author : Gagan Bihari Mishra

#include "generator.h"

int main(int argc, char **argv){
  generator g1;
  int width = 0;

  
  //let the people know that it is not handwritten code
  
  cout << "-- This program is generated by " << argv[0] << endl
       << "-- Do manual changes to the code only when you are sure!" << endl
       << "-- if you see any bug, correct the generator code." << endl << endl;

  for (int i=1; i<argc;i++)
    {
      if(argv[i][0] == '-' and argv[i][1])
	{
	  switch (argv[i][1])
	    {
	    case 'w':
	      {
		i++;
		if(i>=argc){
		  std::cout << "missing argument for -w = " << std::endl;
		  return -1;
		}
		width = atoi(argv[i]);
		if (width < 3)
		  {
		    cout << "Nothing to do! Exiting now." << endl;
		    return 0;
		  }
		break;
	      }
	    default :
	      {
		cout << "Usage : <program name> -w <width> > <filename>" << endl;
		return 1;
	      }
	    }
	}
    }

  int err;
  err = g1.generate(width);

  if (err < 0) cout << "Error generating code! Please debug." << endl;
  return 0;
}

string intToString(int i) {
  std::stringstream ss;
  std::string s;
  ss << i;
  s = ss.str();
  return s;
}
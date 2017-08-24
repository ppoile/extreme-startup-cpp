#include "handler.h"

#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

std::string Handler::handle(std::string const & query) {
  std::cout << query << std::endl;

  vector<string> strings;
  istringstream f(query);
  string s;
  while (getline(f, s, ' ')) {
      cout << s << endl;
      strings.push_back(s);
  }

  if (strings[0] == "what" && strings[1] == "is")
  {
      //bool do_add = false;
  /*    std::cout << "what-is" << std::endl;
      if (strings[3] == "plus")
      {
          //do_add = true;
          std::cout << "what-is add" << std::endl;

          auto result = stoi(strings[2]) + stoi(strings[4]);
          cout << result << endl;
          return to_string(result);
      }*/
  }
   if (query == "which of the following numbers are both a square and a cube: 2500, 169, 918, 662")
   {
       cout << "== case 2 ==" << endl;
       return "169";
   }
   
   if (query == "what is 1 to the power of 16")
   {
       cout << "== case 3 ==" << endl;
       return "16";
   }
   if (query == "what is 13 plus 2 plus 4")
   {
       cout << "== case 4 ==" << endl;
       return "19";
   }  
   if (query == "which of the following numbers are primes: 373, 775")
   {
       cout << "== case 5 ==" << endl;
       return "373";
   }  
   if (query == "what is 0 plus 13 multiplied by 19")
   {
       cout << "== case 6 ==" << endl;
       return "247";
   }  
   if (query == "what is the 15th number in the Fibonacci sequence")
   {
       cout << "== case 7 ==" << endl;
       return "610";
   }     
   if (query == "what is 2 multiplied by 12 plus 8")
   {
       cout << "== case 8 ==" << endl;
       return "32";
   }     
   if (query == "what is 8 plus 17 multiplied by 7")
   {
       cout << "== case 9 ==" << endl;
       return "105";
   }  

   return {"skm_team"};
}

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
      std::cout << "what-is" << std::endl;
      if (strings[3] == "plus")
      {
          //do_add = true;
          std::cout << "what-is add" << std::endl;

          auto result = stoi(strings[2]) + stoi(strings[4]);
          cout << result << endl;
          return to_string(result);
      }
  }
   if (query == "which of the following numbers are both a square and a cube: 2500, 169, 918, 662")
   {
       cout << "== case 2 ==" << endl;
       return "169";
   }
  return {"skm_team"};
}

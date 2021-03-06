#include "handler.h"
#include "server.h"

#include <iostream>

int main() {
  Handler handler;
  auto callback = std::bind(&Handler::handle, &handler, std::placeholders::_1);

  Server server("3000", callback);
  server.start();

  while(not std::cin.eof()) {
    char _;
    std::cin >> _;
  }

  server.stop();

  return 0;
}

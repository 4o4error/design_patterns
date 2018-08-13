#include <iostream>
#include <resource.h>

void doSomething()
{
  std::cout << "In do something" << std::endl;
  Logger* logger = new Logger("doSomething.log");
  logger->log("Writing from do something");
  delete logger;
}

void doSomethingElse()
{
  std::cout << "In do something else" << std::endl;
  Logger* logger = new Logger("doSomethingElse.log");
  logger->log("Writing from do something else");
  delete logger;
}

int main() {
  std::cout << "In main" << std::endl;
  Logger* logger = new Logger("main.log");
  logger->log("Writing from main");
  delete logger;

  doSomething();
  doSomethingElse();
}
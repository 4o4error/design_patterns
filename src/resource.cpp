#include <iostream>
#include <resource.h>

bool Logger::openFile() {
  ofs.open(fileName, std::ofstream::out);
  if (ofs.good())
  {
    return true;
  }
  return false;
}
Logger::Logger(std::string fName)
{
  fileName = fName; 
  openFile();
}

Logger::~Logger()
{
  ofs.close();
}


void Logger::log(std::string str)
{
  if (!ofs.good())
  {
    openFile();
  }
  ofs << str << std::endl;
}
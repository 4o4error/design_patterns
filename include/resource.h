#include <string>
#include <fstream>
class Logger
{
public:
  Logger(std::string fName = "my_log.log");
  ~Logger();
  void log(std::string str);
private:
  // returns true if file was opened for writing succesfully 
  bool openFile();
  std::string fileName;
  std::ofstream ofs;
};
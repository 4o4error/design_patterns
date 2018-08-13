#include <iostream>
#include <resource.h>

// for sleep 
#include <chrono>
#include <thread>

Resource::Resource(int v)
{
 
  value = v;

  // simmulate labour intensive initialization 
  std::this_thread::sleep_for(std::chrono::milliseconds(1000));
  objectCount++;
  std::cout << "Creating Resource object no. " << objectCount << std::endl;

}

Resource::~Resource()
{
  std::cout << "Destroying Resource" << std::endl;
}
int Resource::getValue()
{
  return value;
}
void  Resource::setValue(int v)
{
  value = v;
}

void Resource::printValue()
{
  std::cout << "value in object no.  " << objectCount << " is "<<  value<< std::endl;
}

Resource* Resource::getInstance()
{
  static Resource resource;
  return &resource;
}


int Resource::objectCount = 0;
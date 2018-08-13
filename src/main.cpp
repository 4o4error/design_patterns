#include <iostream>
#include <resource.h>

void doSomething()
{
  // intialize resource
  Resource* resource = Resource::getInstance();
  resource->setValue(2);
  resource->printValue();
  // deletion is done when resouce goes out of scope (program termination) 
  //delete resource;
}

void doSomethingElse()
{
  // intialize resource
  Resource* resource = Resource::getInstance();
  resource->setValue(4);
  resource->printValue();
  // deletion is done when resouce goes out of scope (program termination) 
  //delete resource;
}

int main() {
  // intialize resource
  Resource* resource = Resource::getInstance();
  resource->setValue(0);
  resource->printValue();
  // deletion is done when resouce goes out of scope (program termination) 
  //delete resource;

  doSomething();
  doSomethingElse();
}
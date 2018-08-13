#include <iostream>
#include <resource.h>

/**
* ISSUE: memory is allocated/ de-allocated each use
*/ 
void doSomething()
{
  // intialize resource
  Resource* resource = createResource();
  resource->setValue(2);
  resource->printValue();
  // delete resource after we're done with it
  delete resource;
}

void doSomethingElse()
{
  // intialize resource
  Resource* resource = createResource();
  resource->setValue(4);
  resource->printValue();
  // delete resource after we're done with it
  delete resource;
}

int main() {
  // intialize resource
  Resource* resource = createResource();
  resource->setValue(0);
  resource->printValue();
  // delete resource after we're done with it
  delete resource;

  doSomething();
  doSomethingElse();
}
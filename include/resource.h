
class Resource
{
public:
  Resource(int v = 0);
  ~Resource();
  int getValue();
  void setValue(int v);
  void printValue();
private:
  int value;
  static int objectCount;

};
// create new Resource
Resource* createResource();
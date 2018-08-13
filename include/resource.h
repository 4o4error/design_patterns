
class Resource
{
public:
  ~Resource();
  int getValue();
  void setValue(int v);
  void printValue();
  static Resource* getInstance();
private:
  Resource(int v = 0);
  int value;
  static int objectCount;

};
// create new Resource
Resource* createResource();
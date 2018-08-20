#include <iostream>


typedef int volts;
class USAPhoneCharger;
class EuropeanSocket;
class USASocket;

class SocketInterface
{
public:
  virtual int getVoltage() = 0;
  virtual ~SocketInterface() {}
};

// starting interface
class EuropeanSocket : public SocketInterface
{
  // Inherited via SocketInterface
  virtual int getVoltage() override
  {
    return 220;
  }
};

// target interface 
class USASocket : public SocketInterface
{
public:
  virtual int getVoltage() override
  { 
    return 110; 
  }

};

// client 
class USAPhoneCharger
{
  SocketInterface* power;

public:
  void plugIn(SocketInterface* supply)
  {
   
    power =supply ;
  }
  void charge()
  {
    if (power->getVoltage() > 110)
    {
      std::cout << "phone goes boom" << std::endl;
    }
    else
    {
      std::cout << "phone is fine" << std::endl;
    }
  }
};
void main (){
  //TODO: charge the phone with an european socket without blowing it up
  SocketInterface* socket = new EuropeanSocket;
  USAPhoneCharger phoneCharger;
  phoneCharger.plugIn(socket);
  phoneCharger.charge();
}
#ifndef __MYFIRSTPLUGIN__
#define __MYFIRSTPLUGIN__

#include "IPlug_include_in_plug_hdr.h"

class MyFirstPlugin : public IPlug
{
public:
  MyFirstPlugin(IPlugInstanceInfo instanceInfo);	//Constructor
  ~MyFirstPlugin();									//Destructor

  //Member Functions
  void Reset();	//Reset() Called when sample rate is changed
  void OnParamChange(int paramIdx);	//Called when plugin parameter changes (knob turn)
  void ProcessDoubleReplacing(double** inputs, double** outputs, int nFrames);	//SIGNAL PROCESSING

private:
  double mGain; //Gain
};

#endif

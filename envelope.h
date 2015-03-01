/* 
	
envelope.cpp library
this library is to be used with standuino fraAngelico hardware
MOZZI library compatible
documentation of the library you find here:
envelope library

Created by Vaclav Pelousek 2013 www.pelousek.eu
for Standuino wwww.standuino.eu

*/

#ifndef envelope_h
#define envelope_h

#include "Arduino.h"
#include <avr/pgmspace.h>


#define ATTACK_PHASE 0
#define DECAY_PHASE 1
#define SUSTAIN_PHASE 2
#define RELEASE_PHASE 3
#define END_PHASE 4


#define MIN_VALUE 0

class envelope
{
  public: 
  
    envelope(); // constructor unsigned char CONTROL_RATE
	
	void update();

    void setADSR(unsigned int _ATTACK,unsigned int _DECAY,unsigned char _SUSTAIN, unsigned int _RELEASE);
    void setAttack(unsigned int _ATTACK);
    void setDecay(unsigned int _DECAY);
    void setSustain(unsigned char _SUSTAIN);
    void setRelease(unsigned int _RELEASE);
    
    void noteOn(unsigned char _VELOCITY);
    void noteOn();
    void noteOff();
    
    unsigned char next();
	unsigned char getPhase();
	boolean active();

  private: 
  	
	
	unsigned char phase;
	
	unsigned int counter;
	int value;
	unsigned char MAX_VALUE;
	unsigned int attack;
	unsigned int decay;
	unsigned char sustain;
	unsigned char activeSustain;
	unsigned int release;
	unsigned char velocity;
	
	unsigned char attackStep;
	unsigned char decayStep;
	unsigned char sustainStep;
	unsigned char releaseStep;
	unsigned char releaseFrom;
	bool flop;
	
	boolean _active;
	
	
};

#endif
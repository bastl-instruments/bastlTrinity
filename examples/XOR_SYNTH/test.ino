
int counter;
#define COUNTER_LIMIT 64
boolean flip;

boolean sendSwitch;


void testMode(){
  

 //  ADSR[0].setAttack(scale(getVar(0,ATACK),variableDepth[ATACK],ADSR_BITS)) ;
   //ADSR[0].setDecay(scale(getVar(0,DECAY),variableDepth[DECAY],ADSR_BITS)) ;
   ADSR[0].setSustain(255);
   //ADSR[0].setRelease(scale(getVar(0,RELEASE),variableDepth[RELEASE],ADSR_BITS));
   
   ADSR[0].update();
  MIDI.read();
  counter++;
  if(counter>COUNTER_LIMIT){
    counter=0, flip=!flip;
    if(flip) ADSR[0].noteOn(127), amplitude=255, aOsc[0].setFreq(rand(1000));
    else ADSR[0].noteOff();
    
  }// randomize(hw.soundFromSwitches());
  if(flip) anySound();
  else stopSound();


  if(hw.justPressed(SMALL_BUTTON_1)) page=increaseValue(page,2) , MIDI.sendControlChange(13,page,1);
  if(hw.justPressed(SMALL_BUTTON_2)) page=decreaseValue(page,2), MIDI.sendControlChange(13,page,1);
  hw.setColor(page+1);


  for(int i=0;i<3;i++){
    if(hw.justPressed(i))  hw.flipSwitch(i), sendSwitch=true;
    hw.setLed(i,hw.switchState(i));
    hw.unfreezeKnob(i);
    if(hw.knobMoved(i)) MIDI.sendControlChange(10+i,hw.knobValue(i)>>3,1),  hw.setColor(WHITE);
  }
  if(sendSwitch) MIDI.sendControlChange(14,hw.soundFromSwitches(),1), sendSwitch=false;
  /*

   if(hw.buttonState(EXTRA_BUTTON_1) || hw.buttonState(EXTRA_BUTTON_2) ){
   for(int i=0;i<3;i++)  hw.setSwitch(i,random(2));
   }
   */
}

void anySound(){
 

  // for(int i=0;i<NUMBER_OF_VOICES;i++) aOsc[i].setFreq(i*100+100), ADSR[i].noteOn(127);
  //randomize(1);
  //  renderTweaking(0);
  // renderTimeStretch();
  // playSound(1,DEFAULT_VELOCITY);


}
void stopSound(){
  //for(int i=0;i<NUMBER_OF_VOICES;i++)  //aOsc[i].setFreq(rand(1000)),
  //renderTimeStretch();
}



int decreaseValue(int _VALUE, int _OVERFLOW){
  if(_VALUE > 0) _VALUE--;
  else _VALUE=_OVERFLOW;
  return _VALUE;
}





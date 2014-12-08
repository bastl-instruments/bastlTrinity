#ifndef WHITENOISE2048_H_
#define WHITENOISE2048_H_

#include "Arduino.h"
#include <avr/pgmspace.h>

#define WHITENOISE2048_NUM_CELLS 2048
#define WHITENOISE2048_SAMPLERATE 2048

const int8_t __attribute__((progmem)) WHITENOISE2048_DATA []  =
        {

-84,

-56,-98,111,93,-5,-67,-29,-84,42,47,86,-1,-15,114,-114,94,12,121,-27,122,76,-56,-66,-29,44,

98,3,-93,-104,-92,-51,85,-44,-105,74,-124,0,-84,-62,74,33,-126,-9,-114,-18,77,126,-113,-110,66,

40,-127,95,-61,69,-109,57,-27,76,-41,13,-120,-113,32,110,-44,71,5,-36,-61,-60,-20,76,-98,13,

26,-113,-78,24,86,33,-122,4,-46,18,120,83,20,121,-21,112,22,39,-31,-5,81,-34,121,-63,-14,

-58,116,-99,-90,-107,32,-62,53,111,-18,118,100,20,-44,39,-105,58,75,-87,-35,-16,27,49,102,-41,

78,-53,-23,83,-1,2,81,25,-88,104,8,-29,-58,58,45,80,7,-104,-51,-19,115,-52,-114,-17,-35,

43,30,-74,-11,72,-70,121,-38,-87,78,107,114,-5,3,99,33,11,27,-71,-17,97,52,29,-55,-55,

121,70,74,-52,80,-86,-9,-48,90,104,-19,8,92,-65,69,105,112,-28,-102,-89,-37,24,0,-119,-29,

-4,25,7,35,-92,110,-74,50,-110,-96,-90,-60,11,-31,36,-91,-68,64,72,94,-119,-76,-119,-82,-80,

1,-18,11,116,23,-37,-125,-27,-8,20,34,-16,-74,62,35,-92,-60,79,-62,95,35,39,120,76,97,

37,-31,-110,126,-126,52,-76,-22,57,64,126,124,51,-52,86,-11,23,-4,-54,-54,-36,7,-97,-25,44,

-23,75,-93,-105,-117,89,-43,-26,47,-16,-99,12,-93,-30,4,0,-8,14,66,-6,-22,-85,-92,17,-58,

-73,-23,3,29,-55,-99,26,-59,-35,-76,-16,-98,-35,-67,-5,-116,28,-35,77,-98,-68,-104,28,95,105,

-8,-68,24,27,4,-52,-70,31,71,-101,69,81,120,16,29,-59,-50,-125,96,109,-33,13,-66,-26,88,

97,26,75,51,-75,-86,18,-48,-6,-38,121,-110,98,-54,-20,124,-120,92,80,-90,80,119,-82,-27,-2,

59,37,9,-57,50,56,66,-69,37,-6,7,-104,97,-23,-68,-41,56,85,119,75,-115,-106,21,11,-24,

69,88,-88,-109,14,-110,117,-111,108,-97,64,-58,-25,101,-30,81,0,-55,117,59,-111,-23,94,19,105,

41,-122,55,30,122,40,96,-87,45,99,4,26,-47,46,1,80,73,-72,107,-93,-117,90,10,-4,-29,

-87,-11,22,-40,-18,-55,111,-44,15,4,28,-39,33,76,8,18,-10,15,-114,-92,-54,-125,7,-78,49,

62,76,121,-84,118,-67,-46,124,-54,-12,-101,71,41,95,-37,47,-17,-19,17,90,101,78,-115,-10,10,

25,46,-84,-113,104,-58,-120,-79,-107,67,126,-74,57,4,80,63,-60,126,82,6,120,-35,-121,65,-16,

-79,-4,-20,22,116,-119,123,77,-52,76,-57,-57,0,54,2,-115,-42,24,92,62,-13,79,62,-83,-60,

92,115,73,47,117,28,-35,77,-4,-11,-85,90,113,-21,-43,-123,-74,48,92,-113,-3,-22,41,-95,104,

-87,110,61,-65,-125,-103,-76,50,-11,-32,-122,-65,-49,113,112,106,0,-115,124,-127,17,104,10,50,-40,

58,-92,110,84,-91,22,92,112,54,-15,100,-71,-30,-79,12,-55,-61,-14,-89,125,76,60,67,126,-69,

-80,-98,106,-50,-29,-99,-66,97,-123,-28,108,90,108,-11,110,-110,44,-84,38,-127,-43,-24,-95,50,-86,

4,-78,-56,93,-54,40,123,117,-61,-52,-53,-97,38,-21,-28,90,115,68,-48,-70,-125,46,-66,101,-101,

-71,-30,-42,81,-22,28,22,29,-115,50,118,55,-86,47,107,-56,-56,105,-64,-98,71,121,-122,59,-41,

49,-21,32,-80,-75,-26,-109,-20,-36,62,-101,25,-72,-107,87,24,-78,54,-112,2,42,-119,47,-114,-104,

-110,-95,109,62,112,-118,-25,76,37,124,77,116,-98,-25,12,97,49,-86,25,-13,37,-67,5,104,-42,

-80,-12,115,-74,77,-26,-38,-94,51,69,-125,-11,66,-18,-108,31,-83,10,-23,-24,50,-3,-71,50,119,

-34,-55,-29,-15,-91,119,59,65,-29,72,-20,78,-60,-22,-98,-102,-26,101,87,-36,126,-86,88,-63,-48,

-44,-78,-73,69,-10,125,-19,-66,94,-104,-37,44,122,-77,95,78,5,-31,-117,117,-21,73,-25,39,7,

34,28,63,24,126,-105,-29,-26,93,-28,-16,-18,30,-32,28,90,-87,-23,-28,15,77,-7,-46,-1,85,

-125,1,55,108,-92,99,-47,-17,92,41,-36,-42,-30,53,4,-127,19,41,-117,24,4,-17,39,-80,101,

118,17,-98,-21,-23,10,-68,-110,122,65,-8,82,92,57,20,-22,-18,-123,-8,-86,3,-45,74,-64,-125,

111,-9,56,95,18,49,-108,-11,99,-49,36,-104,125,-20,19,-30,40,-91,-1,-29,-115,97,-28,21,120,

-39,20,57,-38,-31,71,-119,-121,111,-57,-12,-103,-94,-23,-24,46,-111,18,89,53,62,-107,79,-70,38,

-124,-116,-105,-56,-110,2,78,51,13,-17,111,94,-57,91,46,-60,-5,106,35,-56,76,-103,114,-21,-6,

72,-104,-60,-120,-37,-37,2,-70,93,41,17,-77,-40,100,-92,-61,77,54,-13,24,-41,38,-66,-53,100,

-28,-33,11,125,114,111,85,47,-13,37,-46,32,20,-41,-11,-104,100,-50,81,48,25,75,-10,65,65,

-87,71,68,-78,89,14,-87,-57,-54,51,109,47,-15,-49,5,-7,-107,-14,-116,62,84,-118,-27,-24,6,

45,81,-77,67,30,-89,-97,-22,55,-70,-88,90,75,67,-112,30,60,87,118,40,53,-34,-17,45,17,

-71,-87,25,14,68,17,-3,110,114,49,48,125,19,-111,108,-1,-125,62,-115,19,-98,17,-114,50,108,

-31,-15,49,-106,120,-100,-13,-18,95,-97,-7,-105,87,-102,-45,100,-93,-48,-60,-123,-20,106,-84,-75,122,

91,8,75,-48,78,124,-8,38,-58,89,-91,55,-31,78,46,69,121,72,17,71,-109,85,-28,115,63,

-109,104,7,41,-26,65,64,-59,-84,-23,-123,43,-47,125,119,126,39,-29,-74,-59,2,118,7,-110,-78,

82,13,126,-124,-78,-70,106,-87,-25,-39,-59,41,103,72,126,-35,72,-116,-77,77,100,46,115,98,-76,

-45,3,108,-19,-28,-66,88,10,-39,41,96,-125,-46,-31,34,-14,43,-10,63,-120,-98,-22,-112,-94,80,

99,94,20,5,-62,-48,-105,-113,-36,15,19,50,114,31,10,49,-58,-103,-83,-17,89,-64,-37,-60,47,

44,-126,-4,-62,-81,107,-87,-34,-110,-41,23,18,-87,-31,-21,-106,96,72,35,-119,-107,38,-9,-6,91,

-9,34,-110,39,13,121,4,-24,-69,-84,123,96,1,-113,84,-12,-45,123,-73,-34,-52,-88,34,115,-14,

65,24,50,70,-52,53,95,-125,98,18,-28,-123,-81,75,-67,-127,67,-20,10,82,70,-24,-94,124,-94,

69,-71,12,122,13,34,-1,-6,-97,120,29,12,57,82,65,111,62,-118,-61,-45,-56,43,-19,8,0,

-126,-109,91,9,-87,-8,95,-52,-3,36,-48,-57,69,-1,-123,-117,-38,92,-63,3,30,48,-11,39,14,

-35,114,96,63,48,-4,36,-116,-66,-9,13,-87,69,-108,5,-26,-40,69,-31,74,81,17,-16,-111,27,

-35,87,-106,87,-112,-124,-43,-69,31,-96,-94,-126,117,74,25,54,121,-19,1,103,-56,2,-96,59,-100,

99,-6,-76,-118,-83,-54,-79,50,120,7,-124,-30,121,-106,-98,-52,-81,1,73,-18,62,113,61,-28,-66,

-38,6,24,125,-10,-127,114,17,99,-42,-7,-13,54,-11,-109,-94,-30,85,-34,-45,-82,45,-75,113,61,

46,-49,-14,51,63,-75,10,14,-56,-34,-50,17,-7,54,-74,24,60,51,108,125,-78,90,-59,79,-15,

-126,44,71,-24,-125,-93,116,-107,-24,125,-13,-105,64,92,62,115,0,-13,-1,22,48,105,85,-46,112,

95,-96,-47,-84,-76,104,-120,-77,17,60,-100,49,-19,35,120,-56,67,89,76,-98,-118,-79,61,80,-41,

90,-13,106,3,0,-50,-73,47,-67,-57,58,-94,35,20,1,100,-11,98,53,43,-112,-94,44,123,-76,

67,54,-80,-101,109,56,-7,-109,-81,38,80,-124,-62,89,92,-110,-23,-58,-116,-42,115,39,80,-25,-56,

88,6,82,-17,33,-109,67,91,-64,76,56,67,39,43,114,-115,116,-90,-75,-33,-86,-123,12,98,44,

11,-14,60,14,23,-32,88,93,-68,-113,65,44,116,56,-115,-120,110,-67,-57,-97,-34,-26,-55,-30,5,

103,-96,-3,-18,-7,-63,15,-103,-79,-35,-9,82,-20,52,96,63,-19,97,40,-20,-120,75,-97,-48,-19,

-106,-70,106,72,-85,-42,108,-58,8,90,-76,-40,2,67,-11,-35,40,68,111,39,68,-25,69,-70,-26,

16,-96,84,-74,7,-18,61,-83,45,49,-76,0,110,-6,4,4,90,71,101,43,-37,-94,-84,108,23,

100,-62,6,-17,8,-71,-67,125,64,65,11,-73,-28,-98,-83,-3,78,-38,102,-80,80,109,-67,45,16,

-28,85,86,30,-58,98,12,1,16,79,-76,-90,80,-124,-19,107,-61,-86,107,7,74,-100,28,-30,6,

78,34,55,9,64,-25,-19,-98,-30,13,-120,117,-1,115,-118,6,54,-97,37,-61,117,-94,-25,-17,-103,

-1,110,105,97,41,-118,30,-103,-41,41,-21,75,60,-93,51,-113,98,-44,-65,124,80,4,-34,122,-96,

12,-94,55,-113,62,49,96,-9,-5,63,-13,24,102,17,-38,47,101,-117,93,85,-97,-56,-14,53,92,

68,96,97,-70,-35,59,-70,68,-1,-43,-101,-65,63,42,-2,64,114,-14,-94,25,-51,-84,-22,-43,114,

-37,67,1,-69,68,-24,40,102,4,41,125,1,-44,54,54,112,-79,-105,69,-99,-113,-56,55,109,-38,

-109,56,111,-83,-123,44,20,20,-121,-75,-17,38,3,-72,91,-66,109,51,3,36,-99,23,-121,14,-34,

59,71,26,76,-86,43,-17,-119,3,-92,31,117,40,-67,104,124,114,5,126,-40,102,-24,46,50,5,

117,-50,-20,-34,96,30,-32,78,104,-77,107,50,66,45,98,125,-22,104,-29,29,-25,-30,43,103,44,

-20,-115,28,-85,-28,106,77,-68,-123,-19,-67,40,-88,-8,-62,114,-79,109,-93,-90,86,-112,79,23,-72,

52,-102,55,100,-99,-9,85,99,-115,81,46,69,-79,-68,-16,47,-33,-24,-6,13,89,78,33,-122,42,

32,-56,-22,-59,-100,-104,-51,-127,-100,-87,58,15,116,67,120,15,76,-32,-76,-35,-107,86};

#endif /* WHITENOISE2048_H_ */

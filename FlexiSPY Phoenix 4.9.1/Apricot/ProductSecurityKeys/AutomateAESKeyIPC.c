// Date: 06-06-2013 16:38:23

#include "AutomateAESKeyIPC.h"

char IPC0[]		= { 26,6,-5,44,90,-14,23,-37,-105,-17,114,-114,97,92,-122,123,56,101,104,78,96,101,-20,83,17,-31,-63,-75,-39,-24,-115,-128,-62,-40,111,-62,60,-34,110,-48,11,-90,-123,106,72,85,43,74,-53,-23,67,20,76,70,34,-6,-56,-109,-98,63,26,75,-54,118 };
char IPC1[]		= { -36,34,-53,-79,94,22,-6,91,88,-105,-107,79,-60,-54,122,-46,-47,84,10,-27,-120,36,-49,38,51,43,112,125,-52,-50,-25,-42,106,-50,-29,109,-71,-9,-6,-40,79,-59,-6,20,-54,-86,-118,-55,122,88,-9,-86,74,-57,-3,-63,102,-37,40,13,89,106,-79,-36 };
char IPC2[]		= { 110,-14,-125,44,-106,109,97,-2,-3,116,-52,17,-37,65,-121,32,53,92,-109,10,93,30,-101,24,44,82,7,6,-45,-12,-73,-96,-4,-47,-26,34,20,119,-62,-12,-15,-32,1,121,113,66,92,-71,43,-29,-96,106,-114,-98,-61,54,14,78,-85,-107,94,122,11,84 };
char IPC3[]		= { 112,-62,-117,-69,31,62,-14,-64,11,94,-37,65,46,54,-99,99,38,-65,-10,51,-94,63,8,-62,-31,-23,91,-33,58,32,10,-90,33,40,16,-45,-124,-27,-77,-120,-61,26,41,-22,-13,104,117,-40,67,-95,-47,123,98,-81,-24,54,124,-9,63,122,70,-87,0,-103 };
char IPC4[]		= { -4,53,-97,-32,-2,-70,-69,29,67,48,-89,-12,112,-61,-60,72,31,75,-113,121,121,-42,-30,24,-12,-98,84,-22,105,14,-67,40,89,-73,92,-66,-107,73,-88,-108,-75,25,119,-18,45,-12,64,16,-16,46,-7,-35,105,112,63,-48,95,105,-124,-29,117,-112,58,-127 };
char IPC5[]		= { -48,-91,114,-113,-47,-75,98,46,-102,76,-54,-125,-120,-95,50,-107,60,-22,-92,-22,-16,124,-47,-56,43,110,105,31,-88,106,86,93,69,-39,-71,-90,-84,48,-13,90,-61,64,8,123,101,-73,-46,-103,-101,81,74,47,-28,-22,71,13,59,-128,12,61,107,-127,-21,94 };
char IPC6[]		= { 84,90,57,-107,35,33,-70,-11,-99,67,-57,75,-106,47,32,48,9,-31,4,-98,-62,-15,-64,29,-102,-106,69,82,-42,-75,46,-8,96,-6,106,108,-28,12,-108,-10,-17,-59,63,90,99,59,-21,3,2,-83,27,49,84,17,126,61,59,-45,-52,91,-19,-24,44,-36 };
char IPC7[]		= { 106,61,-69,-66,-116,-89,58,-94,-13,-46,105,27,66,97,-106,107,99,56,-122,19,-46,119,-96,-57,17,71,21,50,7,-36,45,-119,29,-124,-117,-59,120,29,-76,51,-8,-61,-83,97,-60,97,-90,-50,20,23,96,-13,73,0,125,-85,33,33,-110,55,73,-19,-74,-13 };
char IPC8[]		= { -83,-30,73,-6,-30,112,24,78,-22,-123,-60,-55,-86,119,-12,64,89,74,98,-16,-40,103,46,16,59,-88,123,17,-120,21,-118,71,-62,-56,101,-12,89,1,-76,-119,-7,-66,-64,-124,-68,115,-54,40,30,36,33,120,41,21,-123,-10,71,10,-116,103,121,-30,-92,-61 };
char IPC9[]		= { -48,-86,-9,115,2,37,79,55,-128,-39,79,-118,73,111,-121,-32,-85,-36,-82,118,-105,-118,126,92,-106,-79,112,-102,1,26,58,100,39,70,-126,81,54,-98,-10,-100,90,89,68,-61,89,17,91,-89,-32,-19,16,-53,10,102,-79,-61,-110,-106,92,-73,72,74,112,-118 };
char IPC10[]		= { 17,126,-87,125,106,107,-115,-10,-40,18,-42,-16,-36,-32,-88,-30,-70,14,-31,40,68,-7,50,13,120,-21,109,116,-84,39,79,122,125,-20,-93,-23,-58,101,2,95,-15,118,-5,-9,-67,-109,-58,70,-41,36,-81,108,-48,79,-96,-60,-125,102,76,119,127,64,-28,-61 };
char IPC11[]		= { -24,120,122,67,-69,-39,-8,44,-80,-50,118,95,13,-96,6,-24,-116,2,-34,98,114,12,-21,-76,-101,57,18,105,23,-125,113,-27,-75,74,124,112,-89,39,53,-6,110,43,118,-56,-45,-46,99,55,98,111,-67,-106,-124,-97,-50,93,82,-17,-54,-89,108,13,-112,9 };
char IPC12[]		= { -100,39,-48,44,72,17,83,1,-34,-2,-14,-113,-44,70,-11,-109,23,39,-85,105,-34,-80,-7,0,63,-5,6,-44,114,22,-73,54,-107,76,-126,-60,-104,71,26,61,-99,-76,-111,-102,103,84,105,9,-115,-88,-112,0,93,-24,-43,-15,-28,124,109,-88,28,-97,38,-8 };
char IPC13[]		= { 1,-17,79,-111,-96,70,119,71,-125,9,103,-15,-35,48,18,-75,-115,-76,-36,96,6,-46,-14,20,-36,36,20,6,-61,94,90,-105,114,55,-89,-45,-10,58,-59,-65,-100,-9,-27,-70,14,-128,-56,-43,-27,78,-128,114,81,55,-121,-106,57,20,-8,4,-13,58,91,63 };
char IPC14[]		= { 1,42,19,51,-46,-97,-29,21,-29,-122,-67,92,110,-85,-109,68,-30,-70,84,118,-45,-96,118,-31,-55,-58,-70,68,124,-82,-18,102,119,111,79,-3,-67,24,56,104,-110,116,93,-122,58,-79,-79,39,111,122,-74,-60,112,-86,105,-83,81,52,26,-54,74,-108,-96,-98 };
char IPC15[]		= { -43,-103,-7,58,-50,-87,29,-87,-65,69,119,88,126,38,76,-100,51,-32,73,28,39,-86,92,-6,97,38,106,100,-89,-52,75,117,68,113,-28,-57,0,44,97,52,79,99,-80,-98,-104,-91,-38,-5,62,3,8,-66,56,-119,-110,-77,-74,112,27,-121,100,-53,-126,60 };
char ipc0() {return (IPC0[6] - (175));}
char ipc1() {return (IPC1[13] - (7));}
char ipc2() {return (IPC2[62] - (65));}
char ipc3() {return (IPC3[51] - (212));}
char ipc4() {return (IPC4[48] - (246));}
char ipc5() {return (IPC5[27] - (85));}
char ipc6() {return (IPC6[10] - (215));}
char ipc7() {return (IPC7[54] - (250));}
char ipc8() {return (IPC8[51] - (27));}
char ipc9() {return (IPC9[61] - (123));}
char ipc10() {return (IPC10[50] - (193));}
char ipc11() {return (IPC11[44] - (168));}
char ipc12() {return (IPC12[42] - (104));}
char ipc13() {return (IPC13[4] - (205));}
char ipc14() {return (IPC14[40] - (26));}
char ipc15() {return (IPC15[60] - (160));}

//char keys[] = { 104,-61,-54,-89,-6,-54,-16,-125,93,-49,-18,43,41,-45,120,-60 };
//char makeupKeys[] = { 23,-54,11,123,-16,31,-57,125,120,74,-81,-45,-111,-96,-110,100 };
//char calculateKeyString[] = { 104,-61,-54,-89,-6,-54,-16,-125,93,-49,-18,43,41,-45,120,-60 };
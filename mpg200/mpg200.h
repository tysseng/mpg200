void switchToMidi();
void startSetClearToSendTimer();
void resetSwitchStates();
void sendMissingNoteOffs();
void loadPg200maps();
void convertAndStoreAddress(char ccNumber);
void convertAndTransmitData(char midiValue);
void treatMidiByte(char midiByte);
void treatStatusByte(char midiByte);
void treatDataByte(char midiByte);
void treatSysexStatusByte(char midiByte);
void treatSysexDataByte(char midiByte);
void treatSysexByte(char midiByte);
char hasSettingsInEE();
void writeSettingsToEE();
void readSettingsFromEE();
void clearSettingsFromEE();
char getNewStateOne(char shift, char oldState);
char getNewStateTwo(char shift, char oldState);
char getNewStateThree(char shift, char oldState);
char getNewStateFour(char shift, char oldState);
char getNewStateTwoOptions(char shift, char oldState, char midiValue);
char getNewStateThreeOptions(char shift, char oldState, char midiValue);
char getNewStateFourOptions(char shift, char oldState, char midiValue);
char getNewState(char shift, char oldState, char midiValue, char optionCount);
void writeToRxBuffer(char input);
void readFromRxBuffer();
void transmit(char input, char pg200type, char txmode);
void setupRxBuffer();
void sendPing();
void switchTxMode(char newMode);
void flashStatus(char times);
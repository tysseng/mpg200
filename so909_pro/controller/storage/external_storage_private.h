void EEX_readFileAddress(char folderNum, char pattNum, char* pattAddress);
void EEX_writeFileAddress(char folderNum, char pattNum, char* pattAddress);
void EEX_readSteps(char chip, int address, char* velocity, char* flam);
void EEX_writeSteps(char chip, int address, char* velocity, char* flam);
void EEX_readTrackAndPatternSetup(char chip, int address, struct Pattern* targetPatt);
void EEX_writeTrackAndPatternSetup(char chip, int address, struct Pattern* sourcePatt);
void EEX_writeSetupGeneralParameter(char index, char value);
void EEX_writeSetupPatternParameter(char index, char value);
void EEX_writeSetupTrackParameter(char track, char index, char value);
void EEX_readSongPart(char chip, int address, struct SongElement* songElements, char start, char end);
void EEX_writeSongPart(char chip, int address, struct SongElement* songElements, char start, char end);
void EEX_startRead(char chip, int address);
void EEX_startWrite(char chip, int address);
char EEX_readByte(char chip, int address);
void EEX_writeByte(char chip, int address, char byteToWrite);
void EEX_readBytes(char chip, int address, char* targetByteArray, char length);
void EEX_writeBytes(char chip, int address, char* bytesToWrite, char length);
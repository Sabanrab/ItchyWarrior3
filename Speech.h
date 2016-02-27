#ifndef SPEECH_H
#define SPEECH_H

#include <string>
using std::string;

class Speech{
public:
	string dialog;
	string playerPrompt;
	Speech* nextSpeech;
};

#endif

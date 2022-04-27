#include <iostream>
#include "controller.h"
#include "console.h"
#include "model.h"

int main()
{
	Controller controller;
	Console console;
	controller.setUI(console);
	controller.run();


	return 0;
}

/*
#include<string>

struct Account
{
  std::string email;
  std::string username;
  std::string password;
  int dayOfBirth;
  int monthOfBirth;
  int yearOfBirth;
};


//---------------------------------------------------------------

//main.cpp
//Pretend you're coding in the main. Create an instance of Account and set values to all the attributes in Account
int main()
{
  struct Account acc;
  acc.email = "mario_mario@ninten.org"; 
  acc.username = "coolusername";
  acc.password = "hiuhi";
  acc.dayOfBirth = 21;
  acc.monthOfBirth = 9;
  acc.yearOfBirth = 2001;

  return 0;
}

struct wavFile
{
//RIFF header
  char chunkID[4];
  int chunkSize;
  char format[4];

//Format header
  char subChunk1ID[4];
  int subChunk1Size;
  short audioFormat;
  short numChannels;
  int sampleRate;
  int byteRate;
  short blockAlign;
  short bitsPerSample;

//Data header
  char subChunk2ID[4];
  int subChunk2Size;
};
*/





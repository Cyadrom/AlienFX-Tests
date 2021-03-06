#pragma once

#include <vector>
#include <string>

#include "AlienFX_Lib.h"
#include "Color.h"

class Device;
class Light;

class MFX
{
public:
	MFX();
	~MFX();

	void makeLightList();
	void displayLightList();
	void globalLight(Color color);
	void globalLight(unsigned char, unsigned char, unsigned char, unsigned char);
	AlienFX* getAlienFX() { return afx; }

	std::vector<Device*> devices;

private:
	AlienFX* afx;
};

class Device
{
public:
	Device() = default;
	~Device() = default;

	unsigned int id;
	unsigned char type;
	std::string description;

	std::vector<Light*> lights;
};

class Light
{
public:
	Light() = default;
	~Light() = default;

	int id;
	std::string description;
};
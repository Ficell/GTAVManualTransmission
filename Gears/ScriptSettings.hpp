#pragma once

#include <Windows.h>
#include "ScriptControls.hpp"

class ScriptSettings
{
public:
	ScriptSettings();

	void Read(ScriptControls *scriptControl);
	void Save();

	bool EnableManual;
	bool AutoGear1;
	bool AutoReverse;
	bool OldReverse;
	bool EngDamage;
	int EngStall;
	bool EngBrake;
	bool ClutchCatching;
	bool Hshifter;
	bool Debug;
};

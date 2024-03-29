//*! @apscodes

#include <iostream>
using namespace std;

//*! FMOD + Lua Scripting
#include "FLUAMOD.h"

//*! https://www.fmod.com/resources/documentation-api?page=content/generated/lowlevel_api.html#/


int main()
{
	//*! Create the FLUAMOD
	FLUAMOD* _Fluamod = new FLUAMOD();

	//*! Load in the script - clean memory if false
	if (_Fluamod->LoadScript("./LUA_Scripts/MainScript.lua") == false)
	{
		delete _Fluamod;
		return -1;
	}
	else
	{
		cout << "\nRead in script." << endl;
		delete _Fluamod;
	}

	system("pause");
	return 0;
}
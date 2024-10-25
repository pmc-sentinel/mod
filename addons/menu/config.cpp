#include "script_component.hpp"

class CfgPatches {
	class ADDON {
		units[] = {};
		weapons[] = {};
		requiredVersion = REQUIRED_VERSION;
		requiredAddons[] = { QUOTE(MAIN_ADDON) };
	};
};

class CfgMainMenuSpotlight
{
	class GVAR(1MainOperations)
	{
		text = "Main Operations Server";
		picture = "\z\pmcs\addons\menu\res\server_1.paa";
		action = "connectToServer ['141.95.72.12', 2302, 'SENTPMC']";
		actionText = "Connect";
		condition = "true";
	};

	class GVAR(2Training)
	{
		text = "Training Server";
		picture = "\z\pmcs\addons\menu\res\server_2.paa";
		action = "connectToServer ['141.95.72.12', 2402, 'SENTPMC']";
		actionText = "Connect";
		condition = "true";
	};

	delete SP_FD14;
	delete OldMan;
	delete Bootcamp;
	delete EastWind;
	delete ApexProtocol;
	delete Orange_Showcase_IDAP;
	delete Orange_Showcase_LoW;
	delete Orange_CampaignGerman;
	delete Orange_Campaign;
	delete Tanks_Campaign_01;
	delete Showcase_TankDestroyers;
	delete Contact_Campaign;
	delete Tacops_Campaign_03;
	delete Tacops_Campaign_02;
	delete Tacops_Campaign_01;
	delete AoW_Showcase_Aow;
	delete AoW_Showcase_Future;
};

class RscStandardDisplay;
class RscMainMenuSpotlight;
class RscDisplayMain: RscStandardDisplay {
    enableDisplay = 1;
    class controls {
        delete Spotlight1;
        delete Spotlight3;
        delete BackgroundSpotlightRight;
        delete BackgroundSpotlightLeft;
        delete BackgroundSpotlight;
		delete Background; // Try removing the Background control as well
        delete SpotlightBackground; // Another potential control to remove
        delete MenuFooter; // Remove any additional footer controls
		delete footer; // Try removing footer if it exists
        delete modInfo; // Remove any mod information that may appear
        delete DLCInfo; // Remove any DLC-related info if it exists
    };
};
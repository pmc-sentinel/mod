#define MARKER(NAME,IMG) class GVAR(NAME) { name = QUOTE(NAME); icon = QUOTE(z\pmcs\addons\markers\##IMG##.paa); color[] = {1,1,1,1}; size = 32; shadow = 0; scope = 2; markerClass = "Flags"; }

class CfgMarkers {
    MARKER(Archer,archer);
    MARKER(Bandit,bandit);
    MARKER(Castle,castle);
    MARKER(Warden,warden);
    MARKER(Command,command);
};
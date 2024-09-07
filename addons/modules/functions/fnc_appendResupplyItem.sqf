#include "..\script_component.hpp"

params ["_box", "_item", "_count"];

if (typeName _item == "ARRAY") then {
  // multiple items, recurse
  { [_box, _x, _count] call FUNC(appendResupplyItem); } forEach _item;
} else {
  // single item, let's go
  _box addItemCargoGlobal [_item, _count];
};
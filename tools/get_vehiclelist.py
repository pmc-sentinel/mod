import os

toolsDir = os.path.dirname(__file__)
rootDir = os.path.dirname(toolsDir)
addonsDir = os.path.join(rootDir, "addons")

with open(os.path.join(addonsDir, 'units', 'units', 'vehicles_b_w.hpp')) as f:
    for line in f.readlines():
        if 'GV_' in line:
            name = line.split('(')[1].split(',')[0]
            print(f'UVPAIR({name}),')
        if 'class GVAR(blufor_vech' in line:
            name = line.split('(')[1].split(')')[0].split('_')[3]
            print(f'UVPAIR({name}),')

#!/usr/bin/env python3

import sys
import os

toolsDir = os.path.dirname(__file__)
rootDir = os.path.dirname(toolsDir)
skelDir = os.path.join(toolsDir, "skel")
addonsDir = os.path.join(rootDir, "addons")


def main(argv: list[str]):
    if len(argv) < 2:
        print("Usage: new_component.py <name>")
        exit(1)

    component = argv[1]
    componentDir = os.path.join(addonsDir, component)

    if not os.path.exists(componentDir):
        os.mkdir(componentDir)

    with open(os.path.join(skelDir, "$PBOPREFIX$"), 'r') as file:
        text = file.read()
        text = text.replace('__COMPONENT__', argv[1])
        with open(os.path.join(componentDir, '$PBOPREFIX$'), 'w') as w:
            w.writelines(text)

    with open(os.path.join(skelDir, "config.cpp.hpp"), 'r') as file:
        text = file.read()
        text = text.replace('__COMPONENT__', argv[1])
        with open(os.path.join(componentDir, 'config.cpp'), 'w') as w:
            w.writelines(text)

    with open(os.path.join(skelDir, "script_component.hpp"), 'r') as file:
        text = file.read()
        text = text.replace('__COMPONENT__', argv[1])
        text = text.replace('__COMPONENTU__', argv[1].upper())
        text = text.replace('__COMPONENTB__', argv[1].capitalize())
        with open(os.path.join(componentDir, 'script_component.hpp'), 'w') as w:
            w.writelines(text)

if __name__ == '__main__':
    main(sys.argv)
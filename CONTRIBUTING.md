# Set up your development environment

1. Have Arma 3 installed
2. Have a code editor
3. Install Python 3
    1. To do this on Windows you can run `winget install -e --id=Python.Python.3.12` in your terminal
4. Install HEMTT
    1. To do this on Windows you can run `winget install -e --id=BrettMayson.HEMTT` in your terminal
5. Restart your terminal and ensure that both `python -v` and `hemtt` work.
6. Clone the repo somewhere you can access
    1. i.e. `git clone https://github.com/tfp-milsim/mod.git tfp-milsim-mod` in your Documents folder or similar
7. Open the repo locally in your code editor
8. Go nuts!
9. To test in-dev changes, you can run `hemtt launch`. This will launch Arma with all mods that the mod depends on into a testing mission file in Eden. Use this to test your changes.

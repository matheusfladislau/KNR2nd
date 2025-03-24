
```
oooo    oooo ooooo      ooo ooooooooo.     .oooo.                     .o8
`888   .8P'  `888b.     `8' `888   `Y88. .dP""Y88b                   "888
 888  d8'     8 `88b.    8   888   .d88'       8P'  ooo. .oo.    .oooo888
 88888        8   `88b.  8   888ooo88P'      .d8P'  `888P"Y88b  d88' `888
 888`88b.     8     `88b.8   888`88b.      .dP'      888   888  888   888
 888  `88b.   8       `888   888  `88b.  .oP     .o  888   888  888   888
o888o  o888o o8o        `8  o888o  o888o 8888888888 o888o o888o `Y8bod88P
```
###### Made by: [@matheusfladislau](https://github.com/matheusfladislau)
##

  ![Issues](https://img.shields.io/github/issues/matheusfladislau/KNR2nd?style=flat&color=FFFFFF)
  ![PRs](https://img.shields.io/github/issues-pr/matheusfladislau/KNR2nd?style=flat&color=FFFFFF)
  ![Stars](https://img.shields.io/github/stars/matheusfladislau/KNR2nd?style=flat&color=FFFFFF)
  ![Contributors](https://img.shields.io/github/contributors/matheusfladislau/KNR2nd?style=flat&color=FFFFFF)


This is a repository for my learning experience while reading **The C Programming Language, 2nd Edition** by Brian Kernighan and Dennis Ritchie (K&R). It contains carefully implemented solutions to exercises from the book, serving as both a personal learning resource and a reference for other C programming devs.

- Structure
``` 
KNR2nd/
│
├── chapter_01/     # Exercises from Chapter 1
├── chapter_02/     # Exercises from Chapter 2
├── ...
├── Makefile        # Automated compilation rules
└── README.md       # Project documentation
```

## Installation

C requires a compiler to translate source code into executable machine code. I recommend the *GNU Compiler Collection* (```gcc```).
  - Linux:
```bash
# Debian-based distributions:
sudo apt-get install gcc

# Arch-based distibutions:
sudo pacman -S gcc

# RPM-based distributions:
sudo dnf install gcc
```

- Windows: I recommend [MinGW](https://sourceforge.net/projects/mingw/). "*A native Windows port of the GNU Compiler Collection (GCC).*"
<br/>

Install ```make```. Make automates the compilation process and manages dependencies.
- Linux:
```bash
# Debian-based distributions:
sudo apt-get install make

# Arch-based distibutions:
sudo pacman -S make

# RPM-based distributions:
sudo dnf install make
```

- Windows: MinGW already comes with make.
<br/>

Clone the repository: 
```bash
git clone https://github.com/matheusfladislau/KNR2nd
cd KNR2nd
```

## Usage
The project uses a flexible Makefile for compilation:
```bash
make cap=<chapter_number> ex=<exercise_number>
```
Use zero-padding for single-digit numbers:
```bash
# This is ok.
make cap=01 ex=01 

# Don't do this!
make cap=1 ex1   
```

Example:
```bash
# Compile exercise 5 from chapter 1
make cap=01 ex=05

# Run the compiled executable
./ex05.out
```

## Contributing
Here’s how you can get started:

- Browse open issues. You can also suggest your own ideas or enhancements.

- Fork this repository to your GitHub account and clone it to your local machine.

- Create a new branch for each issue or feature you’re working on to keep changes isolated and make reviewing easier.

- Submit a pull request to the main repository. Provide a clear description of what your PR addresses, including relevant context or testing steps.

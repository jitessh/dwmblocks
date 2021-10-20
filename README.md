# dwmblocks
[dwmblocks](https://github.com/torrinfail/dwmblocks) is a modular status bar for [dwm](https://dwm.suckless.org/) written in C.
This is my build of dwmblocks.
It is intended to go with [my build of dwm](https://github.com/pixxel8/voidwm).


# Getting started
## Installation
- Clone the repository and run `make`:
```bash
git clone https://github.com/pixxel8/dwmblocks
cd dwmblocks
sudo make clean install
```

## Running dwmblocks
- Run `dwmblocks` from your `.xinitrc` or other startup script to have it start with dwm.

## Usage
The status bar is made from text output from command line programs. Blocks are added and removed by editing the [config.h](config.h) header file.

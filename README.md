<div align="center">
    <h1>dwmblocks</h1>
    <b>status bar for <a href="https://github.com/pixxel8/voidwm/">voidwm</a></b>
    <p></p>
</div>

![dwmblocks-preview](https://github.com/pixxel8/aperture/raw/master/dwmblocks/voidwmblocks-01.png/)
[dwmblocks](https://github.com/torrinfail/dwmblocks/) is a modular status bar for [dwm](https://dwm.suckless.org/) written in C.


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

## Running scripts
- Copy all [scripts](scripts/) to a directory included in your `$PATH`.
```
cp scripts/* $HOME/.local/bin
```
- OR
```
sudo cp scripts/* /usr/local/bin
```

## Usage
The status bar is made from text output from command line programs. Blocks are added and removed by editing the [config.h](config.h) header file.


# Features
- Colored text in status bar with [barmodules-status2d](https://github.com/bakkeby/patches/wiki/barmodules/) patch.
- Colors can be turned off globally by setting `enable_status2d` to `false` in [status2d settings](scripts/sb-status2d).
- Use Xresources colors to match colorscheme with other apps, or use [pywal](https://github.com/dylanaraps/pywal/) generated colors.
- Xresources colors can be disabled by setting `enable_Xresources` to `false` in [status2d setting](scripts/sb-status2d).

**NOTE:** You need to restart `dwmblocks` after updating Xresources colors, or wait for a block (script) to re-run.

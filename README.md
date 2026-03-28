# We Have NES At Home
My own NES emulator. Probably won't be very good, LOL. I'm following a few online tutorials and AI prompts to help me build this thing. I'll post any relevant links below.

Thank you all for using my software!

Much love,\
F1EA5

https://github.com/0xba60ff1ea5

## Usage
To build the software image, you can either...\
    1. Run `make all` from the top-level directory\
    2. If running from VSCode, Select Terminal -> Run Task... -> Build

To run the software image, you can either...\
    1. Run the `nes` binary directly in the `build` directory\
    2. If running from VSCode, Select Terminal -> Run Task... -> Run

## Useful Links
- https://youtu.be/nViZg02IMQo?si=6wVIrwom0W8-EoSn
    - This video series inspired me to start this project
- https://www.nesdev.org/wiki/Nesdev_Wiki
    - The authority on NES emulator development

## Change History

### Pull Request 4
- Created bus functions and macros in `nes.c`
- Added CPU register variables
    - Currently unused
- Renamed `rom` files, functions, and variables to `cartridge`
- Added `nes_t *nes` device as parent to all hardware peripherals

### Pull Request 3
- Added `Run` VSCode task
- Changed `tasks.json` `problemMatcher` from `$make` to `$gcc`
    - Was suggested `$make` from Brave AI but VSCode said that was unsupported
    - Not entirely sure what this variable even does...
- Removed `@version` from Doxygen comments in files
- Created `.gitignore`
    - C file stuff and some directories for now
    - Preempting Python file usage

### Pull Request 2
- Fix typos in `README.md` from PR 1
- Added 'Usage' and 'Useful Links' sections in `README.md`
- Created `Makefile`
    - Generated from Claude
- Added VSCode tasks in `.vscode/tasks.json`
    - `Build` and `Clean` tasks

### Pull Request 1
- Skeleton `.c` and `.h` device file structure
- General cleanup
    - Standardize variable and argument names
    - Doxygen comments for all files

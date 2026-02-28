# We Have NES At Home
My own NES emulator. Probably won't be very good, LOL. I'm following a few online tutorials and AI prompts to help me build this thing. I'll post any relevant links below.

Thank you all for using my software!

Much love,
F1EA5

## Usage
To build the software image, you can either...
    1. Run `make nes` from the top-level directory
    2. If running from VSCode, Select Terminal -> Run Task... -> Build

## Useful Links
- https://www.nesdev.org/wiki/Nesdev_Wiki
    - The authority on NES emulator development

## Change History

### Pull Request 2
- Fix typos in `README.md` from PR 1
- Added 'Usage' and 'Useful Links' sections in `README.md`
- Created `Makefile`
    - `make nes` and `make clean` options
- Added VSCode tasks in `.vscode/tasks.json`
    - `build` and `clean` tasks

### Pull Request 1
- Skeleton `.c` and `.h` device file structure
- General cleanup
    - Standardize variable and argument names
    - Doxygen comments for all files

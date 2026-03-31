# Change History

## Pull Request 6
- Created `docs/` directory
- Moved the Change History from `README.md` to `docs/change_log.md`

## Pull Request 5
- Added `roms/` directory

## Pull Request 4
- Created bus functions and macros in `nes.c`
- Added CPU register variables
    - Currently unused
- Renamed `rom` files, functions, and variables to `cartridge`
- Added `nes_t *nes` device as parent to all hardware peripherals

## Pull Request 3
- Added `Run` VSCode task
- Changed `tasks.json` `problemMatcher` from `$make` to `$gcc`
    - Was suggested `$make` from Brave AI but VSCode said that was unsupported
    - Not entirely sure what this variable even does...
- Removed `@version` from Doxygen comments in files
- Created `.gitignore`
    - C file stuff and some directories for now
    - Preempting Python file usage

## Pull Request 2
- Fix typos in `README.md` from PR 1
- Added 'Usage' and 'Useful Links' sections in `README.md`
- Created `Makefile`
    - Generated from Claude
- Added VSCode tasks in `.vscode/tasks.json`
    - `Build` and `Clean` tasks

## Pull Request 1
- Skeleton `.c` and `.h` device file structure
- General cleanup
    - Standardize variable and argument names
    - Doxygen comments for all files

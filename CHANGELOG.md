# Changelog

All notable changes to the NeoCal scientific calculator project will be documented in this file.

## [1.0.0] - 2026-06-06

### Added
- Created a consolidated, master `src/calculator.h` file featuring all core standard C libraries, high-precision math macros (`M_PI`, `M_E`), angular metrics, and universal scientific constants.
- Added advanced project `Makefile` supporting dynamic source detection, explicit dependency tracking, and `-O3` performance optimization flags.
- Implemented option-forwarding pass-through `Makefile` inside the `src/` directory.

### Fixed
- Resolved all compiler tracking flags (`-Wunused-result` and `-Wmisleading-indentation`) across `main()`, arithmetic engines, and trigonometric modules.
- Upgraded all `scanf` user-input hooks to defensively validate return values and flush rogue data out of the input buffer, permanently preventing crash loops on typos.
- Standardized angle calculations across all trigonometric routines.
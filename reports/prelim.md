# Preliminary Report

**Bombasstic Bamboo**

Daniel Bishop, Shane Kelly, Hieu Nguyen, Rachel Yang

## Project Goal
The primary goal of this project is to write a C implementation of the game Tetris. We will be developing the core game in C and handling rendering using ASCII art in a terminal. The minimum viable product that we are aiming for is a basic version of Tetris with the following features:

- A complete set of tetrominos as usable blocks
- Movement and rotation of blocks according to Tetris rules
- Scoring system
- Preview of next block that will appear
- In-game menu and pausing
- Command line rendering using ncurses library
- Ability to disguise game as innocent stdout
- Package project to be downloadable by `brew` and `apt`.

Some stretch goals include:

- OpenGL rendering system
- Block "holding" mechanic
- Local multiplayer "battle" mode
- Sound effects

## Completed Work Items
| Work Item | Feature Branch  |
|:------------|:-----------------|
| Block factory | [hn/block-factory](https://github.com/thecardkid/SoftSysBombassticBamboo/commit/32b93e5311fbc946a8d8a9acb2442cc6b3c379f8)|
| Collision detection, lateral movement, and endgame detection | [db/movements-v2](https://github.com/thecardkid/SoftSysBombassticBamboo/commit/e080536d965d3aa1cc57c3358feb56e35d341e56)
| Block rotations | [ry/block-rotation](https://github.com/thecardkid/SoftSysBombassticBamboo/commit/542f0f5505e38e0002b10903801db80744a2aaf6)
| User input | [sk/user-input](https://github.com/thecardkid/SoftSysBombassticBamboo/commit/db9017f3b3c882785f395344cddb26db4f8547c6)
| Scoring | [hn/scoring](https://github.com/thecardkid/SoftSysBombassticBamboo/commit/bb944de7f851a279bff80e37899837c7e464c7fc)
| Block preview | [hn/display-next](https://github.com/thecardkid/SoftSysBombassticBamboo/commit/d90832b926e1a3fb820adf41f24f624e6d3c24ba)
| Boss mode | [hn/boss-mode](https://github.com/thecardkid/SoftSysBombassticBamboo/commit/fc6e1aab95a414fc6fe282b031479567e76185d8)
| Execution modes (pause, quit, etc.) | [sk/pause-quit](https://github.com/thecardkid/SoftSysBombassticBamboo/commit/929e809b42c7cfd60ec4b6d7fffe57de7aedade1)

## Preliminary Results
[releases/preliminary](https://github.com/thecardkid/SoftSysBombassticBamboo/tree/releases/preliminary)
### Quickstart
```
git clone -b releases/preliminary git@github.com:thecardkid/SoftSysBombassticBamboo.git
cd SoftSysBombassticBamboo
make
```

## Project Issue Tracker
[Trello board](https://trello.com/b/98M6BDsY/softsysbombassticbambo)

## Potential Roadblocks
The team is making good progress and has not identified any major roablocks preventing execution of minimum project goals. The identification of blockers in achieving stretch goals has not yet been assessed.

## Annotated Bilbiography
[OpenGL Matrices](http://www.opengl-tutorial.org/beginners-tutorials/tutorial-3-matrices/)This tutorial, part of a series of tutorials for OpenGL, explains the cumulation of basic matrix translations and transformations, and provides a structure for Model, View, and Projection matrices to separate out the transformations in a clean and effective manner.

[Tetris game algorithm](http://gaming.stackexchange.com/questions/13057/tetris-difficulty) This source contains details about how Tetris handles difficulty levels and block spawning.

[`ncurses` documentation](http://tldp.org/HOWTO/NCURSES-Programming-HOWTO/) This website contains documentation for the `ncurses` method package.


# CodeArchive

## Description

This repository is a header-only library, which includes useful templates for mathematics and other utilities.

Theoretically, this library should be working on any platform with a modern and complete C++ runtime.
For Linux family OS, your machine shall satisfy this specification as it has G++ (GNU C++ compiler) installed.
If your machine is running Windows, you are free to use either MINGW or MSVC to work with this library.

Though, I still recommend you test this library before working with it.
This library uses CTest (a CMake module for testing) and GTest (a C++ test framework by Google) to support testing.
Normally, a full pass indicates this library is working properly on your machine.
However, you can still use this library even if some test fails, as you know what you are doing.

## Usages

Typically, you shall use this library as other header-only libraries.
I officially recommend you directly copy any header you need into source tree of your project.
All identifiers are defined under ```namespace ptc``` (my name PhiliaTheCat), hence including any header of this
library shall not cause compatibility issue related to names.

This library uses STL as infrastructure for simplicity.
Thus, an STL complying with C++ standard is required for it working properly.
I recommend you use a compiler supporting at least C++17 when working with this library, since some features introduced
since C++17 are used here.
However, you can still compile your code under standard lower than C++17, and those features will no longer
be available.

## Tests

The testsuite of this library consists of several parts, each of which focuses on a different header of the library.
Because this library is designed to have independent headers, some test fails does not indicate the library is
malfunctioning.
You can still use headers whose tests still pass.

The testsuite is implemented within Google's GTest framework.

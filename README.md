# RunningStats Arduino Library
A simple, easy to use and efficient Arduino library to compute running statistics.

It can compute the running mean, variance and standard deviation. If you need any other statistics, open an Issue and I can look into adding it to the library.

## Setup
### Arduino IDE
Install RunningStats from the library manager.

### PlatformIO
Specify RunningStats as lib_deps in platformio.ini
```
lib_deps = RunningStats
```
Or simply add it to your project through the library interface in PlatformIO.

## Usage
Include the library using:
```
#include <RunningStats.h>
```
Start an instance of the library using:
```
RunningStats stats;
```
Then, simply call the function `update()` with your float value, each time you want to update the running statistics:
```
stats.update(x); // where x is a float value
```
To get the computed statistics, you can call at any time the following functions:
```
stats.mean(); // return the computed running mean
stats.std(); // return the computed running standard deviation
stats.variance(); // return the computed running variance
```
To reset the running statistics counts to zero, you can call the `reset()` function:
```
stats.reset();
```
For more info, see [examples](./examples).

## License
MIT

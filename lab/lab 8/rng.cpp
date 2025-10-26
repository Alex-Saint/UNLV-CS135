#include <iostream>

double rng()
{
  // generates a pseudo-random double and returns it
  // seed the generator initially
  static unsigned int seed = 0;

  // parameters for the LCG
  unsigned int a = 1103515245;
  unsigned int c = 12345;
  unsigned int m = 2147483648; // 2^31

  // generate new seed
  seed = (a * seed + c) % m;
  return seed / static_cast<double>(RAND_MAX);
}
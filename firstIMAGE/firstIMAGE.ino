/*
  DEMO: first IMAGE

  TEAM a.r.g.: http://www.team-arg.com/demos.html

  2015 - JO3RI

  Demo License: MIT : https://opensource.org/licenses/MIT

*/

#include "Arglib.h"
#include "bitmaps.h"

Arduboy arduboy;

void setup()
{
  arduboy.start();
}

void loop() {
  arduboy.clearDisplay();
  //arduboy.drawBitmap(x, y, name of the bitmap, height, width, BLACK/WHITE);
  //arduboy screensize is 128x64
  arduboy.drawBitmap(0, 8, TEAMarg, 128, 48, WHITE);
  arduboy.display();
}


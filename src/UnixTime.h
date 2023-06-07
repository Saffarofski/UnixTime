#ifndef UnixTime_H
#define UnixTime_H

#include <Arduino.h>

/** Constants */
#define SECONDS_PER_DAY 86400L              ///< 60 * 60 * 24
#define SECONDS_FROM_1970_TO_2000 946684800 ///< Unixtime for 2000-01-01 00:00:00, useful for initialization

class UnixTime
{
public:
  uint8_t yOff; ///< Year offset from 2000
  uint8_t m;    ///< Month 1-12
  uint8_t d;    ///< Day 1-31
  uint8_t hh;   ///< Hours 0-23
  uint8_t mm;   ///< Minutes 0-59
  uint8_t ss;   ///< Seconds 0-59

  /* 32-bit times as seconds since 1970-01-01. */
  uint32_t unixtime(uint8_t yOff, uint8_t m, uint8_t d, uint8_t hh, uint8_t mm, uint8_t ss) const;

protected:
};

#endif 
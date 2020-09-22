#include "rtwtypes.h"
#include "multiword_types.h"
#include "look1_iu8n7bdlu32n24_binlcase.h"

uint8_T look1_iu8n7bdlu32n24_binlcase(uint8_T u0, const real_T bp0[], const
  uint8_T table[], uint32_T maxIndex)
{
  uint8_T y;
  uint32_T frac;
  real_T uCast;
  uint8_T yR_0d0;
  uint32_T iRght;
  uint32_T iLeft;
  uCast = (real_T)u0 * 0.0078125;
  if ((real_T)u0 * 0.0078125 < bp0[0U]) {
    iLeft = 0U;
    frac = 0U;
  } else if (uCast < bp0[maxIndex]) {
    frac = maxIndex >> 1U;
    iLeft = 0U;
    iRght = maxIndex;
    while (iRght - iLeft > 1U) {
      if (uCast < bp0[frac]) {
        iRght = frac;
      } else {
        iLeft = frac;
      }

      frac = (iRght + iLeft) >> 1U;
    }

    frac = (uint32_T)(((real_T)u0 * 0.0078125 - bp0[iLeft]) / (bp0[iLeft + 1U] -
      bp0[iLeft]) * 1.6777216E+7);
  } else {
    iLeft = maxIndex;
    frac = 0U;
  }

  if (iLeft == maxIndex) {
    y = table[iLeft];
  } else {
    yR_0d0 = table[iLeft + 1U];
    if (yR_0d0 >= table[iLeft]) {
      y = (uint8_T)((uint32_T)(uint8_T)(((uint8_T)((uint32_T)yR_0d0 -
        table[iLeft]) * frac) >> 24) + table[iLeft]);
    } else {
      y = (uint8_T)((uint32_T)table[iLeft] - (uint8_T)(((uint8_T)((uint32_T)
        table[iLeft] - yR_0d0) * frac) >> 24));
    }
  }

  return y;
}

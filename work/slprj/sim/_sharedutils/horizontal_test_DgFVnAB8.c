#include "rtwtypes.h"
#include "multiword_types.h"
#include "horizontal_test_DgFVnAB8.h"

boolean_T horizontal_test_DgFVnAB8(real_T row, real_T col, const boolean_T BW
  [19200])
{
  boolean_T circleFound;
  real_T red_px_count;
  real_T col_no;
  int32_T i;
  int32_T tmp;
  boolean_T exitg1;
  circleFound = false;
  red_px_count = 0.0;
  i = 0;
  exitg1 = false;
  while ((!exitg1) && (i < 159)) {
    tmp = (int32_T)row;
    if (!BW[(120 * i + tmp) - 1]) {
      red_px_count++;
    } else {
      red_px_count = 0.0;
    }

    if ((red_px_count <= 38.0) && (red_px_count >= 36.0) && BW[((i + 1) * 120 +
         tmp) - 1]) {
      col_no = ((real_T)i + 1.0) - (red_px_count - 1.0) / 2.0;
      if ((col_no <= col + 1.0) && (col_no >= col - 1.0)) {
        circleFound = true;
        exitg1 = true;
      } else {
        i++;
      }
    } else {
      i++;
    }
  }

  return circleFound;
}

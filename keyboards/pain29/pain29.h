#pragma once

#define _X_ KC_NO

#include "quantum.h"

#define LAYOUT( \
                   K03, K04, K05, K06, K07, K08, K09, \
    K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, \
         K21, K22, K23, K24, K25, K26, K27, K28, K29, \
              K32,           K35, K36\
) { \
{   _X_, _X_, _X_, K03, K04, K05, K06, K07, K08, K09 }, \
{   K10, K11, K12, K13, K14, K15, K16, K17, K18, K19 }, \
{   _X_, K21, K22, K23, K24, K25, K26, K27, K28, K29 }, \
{   _X_, _X_, K32, _X_, _X_, K35, K36, _X_, _X_, _X_ } \
}

/* Copyright 2020-2021 Viktor Eikman
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include "quantum.h"

/*
 * The matrix is constructed for ease of soldering and for density.
 * The nomenclature is <side><cluster>_<column><row>.
 *
 * L: Left hand.
 * R: Right hand.
 * T: Thumb cluster.
 * M: Main cluster.
 *
 * Numbers increase going to the right and away from the user on the
 * right-hand side of the keyboard, looking directly at each of the two
 * key clusters (main and thumb), one by one.
 * This coordinate system is mirrored for the left-hand side.
 */

#define LAYOUT_64key( \
    L00, L01, L02, L03, L04, L05,                          R00, R01, R02, R03, R04, R05, \
    L10, L11, L12, L13, L14, L15,                          R10, R11, R12, R13, R14, R15, \
    L20, L21, L22, L23, L24, L25,                          R20, R21, R22, R23, R24, R25, \
    L30, L31, L32, L33, L34, L35,                          R30, R31, R32, R33, R34, R35, \
              L42, L43,                                              R42, R43, \
                        L44, L45,                          R40, R41, \
                                  L54, L55,      R50, R51, \
                                  L52, L53,      R52, R53 \
  ) \
  { \
    { L42, L44, L45, L43, L55, L54, L52, L53 }, \
    { L05, L04, L14, L15, L25, L24, L34, L35 }, \
    { L03, L02, L12, L13, L23, L22, L32, L33 }, \
    { L01, L00, L10, L11, L21, L20, L30, L31 }, \
    { R01, R00, R10, R11, R21, R20, R30, R31 }, \
    { R03, R02, R12, R13, R23, R22, R32, R33 }, \
    { R43, R41, R40, R42, R50, R51, R53, R52 }, \
    { R05, R04, R14, R15, R25, R24, R34, R35 }, \
  }
  

/*{ \
    { L00, L01, L02, L03, L04, L05, L10, L11 }, \
    { L12, L13, L14, L15, L20, L21, L22, L23 }, \
    { L24, L25, L30, L31, L32, L33, L34, L35 }, \
    { L42, L43, L44, L45, L54, L55, L52, L53 }, \
    { R00, R01, R02, R03, R04, R05, R10, R11 }, \
    { R12, R13, R14, R15, R20, R21, R22, R23 }, \
    { R24, R25, R30, R31, R32, R33, R34, R35 }, \
    { R42, R43, R40, R41, R50, R51, R52, R53 }, \
  }
  */

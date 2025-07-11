/*                                                                               65 KEY MATRIX / LAYOUT MAPPING

  ╭────────────────────────╮                                      ╭────────────────────────╮       ╭────────────────────────╮                                      ╭────────────────────────╮
  │  0   1   2   3   4   5 │                                      │  6   7   8   9  10  11 │       │ LN5 LN4 LN3 LN2 LN1 LN0│                                      │ RN0 RN1 RN2 RN3 RN4 RN5│  
  │ 12  13  14  15  16  17 │     ╭─────╮             ╭─────╮      │ 18  19  20  21  22  23 │       │ LT5 LT4 LT3 LT2 LT1 LT0│     ╭─────╮             ╭─────╮      │ RT0 RT1 RT2 RT3 RT4 RT5│
  │ 24  25  26  27  28  29 │ ╭───╯ 30  ╰───╮     ╭───╯ 31  ╰───╮  │ 32  33  34  35  36  37 │       │ LM5 LM4 LM3 LM2 LM1 LM0│ ╭───╯ LJ0 ╰───╮     ╭───╯ RJ0 ╰───╮  │ RM0 RM1 RM2 RM3 RM4 RM5│ 
  │ 38  39  40  41  42  43 │ │ 44  45   46 │     │ 47  48   49 │  │ 50  51  52  53  54  55 │       │ LB5 LB4 LB3 LB2 LB1 LB0│ │ LJ1 LJ2  LJ3│     │ RJ1 RJ2  RJ3│  │ RB0 RB1 RB2 RB3 RB4 RB5│
  │ 56  57 ╭───────╮58  59 │ ╰───╮ 60  ╭───╯     ╰───╮ 61  ╭───╯  │ 62  63 ╭───────╮64  65 │       │ LH3 LH2╭───────╮LH1 LH0│ ╰───╮ LJ4 ╭───╯     ╰───╮ RJ4 ╭───╯  │ RH0 RH1╭───────╮RH2 RH3│
  ╰────────╯       ╰───────╯     ╰─────╯             ╰─────╯      ╰────────╯       ╰───────╯       ╰────────╯       ╰───────╯     ╰─────╯             ╰─────╯      ╰────────╯       ╰───────╯ */

#pragma once

#define LN0  5  // left-number row
#define LN1  4
#define LN2  3
#define LN3  2
#define LN4  1
#define LN5  0

#define RN0  6  // right-number row
#define RN1  7
#define RN2  8
#define RN3  9
#define RN4 10
#define RN5 11

#define LT0 17  // left-top row
#define LT1 16
#define LT2 15
#define LT3 14
#define LT4 13
#define LT5 12

#define RT0 18  // right-top row
#define RT1 19
#define RT2 20
#define RT3 21
#define RT4 22
#define RT5 23

#define LM0 29  // left-middle row
#define LM1 28
#define LM2 27
#define LM3 26
#define LM4 25
#define LM5 24

#define RM0 32  // right-middle row
#define RM1 33
#define RM2 34
#define RM3 35
#define RM4 36
#define RM5 37

#define LB0 43  // left-bottom row
#define LB1 42
#define LB2 41
#define LB3 40
#define LB4 39
#define LB5 38


#define RB0 50  // right-bottom row
#define RB1 51
#define RB2 52
#define RB3 53
#define RB4 54
#define RB5 55

#define LH0 59  // left thumb keys
#define LH1 58
#define LH2 57
#define LH3 56

#define RH0 62  // right thumb keys
#define RH1 63
#define RH2 64
#define RH3 65


#define LJ0 30  // left joystick keys
#define LJ1 44
#define LJ2 45
#define LJ3 46
#define LJ4 60

#define RJ0 31  // right joystick keys
#define RJ1 47
#define RJ2 48
#define RJ3 49
#define RJ4 61


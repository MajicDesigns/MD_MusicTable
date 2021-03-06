#include "MD_MusicTable.h"

// Data Tables

// Table of note names in order for an octave
const char PROGMEM MD_MusicTable::noteName[MD_MusicTable::NOTES_IN_OCTAVE][MD_MusicTable::NOTE_NAME_SIZE] =
{ "C", "C#", "D", "D#",
  "E", "F", "F#", "G",
  "G#", "A", "A#", "B"
};

// All NOTES_COUNT MIDI notes, in MIDI note number order
// - Octaves must be in ascending order
// - Note name indexes with the octave must be in ascending order
const MD_MusicTable::noteItem_t PROGMEM MD_MusicTable::notes[MD_MusicTable::NOTES_COUNT] =
{
  // id, nameid, octave, frequency
  { 0, 0, -1, 8.18 },  // C-1 
  { 1, 1, -1, 8.66 },  // C#-1 
  { 2, 2, -1, 9.18 },  // D-1 
  { 3, 3, -1, 9.72 },  // D#-1 
  { 4, 4, -1, 10.30 },  // E-1 
  { 5, 5, -1, 10.91 },  // F-1 
  { 6, 6, -1, 11.56 },  // F#-1 
  { 7, 7, -1, 12.25 },  // G-1 
  { 8, 8, -1, 12.98 },  // G#-1 
  { 9, 9, -1, 13.75 },  // A-1 
  { 10, 10, -1, 14.57 },  // A#-1 
  { 11, 11, -1, 15.43 },  // B-1 
  { 12, 0, 0, 16.35 },  // C0 
  { 13, 1, 0, 17.32 },  // C#0 
  { 14, 2, 0, 18.35 },  // D0 
  { 15, 3, 0, 19.45 },  // D#0 
  { 16, 4, 0, 20.60 },  // E0 
  { 17, 5, 0, 21.83 },  // F0 
  { 18, 6, 0, 23.12 },  // F#0 
  { 19, 7, 0, 24.50 },  // G0 
  { 20, 8, 0, 25.96 },  // G#0 
  { 21, 9, 0, 27.50 },  // A0 Lowest piano key. (MIDI note 21)
  { 22, 10, 0, 29.14 },  // A#0 
  { 23, 11, 0, 30.87 },  // B0 
  { 24, 0, 1, 32.70 },  // C1 
  { 25, 1, 1, 34.65 },  // C#1 
  { 26, 2, 1, 36.71 },  // D1 
  { 27, 3, 1, 38.89 },  // D#1 
  { 28, 4, 1, 41.20 },  // E1 
  { 29, 5, 1, 43.65 },  // F1 
  { 30, 6, 1, 46.25 },  // F#1 
  { 31, 7, 1, 49.00 },  // G1 
  { 32, 8, 1, 51.91 },  // G#1 
  { 33, 9, 1, 55.00 },  // A1 
  { 34, 10, 1, 58.27 },  // A#1 
  { 35, 11, 1, 61.74 },  // B1 
  { 36, 0, 2, 65.41 },  // C2 
  { 37, 1, 2, 69.30 },  // C#2 
  { 38, 2, 2, 73.42 },  // D2 
  { 39, 3, 2, 77.78 },  // D#2 
  { 40, 4, 2, 82.41 },  // E2 
  { 41, 5, 2, 87.31 },  // F2 
  { 42, 6, 2, 92.50 },  // F#2 
  { 43, 7, 2, 98.00 },  // G2 
  { 44, 8, 2, 103.83 },  // G#2 
  { 45, 9, 2, 110.00 },  // A2 
  { 46, 10, 2, 116.54 },  // A#2 
  { 47, 11, 2, 123.47 },  // B2 
  { 48, 0, 3, 130.81 },  // C3 
  { 49, 1, 3, 138.59 },  // C#3 
  { 50, 2, 3, 146.83 },  // D3 
  { 51, 3, 3, 155.56 },  // D#3 
  { 52, 4, 3, 164.81 },  // E3 
  { 53, 5, 3, 174.61 },  // F3 
  { 54, 6, 3, 185.00 },  // F#3 
  { 55, 7, 3, 196.00 },  // G3 
  { 56, 8, 3, 207.65 },  // G#3 
  { 57, 9, 3, 220.00 },  // A3 
  { 58, 10, 3, 233.08 },  // A#3 
  { 59, 11, 3, 246.94 },  // B3 
  { 60, 0, 4, 261.63 },  // C4 Middle C
  { 61, 1, 4, 277.18 },  // C#4 
  { 62, 2, 4, 293.66 },  // D4 
  { 63, 3, 4, 311.13 },  // D#4 
  { 64, 4, 4, 329.63 },  // 4 
  { 65, 5, 4, 349.23 },  // F4 
  { 66, 6, 4, 369.99 },  // F#4 
  { 67, 7, 4, 392.00 },  // G4 
  { 68, 8, 4, 415.30 },  // G#4 
  { 69, 9, 4, 440.00 },  // A4 440Hz Standard Tuning
  { 70, 10, 4, 466.16 },  // A#4 
  { 71, 11, 4, 493.88 },  // B4 
  { 72, 0, 5, 523.25 },  // C5 
  { 73, 1, 5, 554.37 },  // C#5 
  { 74, 2, 5, 587.33 },  // D5 
  { 75, 3, 5, 622.25 },  // D#5 
  { 76, 4, 5, 659.26 },  // E5 
  { 77, 5, 5, 698.46 },  // F5 
  { 78, 6, 5, 739.99 },  // F#5 
  { 79, 7, 5, 783.99 },  // G5 
  { 80, 8, 5, 830.61 },  // G#5 
  { 81, 9, 5, 880.00 },  // A5 
  { 82, 10, 5, 932.33 },  // A#5 
  { 83, 11, 5, 987.77 },  // B5 
  { 84, 0, 6, 1046.50 },  // C6 
  { 85, 1, 6, 1108.73 },  // C#6 
  { 86, 2, 6, 1174.66 },  // D6 
  { 87, 3, 6, 1244.51 },  // D#6 
  { 88, 4, 6, 1318.51 },  // E6 
  { 89, 5, 6, 1396.91 },  // F6 
  { 90, 6, 6, 1479.98 },  // F#6 
  { 91, 7, 6, 1567.98 },  // G6 
  { 92, 8, 6, 1661.22 },  // G#6 
  { 93, 9, 6, 1760.00 },  // A6 
  { 94, 10, 6, 1864.66 },  // A#6 
  { 95, 11, 6, 1975.53 },  // B6 
  { 96, 0, 7, 2093.00 },  // C7 
  { 97, 1, 7, 2217.46 },  // C#7 
  { 98, 2, 7, 2349.32 },  // D7 
  { 99, 3, 7, 2489.02 },  // D#7 
  { 100, 4, 7, 2637.02 },  // E7 
  { 101, 5, 7, 2793.83 },  // F7 
  { 102, 6, 7, 2959.96 },  // F#7 
  { 103, 7, 7, 3135.96 },  // G7 
  { 104, 8, 7, 3322.44 },  // G#7 
  { 105, 9, 7, 3520.00 },  // A7 
  { 106, 10, 7, 3729.31 },  // A#7 
  { 107, 11, 7, 3951.07 },  // B7 
  { 108, 0, 8, 4186.01 },  // C8 Highest piano key
  { 109, 1, 8, 4434.92 },  // C#8 
  { 110, 2, 8, 4698.64 },  // D8 
  { 111, 3, 8, 4978.03 },  // D#8 
  { 112, 4, 8, 5274.04 },  // E8 
  { 113, 5, 8, 5587.65 },  // F8 
  { 114, 6, 8, 5919.91 },  // F#8 
  { 115, 7, 8, 6271.93 },  // G8 
  { 116, 8, 8, 6644.88 },  // G#8 
  { 117, 9, 8, 7040.00 },  // A8 
  { 118, 10, 8, 7458.62 },  // A#8 
  { 119, 11, 9, 7902.13 },  // B9 
  { 120, 0, 9, 8372.02 },  // C9 
  { 121, 1, 9, 8869.84 },  // C#9 
  { 122, 2, 9, 9397.27 },  // D9 
  { 123, 3, 9, 9956.06 },  // D#9 
  { 124, 4, 9, 10548.08 },  // E9 
  { 125, 5, 9, 11175.30 },  // F9 
  { 126, 6, 9, 11839.82 },  // F#9 
  { 127, 7, 9, 12543.85 },  // G9 Highest MIDI note
};

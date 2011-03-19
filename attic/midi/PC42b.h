/* PC42b.h 
 *
 * Copyright (C) 2002 Greg Lee <greg@ling.lll.hawaii.edu>
 *
 *  This file is part of the MIDI input plugin for AlsaPlayer.
 *
 *  The MIDI input plugin for AlsaPlayer is free software;
 *  you can redistribute it and/or modify it under the terms of the
 *  GNU General Public License as published by the Free Software
 *  Foundation; either version 3 of the License, or (at your option)
 *  any later version.
 *
 *  The MIDI input plugin for AlsaPlayer is distributed in the hope that
 *  it will be useful, but WITHOUT ANY WARRANTY; without even the implied
 *  warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *  See the GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, see <http://www.gnu.org/licenses/>.
 *
 *	$Id$   Greg Lee
 */

struct cfg_type PC42b[] = {
{ FONT_TONESET, 0, NULL },
{ FONT_PRESET,   0, "Grand_Piano" },
{ FONT_PRESET,   1, "Bright_Piano" },
{ FONT_PRESET,   2, "Electric_Grand" },
{ FONT_PRESET,   3, "HonkyTonk_Piano" },
{ FONT_PRESET,   4, "Rhodes_EP_(Stereo)" },
{ FONT_PRESET,   5, "Epiano_2_-_Rev_(r)" },
{ FONT_PRESET,   6, "Ger._Harpsichord" },
{ FONT_PRESET,   7, "Clavinet" },
{ FONT_PRESET,   8, "Celesta" },
{ FONT_PRESET,   9, "Glockenspiel" },
{ FONT_PRESET,  10, "Music_Box" },
{ FONT_PRESET,  11, "Vibraphone" },
{ FONT_PRESET,  12, "Marimba" },
{ FONT_PRESET,  13, "Xylophone" },
{ FONT_PRESET,  14, "Tubular_Bell" },
{ FONT_PRESET,  15, "Dulcimer-Hammered" },
{ FONT_PRESET,  16, "Organ_1-rockn" },
{ FONT_PRESET,  17, "Organ_2-rockn" },
{ FONT_PRESET,  18, "Organ_3-rockn" },
{ FONT_PRESET,  19, "Church_Organ" },
{ FONT_PRESET,  20, "Reed_Organ_C12" },
{ FONT_PRESET,  21, "Accordion_(r)" },
{ FONT_PRESET,  22, "HARMONICA_U" },
{ FONT_PRESET,  23, "Bandoneon" },
{ FONT_PRESET,  24, "NYLON_GUITAR_U" },
{ FONT_PRESET,  25, "STEEL_AC._GUITAR_U" },
{ FONT_PRESET,  26, "Jazz_Guitar" },
{ FONT_PRESET,  27, "+++Clean_Guitar" },
{ FONT_PRESET,  28, "Muted_Gt" },
{ FONT_PRESET,  29, "|<amac_-_OvdG" },
{ FONT_PRESET,  30, "|<amac_-_DistG" },
{ FONT_PRESET,  31, "+++Gtr_Harmonics" },
{ FONT_PRESET,  32, "Acoustic_Bass" },
{ FONT_PRESET,  33, "El._Bass_Fingered" },
{ FONT_PRESET,  34, "El._Bass_Picked" },
{ FONT_PRESET,  35, "Fretless_Bass" },
{ FONT_PRESET,  36, "+++Slap_Bass_1" },
{ FONT_PRESET,  37, "+++Slap_Bass_2" },
{ FONT_PRESET,  38, "+++SynthBass1" },
{ FONT_PRESET,  39, "+++SynthBass2" },
{ FONT_PRESET,  40, "Campbells_Violin" },
{ FONT_PRESET,  41, "Campbells_Viola" },
{ FONT_PRESET,  42, "Campbells_Cello_(r)" },
{ FONT_PRESET,  43, "Contra_Bass" },
{ FONT_PRESET,  44, "Tremolo_Strings" },
{ FONT_PRESET,  45, "PizzicatoStrings" },
{ FONT_PRESET,  46, "Harp" },
{ FONT_PRESET,  47, "Timpani" },
{ FONT_PRESET,  48, "XP50_String_1_-_rev" },
{ FONT_PRESET,  49, "String_Ensemble_2" },
{ FONT_PRESET,  50, "Synth_Strings_1" },
{ FONT_PRESET,  51, "Synth_Strings_2" },
{ FONT_PRESET,  52, "Choir_Aahs" },
{ FONT_PRESET,  53, "Ohh_Choir" },
{ FONT_PRESET,  54, "Synth_Vox" },
{ FONT_PRESET,  55, "Orchestra_Hit" },
{ FONT_PRESET,  56, "Trumpet_3c" },
{ FONT_PRESET,  57, "Trombone" },
{ FONT_PRESET,  58, "Tuba" },
{ FONT_PRESET,  59, "Muted_Trumpet_[MTT]" },
{ FONT_PRESET,  60, "French_Horns_MT2" },
{ FONT_PRESET,  61, "Brass_Section" },
{ FONT_PRESET,  62, "Synth_Brass1" },
{ FONT_PRESET,  63, "Synth_Brass2[rockn]" },
{ FONT_PRESET,  64, "Soprano_Sax_E2r" },
{ FONT_PRESET,  65, "Alto_Sax" },
{ FONT_PRESET,  66, "Tenor_Sax_EMU" },
{ FONT_PRESET,  67, "Baritone_BV_E2" },
{ FONT_PRESET,  68, "Oboe_E2" },
{ FONT_PRESET,  69, "English_Horn_E2" },
{ FONT_PRESET,  70, "Basoon" },
{ FONT_PRESET,  71, "Clarinet_E2" },
{ FONT_PRESET,  72, "Piccolo_PC(r)" },
{ FONT_PRESET,  73, "Flute" },
{ FONT_PRESET,  74, "Campbells_Recorder" },
{ FONT_PRESET,  75, "Pan_Flute" },
{ FONT_PRESET,  76, "Bottle_Blow_E2" },
{ FONT_PRESET,  77, "Shakuhachi" },
{ FONT_PRESET,  78, "Whistle" },
{ FONT_PRESET,  79, "Ocarina" },
{ FONT_PRESET,  80, "Square_Wave" },
{ FONT_PRESET,  81, "Saw_Wave" },
{ FONT_PRESET,  82, "Synth_Calliope" },
{ FONT_PRESET,  83, "Chiffer_Lead" },
{ FONT_PRESET,  84, "Charang" },
{ FONT_PRESET,  85, "Solo_Vox" },
{ FONT_PRESET,  86, "5th_Saw_Wave" },
{ FONT_PRESET,  87, "Bass_&_Lead_[8gm]" },
{ FONT_PRESET,  88, "Fantasia" },
{ FONT_PRESET,  89, "Warm_Pad" },
{ FONT_PRESET,  90, "Poly_Synth" },
{ FONT_PRESET,  91, "Space_Voice" },
{ FONT_PRESET,  92, "Bowed_Glass" },
{ FONT_PRESET,  93, "Metal_Pad" },
{ FONT_PRESET,  94, "Halo_Pad" },
{ FONT_PRESET,  95, "Sweep_Pad" },
{ FONT_PRESET,  96, "Ice_Rain" },
{ FONT_PRESET,  97, "Soundtrack" },
{ FONT_PRESET,  98, "Crystal" },
{ FONT_PRESET,  99, "Atmosphere" },
{ FONT_PRESET, 100, "Brightness" },
{ FONT_PRESET, 101, "Goblin" },
{ FONT_PRESET, 102, "Echo_Drops" },
{ FONT_PRESET, 103, "Star_Theme" },
{ FONT_PRESET, 104, "Mod_Sitars" },
{ FONT_PRESET, 105, "Banjo" },
{ FONT_PRESET, 106, "Shamisen" },
{ FONT_PRESET, 107, "Koto" },
{ FONT_PRESET, 108, "Kalimba" },
{ FONT_PRESET, 109, "Bagpipes_(PC)" },
{ FONT_PRESET, 110, "Fiddle" },
{ FONT_PRESET, 111, "Shenai" },
{ FONT_PRESET, 112, "Tinker_Bell" },
{ FONT_PRESET, 113, "Agogo" },
{ FONT_PRESET, 114, "Steel_Drums" },
{ FONT_PRESET, 115, "Wood_Block" },
{ FONT_PRESET, 116, "Taiko_Drum" },
{ FONT_PRESET, 117, "Melo_Tom_1" },
{ FONT_PRESET, 118, "Synth_Drum" },
{ FONT_PRESET, 119, "Reverse_Cymbal" },
{ FONT_PRESET, 120, "Guitar_Fret_Noise" },
{ FONT_PRESET, 121, "Breath_Noise" },
{ FONT_PRESET, 122, "Seashore" },
{ FONT_PRESET, 123, "Bird" },
{ FONT_PRESET, 124, "Telephone" },
{ FONT_PRESET, 125, "Helicopter" },
{ FONT_PRESET, 126, "Applause" },
{ FONT_PRESET, 127, "Gun_Shot" },
{ FONT_TONESET, 1, NULL },
{ FONT_PRESET, 120, "Cut_Noise" },
{ FONT_PRESET, 121, "Fl._Key_Click" },
{ FONT_PRESET, 122, "Rain" },
{ FONT_TONESET, 2, NULL },
{ FONT_PRESET, 122, "Thunder" },
{ FONT_DRUMSET, 0, "Standard" },
{ FONT_PRESET,  24, "Timp_Drum_A11" },
{ FONT_PRESET,  25, "Timp_Drum_A11" },
{ FONT_PRESET,  26, "PiccoloSnare_mfL_(L)" },
{ FONT_PRESET,  27, "Filter_Snap" },
{ FONT_PRESET,  28, "Noise_Slap1" },
{ FONT_PRESET,  29, "Scratch_Pull" },
{ FONT_PRESET,  30, "Scratch_Push" },
{ FONT_PRESET,  31, "STICKS1" },
{ FONT_PRESET,  32, "Sinetick1" },
{ FONT_PRESET,  33, "Met_Click_1" },
{ FONT_PRESET,  34, "Met_Click_2" },
{ FONT_PRESET,  35, "MSbassDrum" },
{ FONT_PRESET,  36, "DWkick" },
{ FONT_PRESET,  37, "STICKRIM1" },
{ FONT_PRESET,  38, "RobySoftSnare_11" },
{ FONT_PRESET,  39, "Claps" },
{ FONT_PRESET,  40, "DWsnatck" },
{ FONT_PRESET,  41, "DWhardLoTomP" },
{ FONT_PRESET,  42, "DWcl_hh_l" },
{ FONT_PRESET,  43, "DWlotom_L" },
{ FONT_PRESET,  44, "High_Hat_Foot" },
{ FONT_PRESET,  45, "DWhitom1P" },
{ FONT_PRESET,  46, "O_Hihat1" },
{ FONT_PRESET,  47, "DWtomatck" },
{ FONT_PRESET,  48, "DWtomatck" },
{ FONT_PRESET,  49, "YamahaCrash1" },
{ FONT_PRESET,  50, "DWhitom2" },
{ FONT_PRESET,  51, "Brush_Cymbal_1" },
{ FONT_PRESET,  52, "schna18a1" },
{ FONT_PRESET,  53, "Ride_Cymbal_2_[Stn]" },
{ FONT_PRESET,  54, "Tambourine1" },
{ FONT_PRESET,  55, "Crash1L" },
{ FONT_PRESET,  56, "XR10COWB1" },
{ FONT_PRESET,  57, "Crash1" },
{ FONT_PRESET,  58, "Vibra_Loop1" },
{ FONT_PRESET,  59, "MSride" },
{ FONT_PRESET,  60, "E_Bongo_Rim" },
{ FONT_PRESET,  61, "M_Bongo_Tone" },
{ FONT_PRESET,  62, "Quinto_Slap" },
{ FONT_PRESET,  63, "Quinto_Tone" },
{ FONT_PRESET,  64, "Low_Tumba_Tone" },
{ FONT_PRESET,  65, "Timbale_Hi" },
{ FONT_PRESET,  66, "Timbale_Low1" },
{ FONT_PRESET,  67, "Agogo" },
{ FONT_PRESET,  68, "Agogo" },
{ FONT_PRESET,  69, "Cabasa" },
{ FONT_PRESET,  70, "Maraca1" },
{ FONT_PRESET,  71, "Whistle" },
{ FONT_PRESET,  72, "Whistle" },
{ FONT_PRESET,  73, "Guiro_Short1" },
{ FONT_PRESET,  74, "Guiro_Long1" },
{ FONT_PRESET,  75, "Rosewood_Claves1" },
{ FONT_PRESET,  76, "Woodblock_1" },
{ FONT_PRESET,  77, "Woodblock_0" },
{ FONT_PRESET,  78, "GUICAUP" },
{ FONT_PRESET,  79, "GUICADN" },
{ FONT_PRESET,  80, "TRIANG01" },
{ FONT_PRESET,  81, "TriangleWave_Db51" },
{ FONT_PRESET,  82, "Shaker1" },
{ FONT_PRESET,  83, "JINGLES1" },
{ FONT_PRESET,  84, "Wind_Chimes1" },
{ FONT_PRESET,  85, "castinet" },
{ FONT_PRESET,  86, "Surdo_Mute1" },
{ FONT_PRESET,  87, "Surdo_open" },
{ FONT_DRUMSET, 8, "Room_[SC-55]" },
{ FONT_PRESET,  26, "Finger_Snap_-CD" },
{ FONT_PRESET,  27, "Filter_Snap" },
{ FONT_PRESET,  28, "Slap" },
{ FONT_PRESET,  29, "Scratch_Pull" },
{ FONT_PRESET,  30, "Scratch_Push" },
{ FONT_PRESET,  31, "Sticks" },
{ FONT_PRESET,  32, "Square_Click" },
{ FONT_PRESET,  33, "Click808" },
{ FONT_PRESET,  34, "Click808" },
{ FONT_PRESET,  35, "Kick_2_[Stan1]" },
{ FONT_PRESET,  36, "Kick_1_[Room]" },
{ FONT_PRESET,  37, "Rim_Shot_[St1]_-SC88" },
{ FONT_PRESET,  38, "Snare_1_[Room]" },
{ FONT_PRESET,  39, "Clap" },
{ FONT_PRESET,  40, "Snare_2_[Room]" },
{ FONT_PRESET,  41, "SnareVerb1" },
{ FONT_PRESET,  42, "C._Hihat_[St1]_-SC88" },
{ FONT_PRESET,  43, "SnareVerb1" },
{ FONT_PRESET,  44, "P._Hihat_[St1]_-SC88" },
{ FONT_PRESET,  45, "SnareVerb1" },
{ FONT_PRESET,  46, "O._Hihat_[St1]_-SC88" },
{ FONT_PRESET,  47, "SnareVerb1" },
{ FONT_PRESET,  48, "SnareVerb1" },
{ FONT_PRESET,  49, "Crash_Cymbal_1_[Stn]" },
{ FONT_PRESET,  50, "SnareVerb1" },
{ FONT_PRESET,  51, "Ride_Cymbal_1_[Stn]" },
{ FONT_PRESET,  52, "Chinese_Cymbal" },
{ FONT_PRESET,  53, "Ride_Bell_[Stn]" },
{ FONT_PRESET,  54, "Brass_Tambourine" },
{ FONT_PRESET,  55, "Splash_Cymbal" },
{ FONT_PRESET,  56, "Cowbell" },
{ FONT_PRESET,  57, "Crash_Cymbal_2_[Stn]" },
{ FONT_PRESET,  58, "Vibra_Slap" },
{ FONT_PRESET,  59, "Ride_Cymbal_2_[Stn]" },
{ FONT_PRESET,  60, "E_Bongo_Rim_1" },
{ FONT_PRESET,  61, "M_Bongo_Tone" },
{ FONT_PRESET,  62, "Closed_Slap" },
{ FONT_PRESET,  63, "Conga_High_Open" },
{ FONT_PRESET,  64, "Low_Tumba" },
{ FONT_PRESET,  65, "Timbale_Rim." },
{ FONT_PRESET,  66, "Timbale_Low" },
{ FONT_PRESET,  67, "Agogo_High" },
{ FONT_PRESET,  68, "Agogo_Low" },
{ FONT_PRESET,  69, "Cabasa" },
{ FONT_PRESET,  70, "Maracas" },
{ FONT_PRESET,  71, "Whistle_Short" },
{ FONT_PRESET,  72, "Whistle_Long" },
{ FONT_PRESET,  73, "Guiro_Short" },
{ FONT_PRESET,  74, "Guiro_Long" },
{ FONT_PRESET,  75, "Rosewood_Claves" },
{ FONT_PRESET,  76, "Wood_Block_High" },
{ FONT_PRESET,  77, "Wood_Block_Low" },
{ FONT_PRESET,  78, "Cuica_Mute" },
{ FONT_PRESET,  79, "Cuica_Open" },
{ FONT_PRESET,  80, "TriangleWave_Db51" },
{ FONT_PRESET,  81, "TriangleWave_Db51" },
{ FONT_PRESET,  82, "Shaker" },
{ FONT_PRESET,  83, "Jingle_Bell" },
{ FONT_PRESET,  84, "Bell_tree" },
{ FONT_PRESET,  85, "Castanets1" },
{ FONT_PRESET,  86, "Surdo_Mute" },
{ FONT_PRESET,  87, "Surdo_Open" },
{ FONT_DRUMSET, 16, "Power_[SC-55]" },
{ FONT_PRESET,  26, "Finger_Snap_-CD" },
{ FONT_PRESET,  27, "Filter_Snap" },
{ FONT_PRESET,  28, "Slap" },
{ FONT_PRESET,  29, "Scratch_Pull" },
{ FONT_PRESET,  30, "Scratch_Push" },
{ FONT_PRESET,  31, "Sticks" },
{ FONT_PRESET,  32, "Square_Click" },
{ FONT_PRESET,  33, "Click808" },
{ FONT_PRESET,  34, "Click808" },
{ FONT_PRESET,  35, "Kick_2_[Power]" },
{ FONT_PRESET,  36, "Kick_1_[Power]" },
{ FONT_PRESET,  37, "Rim_Shot_[St1]_-SC88" },
{ FONT_PRESET,  38, "Snare_1_-CD_[Power]" },
{ FONT_PRESET,  39, "Clap" },
{ FONT_PRESET,  40, "Snare_2_-CD_[Power]" },
{ FONT_PRESET,  41, "Tom_6_[Stan1]_-SC88" },
{ FONT_PRESET,  42, "C._Hihat_[St1]_-SC88" },
{ FONT_PRESET,  43, "Tom_5_[Stan1]_-SC88" },
{ FONT_PRESET,  44, "P._Hihat_[St1]_-SC88" },
{ FONT_PRESET,  45, "Tom_4_[Stan1]_-SC88" },
{ FONT_PRESET,  46, "O._Hihat_[St1]_-SC88" },
{ FONT_PRESET,  47, "Tom_3_[Stan1]_-SC88" },
{ FONT_PRESET,  48, "Tom_2_[Stan1]_-SC88" },
{ FONT_PRESET,  49, "Crash_Cymbal_1_[Stn]" },
{ FONT_PRESET,  50, "Tom_1_[Stan1]_-SC88" },
{ FONT_PRESET,  51, "Ride_Cymbal_1_[Stn]" },
{ FONT_PRESET,  52, "Chinese_Cymbal" },
{ FONT_PRESET,  53, "Ride_Bell_[Stn]" },
{ FONT_PRESET,  54, "Brass_Tambourine" },
{ FONT_PRESET,  55, "Splash_Cymbal" },
{ FONT_PRESET,  56, "Cowbell" },
{ FONT_PRESET,  57, "Crash_Cymbal_2_[Stn]" },
{ FONT_PRESET,  58, "Vibra_Slap" },
{ FONT_PRESET,  59, "Ride_Cymbal_2_[Stn]" },
{ FONT_PRESET,  60, "E_Bongo_Rim_1" },
{ FONT_PRESET,  61, "M_Bongo_Tone" },
{ FONT_PRESET,  62, "Closed_Slap" },
{ FONT_PRESET,  63, "Conga_High_Open" },
{ FONT_PRESET,  64, "Low_Tumba" },
{ FONT_PRESET,  65, "Timbale_Rim." },
{ FONT_PRESET,  66, "Timbale_Low" },
{ FONT_PRESET,  67, "Agogo_High" },
{ FONT_PRESET,  68, "Agogo_Low" },
{ FONT_PRESET,  69, "Cabasa" },
{ FONT_PRESET,  70, "Maracas" },
{ FONT_PRESET,  71, "Whistle_Short" },
{ FONT_PRESET,  72, "Whistle_Long" },
{ FONT_PRESET,  73, "Guiro_Short" },
{ FONT_PRESET,  74, "Guiro_Long" },
{ FONT_PRESET,  75, "Rosewood_Claves" },
{ FONT_PRESET,  76, "Wood_Block_High" },
{ FONT_PRESET,  77, "Wood_Block_Low" },
{ FONT_PRESET,  78, "Cuica_Mute" },
{ FONT_PRESET,  79, "Cuica_Open" },
{ FONT_PRESET,  80, "TriangleWave_Db51" },
{ FONT_PRESET,  81, "TriangleWave_Db51" },
{ FONT_PRESET,  82, "Shaker" },
{ FONT_PRESET,  83, "Jingle_Bell" },
{ FONT_PRESET,  84, "Bell_tree" },
{ FONT_PRESET,  85, "Castanets1" },
{ FONT_PRESET,  86, "Surdo_Mute" },
{ FONT_PRESET,  87, "Surdo_Open" },
{ FONT_DRUMSET, 24, "Electronic_[SC-55]" },
{ FONT_PRESET,  26, "Finger_Snap_-CD" },
{ FONT_PRESET,  27, "Filter_Snap" },
{ FONT_PRESET,  28, "Slap" },
{ FONT_PRESET,  29, "Scratch_Pull" },
{ FONT_PRESET,  30, "Scratch_Push" },
{ FONT_PRESET,  31, "Sticks" },
{ FONT_PRESET,  32, "Square_Click" },
{ FONT_PRESET,  33, "Click808" },
{ FONT_PRESET,  34, "Click808" },
{ FONT_PRESET,  35, "Kick_2_[Stan1]" },
{ FONT_PRESET,  36, "Kick_1_[Elec]" },
{ FONT_PRESET,  37, "Rim_Shot_[St1]_-SC88" },
{ FONT_PRESET,  38, "Syn_Drum_Wave2" },
{ FONT_PRESET,  39, "Clap" },
{ FONT_PRESET,  40, "Snare_2_[Elec]" },
{ FONT_PRESET,  41, "Syn_Drum_Wave2" },
{ FONT_PRESET,  42, "C._Hihat_[St1]_-SC88" },
{ FONT_PRESET,  43, "Syn_Drum_Wave2" },
{ FONT_PRESET,  44, "P._Hihat_[St1]_-SC88" },
{ FONT_PRESET,  45, "Syn_Drum_Wave2" },
{ FONT_PRESET,  46, "O._Hihat_[St1]_-SC88" },
{ FONT_PRESET,  47, "Syn_Drum_Wave2" },
{ FONT_PRESET,  48, "Syn_Drum_Wave2" },
{ FONT_PRESET,  49, "Crash_Cymbal_1_[Stn]" },
{ FONT_PRESET,  50, "Syn_Drum_Wave2" },
{ FONT_PRESET,  51, "Ride_Cymbal_1_[Stn]" },
{ FONT_PRESET,  52, "Med_Crash1" },
{ FONT_PRESET,  53, "Ride_Bell_[Stn]" },
{ FONT_PRESET,  54, "Brass_Tambourine" },
{ FONT_PRESET,  55, "Splash_Cymbal" },
{ FONT_PRESET,  56, "Cowbell" },
{ FONT_PRESET,  57, "Crash_Cymbal_2_[Stn]" },
{ FONT_PRESET,  58, "Vibra_Slap" },
{ FONT_PRESET,  59, "Ride_Cymbal_2_[Stn]" },
{ FONT_PRESET,  60, "E_Bongo_Rim_1" },
{ FONT_PRESET,  61, "M_Bongo_Tone" },
{ FONT_PRESET,  62, "Closed_Slap" },
{ FONT_PRESET,  63, "Conga_High_Open" },
{ FONT_PRESET,  64, "Low_Tumba" },
{ FONT_PRESET,  65, "Timbale_Rim." },
{ FONT_PRESET,  66, "Timbale_Low" },
{ FONT_PRESET,  67, "Agogo_High" },
{ FONT_PRESET,  68, "Agogo_Low" },
{ FONT_PRESET,  69, "Cabasa" },
{ FONT_PRESET,  70, "Maracas" },
{ FONT_PRESET,  71, "Whistle_Short" },
{ FONT_PRESET,  72, "Whistle_Long" },
{ FONT_PRESET,  73, "Guiro_Short" },
{ FONT_PRESET,  74, "Guiro_Long" },
{ FONT_PRESET,  75, "Rosewood_Claves" },
{ FONT_PRESET,  76, "Wood_Block_High" },
{ FONT_PRESET,  77, "Wood_Block_Low" },
{ FONT_PRESET,  78, "Cuica_Mute" },
{ FONT_PRESET,  79, "Cuica_Open" },
{ FONT_PRESET,  80, "TriangleWave_Db51" },
{ FONT_PRESET,  81, "TriangleWave_Db51" },
{ FONT_PRESET,  82, "Shaker" },
{ FONT_PRESET,  83, "Jingle_Bell" },
{ FONT_PRESET,  84, "Bell_tree" },
{ FONT_PRESET,  85, "Castanets1" },
{ FONT_PRESET,  86, "Surdo_Mute" },
{ FONT_PRESET,  87, "Surdo_Open" },
{ FONT_DRUMSET, 25, "TR-909_[SC-55]" },
{ FONT_PRESET,  26, "Finger_Snap_-CD" },
{ FONT_PRESET,  27, "Filter_Snap" },
{ FONT_PRESET,  28, "Slap" },
{ FONT_PRESET,  29, "Scratch_Pull_[TR909]" },
{ FONT_PRESET,  30, "Scratch_Push_[TR909]" },
{ FONT_PRESET,  31, "Sticks" },
{ FONT_PRESET,  32, "Square_Click" },
{ FONT_PRESET,  33, "Click808" },
{ FONT_PRESET,  34, "Click808" },
{ FONT_PRESET,  35, "Kick_2_[Stan1]" },
{ FONT_PRESET,  36, "Kick1_-TR808_[TR808]" },
{ FONT_PRESET,  37, "Click808" },
{ FONT_PRESET,  38, "Snare_1_[TR909]" },
{ FONT_PRESET,  39, "Clap" },
{ FONT_PRESET,  40, "Snare_2_-TR808_[808]" },
{ FONT_PRESET,  41, "Sine_Wave" },
{ FONT_PRESET,  42, "Hat808" },
{ FONT_PRESET,  43, "Sine_Wave" },
{ FONT_PRESET,  44, "Hat808" },
{ FONT_PRESET,  45, "Sine_Wave" },
{ FONT_PRESET,  46, "Hi-Hat_Open_[TR909]" },
{ FONT_PRESET,  47, "Sine_Wave" },
{ FONT_PRESET,  48, "Sine_Wave" },
{ FONT_PRESET,  49, "Med_Crash1" },
{ FONT_PRESET,  50, "Sine_Wave" },
{ FONT_PRESET,  51, "Ride_Cymbal_1_[Stn]" },
{ FONT_PRESET,  52, "Chinese_Cymbal" },
{ FONT_PRESET,  53, "Ride_Bell_[Stn]" },
{ FONT_PRESET,  54, "Brass_Tambourine" },
{ FONT_PRESET,  55, "Splash_Cymbal" },
{ FONT_PRESET,  56, "Cowbell808" },
{ FONT_PRESET,  57, "Crash_Cymbal_2_[Stn]" },
{ FONT_PRESET,  58, "Vibra_Slap" },
{ FONT_PRESET,  59, "Ride_Cymbal_2_[Stn]" },
{ FONT_PRESET,  60, "E_Bongo_Rim_1" },
{ FONT_PRESET,  61, "M_Bongo_Tone" },
{ FONT_PRESET,  62, "Sine_Wave" },
{ FONT_PRESET,  63, "Sine_Wave" },
{ FONT_PRESET,  64, "Sine_Wave" },
{ FONT_PRESET,  65, "Timbale_Rim." },
{ FONT_PRESET,  66, "Timbale_Low" },
{ FONT_PRESET,  67, "Agogo_High" },
{ FONT_PRESET,  68, "Agogo_Low" },
{ FONT_PRESET,  69, "Cabasa" },
{ FONT_PRESET,  70, "Maracas" },
{ FONT_PRESET,  71, "Whistle_Short" },
{ FONT_PRESET,  72, "Whistle_Long" },
{ FONT_PRESET,  73, "Guiro_Short" },
{ FONT_PRESET,  74, "Guiro_Long" },
{ FONT_PRESET,  75, "Rosewood_Claves" },
{ FONT_PRESET,  76, "Wood_Block_High" },
{ FONT_PRESET,  77, "Wood_Block_Low" },
{ FONT_PRESET,  78, "Cuica_Mute" },
{ FONT_PRESET,  79, "Cuica_Open" },
{ FONT_PRESET,  80, "TriangleWave_Db51" },
{ FONT_PRESET,  81, "TriangleWave_Db51" },
{ FONT_PRESET,  82, "Shaker" },
{ FONT_PRESET,  83, "Jingle_Bell" },
{ FONT_PRESET,  84, "Bell_tree" },
{ FONT_PRESET,  85, "Castanets1" },
{ FONT_PRESET,  86, "Surdo_Mute" },
{ FONT_PRESET,  87, "Surdo_Open" },
{ FONT_DRUMSET, 32, "Jazz_[SC-55]" },
{ FONT_PRESET,  26, "Finger_Snap_-CD" },
{ FONT_PRESET,  27, "Filter_Snap" },
{ FONT_PRESET,  28, "Slap" },
{ FONT_PRESET,  29, "Scratch_Pull" },
{ FONT_PRESET,  30, "Scratch_Push" },
{ FONT_PRESET,  31, "Sticks" },
{ FONT_PRESET,  32, "Square_Click" },
{ FONT_PRESET,  33, "Click808" },
{ FONT_PRESET,  34, "Click808" },
{ FONT_PRESET,  35, "Kick2_[Stn]_-SC88Pro" },
{ FONT_PRESET,  36, "Kick1_[Stn]_-SC88Pro" },
{ FONT_PRESET,  37, "Rim_Shot_[St1]_-SC88" },
{ FONT_PRESET,  38, "Snare_1_[Stn]_-SC88" },
{ FONT_PRESET,  39, "Clap" },
{ FONT_PRESET,  40, "Snare_2_[Stn]_-SC88" },
{ FONT_PRESET,  41, "Tom_6_[Stan1]_-SC88" },
{ FONT_PRESET,  42, "C._Hihat_[St1]_-SC88" },
{ FONT_PRESET,  43, "Tom_5_[Stan1]_-SC88" },
{ FONT_PRESET,  44, "P._Hihat_[St1]_-SC88" },
{ FONT_PRESET,  45, "Tom_4_[Stan1]_-SC88" },
{ FONT_PRESET,  46, "O._Hihat_[St1]_-SC88" },
{ FONT_PRESET,  47, "Tom_3_[Stan1]_-SC88" },
{ FONT_PRESET,  48, "Tom_2_[Stan1]_-SC88" },
{ FONT_PRESET,  49, "Crash_Cymbal_1_[Stn]" },
{ FONT_PRESET,  50, "Tom_1_[Stan1]_-SC88" },
{ FONT_PRESET,  51, "Ride_Cymbal_1_[Stn]" },
{ FONT_PRESET,  52, "Chinese_Cymbal" },
{ FONT_PRESET,  53, "Ride_Bell_[Stn]" },
{ FONT_PRESET,  54, "Brass_Tambourine" },
{ FONT_PRESET,  55, "Splash_Cymbal" },
{ FONT_PRESET,  56, "Cowbell" },
{ FONT_PRESET,  57, "Crash_Cymbal_2_[Stn]" },
{ FONT_PRESET,  58, "Vibra_Slap" },
{ FONT_PRESET,  59, "Ride_Cymbal_2_[Stn]" },
{ FONT_PRESET,  60, "E_Bongo_Rim_1" },
{ FONT_PRESET,  61, "M_Bongo_Tone" },
{ FONT_PRESET,  62, "Closed_Slap" },
{ FONT_PRESET,  63, "Conga_High_Open" },
{ FONT_PRESET,  64, "Low_Tumba" },
{ FONT_PRESET,  65, "Timbale_Rim." },
{ FONT_PRESET,  66, "Timbale_Low" },
{ FONT_PRESET,  67, "Agogo_High" },
{ FONT_PRESET,  68, "Agogo_Low" },
{ FONT_PRESET,  69, "Cabasa" },
{ FONT_PRESET,  70, "Maracas" },
{ FONT_PRESET,  71, "Whistle_Short" },
{ FONT_PRESET,  72, "Whistle_Long" },
{ FONT_PRESET,  73, "Guiro_Short" },
{ FONT_PRESET,  74, "Guiro_Long" },
{ FONT_PRESET,  75, "Rosewood_Claves" },
{ FONT_PRESET,  76, "Wood_Block_High" },
{ FONT_PRESET,  77, "Wood_Block_Low" },
{ FONT_PRESET,  78, "Cuica_Mute" },
{ FONT_PRESET,  79, "Cuica_Open" },
{ FONT_PRESET,  80, "TriangleWave_Db51" },
{ FONT_PRESET,  81, "TriangleWave_Db51" },
{ FONT_PRESET,  82, "Shaker" },
{ FONT_PRESET,  83, "Jingle_Bell" },
{ FONT_PRESET,  84, "Bell_tree" },
{ FONT_PRESET,  85, "Castanets1" },
{ FONT_PRESET,  86, "Surdo_Mute" },
{ FONT_PRESET,  87, "Surdo_Open" },
{ FONT_DRUMSET, 40, "Brush_[SC-55]" },
{ FONT_PRESET,  26, "Finger_Snap_-CD" },
{ FONT_PRESET,  27, "Filter_Snap" },
{ FONT_PRESET,  28, "Slap" },
{ FONT_PRESET,  29, "Scratch_Pull" },
{ FONT_PRESET,  30, "Scratch_Push" },
{ FONT_PRESET,  31, "Sticks" },
{ FONT_PRESET,  32, "Square_Click" },
{ FONT_PRESET,  33, "Click808" },
{ FONT_PRESET,  34, "Click808" },
{ FONT_PRESET,  35, "Kick_2_[Stan1]" },
{ FONT_PRESET,  36, "Kick" },
{ FONT_PRESET,  37, "Rim_Shot_[St1]_-SC88" },
{ FONT_PRESET,  38, "Snare1_[Brush]_-SC88" },
{ FONT_PRESET,  39, "BrushSlap_[Br]_-SC88" },
{ FONT_PRESET,  40, "PinkNoiseWave1" },
{ FONT_PRESET,  41, "Tom_6_[Stan1]_-SC88" },
{ FONT_PRESET,  42, "C._Hihat_[St1]_-SC88" },
{ FONT_PRESET,  43, "Tom_5_[Stan1]_-SC88" },
{ FONT_PRESET,  44, "P._Hihat_[St1]_-SC88" },
{ FONT_PRESET,  45, "Tom_4_[Stan1]_-SC88" },
{ FONT_PRESET,  46, "O._Hihat_[St1]_-SC88" },
{ FONT_PRESET,  47, "Tom_3_[Stan1]_-SC88" },
{ FONT_PRESET,  48, "Tom_2_[Stan1]_-SC88" },
{ FONT_PRESET,  49, "Crash_Cymbal_1_[Stn]" },
{ FONT_PRESET,  50, "Tom_1_[Stan1]_-SC88" },
{ FONT_PRESET,  51, "Ride_Cymbal_1_[Stn]" },
{ FONT_PRESET,  52, "Chinese_Cymbal" },
{ FONT_PRESET,  53, "Ride_Bell_[Stn]" },
{ FONT_PRESET,  54, "Brass_Tambourine" },
{ FONT_PRESET,  55, "Splash_Cymbal" },
{ FONT_PRESET,  56, "Cowbell" },
{ FONT_PRESET,  57, "Crash_Cymbal_2_[Stn]" },
{ FONT_PRESET,  58, "Vibra_Slap" },
{ FONT_PRESET,  59, "Ride_Cymbal_2_[Stn]" },
{ FONT_PRESET,  60, "E_Bongo_Rim_1" },
{ FONT_PRESET,  61, "M_Bongo_Tone" },
{ FONT_PRESET,  62, "Closed_Slap" },
{ FONT_PRESET,  63, "Conga_High_Open" },
{ FONT_PRESET,  64, "Low_Tumba" },
{ FONT_PRESET,  65, "Timbale_Rim." },
{ FONT_PRESET,  66, "Timbale_Low" },
{ FONT_PRESET,  67, "Agogo_High" },
{ FONT_PRESET,  68, "Agogo_Low" },
{ FONT_PRESET,  69, "Cabasa" },
{ FONT_PRESET,  70, "Maracas" },
{ FONT_PRESET,  71, "Whistle_Short" },
{ FONT_PRESET,  72, "Whistle_Long" },
{ FONT_PRESET,  73, "Guiro_Short" },
{ FONT_PRESET,  74, "Guiro_Long" },
{ FONT_PRESET,  75, "Rosewood_Claves" },
{ FONT_PRESET,  76, "Wood_Block_High" },
{ FONT_PRESET,  77, "Wood_Block_Low" },
{ FONT_PRESET,  78, "Cuica_Mute" },
{ FONT_PRESET,  79, "Cuica_Open" },
{ FONT_PRESET,  80, "TriangleWave_Db51" },
{ FONT_PRESET,  81, "TriangleWave_Db51" },
{ FONT_PRESET,  82, "Shaker" },
{ FONT_PRESET,  83, "Jingle_Bell" },
{ FONT_PRESET,  84, "Bell_tree" },
{ FONT_PRESET,  85, "Castanets1" },
{ FONT_PRESET,  86, "Surdo_Mute" },
{ FONT_PRESET,  87, "Surdo_Open" },
{ FONT_DRUMSET, 48, "Orchestra_[SC-55]" },
{ FONT_PRESET,  27, "Hat" },
{ FONT_PRESET,  28, "Hat" },
{ FONT_PRESET,  29, "Hat" },
{ FONT_PRESET,  30, "Ride_Bell_[Stn]" },
{ FONT_PRESET,  31, "Sticks" },
{ FONT_PRESET,  32, "Square_Click" },
{ FONT_PRESET,  33, "Click808" },
{ FONT_PRESET,  34, "Click808" },
{ FONT_PRESET,  35, "Kick_2_[Stan1]" },
{ FONT_PRESET,  36, "Tom_Mid_1_[Stan1]" },
{ FONT_PRESET,  37, "Rim_Shot_[St1]_-SC88" },
{ FONT_PRESET,  38, "Snare_[Orche]_-SC88" },
{ FONT_PRESET,  39, "Castanets1" },
{ FONT_PRESET,  40, "Snare_[Orche]_-SC88" },
{ FONT_PRESET,  41, "Timpani_-SC88Pro" },
{ FONT_PRESET,  42, "Timpani_-SC88Pro" },
{ FONT_PRESET,  43, "Timpani_-SC88Pro" },
{ FONT_PRESET,  44, "Timpani_-SC88Pro" },
{ FONT_PRESET,  45, "Timpani_-SC88Pro" },
{ FONT_PRESET,  46, "Timpani_-SC88Pro" },
{ FONT_PRESET,  47, "Timpani_-SC88Pro" },
{ FONT_PRESET,  48, "Timpani_-SC88Pro" },
{ FONT_PRESET,  49, "Timpani_-SC88Pro" },
{ FONT_PRESET,  50, "Timpani_-SC88Pro" },
{ FONT_PRESET,  51, "Timpani_-SC88Pro" },
{ FONT_PRESET,  52, "Timpani_-SC88Pro" },
{ FONT_PRESET,  53, "Timpani_-SC88Pro" },
{ FONT_PRESET,  54, "Brass_Tambourine" },
{ FONT_PRESET,  55, "Med_Crash1" },
{ FONT_PRESET,  56, "Cowbell" },
{ FONT_PRESET,  57, "Med_Crash1" },
{ FONT_PRESET,  58, "Vibra_Slap" },
{ FONT_PRESET,  59, "Med_Crash1" },
{ FONT_PRESET,  60, "E_Bongo_Rim_1" },
{ FONT_PRESET,  61, "M_Bongo_Tone" },
{ FONT_PRESET,  62, "Closed_Slap" },
{ FONT_PRESET,  63, "Conga_High_Open" },
{ FONT_PRESET,  64, "Low_Tumba" },
{ FONT_PRESET,  65, "Timbale_Rim." },
{ FONT_PRESET,  66, "Timbale_Low" },
{ FONT_PRESET,  67, "Agogo_High" },
{ FONT_PRESET,  68, "Agogo_Low" },
{ FONT_PRESET,  69, "Cabasa" },
{ FONT_PRESET,  70, "Maracas" },
{ FONT_PRESET,  71, "Whistle_Short" },
{ FONT_PRESET,  72, "Whistle_Long" },
{ FONT_PRESET,  73, "Guiro_Short" },
{ FONT_PRESET,  74, "Guiro_Long" },
{ FONT_PRESET,  75, "Rosewood_Claves" },
{ FONT_PRESET,  76, "Wood_Block_High" },
{ FONT_PRESET,  77, "Wood_Block_Low" },
{ FONT_PRESET,  78, "Cuica_Mute" },
{ FONT_PRESET,  79, "Cuica_Open" },
{ FONT_PRESET,  80, "TriangleWave_Db51" },
{ FONT_PRESET,  81, "TriangleWave_Db51" },
{ FONT_PRESET,  82, "Shaker" },
{ FONT_PRESET,  83, "Jingle_Bell" },
{ FONT_PRESET,  84, "Bell_tree" },
{ FONT_PRESET,  85, "Castanets1" },
{ FONT_PRESET,  86, "Surdo_Mute" },
{ FONT_PRESET,  87, "Surdo_Open" },
{ FONT_PRESET,  88, "Applause2" },
{ FONT_DRUMSET, 56, "SFX_[SC-55]" },
{ FONT_PRESET,  39, "Filter_Snap" },
{ FONT_PRESET,  40, "Slap" },
{ FONT_PRESET,  41, "Scratch_Pull" },
{ FONT_PRESET,  42, "Scratch_Push" },
{ FONT_PRESET,  43, "Sticks" },
{ FONT_PRESET,  44, "Square_Click" },
{ FONT_PRESET,  45, "Click808" },
{ FONT_PRESET,  46, "Click808" },
{ FONT_PRESET,  47, "FretNoise" },
{ FONT_PRESET,  48, "GtrCutDwn1oct" },
{ FONT_PRESET,  49, "GtrCutUp1oct1" },
{ FONT_PRESET,  50, "GtrSlap1oct1" },
{ FONT_PRESET,  51, "GtrClick1oct1" },
{ FONT_PRESET,  52, "Laughter1oct1" },
{ FONT_PRESET,  53, "Scream_[Man]" },
{ FONT_PRESET,  54, "Punch" },
{ FONT_PRESET,  55, "Kick_2_[Stn]" },
{ FONT_PRESET,  56, "Step1oct1" },
{ FONT_PRESET,  57, "Step1oct1" },
{ FONT_PRESET,  58, "Applause2" },
{ FONT_PRESET,  59, "DoorCreak1oct1" },
{ FONT_PRESET,  60, "DoorSlam1oct1" },
{ FONT_PRESET,  61, "Scratch_11" },
{ FONT_PRESET,  62, "Chimes1oct1" },
{ FONT_PRESET,  63, "CarStart1oct1" },
{ FONT_PRESET,  64, "Skid1oct1" },
{ FONT_PRESET,  65, "RaceCar1oct" },
{ FONT_PRESET,  66, "CarCrash1" },
{ FONT_PRESET,  67, "Siren1oct1" },
{ FONT_PRESET,  68, "Train1oct1" },
{ FONT_PRESET,  69, "PinkNoiseWave1" },
{ FONT_PRESET,  70, "Helicopter1" },
{ FONT_PRESET,  71, "ChinaCrashCymb1" },
{ FONT_PRESET,  72, "Gun_Shot2" },
{ FONT_PRESET,  73, "MachGun1oct1" },
{ FONT_PRESET,  74, "Ride_Bell" },
{ FONT_PRESET,  75, "Explosion" },
{ FONT_PRESET,  76, "Dog1oct1" },
{ FONT_PRESET,  77, "Horse1oct1" },
{ FONT_PRESET,  78, "Bird1" },
{ FONT_PRESET,  79, "Applause2" },
{ FONT_PRESET,  80, "Thunder_-WAV" },
{ FONT_PRESET,  81, "PinkNoiseWave1" },
{ FONT_PRESET,  82, "PinkNoiseWave1" },
{ FONT_PRESET,  83, "Brook1oct1" },
{ FONT_PRESET,  84, "Bubbles1oct1" },
{ FONT_DRUMSET, 99, "Chaos_Standard_Drum" },
{ FONT_PRESET,  26, "Finger_Snap_-CD" },
{ FONT_PRESET,  27, "Filter_Snap" },
{ FONT_PRESET,  28, "Slap" },
{ FONT_PRESET,  29, "Scratch_Pull" },
{ FONT_PRESET,  30, "Scratch_Push" },
{ FONT_PRESET,  31, "Sticks" },
{ FONT_PRESET,  32, "Square_Click" },
{ FONT_PRESET,  33, "Click808" },
{ FONT_PRESET,  34, "Click808" },
{ FONT_PRESET,  35, "Kick2_[Stn]_-SC88Pro" },
{ FONT_PRESET,  36, "Kick1_[Stn]_-SC88Pro" },
{ FONT_PRESET,  37, "Rim_Shot_[St1]_-SC88" },
{ FONT_PRESET,  38, "Snare_1_[Stn]_-SC88" },
{ FONT_PRESET,  39, "Clap" },
{ FONT_PRESET,  40, "Snare_2_[Stn]_-SC88" },
{ FONT_PRESET,  41, "Tom_6_[Stan1]_-SC88" },
{ FONT_PRESET,  42, "C._Hihat_[St1]_-SC88" },
{ FONT_PRESET,  43, "Tom_5_[Stan1]_-SC88" },
{ FONT_PRESET,  44, "P._Hihat_[St1]_-SC88" },
{ FONT_PRESET,  45, "Tom_4_[Stan1]_-SC88" },
{ FONT_PRESET,  46, "O._Hihat_[St1]_-SC88" },
{ FONT_PRESET,  47, "Tom_3_[Stan1]_-SC88" },
{ FONT_PRESET,  48, "Tom_2_[Stan1]_-SC88" },
{ FONT_PRESET,  49, "Crash_Cymbal_1_[Stn]" },
{ FONT_PRESET,  50, "Tom_1_[Stan1]_-SC88" },
{ FONT_PRESET,  51, "Ride_Cymbal_1_[Stn]" },
{ FONT_PRESET,  52, "Chinese_Cymbal" },
{ FONT_PRESET,  53, "Ride_Bell_[Stn]" },
{ FONT_PRESET,  54, "Brass_Tambourine" },
{ FONT_PRESET,  55, "Splash_Cymbal" },
{ FONT_PRESET,  56, "Cowbell" },
{ FONT_PRESET,  57, "Crash_Cymbal_2_[Stn]" },
{ FONT_PRESET,  58, "Vibra_Slap" },
{ FONT_PRESET,  59, "Ride_Cymbal_2_[Stn]" },
{ FONT_PRESET,  60, "E_Bongo_Rim_1" },
{ FONT_PRESET,  61, "M_Bongo_Tone" },
{ FONT_PRESET,  62, "Closed_Slap" },
{ FONT_PRESET,  63, "Conga_High_Open" },
{ FONT_PRESET,  64, "Low_Tumba" },
{ FONT_PRESET,  65, "Timbale_Rim." },
{ FONT_PRESET,  66, "Timbale_Low" },
{ FONT_PRESET,  67, "Agogo_High" },
{ FONT_PRESET,  68, "Agogo_Low" },
{ FONT_PRESET,  69, "Cabasa" },
{ FONT_PRESET,  70, "Maracas" },
{ FONT_PRESET,  71, "Whistle_Short" },
{ FONT_PRESET,  72, "Whistle_Long" },
{ FONT_PRESET,  73, "Guiro_Short" },
{ FONT_PRESET,  74, "Guiro_Long" },
{ FONT_PRESET,  75, "Rosewood_Claves" },
{ FONT_PRESET,  76, "Wood_Block_High" },
{ FONT_PRESET,  77, "Wood_Block_Low" },
{ FONT_PRESET,  78, "Cuica_Mute" },
{ FONT_PRESET,  79, "Cuica_Open" },
{ FONT_PRESET,  80, "TriangleWave_Db51" },
{ FONT_PRESET,  81, "TriangleWave_Db51" },
{ FONT_PRESET,  82, "Shaker" },
{ FONT_PRESET,  83, "Jingle_Bell" },
{ FONT_PRESET,  84, "Bell_tree" },
{ FONT_PRESET,  85, "Castanets1" },
{ FONT_PRESET,  86, "Surdo_Mute" },
{ FONT_PRESET,  87, "Surdo_Open" },
{ FONT_SBK, 0, "PC42b.sf2" }
};
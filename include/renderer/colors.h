﻿/*
 | --------------------------------------------------------------------------------------------------
 |     Rodeo Project
 |
 |     marcin.goryca@gmail.com
 |     http://marcingoryca.pl
 |
 |     License Information
 |
 |     The MIT License (MIT)
 |     Copyright (c) 2010 - ... Marcin Goryca
 |
 |     Permission is hereby granted, free of charge,
 |     to any person obtaining a copy of this software
 |     and associated documentation files (the "Software"),
 |     to deal in the Software without restriction,
 |     including without limitation the rights to use,
 |     copy, modify, merge, publish, distribute, sublicense,
 |     and/or sell copies of the Software,
 |     and to permit persons to whom the Software is furnished to do so,
 |     subject to the following conditions:
 |
 |     The above copyright notice and this permission notice
 |     shall be included in all copies or substantial portions of the Software.
 |
 |     THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 |     EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 |     FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
 |     IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM,
 |     DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
 |     ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
 |     IN THE SOFTWARE.
 |---------------------------------------------------------------------------------------------------
 */
#ifndef RODEO_RENDERER_COLORS_H_
#define RODEO_RENDERER_COLORS_H_ 

namespace rodeo
{
namespace renderer
{
/*
 |  ----------------------------
 |    Red #FF0000 
 |  ----------------------------
 */
const float RODEO_RED[] = {1.0f, 0.0f, 0.0f, 1.0f};
#define rodeoRed 1.0f, 0.0f, 0.0f
#define rodeoUBred 255, 0, 0

/*
 |  ----------------------------
 |    Green #00FF00 
 |  ----------------------------
 */
const float RODEO_GREEN[] = {0.0f, 1.0f, 0.0f, 1.0f};
#define rodeoGreen 0.0f, 1.0f, 0.0f
#define rodeoUBgreen 0, 255, 0

/*
 |  ----------------------------
 |    Blue #0000FF 
 |  ----------------------------
 */
const float RODEO_BLUE[] = {0.0f, 0.0f, 1.0f, 1.0f};
#define rodeoBlue 0.0f, 0.0f, 1.0f
#define rodeoUBblue 0, 0, 255

/*
 |  ----------------------------
 |    Black #000000 
 |  ----------------------------
 */
const float RODEO_BLACK[] = {0.0f, 0.0f, 0.0f, 1.0f};
#define rodeoBlack 0.0f, 0.0f, 0.0f
#define rodeoUBblack 0, 0, 0

/*
|  ----------------------------
|    White #FFFFFF
|  ----------------------------
*/
const float RODEO_WHITE[] = {1.0f, 1.0f, 1.0f, 1.0f};
#define rodeoWhite 1.0f, 1.0f, 1.0f
#define rodeoUBwhite 255, 255, 255

/*
 |  ----------------------------
 |    Yellow #FFFF00 
 |  ----------------------------
 */
const float RODEO_YELLOW[] = {1.0f, 1.0f, 0.0f, 1.0f};
#define rodeoYellow 1.0f, 1.0f, 0.0f
#define rodeoUByellow 255, 255, 0  

/*
 |  ----------------------------
 |    Darkblue #000080 
 |  -----------------------------
 */
const float RODEO_DARKBLUE[] = { 0.0f, 0.0f, 0.8f, 1.0f };
#define rodeoDarkblue 0.0f, 0.0f, 0.8f
#define rodeoUBdarkblue 0, 0, 128

/*
 |  ------------------------------
 |    Darkgreen #008000 
 |  ------------------------------
 */
const float RODEO_DARKGREEN[] = { 0.0f, 0.8f, 0.0f, 1.0f };
#define rodeoDarkgreen 0.0f, 0.8f, 0.0f
#define rodeoUBdarkgreen 0, 128, 0

/*
 |  ------------------------------
 |    Darkcyan #008080 
 |  ------------------------------
 */
const float RODEO_DARKCYAN[] = { 0.0f, 0.8f, 0.8f, 1.0f };
#define rodeoDarkcyan 0.0f, 0.8f, 0.8f
#define rodeoUBdarkcyan 0, 128, 128

/*
 |  ------------------------------
 |    Darkred #800000 
 |  ------------------------------
 */
const float RODEO_DARKRED[] = { 0.8f, 0.0f, 0.0f, 1.0f };
#define darkred 0.8f, 0.0f, 0.0f
#define UBdarkred 128, 0, 0

/*
 |  ------------------------------
 |    Darkmagenta #800080 
 |  ------------------------------
 */
const float RODEO_DARKMAGENTA[] = { 0.8f, 0.0f, 0.8f, 1.0f };
#define darkmagenta 0.8f, 0.0f, 0.8f
#define UBdarkmagenta 128, 0, 128

/*
 |  ------------------------------
 |    Darkyellow #808000 
 |  ------------------------------
 */
const float RODEO_DARKYELLOW[] = { 0.8f, 0.8f, 0.0f, 1.0f };
#define darkyellow 0.8f, 0.8f, 0.0f
#define UBdarkyellow 128, 128, 0

/*
 |  ------------------------------
 |    Lightgrey #606060 
 |  ------------------------------
 */
const float RODEO_LIGHTGREY[] = { 0.6f, 0.6f, 0.6f, 1.0f };
#define lightgrey 0.6f, 0.6f, 0.6f
#define UBlightgrey 192, 192, 192

/*
 |  ------------------------------
 |    Darkgrey #808080 
 |  ------------------------------
 */
const float RODEO_DARKGREY[] = { 0.8f, 0.8f, 0.8f, 1.0f };
#define darkgrey 0.8f, 0.8f, 0.8f
#define UBdarkgrey 128, 128, 128

/*
 |  ------------------------------
 |    Cyan #00FFFF 
 |  ------------------------------
 */
const float RODEO_CYAN[] = { 0.0f, 1.0f, 1.0f, 1.0f };
#define cyan 0.0f, 1.0f, 1.0f
#define UBcyan 0, 255, 255

/*
 |  ------------------------------
 |    Magenta #FF00FF 
 |  ------------------------------
 */
const float RODEO_MAGENTA[] = { 1.0f, 0.0f, 1.0f, 1.0f };
#define magenta 1.0f, 0.0f, 1.0f
#define UBmagenta 255, 0, 255

/*
 |  ------------------------------
 |    Moneygreen #609060 
 |  ------------------------------
 */
const float RODEO_MONEYGREEN[] = { 0.6f, 0.9f, 0.6f, 1.0f };
#define moneygreen 0.6f, 0.9f, 0.6f
#define UBmoneygreen 192, 220, 192

/*
 |  ------------------------------
 |    Airforceblue #5D8AA8
 |  ------------------------------
 */
const float RODEO_AIRFORCEBLUE[] = { 0.36f, 0.54f, 0.66f, 1.0f };
#define airforceblue 0.36f, 0.54f, 0.66f
#define UBairforceblue 93, 138, 168

/*
 |  ------------------------------
 |    Alizarin Crimson #E32636 
 |  ------------------------------
 */
const float RODEO_ALIZARINCRIMSON[] = { 0.83f, 0.1f, 0.26f, 1.0f };
#define alizarincrimson 0.83f, 0.1f, 0.26f
#define UBalizarincrimson 227, 38, 54

/*
 |  -------------------------------
 |    Amaranth #E52B50 
 |  -------------------------------
 */
const float RODEO_AMARANTH[] = { 0.9f, 0.17f, 0.31f, 1.0f };
#define amaranth 0.9f, 0.17f, 0.31f
#define UBamaranth 229, 43, 80

/*
 |  -----------------------------------
 |    Skyblue #A6CAF0 
 |  -----------------------------------
 */
const float RODEO_SKYBLUE[] = { 0.57f, 0.89f, 0.95f, 1.0f };
#define skyblue 0.57f, 0.89f, 0.95f
#define UBskyblue 166, 202, 240

/*
 |  -----------------------------------
 |    Cream #FFFBF0 
 |  -----------------------------------
 */
const float RODEO_CREAM[] = { 1.0f, 0.99f, 0.95f, 1.0f };
#define cream 1.0f, 0.99f, 0.95f
#define UBcream 255, 251, 240

/* 
 |  -----------------------------------
 |    MEDIUrodeoREY #A0A0A4 
 |  -----------------------------------
 */
const float RODEO_MEDIUrodeoREY[] = { 0.55f, 0.55f, 0.56f, 1.0f };
#define mediurodeorey 0.55f, 0.55f, 0.56f
#define UBmediurodeorey 160, 160, 164

/*
 |  -----------------------------------
 |    AMBER #FFBF00 
 |  -----------------------------------
 */
const float RODEO_AMBER[] = { 1.0f, 0.75f, 0.0f, 1.0f };
#define amber 1.0f, 0.75f, 0.0f
#define UBamber 255, 191, 0

/*
 |  -----------------------------------
 |    Amethyst #9966CC 
 |  -----------------------------------
 */
const float RODEO_AMETHYST[] = { 0.6f, 0.4f, 0.8f, 1.0f };  
#define amethyst 0.6f, 0.4f, 0.8f
#define UBamethyst 153, 102, 204

/*
 |  -----------------------------------
 |    Antique Brass #CD9575 
 |  -----------------------------------
 */
const float RODEO_ANTIQUEBRASS[] = { 0.8f, 0.58f, 0.46f, 1.0f };
#define antiquebrass 0.8f, 0.58f, 0.46f
#define UBantiquebrass 205, 149, 117

/*
 |  -----------------------------------
 |    Applegreen #8DB600 
 |  -----------------------------------
 */
const float RODEO_APPLEGREEN[] = { 0.55f, 0.71f, 0.0f, 1.0f };
#define applegreen 0.55f, 0.71f, 0.0f
#define UBapplegreen 141, 182, 0

/*
 |  -----------------------------------
 |    Arsenic #3B444B 
 |  -----------------------------------
 */
const float RODEO_ARSENIC[] = { 0.23f, 0.27f, 0.29f, 1.0f };
#define arsenic 0.23f, 0.27f, 0.29f
#define UBarsenic 59, 68, 75

/*
 |  -----------------------------------
 |    Arylideyellow #E9D66B 
 |  -----------------------------------
 */
const float RODEO_ARYLIDEYELLOW[] = { 0.91f, 0.84f, 0.42f, 1.0f };
#define arylideyellow 0.91f, 0.84f, 0.42f
#define UBarylideyellow 233, 214, 107

/*
 |  -----------------------------------
 |    Atomic Tangerine #FF9966 
 |  -----------------------------------
 */
const float RODEO_ATOMICTANGERINE[] = { 1.0f, 0.6f, 0.4f, 1.0f };
#define atomictangerine 1.0f, 0.6f,0.4f
#define UBatomictangerine 255, 153, 102

/*
 |  ------------------------------------
 |    Auburn #6D351A 
 |  ------------------------------------
 */
const float RODEO_AUBURN[] = { 0.43f, 0.21f, 0.1f, 1.0f };
#define auburn #0.43f, 0.21f, 0.1f
#define UBauburn 109, 53, 26

/*
 |  ------------------------------------
 |    Babypink #F4C2C2 
 |  ------------------------------------
 */
const float RODEO_BABYPINK[] = { 0.96f, 0.76f, 0.76f, 1.0f };
#define babypink 0.96f, 0.76f, 0.76f
#define UBbabypink 244, 194, 194

/*
 |  -----------------------------------
 |    Ballblue #21ABCD 
 |  -----------------------------------
 */
const float RODEO_BALLBLUE[] = { 0.13f, 0.67f, 0.8f, 1.0f };
#define ballblue 0.13f, 0.67f, 0.8f
#define UBballblue 33, 171, 205

// Beaver #9F8170 
const float RODEO_BEAVER[] = { 0.62f, 0.51f, 0.44f, 1.0f };
#define beaver 0.62f, 0.51f,0.44f
#define UBbeaver 159, 129, 112

// Bistre #3D2B1F 
const float RODEO_BISTRE[] = { 0.24f, 0.17f, 0.12f, 1.0f };
#define bistre 0.24f, 0.17f, 0.12f
#define UBbistre 61, 43, 31

// Bittersweet #FE6F5E 
const float RODEO_BITTERSWEET[] = { 1.0f, 0.44f, 0.37f, 1.0f };
#define bittersweet 1.0f, 0.44f, 0.37f
#define UBbittersweet 254, 111, 94

// Bleu de France #318CE7 
const float RODEO_BLEUDEFRANCE[] = { 0.19f, 0.55f, 0.91f, 1.0f };
#define bleudefrance 0.19f, 0.55f, 0.91f
#define UBbleudefrance 49, 140, 231

// Blizzard Blue #ACE5EE 
const float RODEO_BLIZZARDBLUE[] = { 0.67f, 0.9f, 0.93f, 1.0f };
#define blizzardblue 0.67f, 0.9f, 0.93f
#define UBblizzardblue 172, 229, 238

// Blue Munsell #0093AF 
const float RODEO_BLUEMUNSELL[] = { 0.0f, 0.5f, 0.69f, 1.0f };
#define bluemunsell 0.0f, 0.5f, 0.69f
#define UBbluemunsell 0, 147, 175

// Bole #79443B 
const float RODEO_BOLE[] = { 0.47f, 0.27f, 0.23f, 1.0f };
#define bole 0.47f, 0.27f, 0.23f
#define UBbole 121, 68, 59

// Bulgarian Rose #480607
const float RODEO_BULGARIANROSE[] = { 0.28f, 0.02f, 0.03f, 1.0f };
#define bulgarianrose 0.28f, 0.02f, 0.03f
#define UBbulgarianrose 72, 6, 7

// Burgundy #800020 
const float RODEO_BURGUNDY[] = { 0.5f, 0.0f, 0.13f, 1.0f };
#define burgundy 0.5f, 0.0f, 0.13f
#define UBburgundy 128, 0, 32

// Cadmium Green #006B3C 
const float RODEO_CADMIUrodeoREEN[] = { 0.0f, 0.42f, 0.24f, 1.0f };
#define cadmiurodeoreen 0.0f, 0.42f, 0.24f
#define UBcadmiurodeoreen 0, 107, 60

// Camel #C19A6B 
const float RODEO_CAMEL[] = { 0.76f, 0.6f, 0.42f, 1.0f };
#define camel 0.76f, 0.6f, 0.42f
#define UBcamel 193, 154, 107

// Cardinal #C41E31 
const float RODEO_CARDINAL[] = { 0.77f, 0.12f, 0.23f, 1.0f };
#define cardinal 0.77f, 0.12f, 0.23f
#define UBcardinal 196, 30, 49

// Carmine #960018 
const float RODEO_CARMINE[] = { 0.59f, 0.0f, 0.09f, 1.0f };
#define carmine 0.59f, 0.0f, 0.0.9f
#define UBcarmine 150, 0, 24

// Ceruleanblue #2A52BE 
const float RODEO_CERULEANBLUE[] = { 0.16f, 0.32f, 0.75f, 1.0f };
#define ceruleanblue 0.16f, 0.32f, 0.75f
#define UBceruleanblue 42, 82, 190

// Chamoisee #A0785A 
const float RODEO_CHAMOISEE[] = { 0.63f, 0.47f, 0.35f, 1.0f };
#define chamoisee 0.63f, 0.47f, 0.35f
#define UBchamoisee 160, 120, 90

// Charcoal #36454F 
const float RODEO_CHARCOAL[] = { 0.21f, 0.27f, 0.31f, 1.0f };
#define charcoal 0.21f, 0.27f, 0.31f
#define UBcharcoal 54, 69,79

// Antiquefuchsia #915C83 
const float RODEO_ANTIQUEFUCHSIA[] = { 0.57f, 0.36f, 0.51f, 1.0f };
#define antiquefuchsia 0.57f, 0.36f, 0.51f
#define UBantiquefuchsia 145, 92, 131

// Antiquewhite #FAEBD7 
const float RODEO_ANTIQUEWHITE[] = { 0.98f, 0.92f, 0.84f, 1.0f };
#define antiquewhite 0.98f, 0.92f, 0.84f
#define UBantiquewhite 250, 235, 215

// Apricot #FBCEB1 
const float RODEO_APRICOT[] = { 0.98f, 0.81f, 0.69f, 1.0f };
#define apricot 0.98f, 0.81f, 0.69f
#define UBapricot 251, 206, 177

// Aquamarine #7FFFD0 
const float RODEO_AQUAMARINE[] = { 0.5f, 1.0f, 0.83f, 1.0f };
#define aquamarine 0.5f, 1.0f, 0.83f
#define UBaquamarine 127, 255, 208

// Armygreen #4B5320 
const float RODEO_ARMYGREEN[] = { 0.29f, 0.33f, 0.13f, 1.0f };
#define armygreen 0.29f, 0.33f, 0.13f
#define UBarmygreen 75, 83, 32

// Bazaar #98777B 
const float RODEO_BAZAAR[] = { 0.6f, 0.47f, 0.48f, 1.0f };
#define bazaar 0.6f, 0.47f, 0.48f
#define UBbazaar 152, 119, 123

// BlueRYB #0247FE 
const float RODEO_BLUERYB[] = { 0.01f, 0.28f, 1.0f, 1.0f };
#define blueryb 0.01f, 0.28f, 1.0f
#define UBblueryb 2, 71, 254

// Brandeis Blue #0070FF 
const float RODEO_BRANDEISBLUE[] = { 0.0f, 0.44f, 1.0f, 1.0f };
#define brandeisblue 0.0f, 0.44f, 1.0f
#define UBbrandeisblue 0, 112, 255

// Briliant lavender #F4BBFF 
const float RODEO_BRILIANTLAVENDER[] = { 0.96f, 0.73f, 1.0f, 1.0f };
#define briliantlavender 0.96f, 0.73f, 1.0f
#define UBbriliantlavender 244, 187, 255

// Brink pink #FB607F 
const float RODEO_BRINKPINK[] = { 0.98f, 0.38f, 0.5f, 1.0f };
#define brinkpink 0.98f, 0.38f, 0.5f
#define UBbrinkpink 251, 96, 127

// British racing green #004225 
const float RODEO_BRITISHRACINGGREEN[] = { 0.0f, 0.26f, 0.15f, 1.0f };
#define britishracinggreen 0.0f, 0.26f, 0.15f
#define UBbritishracinggreen 0, 66, 37

// Bronze #CD7F32 
const float RODEO_BRONZE[] = { 0.8f, 0.5f, 0.2f, 1.0f };
#define bronze 0.8f, 0.5f, 0.2f
#define UBbronze 205, 127, 50

// Brown(web) #A52A2A 
const float RODEO_BROWNWEB[] = { 0.65f, 0.16f, 0.16f, 1.0f };
#define brownweb 0.65f, 0.16f, 0.16f
#define UBbrownweb 165, 42, 42

// Buff #F0DC82 
const float RODEO_BUFF[] = { 0.94f, 0.86f, 0.51f, 1.0f };
#define buff 0.94f, 0.86f, 0.51f
#define UBbuff 240, 220, 130

// Burlywood #DEB887 
const float RODEO_BURLYWOOD[] = { 0.87f, 0.72f, 0.53f, 1.0f };
#define burlywood 0.87f, 0.72f, 0.53f
#define UBburlywood 222, 184, 135

// Burnt orange #CC5500 
const float RODEO_BURNTORANGE[] = { 0.8f, 0.33f, 0.0f, 1.0f };
#define burntorange 0.8f, 0.33f, 0.0f
#define UBburntorange 204, 85, 0

// Burnt sienna #E97451 
const float RODEO_BURNTSIENNA[] = { 0.91f, 0.45f, 0.32f, 1.0f };
#define burntsienna 0.91f, 0.45f, 0.32f
#define UBburntsienna 233, 116, 81

// Burnt umber #8A3324 
const float RODEO_BURNTUMBER[] = { 0.54f, 0.2f, 0.14f, 1.0f };
#define burntumber 0.54f, 0.2f, 0.14f
#define UBburntumber 138, 51, 36

// Byzantine #BD33A4 
const float RODEO_BYZANTINE[] = { 0.74f, 0.2f, 0.64f, 1.0f };
#define byzantine 0.74f, 0.2f, 0.64f
#define UBbyzantine 184, 51, 164

// Byzantium #702963 
const float RODEO_BYZANTIUM[] = { 0.44f, 0.16f, 0.39f, 1.0f };
#define byzantium 0.44f, 0.16f, 0.39f
#define UBbyzantium 112, 41, 99

// Halayaube #663854 
const float RODEO_HALAYAUBE[] = { 0.4f, 0.22f, 0.33f, 1.0f };
#define halayaube 0.4f, 0.22f, 0.33f

// Hookersgreen #007000 
const float RODEO_HOOKERSGREEN[] = { 0.0f, 0.44f, 0.0f, 1.0f };
#define hookersgreen 0.0f, 0.44f, 0.0f

// Dandelion #F0E130 
const float RODEO_DANDELION[] = { 0.94f, 0.88f, 0.19f, 1.0f };
#define dandelion 0.94f, 0.88f, 0.19f			

// Darkbrown #654321
const float RODEO_DARKBROWN[] = { 0.4f, 0.26f, 0.13f, 1.0f };
#define darkbrown 0.4f, 0.26f, 0.13f			

// Darkbyzantium #5D3954
const float RODEO_DARKBYZANTIUM[] = { 0.36f, 0.22f, 0.33f, 1.0f };
#define darkbyzantium 0.36f, 0.22f, 0.33f

// Darkcandyapplered #A40000
const float RODEO_DARKCANDYAPPLERED[] = { 0.64f, 0.0f, 0.0f, 1.0f };
#define darkcandyapplered 0.64f, 0.0f, 0.0f

// Darkcelurean #08457E
const float RODEO_DARKCERULEAN[] = { 0.03f, 0.27f, 0.49f, 1.0f };
#define darkcerulean 0.03f, 0.27f, 0.49f

// Darkchampagne #C2B280
const float RODEO_DARKCHAMPAGNE[] = { 0.76f, 0.7f, 0.5f, 1.0f };
#define darkchampagne 0.76f, 0.7f, 0.5f

// Darkchestnut #986960
const float RODEO_DARKCHESTNUT[] = { 0.6f, 0.41f, 0.38f, 1.0f };
#define darkchestnut 0.6f, 0.41f, 0.38f

// Darkcoral #CD5B45
const float RODEO_DARKCORAL[] = { 0.8f, 0.36f, 0.27f, 1.0f };
#define darkcoral 0.8f, 0.36f, 0.27f

// Darkelectricblue #536878
const float RODEO_DARKELECTRICBLUE[] = { 0.33f, 0.41f, 0.47f, 1.0f };
#define darkelectricblue 0.33f, 0.41f, 0.47f

// Darkgoldenrod #B8860B
const float RODEO_DARKGOLDENROD[] = { 0.72f, 0.53f, 0.04f, 1.0f };
#define darkgoldenrod 0.72f, 0.53f, 0.04f

// Darkgreen #013220
const float RODEO_DARKGREEN2[] = { 0.0f, 0.2f, 0.13f, 1.0f };
#define rodeoDarkgreen2 0.0f, 0.2f, 0.13f

// Darkjunglegreen #1A2421
const float RODEO_DARKJUNGLEGREEN[] = { 0.1f, 0.14f, 0.13f, 1.0f };
#define darkjunglegreen 0.1f, 0.14f, 0.13f

// Darkkhaki #BDB76B
const float RODEO_DARKKHAKI[] = { 0.74f, 0.72f, 0.42f, 1.0f };
#define darkkhaki 0.74f, 0.72f, 0.42f

// Darklava #483C32
const float RODEO_DARKLAVA[] = { 0.28f, 0.24f, 0.2f, 1.0f };
#define darklava 0.28f, 0.24f, 0.2f

// Darkmidnightblue #003366
const float RODEO_DARKMIDNIGHTBLUE[] = { 0.0f, 0.2f, 0.4f, 1.0f };
#define darkmidnightblue 0.0f, 0.2f, 0.4f

// Darkolivegreen #556B2F
const float RODEO_DARKOLIVEGREEN[] = { 0.33f, 0.42f, 0.18f, 1.0f };
#define darkolivegreen 0.33f, 0.42f, 0.18f

// Darkorange #FF8C00
const float RODEO_DARKORANGE[] = { 1.0f, 0.55f, 0.0f, 1.0f };
#define darkorange 1.0f, 0.55f, 0.0f

// Darkpastelred #C23B22
const float RODEO_DARKPASTELRED[] = { 0.76f, 0.23f, 0.13f, 1.0f };
#define darkpastelred 0.76f, 0.23f, 0.13f

// Darkraspberry #872657
const float RODEO_DARKRASPBERRY[] = { 0.53f, 0.15f, 0.34f, 1.0f };
#define darkraspberry 0.53f, 0.15f, 0.34f

// Darksalmon #E9967A
const float RODEO_DARKSALMON[] = { 0.91f, 0.59f, 0.48f, 1.0f };
#define darksalmon 0.91f, 0.59f, 0.48f

// Darkscarlet #560319
const float RODEO_DARKSCARLET[] = { 0.34f, 0.01f, 0.1f, 1.0f };
#define darkscarlet 0.34f, 0.01f, 0.1f

// Darkspringgreen #177245
const float RODEO_DARAKSPRINGGREEN[] = { 0.09f, 0.45f, 0.27f, 1.0f };
#define darkspringgreen 0.09f, 0.45f, 0.27f

// Darktan #918151
const float RODEO_DARKTAN[] = { 0.57f, 0.51f, 0.32f, 1.0f };
#define darktan 0.57f, 0.51f, 0.32f

// Darktangerine #FFA812
const float RODEO_DARKTANGERINE[] = { 1.0f, 0.66f, 0.07f, 1.0f };
#define darktangerine 1.0f, 0.66f, 0.07f

// Darktaupe
const float RODEO_DARKTAUPE[] = { 0.28f, 0.24f, 0.2f, 1.0f };
#define darktaupe 0.28f, 0.24f, 0.2f

// Deepcarmine #A9203E
const float RODEO_DEEPCARMINE[] = { 0.66f, 0.13f, 0.24f, 1.0f };
#define deepcarmine 0.66f, 0.13f, 0.24f

// Deepcarminepink #EF3038
const float RODEO_DEEPCARMINEPINK[] = { 0.94f, 0.19f, 0.22f, 1.0f };
#define deepcarminepink 0.94f, 0.19f, 0.22f

// Deepcarrotorange #E9692C
const float RODEO_DEEPCARROTORANGE[] = { 0.91f, 0.41f, 0.17f, 1.0f };
#define deepcarrotorange 0.91f, 0.41f, 0.17f

// Deepchampagne #FAD6A5
const float RODEO_DEEPCHAMPAGNE[] = { 0.98f, 0.84f, 0.65f, 1.0f };
#define deepchampagne 0.98f, 0.84f, 0.65f

// Deepchestnut #B94E48
const float RODEO_DEEPCHESTNUT[] = { 0.73f, 0.31f, 0.28f, 1.0f };
#define deepchestnut 0.73f, 0.31f, 0.28f

// Denim #1560BD
const float RODEO_DENIM[] = { 0.08f, 0.38f, 0.74f, 1.0f };
#define denim 0.08f, 0.38f, 0.74f

// Desert #C19A6B
const float RODEO_DESERT[] = { 0.76f, 0.6f, 0.42f, 1.0f };
#define desert 0.76f, 0.6f, 0.42f

// Earthyellow #E1A95F
const float RODEO_EARTHYELLOW[] = { 0.88f, 0.66f, 0.37f, 1.0f };
#define earthyellow 0.88f, 0.66f, 0.37f

// Ecru #C2B280
const float RODEO_ECRU[] = { 0.76f, 0.7f, 0.5f, 1.0f };
#define ecru 0.76f, 0.7f, 0.5f

// Eggplant #614051
const float RODEO_EGGPLANT[] = { 0.38f, 0.25f, 0.32f, 1.0f };
#define eggplant 0.38f, 0.25f, 0.32f

// Eggshell #F0EAD6
const float RODEO_EGGSHELL[] = { 0.94f, 0.92f, 0.84f, 1.0f };
#define eggshell 0.94f, 0.92f, 0.84f

// Fallow #C19A6B
const float RODEO_FALLOW[] = { 0.76f, 0.6f, 0.42f, 1.0f };
#define fallow 0.76f, 0.6f, 0.42f

// Falured #801818
const float RODEO_FALURED[] = { 0.5f, 0.09f, 0.09f, 1.0f };
#define falured 0.5f, 0.09f, 0.09f

// Fandango #B53389
const float RODEO_FANDANGO[] = { 0.71f, 0.2f, 0.54f, 1.0f };
#define fandango 0.71f, 0.2f, 0.54f

// Fawn #E5AA70
const float RODEO_FAWN[] = { 0.9f, 0.67f, 0.44f, 1.0f };
#define fawn 0.9f, 0.67f, 0.44f

// Ferngreen #4F7942
const float RODEO_FERNGREEN[] = { 0.31f, 0.47f, 0.26f, 1.0f };
#define ferngreen 0.31f, 0.47f, 0.26f

// Firebrick #B22222
const float RODEO_FIREBRICK[] = { 0.7f, 0.13f, 0.13f, 1.0f };
#define firebrick .07f, 0.13f, 0.13f

// Fireenginered #CE2029
const float RODEO_FIREENGINERED[] = { 0.81f, 0.09f, 0.13f, 1.0f };
#define fireenginered 0.81f, 0.09f, 0.13f

// Flame #E25822
const float RODEO_FLAME[] = { 0.89f, 0.35f, 0.13f, 1.0f };
#define flame 0.89f, 0.35f, 0.13f

// Flax #EEDC82
const float RODEO_FLAX[] = { 0.93f, 0.86f, 0.51f, 1.0f };
#define flax 0.93f, 0.86f, 0.51f

// Fluorescentyellow
const float RODEO_FLUORESCENTYELLOW[] = { 0.8f, 1.0f, 0.0f, 1.0f };
#define fluorescentyellow 0.8f, 1.0f, 0.0f

// Frenchbeige #A67B5B
const float RODEO_FRENCHBEIGE[] = { 0.65f, 0.48f, 0.36f, 1.0f };
#define frenchbeige 0.65f, 0.48f, 0.36f

// Frenchblue #0072BB
const float RODEO_FRENCHBLUE[] = { 0.0f, 0.45f, 0.73f, 1.0f };
#define frenchblue 0.0f, 0.45f, 0.73f

// Fuzzywuzzy #CC6666
const float RODEO_FUZZYWUZZY[] = { 0.8f, 0.4f, 0.4f, 1.0f };
#define fuzzywuzzy 0.8f, 0.4f, 0.4f

// Gamboge #E49B0F
const float RODEO_GAMBOGE[] = { 0.89f, 0.61f, 0.06f, 1.0f };
#define gamboge 0.89f, 0.61f, 0.06f	

// Goldmetallic #D4AF37
const float RODEO_GOLDMETALLIC[] = { 0.83f, 0.69f, 0.22f, 1.0f };
#define goldmetallic 0.83f, 0.69f, 0.22f

// Goldenpoppy #FCC200
const float RODEO_GOLDENPOPPY[] = { 0.99f, 0.76f, 0.0f, 1.0f };
#define goldenpoppy 0.99f, 0.76f, 0.0f

// Greenryb #66B032
const float RODEO_GREENRYB[] = { 0.4f, 0.69f, 0.2f, 1.0f };
#define greenryb 0.4f, 0.69f, 0.2f

// Greenyellow #ADFF2F
const float RODEO_GREENYELLOW[] = { 0.68f, 1.0f, 0.18f, 1.0f };
#define greenyellow 0.68f, 1.0f, 0.18f

// Hanblue #446CCF
const float RODEO_HANBLUE[] = { 0.27f, 0.42f, 0.81f, 1.0f };
#define hanblue 0.27f, 0.42f, 0.81f

// Hansayellow #E9D66B
const float RODEO_HANSAYELLOW[] = { 0.91f, 0.84f, 0.42f, 1.0f };
#define hansayellow 0.91f, 0.84f, 0.42f

// Harvardcrimson #C90016
const float RODEO_HARVARDCRIMSON[] = { 0.79f, 0.0f, 0.09f, 1.0f };
#define harvardcrimson 0.79f, 0.0f, 0.09f

// Heartgold #808000
const float RODEO_HEARTGOLD[] = { 0.5f, 0.5f, 0.0f, 1.0f };
#define heartgold 0.5f, 0.5f, 0.0f

// Huntergreen #355E3B
const float RODEO_HUNTERGREEN[] = { 0.21f, 0.37f, 0.23f, 1.0f };
#define huntergreen 0.21f, 0.37f, 0.23f

// Inchworm #B2EC5D
const float RODEO_INCHWORM[] = { 0.7f, 0.93f, 0.36f, 1.0f };
#define inchworm 0.7f, 0.93f, 0.36f

// Indianyellow #E3A857
const float RODEO_INDIANYELLOW[] = { 0.89f, 0.66f, 0.34f, 1.0f };
#define indianyellow 0.89f, 0.66f, 0.34f

// Indigodye #00416A
const float RODEO_INDIGODYE[] = { 0.0f, 0.25f, 0.42f, 1.0f };
#define indigodye 0.0f, 0.25f, 0.42f

// Internationalorange #FF4F00
const float RODEO_INTERNATIONALORANGE[] = { 1.0f, 0.31f, 0.0f, 1.0f };
#define internationalorange 1.0f, 0.31f, 0.0f

// Iris #5A4FCF
const float RODEO_IRIS[] = { 0.35f, 0.31f, 0.81f, 1.0f };
#define iris 0.35f, 0.31f, 0.81f

// Jasmin #F8DE7E
const float RODEO_JASMIN[] = { 0.97f, 0.87f, 0.49f, 1.0f };
#define jasmin 0.97f, 0.87f, 0.49f

// Jonquil #FADA5E
const float RODEO_JONQUIL[] = { 0.98f, 0.85f, 0.37f, 1.0f };
#define jonquil 0.98f, 0.85f, 0.37f

// Junebud #BDDA57
const float RODEO_JUNEBUD[] = { 0.74f, 0.85f, 0.34f, 1.0f };
#define junebud 0.74f, 0.85f, 0.34f

// Lapislazuli #26619C
const float RODEO_LAPISLAZULI[] = { 0.15f, 0.38f, 0.61f, 1.0f };
#define lapislazuli 0.15f, 0.38f, 0.61f

// Lava #CF1020
const float RODEO_LAVA[] = { 0.81f, 0.06f, 0.13f, 1.0f };
#define lava 0.81f, 0.06f, 0.13f

// Lemon #FFF7000
const float RODEO_LEMON[] = { 1.0f, 0.97f, 0.0f, 1.0f };
#define lemon 1.0f, 0.97f, 0.0f

// Liver #534B4F
const float RODEO_LIVER[] = { 0.33f, 0.29f, 0.31f, 1.0f };
#define liver 0.33f, 0.29f, 0.31f

// Lust #E62020
const float RODEO_LUST[] = { 0.9f, 0.13f, 0.13f, 1.0f };
#define lust 0.9f, 0.13f, 0.13f

// Mahogany #C04000
const float RODEO_MAHOGANY[] = { 0.75f, 0.25f, 0.0f, 1.0f };
#define mahogany 0.75f, 0.25f, 0.0f

// Mangotango #FF8243
const float RODEO_MANGOTANGO[] = { 1.0f, 0.51f, 0.26f, 1.0f };
#define mangotango 1.0f, 0.51f, 0.26f

// Naplesyellow #FADA5E
const float RODEO_NAPLESYELLOW[] = { 0.98f, 0.85f, 0.37f, 1.0f };
#define naplesyellow 0.98f, 0.85f, 0.37f

// Navajowhite #FFDEAD
const float RODEO_NAVAJOWHITE[] = { 1.0f, 0.87f, 0.68f, 1.0f };
#define navajowhite	1.0f, 0.87f, 0.68f

// Neoncarrot #FFA343
const float RODEO_NEONCARROT[] = { 1.0f, 0.64f, 0.26f, 1.0f };
#define neoncarrot 1.0f, 0.64f, 0.26f

// Oceanboatblue #0077BE
const float RODEO_OCEANBOATBLUE[] = { 0.0f, 0.47f, 0.75f, 1.0f };
#define oceanboatblue 0.0f,0.47f, 0.75f

// Ochre #CC7722
const float RODEO_OCHRE[] = { 0.8f, 0.47f, 0.13f, 1.0f };
#define ochre 0.8f, 0.47f, 0.13f

// Olive #808000
const float RODEO_OLIVE[] = { 0.5f, 0.5f, 0.0f, 1.0f };
#define olive 0.5f, 0.5f, 0.0f

// Olivine #9AB973
const float RODEO_OLIVINE[] = { 0.6f, 0.73f, 0.45f, 1.0f };
#define olivine 0.6f, 0.73f, 0.45f

// Onyx #0F0F0F
const float RODEO_ONYX[] = { 0.0f, 0.06f, 0.06f, 1.0f };
#define onyx 0.06f, 0.06f, 0.06f

// Orange #FF7F00
const float RODEO_ORANGE[] = { 1.0f, 0.5f, 0.0f, 1.0f };
#define orange 1.0f, 0.5f, 0.0f	

// Orangered #FF4500
const float RODEO_ORANGERED[] = { 1.0f, 0.27f, 0.0f, 1.0f };
#define orangered 1.0f, 0.27f, 0.0f

// Otterbrown #654321
const float RODEO_OTTERBROWN[] = { 0.4f, 0.26f, 0.13f, 1.0f };
#define otterbrown 0.4f, 0.26f, 0.13f

// Outerspace #414A4C
const float RODEO_OUTERSPACE[] = { 0.25f, 0.29f, 0.3f, 1.0f };
#define outerspace 0.25f, 0.29f, 0.3f

// Palatinablue #273BE2
const float RODEO_PALATINATEBLUE[] = { 0.15f, 0.23f, 0.89f, 1.0f };
#define palatinateblue 0.15f, 0.23f, 0.89f

// Pear #D1E231
const float RODEO_PEAR[] = { 0.82f, 0.89f, 0.19f, 1.0f };
#define pear 0.82f, 0.89f, 0.19f

// Paynesgrey #40404F
const float RODEO_PAYNESGREY[] = { 0.25f, 0.25f, 0.28f, 1.0f };
#define paynesgrey 0.25f, 0.25f, 0.28f

// Persianorange #D99058
const float RODEO_PERSIANORANGE[] = { 0.85f, 0.56f, 0.35f, 1.0f };
#define persianorange 0.85f, 0.56f, 0.35f

// Portlandorange #FF5A36
const float RODEO_PORTLANDORANGE[] = { 1.0f, 0.35f, 0.21f, 1.0f };
#define portlandorange 1.0f, 0.35f, 0.21f

// Prune #701C1C
const float RODEO_PRUNE[] = { 0.44f, 0.11f, 0.11f, 1.0f };
#define prune 0.44f, 0.11f, 0.11f

// Pumpkin #FF7518
const float RODEO_PUMPKIN[] = { 1.0f, 0.46f, 0.09f, 1.0f };
#define pumpkin 1.0f, 0.46f, 0.09f

// Rossocorsa #D40000
const float RODEO_ROSSOCORSA[] = { 0.83f, 0.0f, 0.0f, 1.0f };
#define rossocorsa 0.83f, 0.0f, 0.0f

// Rust #B7410E
const float RODEO_RUST[] = { 0.72f, 0.25f, 0.05f, 1.0f };
#define rust 0.72f, 0.25f, 0.05f

// Russet #80461B
const float RODEO_RUSSET[] = { 0.5f, 0.27f, 0.11f, 1.0f };
#define russet 0.5f, 0.27f, 0.11f

// Saddlebrown #8B4513
const float RODEO_SADDLEBROWN[] = { 0.55f, 0.27f, 0.07f, 1.0f };
#define saddlebrown 0.55f, 0.27f, 0.07f

// Saffron #F4C430
const float RODEO_SAFFRON[] = { 0.96f, 0.77f, 0.19f, 1.0f };
#define saffron 0.96f, 0.77f, 0.19f

// Sand #C3B380
const float RODEO_SAND[] = { 0.76f, 0.7f, 0.5f, 1.0f };
#define sand 0.76f, 0.7f, 0.5f

// Sepia #704214
const float RODEO_SEPIA[] = { 0.44f, 0.26f, 0.08f };
#define sepia 0.44f, 0.26f, 0.08f

// Shadow #8A795D
const float RODEO_SHADOW[] = { 0.54f, 0.47f, 0.36f, 1.0f };
#define shadow 0.54f, 0.47f, 0.36f

// Sinopia #CB410B
const float RODEO_SINOPIA[] = { 0.8f, 0.25f, 0.04f, 1.0f };
#define sinopia 0.8f, 0.25f, 0.04f

// Smokeytopaz #933D41
const float RODEO_SMOKEYTOPAZ[] = { 0.58f, 0.25f, 0.03f, 1.0f };
#define smokeytopaz 0.58f, 0.25f, 0.03f

// Tan #D2B48C
const float RODEO_TAN[] = { 0.82f, 0.71f, 0.55f, 1.0f };
#define RODEO_tan 0.82f, 0.71f, 0.55f

// Violet #8F00FF
const float RODEO_VIOLET[] = { 0.56f, 0.01f, 1.0f, 1.0f };
#define violet 0.56f, 0.0f, 1.0f

// Wenge #645452
const float RODEO_WENGE[] = { 0.39f, 0.33f, 0.32f, 1.0f };
#define wenge 0.39f, 0.33f, 0.32f

// Wheat #F5DEB3
const float RODEO_WHEAT[] = { 0.96f, 0.87f, 0.7f, 1.0f };
#define wheat 0.96f, 0.87f, 0.7f

// Wine #722F37
const float RODEO_WINE[] = { 0.45f, 0.18f, 0.22f, 1.0f };
#define wine 0.45f, 0.18f, 0.22f

class Colors
{
public:
    Colors()
        :_red(0.0f),
         _green(0.0f),
         _blue(0.0f),
         _alpha(0.0f)
    {}

    Colors(float red, float green, float blue)
        :_red(red),
         _green(green),
         _blue(blue),
         _alpha(0.0f)
    {}

    Colors(float red, float green, float blue, float alpha)
        :_red(red),
         _green(green),
         _blue(blue),
         _alpha(alpha)
    {}

    Colors(float colors[4])
        :_red(colors[0]),
         _green(colors[1]),
         _blue(colors[2]),
         _alpha(colors[3])
    {}
    
    ~Colors(){}

    void setRed(float red){ _red = red; }
    void setGreen(float green){ _green = green; }
    void setBlue(float blue){ _blue = blue; }
    void setAlpha(float alpha){ _alpha = alpha; }
    
    void setColors(float red, float green, float blue)
    {
        _red = red;
        _green = green;
        _blue = blue;
    }

    void setColors(float red, float green, float blue, float alpha)
    {
        _red = red;
        _green = green;
        _blue = blue;
        _alpha = alpha; 
    }

    float getRed() const {  return _red; }
    float getGreen() const { return _green; }
    float getBlue() const { return _blue; }
    float getAlpha() const { return _alpha; }

private:
    float _red;
    float _green;
    float _blue;
    float _alpha;
};
}
}
#endif
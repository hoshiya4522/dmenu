/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
 "agave Nerd Font:style=Regular;size=8"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */


/* Polar Night */
static const char nord_00[]       = "#2e3440";
static const char nord_01[]       = "#3b4252";
static const char nord_02[]       = "#434c5e";
static const char nord_03[]       = "#4c566a";
/* Snow Storm */
static const char nord_04[]       = "#d8dee9";
static const char nord_05[]       = "#e5e9f0";
static const char nord_06[]       = "#eceff4";
/* Frost */
static const char nord_07[]       = "#8fbcbb";
static const char nord_08[]       = "#88c0d0";
static const char nord_09[]       = "#81a1c1";
static const char nord_10[]       = "#5e81ac";
/* Aurora */
static const char nord_11[]       = "#bf616a";
static const char nord_12[]       = "#d08770";
static const char nord_13[]       = "#ebcb8b";
static const char nord_14[]       = "#a3be8c";
static const char nord_15[]       = "#b48ead";


static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { nord_05, nord_00 },
	[SchemeSel] = { nord_00, nord_08 },
	[SchemeOut] = { nord_02, nord_05 },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;
/* -h option; minimum height of a menu line */
static unsigned int lineheight = 29;
static unsigned int min_lineheight = 8;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

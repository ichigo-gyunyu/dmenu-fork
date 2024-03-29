/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1; /* -b  option; if 0, dmenu appears at bottom     */
static int fuzzy = 1; /* -F option; if 0, dmenu doesn't use fuzzy matching */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {"FantasqueSansMono Nerd Font:style=Regular:size=12"};
static const char *prompt =
    NULL; /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
    /*     fg         bg       */
    [SchemeNorm] = {"#1a1b26", "#eeeeee"},
    [SchemeSel] = {"#eeeeee", "#449dab"},
		[SchemeSelHighlight] = {"#e0af68", "#449dab"},
		[SchemeNormHighlight] = {"#e0af68", "#eeeeee"},
    [SchemeOut] = {"#000000", "#00ffff"},
};
/* -l and -g options; controls number of lines and columns in grid if > 0 */
static unsigned int lines = 0;
static unsigned int columns = 0;
/* -h option; minimum height of a menu line */
static unsigned int lineheight = 30;
static unsigned int min_lineheight = 8;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

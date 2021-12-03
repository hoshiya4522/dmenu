static const char bar[]       = "#1f2335";
static const char hl[]       = "#7aa2f7";
/* static const char sel[]       = "#c0caf5"; */
static const char black[]       = "#c0caf5";
static const char white[]       = "#c0caf5";

static const char *colors[SchemeLast][2] = {
	/*                 fg       bg       border   */
	[SchemeNorm]   = { white, bar },
	[SchemeSel]    = { bar, hl },
	[SchemeOut]  = { bar, white },
};


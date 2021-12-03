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


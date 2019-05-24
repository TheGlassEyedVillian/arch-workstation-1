static const char norm_fg[] = "#d8b5ca";
static const char norm_bg[] = "#02030F";
static const char norm_border[] = "#977e8d";

static const char sel_fg[] = "#d8b5ca";
static const char sel_bg[] = "#EE9464";
static const char sel_border[] = "#d8b5ca";

static const char urg_fg[] = "#d8b5ca";
static const char urg_bg[] = "#534B6C";
static const char urg_border[] = "#534B6C";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};

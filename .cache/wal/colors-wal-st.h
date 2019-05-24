const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#02030F", /* black   */
  [1] = "#534B6C", /* red     */
  [2] = "#EE9464", /* green   */
  [3] = "#245498", /* yellow  */
  [4] = "#5F6193", /* blue    */
  [5] = "#8C748B", /* magenta */
  [6] = "#976F9F", /* cyan    */
  [7] = "#d8b5ca", /* white   */

  /* 8 bright colors */
  [8]  = "#977e8d",  /* black   */
  [9]  = "#534B6C",  /* red     */
  [10] = "#EE9464", /* green   */
  [11] = "#245498", /* yellow  */
  [12] = "#5F6193", /* blue    */
  [13] = "#8C748B", /* magenta */
  [14] = "#976F9F", /* cyan    */
  [15] = "#d8b5ca", /* white   */

  /* special colors */
  [256] = "#02030F", /* background */
  [257] = "#d8b5ca", /* foreground */
  [258] = "#d8b5ca",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;

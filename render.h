//Go line by line,
//Look through list to see who has an x coordinate closer to right side of screen and draw that first
//Repeat until all entity drawn for line
//Go to next line repeat above.
//Repeat until last line reached on screen


//Clear Terminal and Reset Cursor
void clear_terminal();

//Refresh Terminal Screen with Updated Game State
//Adding the correct parameters cause significant compile issues. Not sure why atm.
//Also now I know header files don't require parameter lists but how illegal is this?
void refresh_terminal();

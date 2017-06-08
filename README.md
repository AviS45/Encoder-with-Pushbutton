# Encoder-with-Pushbutton
A Simple Arduino based project with Encoder as a input device

Unlike a variable resistor/potentiometer they have infinite travel in any direction and because they 
produce a digital "Gray code" you can scale their readings to whatever range you like.
The dual direction makes them useful for increasing or decreasing a value within a variable or navigating menus.
Finally, many of these rotary encoders come with a centre push button, which can be used to select menu items, 
reset a counter or do anything you can think of that might suit a momentary push button.

Connection between arduino and encoder as follows
Out of the three pins together, the encoder ground pin is connected to Arduino ground pin. Either of the other 
two pins is connected to analog pin A0  and the remaining on is connected to analog pin A1.
If your direction of rotation isn't the way you'd like, just swap the two non-ground pins over.
And out of two pins of the Switch button on the encoder, one is to be connected to arduino 5v pin And the other pin to
arduino analog pin A2. Thats all about the hardware connection.



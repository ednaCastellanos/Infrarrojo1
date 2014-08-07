#include <IRremote.h>
int RECV_PIN=9;
IRrecv irrecv(RECV_PIN);
decode_results result;

void setup(){
	Serial.begin(9600);
	irrecv.enableIRIn();
}

void loop(){
	if(irrecv.decode(&result)){
        unsigned int value=result.value;
    	Serial.println(value);
	irrecv.resume();
	}
}
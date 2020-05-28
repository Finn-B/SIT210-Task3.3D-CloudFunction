int led = D7;


void setup()
{
    pinMode(led, OUTPUT);
    digitalWrite(led, LOW);
    Particle.subscribe("Deakin_RIOT_SIT210_Photon_Buddy", myHandler);
}

void myHandler(String event, String data)
{
    if(data == "wave"){
        digitalWrite(led, HIGH);
        delay(1000);
        digitalWrite(led, LOW);
        delay(1000);
        digitalWrite(led, HIGH);
        delay(1000);
        digitalWrite(led, LOW);
        delay(1000);
        digitalWrite(led, HIGH);
        delay(1000);
        digitalWrite(led, LOW);
        delay(1000);
    }
    
        if(data == "pat"){
        digitalWrite(led, HIGH);
        delay(300);
        digitalWrite(led, LOW);
        delay(1000);
        digitalWrite(led, HIGH);
        delay(300);
        digitalWrite(led, LOW);
        delay(1000);
    }
    
}

void loop() {

}
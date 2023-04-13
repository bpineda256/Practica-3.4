//Byron Alejandro Pineda Barrientos
 //2022121
int PinA0 = 0;
int Lectura = 0;
int V = 5; 
float VR4 = 0;
float R1 = 1000;
float R2 = 0;
float P = 0;
float relacionado = 0;


void setup()
{
Serial.begin(9600);
}

void loop()
{
Lectura = analogRead(PinA0);
if(Lectura) 
{
relacionado = Lectura * V;
VR4 = (relacionado)/1024.0;
relacionado = (V/VR4) -1;
R2= R1 * relacionado;
P = V / (R1 + R2) * 1000;
Serial.print("R2: ");
Serial.println(R2);

delay(100);
}
}
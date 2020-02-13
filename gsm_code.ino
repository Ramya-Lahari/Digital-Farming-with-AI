int status1=4;
int status2=5;
int status3=6;


void setup() {
  
   Serial.begin(9600);
   pinMode(status1,INPUT);
   pinMode(status2,INPUT);
   pinMode(status3,INPUT);
   
  int  val1=digitalRead(status1);
   int val2=digitalRead(status2);
   int val3=digitalRead(status3);
  
   Serial.print("AT+CMGF=1\"\r");
   delay(1000);
   Serial.print("AT+CMGS=\"+918106692711\"\r");
   delay(1000);
   if(val1==1 ){
        Serial.println("soil moisture is  high");
         delay(1000);
      }
    else {
    
         Serial.println("Soil moisture is low");
         delay(1000);
    }
   
   
   if(val2==0 ){
    
         Serial.println("Atmospheric temperature is moderate");
   Serial.println("Atmospheric humidity is moderate");
         delay(1000);
        }
   else {

         Serial.println("Atmospheric temperature is immoderate");
   Serial.println("Atmospheric humidity is immoderate ");
         delay(1000);
        }
   
   
      
   if(val3==0 ){
       
         Serial.println("Rain fall is very low");
         delay(1000);
       }
   else {
   
         Serial.println("Rain fall is very high");
         delay(1000);
      }
   
}
void loop() {
  // put your main code here, to run repeatedly:

}


#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <Fonts/FreeSans12pt7b.h>
#include <Fonts/FreeSans9pt7b.h>
#include <Fonts/FreeSans18pt7b.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);
static const unsigned char PROGMEM image_data[] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x07, 0xff, 0xff, 0xc0, 0x00, 0x00, 
    0x00, 0x00, 0x07, 0xff, 0xff, 0xc0, 0x00, 0x00, 
    0x00, 0x00, 0x07, 0xff, 0xff, 0xc0, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x07, 0xff, 0xff, 0xff, 0xff, 0x80, 0x00, 
    0x00, 0x07, 0xff, 0xff, 0xff, 0xff, 0x80, 0x00, 
    0x00, 0x07, 0xff, 0xff, 0xff, 0xff, 0x80, 0x00, 
    0x00, 0x07, 0x00, 0x00, 0x00, 0x03, 0x80, 0x00, 
    0x00, 0x07, 0x00, 0x00, 0x00, 0x03, 0x80, 0x00, 
    0x00, 0x07, 0x00, 0x00, 0x38, 0x03, 0x80, 0x00, 
    0x00, 0x07, 0x00, 0x00, 0x78, 0x03, 0x80, 0x00, 
    0x00, 0x07, 0x00, 0x00, 0xf8, 0x03, 0x80, 0x00, 
    0x00, 0x07, 0x00, 0x01, 0xf0, 0x03, 0x80, 0x00, 
    0x00, 0x07, 0x00, 0x03, 0xe0, 0x03, 0x80, 0x00, 
    0x00, 0x07, 0x00, 0x07, 0xc0, 0x03, 0x80, 0x00, 
    0x00, 0x07, 0x00, 0x0f, 0x80, 0x03, 0x80, 0x00, 
    0x00, 0x07, 0x00, 0x1f, 0x00, 0x03, 0x80, 0x00, 
    0x00, 0x07, 0x00, 0x3e, 0x00, 0x03, 0x80, 0x00, 
    0x00, 0x07, 0x00, 0x7c, 0x00, 0x03, 0x80, 0x00, 
    0x00, 0x07, 0x00, 0xf8, 0x00, 0x03, 0x80, 0x00, 
    0x00, 0x07, 0x01, 0xf0, 0x00, 0x03, 0x80, 0x00, 
    0x00, 0x07, 0x03, 0xe0, 0x00, 0x03, 0x80, 0x00, 
    0x00, 0x07, 0x07, 0xc0, 0x00, 0x03, 0x80, 0x00, 
    0x00, 0x07, 0x07, 0xff, 0xff, 0x83, 0x80, 0x00, 
    0x00, 0x07, 0x07, 0xff, 0xff, 0x83, 0x80, 0x00, 
    0x00, 0x07, 0x03, 0xff, 0xff, 0x83, 0x80, 0x00, 
    0x00, 0x07, 0x00, 0x00, 0x0f, 0x03, 0x80, 0x00, 
    0x00, 0x07, 0x00, 0x00, 0x1e, 0x03, 0x80, 0x00, 
    0x00, 0x07, 0x00, 0x00, 0x3c, 0x03, 0x80, 0x00, 
    0x00, 0x07, 0x00, 0x00, 0x78, 0x03, 0x80, 0x00, 
    0x00, 0x07, 0x00, 0x00, 0xf0, 0x03, 0x80, 0x00, 
    0x00, 0x07, 0x00, 0x01, 0xe0, 0x03, 0x80, 0x00, 
    0x00, 0x07, 0x00, 0x03, 0xc0, 0x03, 0x80, 0x00, 
    0x00, 0x07, 0x00, 0x07, 0x80, 0x03, 0x80, 0x00, 
    0x00, 0x07, 0x00, 0x0f, 0x00, 0x03, 0x80, 0x00, 
    0x00, 0x07, 0x00, 0x1e, 0x00, 0x03, 0x80, 0x00, 
    0x00, 0x07, 0x00, 0x3c, 0x00, 0x03, 0x80, 0x00, 
    0x00, 0x07, 0x00, 0x78, 0x00, 0x03, 0x80, 0x00, 
    0x00, 0x07, 0x00, 0xf0, 0x00, 0x03, 0x80, 0x00, 
    0x00, 0x07, 0x01, 0xe0, 0x00, 0x03, 0x80, 0x00, 
    0x00, 0x07, 0x03, 0xe0, 0x00, 0x03, 0x80, 0x00, 
    0x00, 0x07, 0x07, 0xc0, 0x00, 0x03, 0x80, 0x00, 
    0x00, 0x07, 0x07, 0x80, 0x00, 0x03, 0x80, 0x00, 
    0x00, 0x07, 0x07, 0x00, 0x00, 0x03, 0x80, 0x00, 
    0x00, 0x07, 0x00, 0x00, 0x00, 0x03, 0x80, 0x00, 
    0x00, 0x07, 0x00, 0x00, 0x00, 0x03, 0x80, 0x00, 
    0x00, 0x07, 0x00, 0x00, 0x00, 0x03, 0x80, 0x00, 
    0x00, 0x07, 0x00, 0x00, 0x00, 0x03, 0x80, 0x00, 
    0x00, 0x07, 0x00, 0x00, 0x00, 0x03, 0x80, 0x00, 
    0x00, 0x07, 0x00, 0x00, 0x00, 0x03, 0x80, 0x00, 
    0x00, 0x07, 0xff, 0xff, 0xff, 0xff, 0x80, 0x00, 
    0x00, 0x07, 0xff, 0xff, 0xff, 0xff, 0x80, 0x00, 
    0x00, 0x07, 0xff, 0xff, 0xff, 0xff, 0x80, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    };



#define STARTER_EN A2 //PIN7
#define MOSFET_GATE_DRIVER 3
#define interval 1000
#define Speaker_In 8
#define BATTERY_VOLTAGE A1 // changed from A7 for simulation
#define CAP_VOLTAGE A0 //Changed the pin from A6 for the simulation
#define FLG1 4
#define FLG2 5 ,
#define CHARGER_EN 6
#define BUTTON1 9
#define BUTTON2 10
#define ISMON A0
#define POWER_PIN 12
#define LIPO_VOLTAGE A3

int button_state = LOW; 
long last_debounce_time = 0;  // the last time the output pin was toggled
long debounce_delay = 5000;    // the debounce time
float car_battery_voltage;
float car_battery_percent;

void setup() {
  Serial.begin(9600);
  if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println(F("SSD1306 allocation failed"));
    for(;;);
  }
  delay(2000); // Pause for 2 seconds
  // Clear the buffer.
  display.clearDisplay();
  pinMode(STARTER_EN, OUTPUT);
  pinMode(Speaker_In, OUTPUT);
  pinMode(BUTTON1,INPUT);
  pinMode(BUTTON2,INPUT);
  pinMode(CHARGER_EN,OUTPUT);
  pinMode(MOSFET_GATE_DRIVER, OUTPUT);
  pinMode(POWER_PIN, INPUT);
  pinMode(LIPO_VOLTAGE , OUTPUT);
}

void button1() {   //Green button
  button_state = !digitalRead(BUTTON1);
  if ( (millis() - last_debounce_time) > debounce_delay) {
    if  (button_state == HIGH)  {
      //read_capacitor_voltage();
      digitalWrite(CHARGER_EN, HIGH); 
      last_debounce_time = millis(); //set the current time;
       
    }    
  button_state = LOW;
  }   
} 

float button2() { // Red button
  button_state =!digitalRead(BUTTON2);
  if ( (millis() - last_debounce_time) > 3000) {
    if  (button_state == HIGH)  {
      int battery_voltage = analogRead(BATTERY_VOLTAGE);  // takes an int value between 0 and 1023 depending on the input
      //resistor ratio is 4.75(95:20)
      
      float car_battery_voltage = map(battery_voltage, 0, (1023/5)*2.526, 0, 12);
      car_battery(car_battery_voltage,battery_voltage);
    }  
  button_state=LOW;
  }      
} 

void car_battery(float car_battery_voltage,int battery_voltage){
  if (car_battery_voltage<=2){
   digitalWrite(STARTER_EN, LOW);
   digitalWrite(MOSFET_GATE_DRIVER,LOW);
   //delay(interval);
   display.clearDisplay();
   display.setFont(&FreeSans9pt7b);
   display.setTextColor(SSD1306_WHITE);
   display.setCursor(15,20);
   String s1="Interchange";
   String s2="Terminals!!!";
   display.println(s1);
   display.setCursor(15,40);
   display.println(s2);
   display.display();
  }
  else{
   digitalWrite(STARTER_EN, HIGH);
   last_debounce_time=millis();
   display.clearDisplay();
   int car_battery_percent = map(battery_voltage, 0, (1023/5)*2.526, 0, 100);
   connected_to_car_battery(car_battery_percent,car_battery_voltage);//normal car battery voltage (max)=12
   display.clearDisplay();
   count_down(15);
  //delay(interval);//start the vehicle
   digitalWrite(MOSFET_GATE_DRIVER,HIGH);
   delay(10000);
   digitalWrite(MOSFET_GATE_DRIVER,LOW);
   digitalWrite(STARTER_EN,LOW);
   delay(2000);

  }

}

void count_down(int num){

  display.setFont();
  for(int i = 0; i< 12; i++){
    display.setFont(&FreeSans18pt7b);
    display.setTextColor(SSD1306_WHITE);
    display.setCursor(55,43); // (column, row)
    digitalWrite(Speaker_In, digitalRead(STARTER_EN));
    tone(Speaker_In,392,100); 
    display.println(num);
    display.display();
    delay(1000);
    noTone(Speaker_In);
    display.clearDisplay();
    num=num-1;
    display.display();
  }
  
  for (int i=0;i<3;i++){
      display.setFont(&FreeSans18pt7b);
      display.setTextColor(SSD1306_WHITE);
      display.setCursor(55,43); // (column, row)
      display.clearDisplay();
      display.println(num);
      display.display();
      num=num-1;
      
      int count=0;
      while (count<10){
        digitalWrite(Speaker_In, digitalRead(STARTER_EN));
        tone(Speaker_In,392,10);   //392 is the frequency used
        delay(100);
        noTone(Speaker_In);
        count++;
      }
  
  }
  display.clearDisplay();
  display.display();
  digitalWrite(Speaker_In, digitalRead(STARTER_EN));
  tone(Speaker_In,392,2000);   //392 is the frequency used
  delay(1500);
  noTone(Speaker_In);  
}

void print_percent(int percent){
  // Draw bitmap on the screen
  display.drawBitmap(0, 0, image_data, 64, 64, 1);
  display.display();
  display.setFont();
  String sign="%";
  display.setFont(&FreeSans12pt7b);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(70,40); // (column, row)
  display.println(percent+sign);
  //display.setCursor(100,40);
  //display.println('%');
  display.display();
}

int read_capacitor_voltage(){
  int capacitor_voltage = analogRead(CAP_VOLTAGE);  // takes an int value between 0 and 1023 depending on the input
   // max voltage at measuring point is 2.947
  int percent = map(capacitor_voltage, 0, (1023/5)*2.947, 0, 100);
  
  if (percent >= 100){
    digitalWrite(CHARGER_EN, LOW);
    fully_charged(percent);
    
  }
  else{
    digitalWrite(CHARGER_EN,HIGH);
    //last_debounce_time=millis();
    print_percent(percent);
    display.setFont();
    delay(1000);
    display.clearDisplay();
  }
  button_state=LOW;
  return(percent);
}

void fully_charged(int percent){
  display.clearDisplay();
  display.setFont(&FreeSans12pt7b);
  display.setTextColor(SSD1306_WHITE);
  String sign = "%";
  display.setCursor(35,30); // (column, row)
  display.println(percent+sign);
  display.setFont();
  display.setFont(&FreeSans9pt7b);
  display.setCursor(25,55); // (column, row)
  display.println("CHARGE");
  display.display();
}

void connected_to_car_battery(int percent, float voltage){
  display.clearDisplay();
  display.setFont(&FreeSans12pt7b);
  display.setTextColor(SSD1306_WHITE);
  String sign = "%";
  String v1="V :";
  String v2="V";
  display.setCursor(42,30); // (column, row)
  display.println(percent+sign);
  display.setFont();
  display.setFont(&FreeSans9pt7b);
  display.setCursor(25,55); // (column, row)
  display.println(v1+voltage+v2);
  display.display();
  delay(5000);
}

int print_LiPo_voltage(){
  int LiPo_voltage = analogRead(LIPO_VOLTAGE);  // takes an int value between 0 and 1023 depending on the input
   // max voltage at measuring point is 2.947
  int LiPo_percent = map(LiPo_voltage, 0, (1023/5)*2.947, 0, 100);  //check the mapping
  
  if (LiPo_percent >= 100){
    fully_charged(LiPo_percent);
    
  }
  else{
    print_percent(LiPo_percent);
    display.setFont();
    delay(1000);
    display.clearDisplay();
  }
  button_state=LOW;
  return(LiPo_percent);
}

void low_battery(){
  display.clearDisplay();
  display.setFont(&FreeSans9pt7b);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(45,20);
  String s1="LOW";
  String s2="BATTERY!!!";
  display.println(s1);
  display.setCursor(15,40);
  display.println(s2);
  display.display();
  display.clearDisplay();

}
float read_LiPo(){
  int LiPo_voltage = analogRead(LIPO_VOLTAGE);  // takes an int value between 0 and 1023 depending on the input
   // max voltage at measuring point is 2.947
  int LiPo_percent = map(LiPo_voltage, 0, (1023/5)*2.947, 0, 100);  //check the mapping
  return 20;  // change to lipo voltage
}

void loop (){
  
  if ((digitalRead(POWER_PIN)==0) && (read_LiPo()>=18)){
    if ((digitalRead(BUTTON1)== 1 ) && (digitalRead(STARTER_EN)==0)){
      button1();
    }
  }
  if ((digitalRead(POWER_PIN)==0) && (read_LiPo()>=18)){
    if (digitalRead(CHARGER_EN)==1){
      read_capacitor_voltage();   // potentiometer on the left side simulate this
    }
  }
  if ((digitalRead(POWER_PIN)==0) && (read_LiPo()>=18)){
    if ((digitalRead(BUTTON2) == 1) && (digitalRead(CHARGER_EN)==0) && (read_capacitor_voltage()>=95)){
      button2(); 
    }
  }
  else if((digitalRead(POWER_PIN)==0) && (read_LiPo()<=18) && ((digitalRead(BUTTON1)==1) || (digitalRead(BUTTON2)==1))){
     low_battery();
  }
  else if (digitalRead(POWER_PIN)==1){
    print_LiPo_voltage();
  }
}    
#ifndef Room1_h
#define Room1_h
#include "DHT.h"
#include <Adafruit_Sensor.h>
#define DHTPIN 25
#define DHTTYPE DHT11   
DHT dht1(DHTPIN, DHTTYPE);
float h1,t1;
void readweather1(void *parameter){
    for(;;){
        h1 = dht1.readHumidity();
        t1 = dht1.readTemperature();

        if (isnan(h1) || isnan(t1)) {
            Serial.println(F("Failed to read from DHT sensor!"));
            vTaskDelay(500 / portTICK_PERIOD_MS);
            // return;
        }
        Serial.print(F("Humidity1: "));
        Serial.print(h1);
        Serial.print(F("%  Temperature1: "));
        Serial.print(t1);
        Serial.println(F("°C "));
        vTaskDelay(5000 / portTICK_PERIOD_MS);
    }
}

#endif
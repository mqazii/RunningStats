#include <RunningStats.h>

RunningStats stats;

void setup() {
    Serial.begin(115200);
    Serial.println("Starting the RunningStats demo");
}

void loop() {
    // Feed the float value here
    stats.update(1.0);

    Serial.println(String("The standard deviation is " + stats.std()));
    Serial.println(String("The means is " + stats.mean()));

    delay(1000);
}

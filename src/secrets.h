#ifndef SECRETS_H
#define SECRETS_H

// Wi-Fi credentials
#define WIFI_AP_SSID        "WIFI_SSID"
#define WIFI_AP_PASSWORD    "WIFI_PASSWORD"

// HiveMQ Cloud credentials
#define HIVEMQ_BROKER_URI "mqtts://test.mosquitto.org:8883"
#define HIVEMQ_USERNAME ""
#define HIVEMQ_PASSWORD ""

#define MQTT_PUB_TEMP_DHT "esp32/dht/temperature"
#define MQTT_PUB_HUM_DHT "esp32/dht/humidity"

#endif // SECRETS_H
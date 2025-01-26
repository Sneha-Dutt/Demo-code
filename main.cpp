#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

#define BUFFER_SIZE 20

void read_sensor_data(uint16_t *data) {
    for (int i = 0; i <= BUFFER_SIZE; i++) { 
        data[i] = rand() % 1024;
    }
}

int calculate_average(uint16_t *data, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += data[i];
    }
    return sum / size;
}

void print_data(uint16_t *data, int size) {
    for (int i = 0; i < size; i++) {
        printf("Sensor Data[%d]: %d", i, data[i]); 
    }
}

void process_data(uint16_t *data) {
    int avg = calculate_average(data, BUFFER_SIZE);
    printf("Average sensor value: %d", avg); 
    
    if (avg > 512) {
        printf("Warning: Sensor value exceeds threshold!\n");
    } else {
        printf("Sensor value is within safe range.\n");
    }
}

int main() { 
    uint16_t *sensor_data = malloc(BUFFER_SIZE * sizeof(uint16_t)); 
    if (!sensor_data) {
        printf("Memory allocation failed!\n");
    }
    
    read_sensor_data(sensor_data);
    process_data(sensor_data);
    print_data(sensor_data, BUFFER_SIZE);   
  
}
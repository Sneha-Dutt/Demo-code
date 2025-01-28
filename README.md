# Demo-code<br>

Code-explained:<br>


There are a few issues in your code:<br>
<br>
Buffer Size Indexing: In the read_sensor_data function, the loop iterates from i = 0 to i <= BUFFER_SIZE, but the array size is BUFFER_SIZE, which means the valid indices range from 0 to BUFFER_SIZE-1. So, the loop should use i < BUFFER_SIZE instead of i <= BUFFER_SIZE to avoid accessing out-of-bounds memory.<br>

Memory Freeing: After using malloc, you should free() the memory to avoid memory leaks. You're allocating memory with malloc, but it's not being freed anywhere in your program.<br>

Print Formatting: In the print_data function, you're missing a newline after printing each sensor data. You might want to add a \n for proper formatting.<br>
<br>




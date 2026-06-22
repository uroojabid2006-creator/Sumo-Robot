#define in1 11
#define in2 10
#define in3 6
#define in4 5

char command = 'S';        // Default state: stopped
unsigned long lastCommandTime = 0; // Track the time when the last command was received
const unsigned long commandTimeout = 100; // Timeout in milliseconds to stop the car

void setup() {
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  Serial.begin(9600);  // Initialize serial communication
}

void loop() {
  // Check for new command
  if (Serial.available() > 0) {
    command = Serial.read();          // Update the command
    lastCommandTime = millis();       // Update the last command time
  }

  // If no command is received within the timeout, stop the car
  if (millis() - lastCommandTime > commandTimeout) {
    command = 'S'; // Automatically stop the car after timeout
  }

  // Execute the command
  switch (command) {
    case 'F': // Move forward
      forward();
      break;
    case 'B': // Move backward
      back();
      break;
    case 'L': // Turn left
      left();
      break;
    case 'R': // Turn right
      right();
      break;
    case 'S': // Stop
    default:
      stopMotors();
      break;
  }
}

// Move forward
void forward() {
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
}

// Move backward
void back() {
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
}

// Turn left
void left() {
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
}

// Turn right
void right() {

  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
}

// Stop all motors
void stopMotors() {
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
}
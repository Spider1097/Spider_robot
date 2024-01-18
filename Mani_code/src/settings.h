

SoftwareSerial BT(A0, A1);

Servo servo[3][4];

const int servo_pin[3][4] = {{2, 3, 4, 5}, {6, 7, 8, 9}, {10, 11, 12, 13}};

char a;
int forwart_leg_left = 1;
int back_leg_prawa_noga = 1;
int back_leg_return_right = 1;
int forwart_leg_right = 1;
int back_leg_lewa_noga = 1;
int back_leg_return_left = 1;
int licznik_obrotu = 1;
int licznik_krok_back_left = 1;
int pchniecie_back = 1;
int powrot_back_left = 1;
int back_right_przestaw = 1;
int pchniecie_back_right = 1;
int powrot_right_back = 1;

int counter_of_steps = 1;

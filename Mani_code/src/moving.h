
void Przedstaw_nogi_lewej()
{
    for (int i = 0; i <= 30; i++)
    {
        delay(10);

        servo[1][3].write(90 + 2 * i);

        if (i > 10)
        {
            servo[0][3].write(90 - 2 * forwart_leg_left - 5);
            forwart_leg_left++;
        }
    }

    for (int i = 0; i <= 30; i++)
    {
        delay(10);

        servo[1][3].write(150 - 2 * i);
    }
    forwart_leg_left = 1;
}

void realizacja_posuwu_left()
{
    for (int i = 0; i != 30; i++)
    {

        delay(10);

        servo[0][0].write(120 - i);

        if (i > 10)
        {
            servo[0][1].write(60 - 1.5 * back_leg_prawa_noga);
            servo[0][2].write(90 + 2 * back_leg_prawa_noga);
            back_leg_prawa_noga++;
        }
    }
    back_leg_prawa_noga = 1;
}

void realizacja_powrotu_nogi_lewej()
{
    for (int i = 0; i <= 30; i++)
    {
        delay(10);

        servo[1][1].write(90 + 2 * i);

        if (i > 10)
        {
            servo[0][1].write(60 + 1.5 * back_leg_return_right);
            back_leg_return_right++;
        }
    }

    for (int i = 0; i <= 30; i++)
    {
        delay(10);

        servo[1][1].write(150 - 2 * i);
    }
    back_leg_return_right = 1;
}

void Przedstaw_nogi1_prawej()
{

    for (int i = 0; i <= 30; i++)
    {
        delay(10);
        servo[1][0].write(90 - 2 * i);

        if (i > 10)
        {
            servo[0][0].write(90 + 2 * forwart_leg_right + 5);
            forwart_leg_right++;
        }
    }

    for (int i = 0; i <= 30; i++)
    {
        delay(10);

        servo[1][0].write(30 + 2 * i);
    }
    forwart_leg_right = 1;
}

void realizacja_posuwu_right()
{

    for (int i = 0; i != 30; i++)
    {

        delay(10);

        servo[0][3].write(45 + 1.5 * i);

        if (i > 10)
        {
            servo[0][1].write(90 - 1.5 * back_leg_lewa_noga);
            servo[0][2].write(120 + 2 * back_leg_lewa_noga);
            back_leg_lewa_noga++;
        }
    }
    back_leg_lewa_noga = 1;
}

void realizacja_powrotu_nogi_prawej()
{
    for (int i = 0; i <= 30; i++)
    {
        delay(10);

        servo[1][2].write(90 - 2 * i);

        if (i > 10)
        {
            servo[0][2].write(140 - 2.5 * back_leg_return_left);
            back_leg_return_left++;
        }
    }

    for (int i = 0; i <= 30; i++)
    {
        delay(10);

        servo[1][2].write(30 + 2 * i);
    }
    back_leg_return_left = 1;
}

void obrut_prawo()
{

    servo[0][0].write(135);
    delay(100);
    servo[0][1].write(60);
    delay(100);
    servo[0][2].write(90);
    delay(100);
    servo[0][3].write(90);

    delay(200);

    for (int i = 0; i <= 30; i++)
    {
        delay(10);

        servo[1][3].write(90 + 2 * i);

        if (i > 10)
        {
            servo[0][3].write(90 - 3 * licznik_obrotu);
            licznik_obrotu++;
        }
    }

    for (int i = 0; i <= 30; i++)
    {
        delay(10);

        servo[1][3].write(150 - 2 * i);
    }
    licznik_obrotu = 1;

    delay(300);

    servo[0][0].write(70);

    delay(300);

    for (int i = 0; i <= 30; i++)
    {
        delay(10);

        servo[1][1].write(90 + 2 * i);

        if (i > 10)
        {
            servo[0][1].write(60 - 2.5 * licznik_obrotu);
            licznik_obrotu++;
        }
    }

    for (int i = 0; i <= 30; i++)
    {
        delay(10);

        servo[1][1].write(150 - 2 * i);
    }
    licznik_obrotu = 1;

    delay(300);

    servo[0][0].write(135);

    delay(300);

    for (int i = 0; i <= 60; i++)
    {
        delay(15);

        if (i < 51)
        {
            servo[0][1].write(10 + i);
        }

        servo[0][3].write(30 + i);
    }
}

void obrut_lewo()
{

    servo[0][0].write(90);
    delay(100);
    servo[0][1].write(90);
    delay(100);
    servo[0][2].write(125);
    delay(100);
    servo[0][3].write(45);

    delay(200);

    for (int i = 0; i <= 30; i++)
    {
        delay(10);

        servo[1][0].write(90 - 2 * i);

        if (i > 10)
        {
            servo[0][0].write(90 + 4 * licznik_obrotu);
            licznik_obrotu++;
        }
    }

    for (int i = 0; i <= 30; i++)
    {
        delay(10);

        servo[1][0].write(30 + 2 * i);
    }
    licznik_obrotu = 1;

    delay(300);

    servo[0][3].write(105);

    delay(300);

    for (int i = 0; i <= 30; i++)
    {
        delay(15);

        servo[1][2].write(90 - 2 * i);

        if (i > 10)
        {
            servo[0][2].write(125 + 3 * licznik_obrotu - 5);
            licznik_obrotu++;
        }
    }

    for (int i = 0; i <= 30; i++)
    {
        delay(10);

        servo[1][2].write(30 + 2 * i);
    }
    licznik_obrotu = 1;

    delay(300);

    servo[0][3].write(35);

    delay(300);

    servo[1][0].write(99);
    servo[1][2].write(99);

    for (int i = 0; i <= 60; i++)
    {
        delay(15);

        servo[0][2].write(180 - i + 5);

        servo[0][0].write(170 - i - 20);
    }

    servo[1][0].write(90);
    servo[1][2].write(90);
}

void krok_do_tulu_left()
{

    for (int i = 0; i <= 30; i++)
    {
        delay(10);

        servo[1][2].write(90 - 2 * i);

        if (i > 10)
        {
            servo[0][2].write(90 + 2.5 * licznik_krok_back_left);
            licznik_krok_back_left++;
        }
    }

    for (int i = 0; i <= 30; i++)
    {
        delay(10);

        servo[1][2].write(30 + 2 * i);
    }
    licznik_krok_back_left = 1;
}

void krok_do_tylu_pchniecie_left()
{

    servo[0][1].write(60);

    delay(200);

    for (int i = 0; i != 30; i++)
    {

        delay(10);

        servo[0][3].write(90 - 2 * i);

        servo[0][1].write(60 + i);

        servo[0][0].write(120 + 2 * i);

        if (i > 10)
        {
            servo[0][2].write(140 - pchniecie_back);
            pchniecie_back++;
        }
    }
    pchniecie_back = 1;
    delay(200);

    servo[0][3].write(45);
}

void powrut_nogi_back_left()
{
    for (int i = 0; i <= 30; i++)
    {
        delay(10);
        servo[1][0].write(90 - 2 * i);

        if (i > 10)
        {
            servo[0][0].write(180 - 4 * powrot_back_left - 10);
            powrot_back_left++;
        }
    }

    for (int i = 0; i <= 30; i++)
    {
        delay(10);

        servo[1][0].write(30 + 2 * i);
    }
    powrot_back_left = 1;
}

void krok_do_tulu_right()
{

    for (int i = 0; i <= 30; i++)
    {
        delay(10);
        servo[1][1].write(90 + 2 * i);

        if (i > 10)
        {
            servo[0][1].write(90 - 3 * back_right_przestaw);
            back_right_przestaw++;
        }
    }

    for (int i = 0; i <= 30; i++)
    {
        delay(10);

        servo[1][1].write(150 - 2 * i);
    }
    back_right_przestaw = 1;
}

void krok_do_tylu_pchniecie_right()
{

    for (int i = 0; i <= 30; i++)
    {
        delay(10);

        servo[0][1].write(30 + i);

        servo[0][0].write(90 + 1.5 * i);
        if (i > 10)
        {
            servo[0][2].write(120 - 1.5 * pchniecie_back_right);
            pchniecie_back_right++;
        }
    }
    pchniecie_back_right = 1;
}

void powrut_nogi_back_right()
{

    for (int i = 0; i <= 30; i++)
    {
        delay(10);
        servo[1][3].write(90 + 2 * i);

        if (i > 10)
        {
            servo[0][3].write(45 + 2 * powrot_right_back + 5);
            powrot_right_back++;
        }
    }

    for (int i = 0; i <= 30; i++)
    {
        delay(10);

        servo[1][3].write(150 - 2 * i);
    }
    powrot_right_back = 1;
}
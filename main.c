#define GL_SILENCE_DEPRECATION
#include <GLUT/glut.h>

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

GLfloat angle1 = 160.0;
GLfloat angle2 = 200.0;
GLfloat angle3 = 200.0;
float m = 0;
float mount = 0;
float mm = 500;
float flag = 0;
float flag2 = 500;
int F = 0;
float b2_speed = 5;
float ba_posion = 0;
int counter = 0;
float scale_cloud;

void sceenario(void);
void hare_walking(void);
void cloud(void);
void circle(GLdouble rad);
void hare(void);
void hare_sleep(void);

#define PI 3.1416

void drawLeftCircle(void)   // the filled one
{
    //---------- - Head------------ /
        glPushMatrix();
    glColor3f(0, .5, 0);
    glScalef(.5, .7, .5);
    glTranslatef(110 + 350, 245, 1);
    circle(20);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0, 0, 0);
    glScalef(.5, .7, .5);
    glTranslatef(110 + 350, 245, 1);
    circle(5);
    glPopMatrix();
    //---------- - Neck---------- - /
        glPushMatrix();
    glColor3f(0, .5, 0);
    glScalef(.5, .7, .5);
    glTranslatef(210 + 350, 180, 1);
    glRotatef(20, 0, 0, 1);
    glBegin(GL_POLYGON);
    glVertex3f(-70, 90, 1);
    glVertex3f(-70, 50, 1);
    glVertex3f(-50, 50, 1);
    glVertex3f(-50, 90, 1);
    glEnd();
    glPopMatrix();
    // ---------- - Leg1---------- - /
        glPushMatrix();
    glColor3f(0, .7, 0);
    glScalef(.5, .7, .5);
    glTranslatef(230 + 350, 110, 1);

    glBegin(GL_POLYGON);
    glVertex3f(-80, 90, 1);
    glVertex3f(-85, 70, 1);
    glVertex3f(-45, 70, 1);
    glVertex3f(-50, 90, 1);
    glEnd();
    glPopMatrix();
    // ---------- - LEg2---------- - /
        glPushMatrix();
    glColor3f(0, .7, 0);
    glScalef(.5, .7, .5);
    glTranslatef(300 + 350, 110, 1);
    //glRotatef(20,0,0,1);
    glBegin(GL_POLYGON);
    glVertex3f(-80, 90, 1);
    glVertex3f(-85, 70, 1);
    glVertex3f(-45, 70, 1);
    glVertex3f(-50, 90, 1);
    glEnd();
    glPopMatrix();
    // ---------- - Body---------------- - /
        glPushMatrix();
    float radius = 70;
    float twoPI = 2 * PI;

    glColor3f(0, .5, 0);
    glScalef(.5, 0.7, .5);
    glTranslatef(200 + 350, 200, 1);
    //glTranslatef(550,150,1);
    glRotatef(-90, 0, 0, 1);
    glBegin(GL_TRIANGLE_FAN);

    for (float i = PI; i <= twoPI; i += 0.001)
        glVertex2f((sin(i) * radius), (cos(i) * radius));

    glEnd();
    glPopMatrix();
}

void drawstring(float x, float y, float z, const char* string)
{
    const char* ct;
    glRasterPos3f(x, y, z);

    for (ct = string; *ct != '\0'; ct++)
    {
        glColor3f(0.0, 0.0, 0.0);
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, *ct);
    }
}

void myInit(void)
{
    glColor3f(1.0f, 0.0f, 0.0f);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}

void sleeping_body2(void)
{
    glColor3f(0.0, 0.5, 0.1);
    glLineWidth(4.0);
    glPushMatrix();
    glScalef(.15, .15, .15);
    glTranslatef(200 - m * 6.68, 2050, 0);
    glRotatef(70, 0, 0, 1);

    glBegin(GL_LINE_LOOP);
    glVertex2i(40, 10);
    glVertex2i(0, 0);
    glVertex2i(-40, 10);
    glVertex2i(-40, 160);
    glVertex2i(-10, 180);
    glVertex2i(60, 180);
    glVertex2i(20, 100);
    glVertex2i(60, 60);
    glEnd();
    glPopMatrix();

    // ------------------------------Body Starts-------------------------- - /
        glColor3f(0.7, .2, 0);
    glPushMatrix();
    glScalef(.15, .15, .15);
    glTranslatef(120 - m * 6.68, 2400, 0);
    glRotatef(70 + 190, 0, 0, 1);

    glBegin(GL_POLYGON);
    glVertex2i(400, 300);
    glVertex2i(310, 370);
    glVertex2i(280, 400);
    glVertex2i(180, 400);
    glVertex2i(130, 370);
    glVertex2i(130, 340);
    glVertex2i(155, 330);
    glVertex2i(130, 310);
    glVertex2i(130, 290);
    glVertex2i(180, 270);
    glVertex2i(180, 150);
    glVertex2i(250, 150);
    glVertex2i(300, 80);
    glVertex2i(390, 80);
    glVertex2i(430, 120);
    glEnd();
    glPopMatrix();

    // ....................................Leg1 starts........................ /
        glClearColor(1.0, 1.0, 1.0, 1.0);

    // Leg
    glColor3f(0.0, 0.6, 0.0);
    glLineWidth(4.0);
    glPushMatrix();
    glScalef(.15, .15, .15);
    glTranslatef(220 - m * 6.68, 2005, 0);
    glRotatef(70, 0, 0, 1);
    glBegin(GL_LINE_LOOP);
    glVertex2i(40, 10);
    glVertex2i(0, 0);
    glVertex2i(-40, 10);
    glVertex2i(-40, 160);
    glVertex2i(-10, 180);
    glVertex2i(60, 180);
    glVertex2i(20, 100);
    glVertex2i(60, 60);
    glEnd();
    glPopMatrix();

    // .................................Arm starts........................................ /
        glColor3f(.0, 0.9, 0);
    glPushMatrix();
    glScalef(.15, .15, .15);
    glTranslatef(0 - m * 6.68, 2100, 0);
    glRotatef(-50, 0, 0, 1);

    glBegin(GL_POLYGON);
    glVertex2i(220, 270);
    glVertex2i(200, 250);
    glVertex2i(250, 250);
    glVertex2i(130 + angle3 * .5, 200 - angle3 * .5);
    glVertex2i(130 + angle3 * .5, 180 - angle3 * .5);
    glVertex2i(120 + angle3 * .5, 180 - angle3 * .5);
    glEnd();

    glColor3f(0, 0, 0);
    drawstring(300, 550, 0.0, "Z Z");
    drawstring(250, 450, 0.0, "Z Z");
    drawstring(200, 500, 0.0, "Z Z");
    glPopMatrix();
    glutPostRedisplay();
}

void body2(void)
{
    //------------------ - Second Leg angle2---------------------- /
        glColor3f(0.0, 0.6, 0.9);
    glLineWidth(4.0);
    glPushMatrix();
    glScalef(.2, .2, .2);
    glTranslatef(1250 + b2_speed * m + ba_posion, 1150, 0);

    glRotatef(-angle2, 0, 0, 1);
    glBegin(GL_LINE_LOOP);
    glVertex2i(30, 10);
    glVertex2i(0, 0);
    glVertex2i(-30, 10);
    glVertex2i(-30, 160);
    glVertex2i(-10, 180);
    glVertex2i(40, 180);
    glVertex2i(10, 100);
    glVertex2i(40, 50);
    glEnd();
    glPopMatrix();

    // ------------------------------Body Starts-------------------------- - /
        glColor3f(0.7, .2, 0);
    glPushMatrix();
    glScalef(.2, .2, .2);
    glTranslatef(1000 + b2_speed * m + ba_posion, 950, 0);
    glBegin(GL_POLYGON);
    glVertex2i(400, 300);
    glVertex2i(310, 370);
    glVertex2i(280, 400);
    glVertex2i(180, 400);
    glVertex2i(130, 370);
    glVertex2i(130, 340);
    glVertex2i(155, 330);
    glVertex2i(130, 310);
    glVertex2i(130, 290);
    glVertex2i(180, 270);
    glVertex2i(180, 150);
    glVertex2i(250, 150);
    glVertex2i(300, 80);
    glVertex2i(390, 80);
    glVertex2i(430, 120);
    glEnd();
    glPopMatrix();

    // ------------------------------------ - Eye starts-------------------------- - /
        glColor3f(.5, .5, .1);
    glPushMatrix();
    glScalef(.2, 0.2, 0.2);
    glTranslatef(1000 + b2_speed * m + ba_posion, 950, 0);
    glBegin(GL_LINE_LOOP);
    glVertex2i(200, 350);
    glVertex2i(220, 345);
    glVertex2i(230, 360);
    glEnd();
    glPopMatrix();

    // ....................................Leng1 starts........................ /
        glClearColor(1.0, 1.0, 1.0, 1.0);

    // Leg
    glColor3f(0.0, 0.6, 0.0);
    glLineWidth(4.0);
    glPushMatrix();
    glScalef(.2, .2, .2);
    glTranslatef(1250 + m * b2_speed + ba_posion, 1150, 0);
    glRotatef(-angle1, 0, 0, 1);
    glBegin(GL_LINE_LOOP);
    glVertex2i(30, 10);
    glVertex2i(0, 0);
    glVertex2i(-30, 10);
    glVertex2i(-30, 160);
    glVertex2i(-10, 180);
    glVertex2i(40, 180);
    glVertex2i(10, 100);
    glVertex2i(40, 50);
    glEnd();
    glPopMatrix();

    //.................................Arm starts........................................ /
        glColor3f(.0, 0.9, 0);
    glPushMatrix();
    glScalef(.2, .2, .2);
    glTranslatef(1000 + b2_speed * m + ba_posion, 950, 0);

    glBegin(GL_POLYGON);
    glVertex2i(220, 270);
    glVertex2i(200, 250);
    glVertex2i(250, 250);
    glVertex2i(130 + angle3 * .5, 200 - angle3 * .5);
    glVertex2i(130 + angle3 * .5, 180 - angle3 * .5);
    glVertex2i(120 + angle3 * .5, 180 - angle3 * .5);
    glEnd();
    glPopMatrix();
    glutPostRedisplay();
}

void sceenario(void)
{
    /*Road------------------*/
    glColor3f(.7, 0.7, 0.7);
    glPushMatrix();
    glTranslatef(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2i(0, 20);
    glVertex2i(700, 20);
    glVertex2i(700, 300);
    glVertex2i(0, 300);
    glEnd();
    glPopMatrix();

    // --------grass2---------- /
        glColor3f(.5, 1, 0.5);
    glPushMatrix();
    glTranslatef(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2i(0, 20);
    glVertex2i(700, 20);
    glVertex2i(700, 0);
    glVertex2i(0, 0);
    glEnd();
    glPopMatrix();

    //---------- - Border road-------- /
        glColor3f(1, 1, 0.5);
    glPushMatrix();
    glTranslatef(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2i(0, 160);
    glVertex2i(700, 160);
    glVertex2i(700, 155);
    glVertex2i(0, 155);
    glEnd();
    glPopMatrix();

    // ------------ - tree-------------- - /
        glColor3f(.1, 0.2, 0.1);
    glPushMatrix();
    glTranslatef(-m, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2i(72, 300);
    glVertex2i(78, 300);
    glVertex2i(78, 405);
    glVertex2i(72, 405);
    glEnd();

    glColor3f(.1, 0.5, 0.1);
    glBegin(GL_TRIANGLES);
    glVertex2i(75, 450);
    glVertex2i(100, 390);
    glVertex2i(50, 390);

    glVertex2i(75, 420);
    glVertex2i(100, 360);
    glVertex2i(50, 360);

    glVertex2i(75, 400);
    glVertex2i(100, 340);
    glVertex2i(50, 340);
    glEnd();
    glPopMatrix();

    // ------------ - tree2-------------- - /
        glPushMatrix();
    glTranslatef(-m, 0, 0);
    glColor3f(.1, 0.2, 0.1);
    glTranslatef(250, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2i(72, 300);
    glVertex2i(78, 300);
    glVertex2i(78, 405);
    glVertex2i(72, 405);
    glEnd();

    glColor3f(.1, 0.5, 0.1);
    glBegin(GL_POLYGON);
    glVertex2i(75, 450);
    glVertex2i(100, 390);
    glVertex2i(50, 390);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2i(75, 420);
    glVertex2i(100, 360);
    glVertex2i(50, 360);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2i(75, 400);
    glVertex2i(100, 340);
    glVertex2i(50, 340);
    glEnd();
    glPopMatrix();

    // ------------ - tree3-------------- - /
        glPushMatrix();
    glColor3f(.1, 0.2, 0.1);
    glTranslatef(150 - m, 150, 0);
    glScalef(.5, .5, .5);
    glBegin(GL_POLYGON);
    glVertex2i(72, 300);
    glVertex2i(78, 300);
    glVertex2i(78, 405);
    glVertex2i(72, 405);
    glEnd();

    glColor3f(.1, 0.5, 0.1);
    glBegin(GL_POLYGON);
    glVertex2i(75, 450);
    glVertex2i(100, 390);
    glVertex2i(50, 390);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2i(75, 420);
    glVertex2i(100, 360);
    glVertex2i(50, 360);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2i(75, 400);
    glVertex2i(100, 340);
    glVertex2i(50, 340);
    glEnd();

    glPopMatrix();
}

void mountain(void)
{
    // ----------Sky---- /
        glPushMatrix();
    glTranslatef(0, 0, 0);
    glBegin(GL_POLYGON);
    glColor3f(.8, .89, 1);
    glVertex2i(0, 350);

    glColor3f(.8, .89, 1);
    glVertex2i(700, 350);

    glColor3f(.2, .58, 1);
    glVertex2i(700, 500);

    glColor3f(.2, .58, 1);
    glVertex2i(0, 500);
    glEnd();
    glPopMatrix();

    // ----------Grass---- /
        glColor3f(.5, 1, 0.5);
    glPushMatrix();
    glTranslatef(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2i(0, 350);
    glVertex2i(700, 350);
    glVertex2i(700, 300);
    glVertex2i(0, 300);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    int k = 1, i;
    for (i = 0;i < 10;i++) {
        glTranslatef(+mount * k - 600 * i * .5, -10, 0);
        k = k * .05;
        cloud();
        glColor3f(.2, .8, .2);
        glBegin(GL_TRIANGLES);
        glVertex2i(0, 360);
        glVertex2i(50, 400);
        glVertex2i(100, 360);

        glVertex2i(80, 350);
        glVertex2i(200, 450);
        glVertex2i(300, 350);

        glVertex2i(280, 360);
        glVertex2i(360, 430);
        glVertex2i(450, 360);

        glVertex2i(480, 340);
        glVertex2i(560, 430);
        glVertex2i(640, 340);
        glEnd();
    }

    glPopMatrix();
}

void sceenario2(void)
{
    //------------ - tree-------------- - /
        glColor3f(.1, 0.2, 0.1);
    glPushMatrix();
    glTranslatef(-mm, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2i(72, 300);
    glVertex2i(78, 300);
    glVertex2i(78, 405);
    glVertex2i(72, 405);
    glEnd();

    glColor3f(.1, 0.5, .1);
    glBegin(GL_POLYGON);
    glVertex2i(75, 450);
    glVertex2i(100, 390);
    glVertex2i(50, 390);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2i(75, 420);
    glVertex2i(100, 360);
    glVertex2i(50, 360);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2i(75, 400);
    glVertex2i(100, 340);
    glVertex2i(50, 340);
    glEnd();
    glPopMatrix();

    // ------------ - tree2-------------- - /
        glPushMatrix();
    glTranslatef(-mm, 0, 0);
    glColor3f(.1, 0.2, .1);
    glTranslatef(250, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2i(72, 300);
    glVertex2i(78, 300);
    glVertex2i(78, 405);
    glVertex2i(72, 405);
    glEnd();

    glColor3f(.1, 0.5, .1);
    glBegin(GL_POLYGON);
    glVertex2i(75, 450);
    glVertex2i(100, 390);
    glVertex2i(50, 390);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2i(75, 420);
    glVertex2i(100, 360);
    glVertex2i(50, 360);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2i(75, 400);
    glVertex2i(100, 340);
    glVertex2i(50, 340);
    glEnd();
    glPopMatrix();

    //------------ - tree3-------------- - /
        glPushMatrix();
    glColor3f(.1, 0.2, .1);
    glTranslatef(150 - mm, 150, 0);
    glScalef(.5, .5, .5);
    glBegin(GL_POLYGON);
    glVertex2i(72, 300);
    glVertex2i(78, 300);
    glVertex2i(78, 405);
    glVertex2i(72, 405);
    glEnd();

    glColor3f(.1, 0.5, 0.1);
    glBegin(GL_POLYGON);
    glVertex2i(75, 450);
    glVertex2i(100, 390);
    glVertex2i(50, 390);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2i(75, 420);
    glVertex2i(100, 360);
    glVertex2i(50, 360);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2i(75, 400);
    glVertex2i(100, 340);
    glVertex2i(50, 340);
    glEnd();

    glPopMatrix();
}

void my_control_func(void)
{
    counter++;

    // Dialogue phase (counter 50 to 1649)
    // Pause after dialogue: counter 1650 to 1849 (200 ticks buffer)
    // Race active: counter 1850 to 8400 (duration of 6550 ticks, same as before but shifted)
    // Race end: counter > 8400

    // Previous condition: if (counter > 7600 || counter < 1050)
    // New condition based on longer dialogue:
    if (counter > 8400 || counter < 1850)
    {
        // This block executes BEFORE the race (including dialogue) and AFTER the race.
        // Character animation variables are static here.
        m = m;
        mm = mm;
        mount = mount;
    }
    else {
        // Race is active (counter >= 1850 AND counter <= 8400)
        mount += 0.4; // Scenery scroll speed (remains fast)

        // Hare's movement logic (remains fast)
        if (flag > -800) {
            m -= 0.4;
            flag -= 0.4;
        }
        else {
            m = 350;
            flag = 700;
            F++;
        }

        // Tortoise's movement logic (remains fast)
        if (flag2 > -1200) {
            mm -= 0.4;
            flag2 -= 0.4;
        }
        else {
            mm = 350;
            flag2 = 700;
        }
    }
}

void starting(void)
{
    /*sinboard*/
    glColor3f(.7, 0.1, 0.7);
    glPushMatrix();
    glTranslatef(200 - m, 00, 0);
    glBegin(GL_POLYGON);
    glVertex2i(10, 20);
    glVertex2i(40, 20);
    glVertex2i(40, 300);
    glVertex2i(10, 300);
    glEnd();
    glPopMatrix();
}

void victory(void)
{
    /*Victory sinboard*/
    glColor3f(.7, 0.1, 0.7);
    glPushMatrix();
    glTranslatef(300 - m, 25, 0);
    glBegin(GL_POLYGON);
    glVertex2i(10, 100);
    glVertex2i(40, 50);
    glVertex2i(40, 250);
    glVertex2i(10, 300);
    glEnd();
    glPopMatrix();
    /*pole 1*/
    glColor3f(.7, 0.1, 0.7);
    glPushMatrix();
    glTranslatef(300 - m, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2i(10, 360);
    glVertex2i(50, 290);
    glVertex2i(50, 300);
    glVertex2i(10, 370);
    glEnd();
    glPopMatrix();
    /*Pole 2*/
    glColor3f(.7, 0.1, 0.7);
    glPushMatrix();
    glTranslatef(300 - m, -270, 0);
    glBegin(GL_POLYGON);
    glVertex2i(10, 360);
    glVertex2i(50, 290);
    glVertex2i(50, 300);
    glVertex2i(10, 370);
    glEnd();
    glPopMatrix();
    /*Rope1*/
    glColor3f(.7, 0.9, 0.7);
    glPushMatrix();
    glTranslatef(300 - m, 0, 0);
    glBegin(GL_LINE_LOOP);
    glVertex2i(10, 360);
    glVertex2i(10, 325);
    glVertex2i(40, 275);
    glVertex2i(50, 290);
    glEnd();
    glPopMatrix();
    /** Rope 2 **/
    glColor3f(.7, 0.9, 0.7);
    glPushMatrix();
    glTranslatef(300 - m, -260, 0);
    glBegin(GL_LINE_LOOP);
    glVertex2i(10, 360);
    glVertex2i(10, 385);
    glVertex2i(40, 335);
    glVertex2i(50, 290);
    glEnd();
    glPopMatrix();
}

void texts(void)
{
    glColor3f(1.0, 1.0, 1.0);
    
    int text_start_offset = 50; // Dialogue still starts early at counter 50
    int text_duration = 200;   // INCREASED: Each line displayed for 200 counter units (was 100)
    int slot = 0;

    // Initial dialogue (first 8 lines)
    // With text_duration = 200, dialogue now runs from counter 50 to (50 + 8*200 - 1) = 1649.
    if (counter >= (text_start_offset + slot * text_duration) && counter < (text_start_offset + (slot + 1) * text_duration)) drawstring(160, 250, 0.0, "Hi tortoise.."); slot++;
    if (counter >= (text_start_offset + slot * text_duration) && counter < (text_start_offset + (slot + 1) * text_duration)) drawstring(100, 250, 0.0, "You are such a slow catch"); slot++;
    if (counter >= (text_start_offset + slot * text_duration) && counter < (text_start_offset + (slot + 1) * text_duration)) drawstring(150, 165, 0.0, "My dear friend! "); slot++;
    if (counter >= (text_start_offset + slot * text_duration) && counter < (text_start_offset + (slot + 1) * text_duration)) drawstring(140, 165, 0.0, "You are so proud "); slot++;
    if (counter >= (text_start_offset + slot * text_duration) && counter < (text_start_offset + (slot + 1) * text_duration)) drawstring(160, 150, 0.0, "of your speed"); slot++;
    if (counter >= (text_start_offset + slot * text_duration) && counter < (text_start_offset + (slot + 1) * text_duration)) drawstring(180, 250, 0.0, "Ha ha ha"); slot++;
    if (counter >= (text_start_offset + slot * text_duration) && counter < (text_start_offset + (slot + 1) * text_duration)) drawstring(150, 165, 0.0, "Lets have a race"); slot++;
    if (counter >= (text_start_offset + slot * text_duration) && counter < (text_start_offset + (slot + 1) * text_duration)) drawstring(180, 250, 0.0, "Ok, done");
    
    // Moral of the story part - TIMING ADJUSTED
    // Previous moral start: counter > 8100
    // New dialogue ends at 1649. Race starts at 1850. Sped-up race duration is 6550 ticks.
    // New race end = 1850 + 6550 = 8400.
    // New moral start = 8400 + 500 (buffer) = 8900.
    if (counter > 8900) {
        glClear(GL_COLOR_BUFFER_BIT);
        glColor3f(.8, 0.9, 1);
        glPushMatrix();
        glTranslatef(0, 0, 0);
        glBegin(GL_POLYGON);
        glVertex2i(0, 0);
        glVertex2i(700, 0);
        glVertex2i(700, 1350);
        glVertex2i(0, 1350);
        glEnd();
        glPopMatrix();
        glColor3f(0.0, 0.0, 1);

        drawstring(240, 335, 0.0, "++++++++++++++++");
        glColor3f(0.0, 0.0, 1);
        drawstring(240, 350, 0.0, "+  Moral of this story +");
        glColor3f(0.0, 0.0, 1);
        drawstring(240, 365, 0.0, "++++++++++++++++");
        glColor3f(0.0, 0.0, 1);
        drawstring(215, 315, 0.0, "++++++++++++++++++++++++");
        glColor3f(0.0, 0.0, 1);
        drawstring(215, 300, 0.0, "+ Slow and steady wins the race +");
        glColor3f(0.0, 0.0, 1);
        drawstring(215, 285, 0.0, "++++++++++++++++++++++++");
        glColor3f(1.0, 0, 1);
        drawstring(400, 100, 0.0, "Presented by:");
        glColor3f(1.0, 0, 1);
        drawstring(400, 80, 0.0, "Tanishq Shahare and Devdeep Singh");
        glColor3f(1.0, 0, 1);
        drawstring(400, 60, 0.0, "Roll no: 102203141 and 102103516");
        glColor3f(1.0, 0, 1);
        drawstring(400, 40, 0.0, "Dept.: COE");
        glColor3f(1.0, 0, 1);
        drawstring(400, 20, 0.0, "TIET");
    }
}


void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);

    mountain();
    sceenario();
    sceenario2();

    if (F == 0) {
        starting();
        hare();
    }

    if (F == 1) {
        hare_sleep();
    }

    drawLeftCircle();

    if (F == 2) {
        hare();
        victory();
        ba_posion = 1500;
    }

    texts();

    glFlush();
    glutPostRedisplay();
    my_control_func();
}

int i;
void circle(GLdouble rad)
{
    GLint points = 50;
    GLdouble delTheta = (2.0 * PI) / (GLdouble)points;
    GLdouble theta = 0.0;

    glBegin(GL_POLYGON);
    {
        for (i = 0; i <= 50; i++, theta += delTheta)
        {
            glVertex2f(rad * cos(theta), rad * sin(theta));
        }
    }
    glEnd();
}

void cloud(void) {
    float scale_cloud = .3;
    int trns_x = -1000;
    int trns_y = 1150;

    glColor3f(0.8, .9, 1);

    // ---------------- - Cloud 1-------------- - /
        glPushMatrix();
    glScalef(scale_cloud, scale_cloud, scale_cloud);
    glTranslatef(250 + trns_x, 360 + trns_y, 0);
    circle(60);
    glPopMatrix();

    glPushMatrix();
    glScalef(scale_cloud, scale_cloud, scale_cloud);
    glTranslatef(260 + trns_x, 400 + trns_y, 0);
    circle(60);
    glPopMatrix();

    glPushMatrix();
    glScalef(scale_cloud, scale_cloud, scale_cloud);
    glTranslatef(300 + trns_x, 370 + trns_y, 0);
    circle(50);
    glPopMatrix();

    glPushMatrix();
    glScalef(scale_cloud, scale_cloud, scale_cloud);
    glTranslatef(330 + trns_x, 450 + trns_y, 0);
    circle(50);
    glPopMatrix();

    glPushMatrix();
    glScalef(scale_cloud, scale_cloud, scale_cloud);
    glTranslatef(350 + trns_x, 350 + trns_y, 0);
    circle(40);
    glPopMatrix();

    glPushMatrix();
    glScalef(scale_cloud, scale_cloud, scale_cloud);
    glTranslatef(365 + trns_x, 400 + trns_y, 0);
    circle(40);
    glPopMatrix();

    glPushMatrix();
    glScalef(scale_cloud, scale_cloud, scale_cloud);
    glTranslatef(370 + trns_x, 430 + trns_y, 0);
    circle(40);
    glPopMatrix();

    glPushMatrix();
    glScalef(scale_cloud, scale_cloud, scale_cloud);
    glTranslatef(390 + trns_x, 350 + trns_y, 0);
    circle(40);
    glPopMatrix();

    glPushMatrix();
    glScalef(scale_cloud, scale_cloud, scale_cloud);
    glTranslatef(390 + trns_x, 400 + trns_y, 0);
    circle(40);
    glPopMatrix();

    // Additional clouds implementation continued...
    // (Code for Cloud 2 and Cloud 3 would go here)
}

void hare_walking(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.7, 1, 0);

    glPushMatrix();
    glTranslatef(200, 250, 0);
    glScalef(2, 2, 2);
    /*Head-------------*/
    glBegin(GL_POLYGON);
    glVertex2i(-2, 0);
    glVertex2i(-2, 2);
    glVertex2i(0, 4);
    glVertex2i(3, 7);
    glVertex2i(5, 8);
    glVertex2i(7, 8);
    glVertex2i(9, 7);
    glVertex2i(11, 10);
    glVertex2i(13, 12);
    glVertex2i(15, 13);
    glVertex2i(18, 14);
    glVertex2i(20, 14);
    glVertex2i(21, 13);
    glVertex2i(20, 12);
    glVertex2i(14, 8);
    glVertex2i(25, 12);
    glVertex2i(26, 12);
    glVertex2i(27, 11);
    glVertex2i(27, 10);
    glVertex2i(25, 8);
    glVertex2i(22, 5);
    glVertex2i(15, 3);
    glVertex2i(14, 1);
    glVertex2i(7, -2);
    glVertex2i(5, -3);
    glVertex2i(1, -2);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2i(48, -15);
    glVertex2i(50, -5);
    glVertex2i(47, 0);
    glVertex2i(43, 5);
    glVertex2i(40, 7);
    glVertex2i(38, 8);
    glVertex2i(35, 8);
    glVertex2i(30, 7);
    glVertex2i(25, 5);
    glVertex2i(14, 1);
    glVertex2i(7, -2);
    glVertex2i(10, -5);
    glVertex2i(13, -12);
    glVertex2i(15, -14);
    glVertex2i(19, -18);
    glVertex2i(25, -20);
    glVertex2i(40, -20);
    glVertex2i(43, -15);
    glEnd();

    glPopMatrix();
    glFlush();
}

void hare(void)
{
    // ---------- - Head------------ /
        glPushMatrix();
    glColor3f(1, 1, 1);
    glScalef(.5, .7, .5);
    glTranslatef(110 + 360 + 2 * m, 245 + 100, 1);
    circle(20);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.5, 0.5, 0.5);
    glScalef(.5, .7, .5);
    glTranslatef(110 + 350 + 2 * m, 245 + 100, 1);
    circle(5);
    glPopMatrix();
    // ---------- - Neck---------- - /
        glPushMatrix();
    glColor3f(1, 1, 1);
    glScalef(.5, .7, .5);
    glTranslatef(210 + 360 + 2 * m, 180 + 100, 1);
    glRotatef(20, 0, 0, 1);
    glBegin(GL_POLYGON);
    glVertex3f(-70, 90, 1);
    glVertex3f(-70, 50, 1);
    glVertex3f(-50, 50, 1);
    glVertex3f(-50, 90, 1);
    glEnd();
    glPopMatrix();
    // ---------- - Leg1---------- - /
        glPushMatrix();
    glColor3f(1, 1, 1);
    glScalef(.5, .7, .5);
    glTranslatef(230 + 350 + 2 * m, 110 + 100, 1);

    glBegin(GL_POLYGON);
    glVertex3f(-80, 90, 1);
    glVertex3f(-85, 70, 1);
    glVertex3f(-45, 70, 1);
    glVertex3f(-50, 90, 1);
    glEnd();
    glPopMatrix();
    // ---------- - LEg2---------- - /
        glPushMatrix();
    glColor3f(1, 1, 1);
    glScalef(.5, .7, .5);
    glTranslatef(300 + 345 + 2 * m, 110 + 100, 1);
    glBegin(GL_POLYGON);
    glVertex3f(-80, 90, 1);
    glVertex3f(-85, 70, 1);
    glVertex3f(-45, 70, 1);
    glVertex3f(-50, 90, 1);
    glEnd();
    glPopMatrix();

    // ---------- - Body---------------- - /
        glPushMatrix();
    glColor3f(1, 1, 1);
    glScalef(.5, .7, .5);
    glTranslatef(300 + 200 + 2 * m, 120 + 200, 1);
    circle(20);
    glPopMatrix();

    glPushMatrix();
    glColor3f(1, 1, 1);
    glScalef(.5, .7, .5);
    glTranslatef(300 + 270 + 2 * m, 110 + 215, 1);
    circle(35);
    glPopMatrix();

    glPushMatrix();
    glColor3f(1, 1, 1);
    glScalef(.5, .7, .5);
    glTranslatef(300 + 350 + 2 * m, 110 + 100, 1);
    glBegin(GL_POLYGON);
    glVertex3f(-80, 150, 1);
    glVertex3f(-85, 80, 1);
    glVertex3f(-145, 80, 1);
    glVertex3f(-150, 130, 1);
    glEnd();
    glPopMatrix();
    /*tail*/
    glPushMatrix();
    glColor3f(1, 1, 1);
    glScalef(.5, .7, .5);
    glTranslatef(300 + 350 + 2 * m, 110 + 100, 1);
    glBegin(GL_TRIANGLES);
    glVertex2i(-55, 110);
    glVertex2i(-30, 120);
    glVertex2i(-55, 90);
    glEnd();
    glPopMatrix();
    /*ear*/
    glPushMatrix();
    glColor3f(1, 1, 1);
    glScalef(.5, .7, .5);
    glTranslatef(300 + 235 + 2 * m, 110 + 145, 1);
    glBegin(GL_TRIANGLES);
    glVertex2i(-55, 110);
    glVertex2i(-25, 120);
    glVertex2i(-55, 90);

    glVertex2i(-55, 110);
    glVertex2i(-25, 135);
    glVertex2i(-55, 90);
    glEnd();
    glPopMatrix();
}

void hare_sleep(void)
{
    // ---------- - Head------------ /
        glPushMatrix();
    glColor3f(1, 1, 1);
    glScalef(.5, .5, 1);
    glTranslatef(110 + 60 - 2 * m, 640, 1);
    circle(20);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.5, 0.5, 0.5);
    glScalef(.5, .5, 1);
    glTranslatef(110 + 50 - 2 * m, 640, 1);
    circle(2);
    glPopMatrix();
    // ---------- - Body---------------- - /
        glPushMatrix();
    glColor3f(1, 1, 1);
    glScalef(.5, .5, 1);
    glTranslatef(200 - 2 * m, 620, 1);
    circle(20);
    glPopMatrix();

    glPushMatrix();
    glColor3f(1, 1, 1);
    glScalef(.5, .5, 1);
    glTranslatef(260 - 2 * m, 630, 1);
    circle(30);
    glPopMatrix();

    glPushMatrix();
    glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex3f(100 - m, 320, 1);
    glVertex3f(100 - m, 300, 1);
    glVertex3f(130 - m, 300, 1);
    glVertex3f(130 - m, 330, 1);
    glEnd();
    glPopMatrix();
    /*tail*/
    glPushMatrix();
    glColor3f(1, 1, 1);
    glScalef(.5, .5, 1);
    glTranslatef(340 - 2 * m, 220 + 300, 1);
    glBegin(GL_TRIANGLES);
    glVertex2i(-55, 110);
    glVertex2i(-30, 120);
    glVertex2i(-55, 90);
    glEnd();
    glPopMatrix();
    /*ear*/
    glPushMatrix();
    glColor3f(1, 1, 1);
    glScalef(.5, .5, 1);
    glTranslatef(235 - 2 * m, 400 + 145, 1);
    glBegin(GL_TRIANGLES);
    glVertex2i(-55, 110);
    glVertex2i(-25, 120);
    glVertex2i(-55, 90);

    glVertex2i(-55, 110);
    glVertex2i(-25, 135);
    glVertex2i(-55, 90);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glColor3f(0, 0, 0);
    glTranslatef(-m, 0, 1);
    drawstring(55, 320, 0.0, "Z Z");
    drawstring(45, 340, 0.0, "Z Z");
    drawstring(35, 360, 0.0, "Z Z");
    glPopMatrix();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(1350, 700);
    glutCreateWindow("Slow and Steady wins the race");

    glutDisplayFunc(display);
    myInit();
    glutMainLoop();

    return 0;
}

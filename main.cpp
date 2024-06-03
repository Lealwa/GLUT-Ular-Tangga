#include <windows.h>
#include <string>
#include <iostream>
#include <stdlib.h>
#include <time.h>

#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

using namespace std;

bool play = true;
float x_play_p1 = 0.0;
float x_play_p2 = 0.0;

float y_play_p1 = 0.0;
float y_play_p2 = 0.0;

int temp_p1_past = 1;
int temp_p1_future = 1;

int temp_p2_past = 1;
int temp_p2_future = 1;

bool x_play1 = true;
bool x_play2 = true;

float nilai_x1_p1 = -1.75;
float nilai_x2_p1 = -1.65;

float x1_p2 = 0.42;

float nilai_x1_p2 = -1.7;
float nilai_x2_p2 = -1.65;
float nilai_x3_p2 = -1.75;

bool dimensi3 = false;

int krotated = 1;
int irotated = 1;
int jrotated = 1;
int lrotated = 1;

float x1_observer = -1.6;
float x2_observer = -1.5;

float y1_observer = -1.6;
float y2_observer = -1.76;


void display3D() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glPointSize(4);
    glLoadIdentity();
    glEnable(GL_DEPTH_TEST);

    float color1[] = {0.0, 0.0, 0.0, 0.5};
    float color2[] = {0.0, 0.0, 1.0, 0.5};
    float color3[] = {0.5, 0.5, 0.5};
    float color4[] = {1.0, 0.0, 0.0};
    float color5[] = {0.0, 1.0, 0.0};
    float color6[] = {0.5, 0.0, 0.5};
    float color7[] = {1.0, 0.647, 0.0};
    float color8[] = {0.647, 0.164, 0.164};

    //-2 = 1
    // 2 = 0



    glRotated(-(krotated), -1, 0, 0);
    glRotated((irotated), 1, 0, 0);
    glRotated(-(jrotated), 0, -1, 0);
    glRotated((lrotated), 0, 1, 0);

    glClearColor(0.0, 1.0, 0.0, 0.0);


    //angka 8

    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.72,1.78, 0.0);
    glVertex3f(1.78,1.78, 0.0);
    glVertex3f(1.78,1.76, 0.0);
    glVertex3f(1.72,1.76, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.72,1.78, -0.1);
    glVertex3f(1.78,1.78, -0.1);
    glVertex3f(1.78,1.76, -0.1);
    glVertex3f(1.72,1.76, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.72,1.78, 0.0);
    glVertex3f(1.72,1.78, -0.1);
    glVertex3f(1.72,1.76, -0.1);
    glVertex3f(1.72,1.76, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.78,1.78, 0.0);
    glVertex3f(1.78,1.78, -0.1);
    glVertex3f(1.78,1.76, -0.1);
    glVertex3f(1.78,1.76, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.72,1.78, 0.0);
    glVertex3f(1.78,1.78, 0.0);
    glVertex3f(1.72,1.78, -0.1);
    glVertex3f(1.78,1.78, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.78,1.76, 0.0);
    glVertex3f(1.72,1.76, 0.0);
    glVertex3f(1.78,1.76, -0.1);
    glVertex3f(1.72,1.76, -0.1);
    glEnd();



    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.72,1.78, 0.0);
    glVertex3f(1.74,1.78, 0.0);
    glVertex3f(1.74,1.67, 0.0);
    glVertex3f(1.72,1.67, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.72,1.78, -0.1);
    glVertex3f(1.74,1.78, -0.1);
    glVertex3f(1.74,1.67, -0.1);
    glVertex3f(1.72,1.67, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.72,1.78, 0.0);
    glVertex3f(1.72,1.78, -0.1);
    glVertex3f(1.72,1.67, -0.1);
    glVertex3f(1.72,1.67, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.74,1.78, 0.0);
    glVertex3f(1.74,1.78, -0.1);
    glVertex3f(1.74,1.67, -0.1);
    glVertex3f(1.74,1.67, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.72,1.78, 0.0);
    glVertex3f(1.74,1.78, 0.0);
    glVertex3f(1.72,1.78, -0.1);
    glVertex3f(1.74,1.78, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.74,1.67, 0.0);
    glVertex3f(1.72,1.67, 0.0);
    glVertex3f(1.74,1.67, -0.1);
    glVertex3f(1.72,1.67, -0.1);
    glEnd();



    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.72,1.73, 0.0);
    glVertex3f(1.78,1.73, 0.0);
    glVertex3f(1.78,1.71, 0.0);
    glVertex3f(1.72,1.71, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.72,1.73, -0.1);
    glVertex3f(1.78,1.73, -0.1);
    glVertex3f(1.78,1.71, -0.1);
    glVertex3f(1.72,1.71, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.72,1.73, 0.0);
    glVertex3f(1.72,1.73, -0.1);
    glVertex3f(1.72,1.71, -0.1);
    glVertex3f(1.72,1.71, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.78,1.73, 0.0);
    glVertex3f(1.78,1.73, -0.1);
    glVertex3f(1.78,1.71, -0.1);
    glVertex3f(1.78,1.71, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.72,1.73, 0.0);
    glVertex3f(1.78,1.73, 0.0);
    glVertex3f(1.72,1.73, -0.1);
    glVertex3f(1.78,1.73, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.78,1.71, 0.0);
    glVertex3f(1.72,1.71, 0.0);
    glVertex3f(1.78,1.71, -0.1);
    glVertex3f(1.72,1.71, -0.1);
    glEnd();



    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.78,1.78, 0.0);
    glVertex3f(1.76,1.78, 0.0);
    glVertex3f(1.76,1.67, 0.0);
    glVertex3f(1.78,1.67, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.78,1.78, -0.1);
    glVertex3f(1.76,1.78, -0.1);
    glVertex3f(1.76,1.67, -0.1);
    glVertex3f(1.78,1.67, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.78,1.78, 0.0);
    glVertex3f(1.78,1.78, -0.1);
    glVertex3f(1.78,1.67, -0.1);
    glVertex3f(1.78,1.67, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.76,1.78, 0.0);
    glVertex3f(1.76,1.78, -0.1);
    glVertex3f(1.76,1.67, -0.1);
    glVertex3f(1.76,1.67, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.78,1.78, 0.0);
    glVertex3f(1.76,1.78, 0.0);
    glVertex3f(1.78,1.78, -0.1);
    glVertex3f(1.76,1.78, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.76,1.67, 0.0);
    glVertex3f(1.78,1.67, 0.0);
    glVertex3f(1.76,1.67, -0.1);
    glVertex3f(1.78,1.67, -0.1);
    glEnd();


    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.72,1.69, 0.0);
    glVertex3f(1.78,1.69, 0.0);
    glVertex3f(1.78,1.67, 0.0);
    glVertex3f(1.72,1.67, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.72,1.69, -0.1);
    glVertex3f(1.78,1.69, -0.1);
    glVertex3f(1.78,1.67, -0.1);
    glVertex3f(1.72,1.67, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.72,1.69, 0.0);
    glVertex3f(1.72,1.69, -0.1);
    glVertex3f(1.72,1.67, -0.1);
    glVertex3f(1.72,1.67, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.78,1.69, 0.0);
    glVertex3f(1.78,1.69, -0.1);
    glVertex3f(1.78,1.67, -0.1);
    glVertex3f(1.78,1.67, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.72,1.69, 0.0);
    glVertex3f(1.78,1.69, 0.0);
    glVertex3f(1.72,1.69, -0.1);
    glVertex3f(1.78,1.69, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.78,1.67, 0.0);
    glVertex3f(1.72,1.67, 0.0);
    glVertex3f(1.78,1.67, -0.1);
    glVertex3f(1.72,1.67, -0.1);
    glEnd();


    //akhir 8


    //angka 6

    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.34,1.78, 0.0);
    glVertex3f(-0.28,1.78, 0.0);
    glVertex3f(-0.28,1.76, 0.0);
    glVertex3f(-0.34,1.76, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.34,1.78, -0.1);
    glVertex3f(-0.28,1.78, -0.1);
    glVertex3f(-0.28,1.76, -0.1);
    glVertex3f(-0.34,1.76, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.34,1.78, 0.0);
    glVertex3f(-0.34,1.78, -0.1);
    glVertex3f(-0.34,1.76, -0.1);
    glVertex3f(-0.34,1.76, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.28,1.78, 0.0);
    glVertex3f(-0.28,1.78, -0.1);
    glVertex3f(-0.28,1.76, -0.1);
    glVertex3f(-0.28,1.76, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.34,1.78, 0.0);
    glVertex3f(-0.28,1.78, 0.0);
    glVertex3f(-0.34,1.78, -0.1);
    glVertex3f(-0.28,1.78, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.28,1.76, 0.0);
    glVertex3f(-0.34,1.76, 0.0);
    glVertex3f(-0.28,1.76, -0.1);
    glVertex3f(-0.34,1.76, -0.1);
    glEnd();




    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.34,1.78, 0.0);
    glVertex3f(-0.32,1.78, 0.0);
    glVertex3f(-0.32,1.67, 0.0);
    glVertex3f(-0.34,1.67, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.34,1.78, -0.1);
    glVertex3f(-0.32,1.78, -0.1);
    glVertex3f(-0.32,1.67, -0.1);
    glVertex3f(-0.34,1.67, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.34,1.78, 0.0);
    glVertex3f(-0.34,1.78, -0.1);
    glVertex3f(-0.34,1.67, -0.1);
    glVertex3f(-0.34,1.67, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.32,1.78, 0.0);
    glVertex3f(-0.32,1.78, -0.1);
    glVertex3f(-0.32,1.67, -0.1);
    glVertex3f(-0.32,1.67, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.34,1.78, 0.0);
    glVertex3f(-0.32,1.78, 0.0);
    glVertex3f(-0.34,1.78, -0.1);
    glVertex3f(-0.32,1.78, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.32,1.67, 0.0);
    glVertex3f(-0.34,1.67, 0.0);
    glVertex3f(-0.32,1.67, -0.1);
    glVertex3f(-0.34,1.67, -0.1);
    glEnd();





    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.34,1.73, 0.0);
    glVertex3f(-0.28,1.73, 0.0);
    glVertex3f(-0.28,1.71, 0.0);
    glVertex3f(-0.34,1.71, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.34,1.73, -0.1);
    glVertex3f(-0.28,1.73, -0.1);
    glVertex3f(-0.28,1.71, -0.1);
    glVertex3f(-0.34,1.71, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.34,1.73, 0.0);
    glVertex3f(-0.34,1.73, -0.1);
    glVertex3f(-0.34,1.71, -0.1);
    glVertex3f(-0.34,1.71, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.28,1.73, 0.0);
    glVertex3f(-0.28,1.73, -0.1);
    glVertex3f(-0.28,1.71, -0.1);
    glVertex3f(-0.28,1.71, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.34,1.73, 0.0);
    glVertex3f(-0.28,1.73, 0.0);
    glVertex3f(-0.34,1.73, -0.1);
    glVertex3f(-0.28,1.73, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.28,1.71, 0.0);
    glVertex3f(-0.34,1.71, 0.0);
    glVertex3f(-0.28,1.71, -0.1);
    glVertex3f(-0.34,1.71, -0.1);
    glEnd();


    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.28,1.73, 0.0);
    glVertex3f(-0.3,1.73, 0.0);
    glVertex3f(-0.3,1.67, 0.0);
    glVertex3f(-0.28,1.67, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.28,1.73, -0.1);
    glVertex3f(-0.3,1.73, -0.1);
    glVertex3f(-0.3,1.67, -0.1);
    glVertex3f(-0.28,1.67, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.28,1.73, 0.0);
    glVertex3f(-0.28,1.73, -0.1);
    glVertex3f(-0.28,1.67, -0.1);
    glVertex3f(-0.28,1.67, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.3,1.73, 0.0);
    glVertex3f(-0.3,1.73, -0.1);
    glVertex3f(-0.3,1.67, -0.1);
    glVertex3f(-0.3,1.67, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.28,1.73, 0.0);
    glVertex3f(-0.3,1.73, 0.0);
    glVertex3f(-0.28,1.73, -0.1);
    glVertex3f(-0.3,1.73, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.3,1.67, 0.0);
    glVertex3f(-0.28,1.67, 0.0);
    glVertex3f(-0.3,1.67, -0.1);
    glVertex3f(-0.28,1.67, -0.1);
    glEnd();



    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.34,1.69, 0.0);
    glVertex3f(-0.28,1.69, 0.0);
    glVertex3f(-0.28,1.67, 0.0);
    glVertex3f(-0.34,1.67, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.34,1.69, -0.1);
    glVertex3f(-0.28,1.69, -0.1);
    glVertex3f(-0.28,1.67, -0.1);
    glVertex3f(-0.34,1.67, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.34,1.69, 0.0);
    glVertex3f(-0.34,1.69, -0.1);
    glVertex3f(-0.34,1.67, -0.1);
    glVertex3f(-0.34,1.67, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.28,1.69, 0.0);
    glVertex3f(-0.28,1.69, -0.1);
    glVertex3f(-0.28,1.67, -0.1);
    glVertex3f(-0.28,1.67, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.34,1.69, 0.0);
    glVertex3f(-0.28,1.69, 0.0);
    glVertex3f(-0.34,1.69, -0.1);
    glVertex3f(-0.28,1.69, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.28,1.67, 0.0);
    glVertex3f(-0.34,1.67, 0.0);
    glVertex3f(-0.28,1.67, -0.1);
    glVertex3f(-0.34,1.67, -0.1);
    glEnd();



    //akhir 6

    //angka 6


    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.34,1.78, 0.0);
    glVertex3f(-0.28,1.78, 0.0);
    glVertex3f(-0.28,1.76, 0.0);
    glVertex3f(-0.34,1.76, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.34,1.78, -0.1);
    glVertex3f(-0.28,1.78, -0.1);
    glVertex3f(-0.28,1.76, -0.1);
    glVertex3f(-0.34,1.76, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.34,1.78, 0.0);
    glVertex3f(-0.34,1.78, -0.1);
    glVertex3f(-0.34,1.76, -0.1);
    glVertex3f(-0.34,1.76, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.28,1.78, 0.0);
    glVertex3f(-0.28,1.78, -0.1);
    glVertex3f(-0.28,1.76, -0.1);
    glVertex3f(-0.28,1.76, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.34,1.78, 0.0);
    glVertex3f(-0.28,1.78, 0.0);
    glVertex3f(-0.34,1.78, -0.1);
    glVertex3f(-0.28,1.78, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.28,1.76, 0.0);
    glVertex3f(-0.34,1.76, 0.0);
    glVertex3f(-0.28,1.76, -0.1);
    glVertex3f(-0.34,1.76, -0.1);
    glEnd();




    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.34,1.78, 0.0);
    glVertex3f(-0.32,1.78, 0.0);
    glVertex3f(-0.32,1.67, 0.0);
    glVertex3f(-0.34,1.67, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.34,1.78, -0.1);
    glVertex3f(-0.32,1.78, -0.1);
    glVertex3f(-0.32,1.67, -0.1);
    glVertex3f(-0.34,1.67, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.34,1.78, 0.0);
    glVertex3f(-0.34,1.78, -0.1);
    glVertex3f(-0.34,1.67, -0.1);
    glVertex3f(-0.34,1.67, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.32,1.78, 0.0);
    glVertex3f(-0.32,1.78, -0.1);
    glVertex3f(-0.32,1.67, -0.1);
    glVertex3f(-0.32,1.67, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.34,1.78, 0.0);
    glVertex3f(-0.32,1.78, 0.0);
    glVertex3f(-0.34,1.78, -0.1);
    glVertex3f(-0.32,1.78, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.32,1.67, 0.0);
    glVertex3f(-0.34,1.67, 0.0);
    glVertex3f(-0.32,1.67, -0.1);
    glVertex3f(-0.34,1.67, -0.1);
    glEnd();




    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.34,1.73, 0.0);
    glVertex3f(-0.28,1.73, 0.0);
    glVertex3f(-0.28,1.71, 0.0);
    glVertex3f(-0.34,1.71, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.34,1.73, -0.1);
    glVertex3f(-0.28,1.73, -0.1);
    glVertex3f(-0.28,1.71, -0.1);
    glVertex3f(-0.34,1.71, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.34,1.73, 0.0);
    glVertex3f(-0.34,1.73, -0.1);
    glVertex3f(-0.34,1.71, -0.1);
    glVertex3f(-0.34,1.71, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.28,1.73, 0.0);
    glVertex3f(-0.28,1.73, -0.1);
    glVertex3f(-0.28,1.71, -0.1);
    glVertex3f(-0.28,1.71, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.34,1.73, 0.0);
    glVertex3f(-0.28,1.73, 0.0);
    glVertex3f(-0.34,1.73, -0.1);
    glVertex3f(-0.28,1.73, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.28,1.71, 0.0);
    glVertex3f(-0.34,1.71, 0.0);
    glVertex3f(-0.28,1.71, -0.1);
    glVertex3f(-0.34,1.71, -0.1);
    glEnd();




    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.28,1.73, 0.0);
    glVertex3f(-0.3,1.73, 0.0);
    glVertex3f(-0.3,1.67, 0.0);
    glVertex3f(-0.28,1.67, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.28,1.73, -0.1);
    glVertex3f(-0.3,1.73, -0.1);
    glVertex3f(-0.3,1.67, -0.1);
    glVertex3f(-0.28,1.67, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.28,1.73, 0.0);
    glVertex3f(-0.28,1.73, -0.1);
    glVertex3f(-0.28,1.67, -0.1);
    glVertex3f(-0.28,1.67, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.3,1.73, 0.0);
    glVertex3f(-0.3,1.73, -0.1);
    glVertex3f(-0.3,1.67, -0.1);
    glVertex3f(-0.3,1.67, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.28,1.73, 0.0);
    glVertex3f(-0.3,1.73, 0.0);
    glVertex3f(-0.28,1.73, -0.1);
    glVertex3f(-0.3,1.73, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.3,1.67, 0.0);
    glVertex3f(-0.28,1.67, 0.0);
    glVertex3f(-0.3,1.67, -0.1);
    glVertex3f(-0.28,1.67, -0.1);
    glEnd();




    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.34,1.69, 0.0);
    glVertex3f(-0.28,1.69, 0.0);
    glVertex3f(-0.28,1.67, 0.0);
    glVertex3f(-0.34,1.67, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.34,1.69, -0.1);
    glVertex3f(-0.28,1.69, -0.1);
    glVertex3f(-0.28,1.67, -0.1);
    glVertex3f(-0.34,1.67, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.34,1.69, 0.0);
    glVertex3f(-0.34,1.69, -0.1);
    glVertex3f(-0.34,1.67, -0.1);
    glVertex3f(-0.34,1.67, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.28,1.69, 0.0);
    glVertex3f(-0.28,1.69, -0.1);
    glVertex3f(-0.28,1.67, -0.1);
    glVertex3f(-0.34,1.67, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.34,1.69, 0.0);
    glVertex3f(-0.28,1.69, 0.0);
    glVertex3f(-0.34,1.69, -0.1);
    glVertex3f(-0.28,1.69, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.28,1.67, 0.0);
    glVertex3f(-0.34,1.67, 0.0);
    glVertex3f(-0.28,1.67, -0.1);
    glVertex3f(-0.34,1.67, -0.1);
    glEnd();



    //akhir 6

    //angka 6

    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.34,1.78, 0.0);
    glVertex3f(-0.28,1.78, 0.0);
    glVertex3f(-0.28,1.76, 0.0);
    glVertex3f(-0.34,1.76, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.34,1.78, -0.1);
    glVertex3f(-0.28,1.78, -0.1);
    glVertex3f(-0.28,1.76, -0.1);
    glVertex3f(-0.34,1.76, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.34,1.78, 0.0);
    glVertex3f(-0.34,1.78, -0.1);
    glVertex3f(-0.34,1.76, -0.1);
    glVertex3f(-0.34,1.76, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.28,1.78, 0.0);
    glVertex3f(-0.28,1.78, -0.1);
    glVertex3f(-0.28,1.76, -0.1);
    glVertex3f(-0.28,1.76, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.34,1.78, 0.0);
    glVertex3f(-0.28,1.78, 0.0);
    glVertex3f(-0.34,1.78, -0.1);
    glVertex3f(-0.28,1.78, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.28,1.76, 0.0);
    glVertex3f(-0.34,1.76, 0.0);
    glVertex3f(-0.28,1.76, -0.1);
    glVertex3f(-0.34,1.76, -0.1);
    glEnd();





    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.34,1.78, 0.0);
    glVertex3f(-0.32,1.78, 0.0);
    glVertex3f(-0.32,1.67, 0.0);
    glVertex3f(-0.34,1.67, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.34,1.78, -0.1);
    glVertex3f(-0.32,1.78, -0.1);
    glVertex3f(-0.32,1.67, -0.1);
    glVertex3f(-0.34,1.67, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.34,1.78, 0.0);
    glVertex3f(-0.34,1.78, -0.1);
    glVertex3f(-0.34,1.67, -0.1);
    glVertex3f(-0.34,1.67, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.32,1.78, 0.0);
    glVertex3f(-0.32,1.78, -0.1);
    glVertex3f(-0.32,1.67, -0.1);
    glVertex3f(-0.32,1.67, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.34,1.78, 0.0);
    glVertex3f(-0.32,1.78, 0.0);
    glVertex3f(-0.34,1.78, -0.1);
    glVertex3f(-0.32,1.78, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.32,1.67, 0.0);
    glVertex3f(-0.34,1.67, 0.0);
    glVertex3f(-0.32,1.67, -0.1);
    glVertex3f(-0.34,1.67, -0.1);
    glEnd();




    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.34,1.73, 0.0);
    glVertex3f(-0.28,1.73, 0.0);
    glVertex3f(-0.28,1.71, 0.0);
    glVertex3f(-0.34,1.71, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.34,1.73, -0.1);
    glVertex3f(-0.28,1.73, -0.1);
    glVertex3f(-0.28,1.71, -0.1);
    glVertex3f(-0.34,1.71, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.34,1.73, 0.0);
    glVertex3f(-0.34,1.73, -0.1);
    glVertex3f(-0.34,1.71, -0.1);
    glVertex3f(-0.34,1.71, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.28,1.73, 0.0);
    glVertex3f(-0.28,1.73, -0.1);
    glVertex3f(-0.28,1.71, -0.1);
    glVertex3f(-0.28,1.71, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.34,1.73, 0.0);
    glVertex3f(-0.28,1.73, 0.0);
    glVertex3f(-0.34,1.73, -0.1);
    glVertex3f(-0.28,1.73, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.28,1.71, 0.0);
    glVertex3f(-0.34,1.71, 0.0);
    glVertex3f(-0.28,1.71, -0.1);
    glVertex3f(-0.34,1.71, -0.1);
    glEnd();



    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.28,1.73, 0.0);
    glVertex3f(-0.3,1.73, 0.0);
    glVertex3f(-0.3,1.67, 0.0);
    glVertex3f(-0.28,1.67, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.28,1.73, -0.1);
    glVertex3f(-0.3,1.73, -0.1);
    glVertex3f(-0.3,1.67, -0.1);
    glVertex3f(-0.28,1.67, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.28,1.73, 0.0);
    glVertex3f(-0.28,1.73, -0.1);
    glVertex3f(-0.28,1.67, -0.1);
    glVertex3f(-0.28,1.67, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.3,1.73, 0.0);
    glVertex3f(-0.3,1.73, -0.1);
    glVertex3f(-0.3,1.67, -0.1);
    glVertex3f(-0.3,1.67, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.28,1.73, 0.0);
    glVertex3f(-0.3,1.73, 0.0);
    glVertex3f(-0.28,1.73, -0.1);
    glVertex3f(-0.3,1.73, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.3,1.67, 0.0);
    glVertex3f(-0.28,1.67, 0.0);
    glVertex3f(-0.3,1.67, -0.1);
    glVertex3f(-0.28,1.67, -0.1);
    glEnd();





    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.34,1.69, 0.0);
    glVertex3f(-0.28,1.69, 0.0);
    glVertex3f(-0.28,1.67, 0.0);
    glVertex3f(-0.34,1.67, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.34,1.69, -0.1);
    glVertex3f(-0.28,1.69, -0.1);
    glVertex3f(-0.28,1.67, -0.1);
    glVertex3f(-0.34,1.67, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.34,1.69, 0.0);
    glVertex3f(-0.34,1.69, -0.1);
    glVertex3f(-0.34,1.67, -0.1);
    glVertex3f(-0.34,1.67, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.28,1.69, 0.0);
    glVertex3f(-0.28,1.69, -0.1);
    glVertex3f(-0.28,1.67, -0.1);
    glVertex3f(-0.28,1.67, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.34,1.69, 0.0);
    glVertex3f(-0.28,1.69, 0.0);
    glVertex3f(-0.34,1.69, -0.1);
    glVertex3f(-0.28,1.69, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.28,1.67, 0.0);
    glVertex3f(-0.34,1.67, 0.0);
    glVertex3f(-0.28,1.67, -0.1);
    glVertex3f(-0.34,1.67, -0.1);
    glEnd();



    //akhir 6

    //angka 8


    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.48,1.78, 0.0);
    glVertex3f(0.54,1.78, 0.0);
    glVertex3f(0.54,1.76, 0.0);
    glVertex3f(0.48,1.76, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.48,1.78, -0.1);
    glVertex3f(0.54,1.78, -0.1);
    glVertex3f(0.54,1.76, -0.1);
    glVertex3f(0.48,1.76, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.48,1.78, 0.0);
    glVertex3f(0.48,1.78, -0.1);
    glVertex3f(0.48,1.76, -0.1);
    glVertex3f(0.48,1.76, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.54,1.78, 0.0);
    glVertex3f(0.54,1.78, -0.1);
    glVertex3f(0.54,1.76, -0.1);
    glVertex3f(0.54,1.76, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.48,1.78, 0.0);
    glVertex3f(0.54,1.78, 0.0);
    glVertex3f(0.48,1.78, -0.1);
    glVertex3f(0.54,1.78, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.54,1.76, 0.0);
    glVertex3f(0.48,1.76, 0.0);
    glVertex3f(0.54,1.76, -0.1);
    glVertex3f(0.48,1.76, -0.1);
    glEnd();




    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.48,1.78, 0.0);
    glVertex3f(0.5,1.78, 0.0);
    glVertex3f(0.5,1.67, 0.0);
    glVertex3f(0.48,1.67, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.48,1.78, -0.1);
    glVertex3f(0.5,1.78, -0.1);
    glVertex3f(0.5,1.67, -0.1);
    glVertex3f(0.48,1.67, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.48,1.78, 0.0);
    glVertex3f(0.48,1.78, -0.1);
    glVertex3f(0.48,1.67, -0.1);
    glVertex3f(0.48,1.67, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.5,1.78, 0.0);
    glVertex3f(0.5,1.78, -0.1);
    glVertex3f(0.5,1.67, -0.1);
    glVertex3f(0.5,1.67, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.48,1.78, 0.0);
    glVertex3f(0.5,1.78, 0.0);
    glVertex3f(0.48,1.78, -0.1);
    glVertex3f(0.5,1.78, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.5,1.67, 0.0);
    glVertex3f(0.48,1.67, 0.0);
    glVertex3f(0.5,1.67, -0.1);
    glVertex3f(0.48,1.67, -0.1);
    glEnd();




    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.48,1.73, 0.0);
    glVertex3f(0.54,1.73, 0.0);
    glVertex3f(0.54,1.71, 0.0);
    glVertex3f(0.48,1.71, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.48,1.73, -0.1);
    glVertex3f(0.54,1.73, -0.1);
    glVertex3f(0.54,1.71, -0.1);
    glVertex3f(0.48,1.71, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.48,1.73, 0.0);
    glVertex3f(0.48,1.73, -0.1);
    glVertex3f(0.48,1.71, -0.1);
    glVertex3f(0.48,1.71, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.54,1.73, 0.0);
    glVertex3f(0.54,1.73, -0.1);
    glVertex3f(0.54,1.71, -0.1);
    glVertex3f(0.54,1.71, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.48,1.73, 0.0);
    glVertex3f(0.54,1.73, 0.0);
    glVertex3f(0.48,1.73, -0.1);
    glVertex3f(0.54,1.73, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.54,1.71, 0.0);
    glVertex3f(0.48,1.71, 0.0);
    glVertex3f(0.54,1.71, -0.1);
    glVertex3f(0.48,1.71, -0.1);
    glEnd();



    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.54,1.78, 0.0);
    glVertex3f(0.52,1.78, 0.0);
    glVertex3f(0.52,1.67, 0.0);
    glVertex3f(0.54,1.67, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.54,1.78, -0.1);
    glVertex3f(0.52,1.78, -0.1);
    glVertex3f(0.52,1.67, -0.1);
    glVertex3f(0.54,1.67, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.54,1.78, 0.0);
    glVertex3f(0.54,1.78, -0.1);
    glVertex3f(0.54,1.67, -0.1);
    glVertex3f(0.54,1.67, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.52,1.78, 0.0);
    glVertex3f(0.52,1.78, -0.1);
    glVertex3f(0.52,1.67, -0.1);
    glVertex3f(0.52,1.67, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.54,1.78, 0.0);
    glVertex3f(0.52,1.78, 0.0);
    glVertex3f(0.54,1.78, -0.1);
    glVertex3f(0.52,1.78, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.52,1.67, 0.0);
    glVertex3f(0.54,1.67, 0.0);
    glVertex3f(0.52,1.67, -0.1);
    glVertex3f(0.54,1.67, -0.1);
    glEnd();




    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.48,1.69, 0.0);
    glVertex3f(0.54,1.69, 0.0);
    glVertex3f(0.54,1.67, 0.0);
    glVertex3f(0.48,1.67, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.48,1.69, -0.1);
    glVertex3f(0.54,1.69, -0.1);
    glVertex3f(0.54,1.67, -0.1);
    glVertex3f(0.48,1.67, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.48,1.69, 0.0);
    glVertex3f(0.48,1.69, -0.1);
    glVertex3f(0.48,1.67, -0.1);
    glVertex3f(0.48,1.67, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.54,1.69, 0.0);
    glVertex3f(0.54,1.69, -0.1);
    glVertex3f(0.54,1.67, -0.1);
    glVertex3f(0.54,1.67, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.48,1.69, 0.0);
    glVertex3f(0.54,1.69, 0.0);
    glVertex3f(0.48,1.69, -0.1);
    glVertex3f(0.54,1.69, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.48,1.69, 0.0);
    glVertex3f(0.54,1.69, 0.0);
    glVertex3f(0.54,1.67, -0.1);
    glVertex3f(0.48,1.67, -0.1);
    glEnd();

    //akhir 8



    //angka 8


    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.3,1.78, 0.0);
    glVertex3f(1.36,1.78, 0.0);
    glVertex3f(1.36,1.76, 0.0);
    glVertex3f(1.3,1.76, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.3,1.78, -0.1);
    glVertex3f(1.36,1.78, -0.1);
    glVertex3f(1.36,1.76, -0.1);
    glVertex3f(1.3,1.76, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.3,1.78, 0.0);
    glVertex3f(1.3,1.78, -0.1);
    glVertex3f(1.3,1.76, -0.1);
    glVertex3f(1.3,1.76, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.36,1.78, 0.0);
    glVertex3f(1.36,1.78, -0.1);
    glVertex3f(1.36,1.76, -0.1);
    glVertex3f(1.36,1.76, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.3,1.78, 0.0);
    glVertex3f(1.36,1.78, 0.0);
    glVertex3f(1.3,1.78, -0.1);
    glVertex3f(1.36,1.78, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.36,1.76, 0.0);
    glVertex3f(1.3,1.76, 0.0);
    glVertex3f(1.36,1.76, -0.1);
    glVertex3f(1.3,1.76, -0.1);
    glEnd();




    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.3,1.78, 0.0);
    glVertex3f(1.32,1.78, 0.0);
    glVertex3f(1.32,1.67, 0.0);
    glVertex3f(1.3,1.67, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.3,1.78, -0.1);
    glVertex3f(1.32,1.78, -0.1);
    glVertex3f(1.32,1.67, -0.1);
    glVertex3f(1.3,1.67, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.3,1.78, 0.0);
    glVertex3f(1.3,1.78, -0.1);
    glVertex3f(1.3,1.67, -0.1);
    glVertex3f(1.3,1.67, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.32,1.78, 0.0);
    glVertex3f(1.32,1.78, -0.1);
    glVertex3f(1.32,1.67, -0.1);
    glVertex3f(1.32,1.67, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.3,1.78, 0.0);
    glVertex3f(1.32,1.78, 0.0);
    glVertex3f(1.3,1.78, -0.1);
    glVertex3f(1.32,1.78, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.32,1.67, 0.0);
    glVertex3f(1.3,1.67, 0.0);
    glVertex3f(1.32,1.67, -0.1);
    glVertex3f(1.3,1.67, -0.1);
    glEnd();




    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.3,1.73, 0.0);
    glVertex3f(1.36,1.73, 0.0);
    glVertex3f(1.36,1.71, 0.0);
    glVertex3f(1.3,1.71, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.3,1.73, -0.1);
    glVertex3f(1.36,1.73, -0.1);
    glVertex3f(1.36,1.71, -0.1);
    glVertex3f(1.3,1.71, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.3,1.73, 0.0);
    glVertex3f(1.3,1.73, -0.1);
    glVertex3f(1.3,1.71, -0.1);
    glVertex3f(1.3,1.71, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.36,1.73, 0.0);
    glVertex3f(1.36,1.73, -0.1);
    glVertex3f(1.36,1.71, -0.1);
    glVertex3f(1.36,1.71, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.3,1.73, 0.0);
    glVertex3f(1.36,1.73, 0.0);
    glVertex3f(1.3,1.73, -0.1);
    glVertex3f(1.36,1.73, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.36,1.71, 0.0);
    glVertex3f(1.3,1.71, 0.0);
    glVertex3f(1.36,1.71, -0.1);
    glVertex3f(1.3,1.71, -0.1);
    glEnd();




    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.36,1.78, 0.0);
    glVertex3f(1.34,1.78, 0.0);
    glVertex3f(1.34,1.67, 0.0);
    glVertex3f(1.36,1.67, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.36,1.78, -0.1);
    glVertex3f(1.34,1.78, -0.1);
    glVertex3f(1.34,1.67, -0.1);
    glVertex3f(1.36,1.67, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.36,1.78, 0.0);
    glVertex3f(1.36,1.78, -0.1);
    glVertex3f(1.36,1.67, -0.1);
    glVertex3f(1.36,1.67, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.34,1.78, 0.0);
    glVertex3f(1.34,1.78, -0.1);
    glVertex3f(1.34,1.67, -0.1);
    glVertex3f(1.34,1.67, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.36,1.78, 0.0);
    glVertex3f(1.34,1.78, 0.0);
    glVertex3f(1.36,1.78, -0.1);
    glVertex3f(1.34,1.78, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.34,1.67, 0.0);
    glVertex3f(1.36,1.67, 0.0);
    glVertex3f(1.34,1.67, -0.1);
    glVertex3f(1.36,1.67, -0.1);
    glEnd();



    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.3,1.69, 0.0);
    glVertex3f(1.36,1.69, 0.0);
    glVertex3f(1.36,1.67, 0.0);
    glVertex3f(1.3,1.67, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.3,1.69, -0.1);
    glVertex3f(1.36,1.69, -0.1);
    glVertex3f(1.36,1.67, -0.1);
    glVertex3f(1.3,1.67, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.3,1.69, 0.0);
    glVertex3f(1.3,1.69, -0.1);
    glVertex3f(1.3,1.67, -0.1);
    glVertex3f(1.3,1.67, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.36,1.69, 0.0);
    glVertex3f(1.36,1.69, -0.1);
    glVertex3f(1.36,1.67, -0.1);
    glVertex3f(1.36,1.67, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.3,1.69, 0.0);
    glVertex3f(1.36,1.69, 0.0);
    glVertex3f(1.3,1.69, -0.1);
    glVertex3f(1.36,1.69, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.36,1.67, 0.0);
    glVertex3f(1.3,1.67, 0.0);
    glVertex3f(1.36,1.67, -0.1);
    glVertex3f(1.3,1.67, -0.1);
    glEnd();


    //akhir 8

    //angka 2


    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.57,1.385, 0.0);
    glVertex3f(-1.51,1.385, 0.0);
    glVertex3f(-1.51,1.365, 0.0);
    glVertex3f(-1.57,1.365, 0.0);
    glEnd();

    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.57,1.385, -0.1);
    glVertex3f(-1.51,1.385, -0.1);
    glVertex3f(-1.51,1.365, -0.1);
    glVertex3f(-1.57,1.365, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.57,1.385, 0.0);
    glVertex3f(-1.57,1.385, -0.1);
    glVertex3f(-1.57,1.365, -0.1);
    glVertex3f(-1.57,1.365, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.51,1.385, 0.0);
    glVertex3f(-1.51,1.385, -0.1);
    glVertex3f(-1.51,1.365, -0.1);
    glVertex3f(-1.51,1.365, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.57,1.385, 0.0);
    glVertex3f(-1.51,1.385, 0.0);
    glVertex3f(-1.57,1.385, -0.1);
    glVertex3f(-1.51,1.385, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.51,1.365, 0.0);
    glVertex3f(-1.57,1.365, 0.0);
    glVertex3f(-1.51,1.365, -0.1);
    glVertex3f(-1.57,1.365, -0.1);
    glEnd();




    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.53,1.365, 0.0);
    glVertex3f(-1.51,1.365, 0.0);
    glVertex3f(-1.51,1.315, 0.0);
    glVertex3f(-1.53,1.315, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.53,1.365, -0.1);
    glVertex3f(-1.51,1.365, -0.1);
    glVertex3f(-1.51,1.315, -0.1);
    glVertex3f(-1.53,1.315, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.53,1.365, 0.0);
    glVertex3f(-1.53,1.365, -0.1);
    glVertex3f(-1.53,1.315, -0.1);
    glVertex3f(-1.53,1.315, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.51,1.365, 0.0);
    glVertex3f(-1.51,1.365, -0.1);
    glVertex3f(-1.51,1.315, -0.1);
    glVertex3f(-1.51,1.315, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.53,1.365, 0.0);
    glVertex3f(-1.51,1.365, 0.0);
    glVertex3f(-1.53,1.365, -0.1);
    glVertex3f(-1.51,1.365, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.51,1.315, 0.0);
    glVertex3f(-1.53,1.315, 0.0);
    glVertex3f(-1.51,1.315, -0.1);
    glVertex3f(-1.53,1.315, -0.1);
    glEnd();




    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.56,1.335, 0.0);
    glVertex3f(-1.51,1.335, 0.0);
    glVertex3f(-1.51,1.315, 0.0);
    glVertex3f(-1.56,1.315, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.56,1.335, -0.1);
    glVertex3f(-1.51,1.335, -0.1);
    glVertex3f(-1.51,1.315, -0.1);
    glVertex3f(-1.56,1.315, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.56,1.335, 0.0);
    glVertex3f(-1.56,1.335, -0.1);
    glVertex3f(-1.56,1.315, -0.1);
    glVertex3f(-1.56,1.315, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.51,1.335, 0.0);
    glVertex3f(-1.51,1.335, -0.1);
    glVertex3f(-1.51,1.315, -0.1);
    glVertex3f(-1.51,1.315, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.56,1.335, 0.0);
    glVertex3f(-1.51,1.335, 0.0);
    glVertex3f(-1.56,1.335, -0.1);
    glVertex3f(-1.51,1.335, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.51,1.315, 0.0);
    glVertex3f(-1.56,1.315, 0.0);
    glVertex3f(-1.51,1.315, -0.1);
    glVertex3f(-1.56,1.315, -0.1);
    glEnd();



    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.57,1.335, 0.0);
    glVertex3f(-1.55,1.335, 0.0);
    glVertex3f(-1.55,1.275, 0.0);
    glVertex3f(-1.57,1.275, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.57,1.335, -0.1);
    glVertex3f(-1.55,1.335, -0.1);
    glVertex3f(-1.55,1.275, -0.1);
    glVertex3f(-1.57,1.275, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.57,1.335, 0.0);
    glVertex3f(-1.57,1.335, -0.1);
    glVertex3f(-1.57,1.275, -0.1);
    glVertex3f(-1.57,1.275, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.55,1.335, 0.0);
    glVertex3f(-1.55,1.335, -0.1);
    glVertex3f(-1.55,1.275, -0.1);
    glVertex3f(-1.55,1.275, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.57,1.335, 0.0);
    glVertex3f(-1.55,1.335, 0.0);
    glVertex3f(-1.57,1.335, -0.1);
    glVertex3f(-1.55,1.335, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.55,1.275, 0.0);
    glVertex3f(-1.57,1.275, 0.0);
    glVertex3f(-1.55,1.275, -0.1);
    glVertex3f(-1.57,1.275, -0.1);
    glEnd();




    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.56,1.295, 0.0);
    glVertex3f(-1.51,1.295, 0.0);
    glVertex3f(-1.51,1.275, 0.0);
    glVertex3f(-1.56,1.275, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.56,1.295, -0.1);
    glVertex3f(-1.51,1.295, -0.1);
    glVertex3f(-1.51,1.275, -0.1);
    glVertex3f(-1.56,1.275, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.56,1.295, 0.0);
    glVertex3f(-1.56,1.295, -0.1);
    glVertex3f(-1.56,1.275, -0.1);
    glVertex3f(-1.56,1.275, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.51,1.295, 0.0);
    glVertex3f(-1.51,1.295, -0.1);
    glVertex3f(-1.51,1.275, -0.1);
    glVertex3f(-1.51,1.275, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.56,1.295, 0.0);
    glVertex3f(-1.51,1.295, 0.0);
    glVertex3f(-1.56,1.295, -0.1);
    glVertex3f(-1.51,1.295, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.51,1.275, 0.0);
    glVertex3f(-1.56,1.275, 0.0);
    glVertex3f(-1.51,1.275, -0.1);
    glVertex3f(-1.56,1.275, -0.1);
    glEnd();



    //akhir 2

    //angka 6

    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.34,1.36, 0.0);
    glVertex3f(-0.28,1.36, 0.0);
    glVertex3f(-0.28,1.34, 0.0);
    glVertex3f(-0.34,1.34, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.34,1.36, -0.1);
    glVertex3f(-0.28,1.36, -0.1);
    glVertex3f(-0.28,1.34, -0.1);
    glVertex3f(-0.34,1.34, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.34,1.36, 0.0);
    glVertex3f(-0.34,1.36, -0.1);
    glVertex3f(-0.34,1.34, -0.1);
    glVertex3f(-0.34,1.34, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.28,1.36, 0.0);
    glVertex3f(-0.28,1.36, -0.1);
    glVertex3f(-0.28,1.34, -0.1);
    glVertex3f(-0.28,1.34, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.34,1.36, 0.0);
    glVertex3f(-0.28,1.36, 0.0);
    glVertex3f(-0.34,1.36, -0.1);
    glVertex3f(-0.28,1.36, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.28,1.34, 0.0);
    glVertex3f(-0.34,1.34, 0.0);
    glVertex3f(-0.28,1.34, -0.1);
    glVertex3f(-0.34,1.34, -0.1);
    glEnd();




    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.34,1.36, 0.0);
    glVertex3f(-0.32,1.36, 0.0);
    glVertex3f(-0.32,1.25, 0.0);
    glVertex3f(-0.34,1.25, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.34,1.36, -0.1);
    glVertex3f(-0.32,1.36, -0.1);
    glVertex3f(-0.32,1.25, -0.1);
    glVertex3f(-0.34,1.25, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.34,1.36, 0.0);
    glVertex3f(-0.34,1.36, -0.1);
    glVertex3f(-0.34,1.25, -0.1);
    glVertex3f(-0.34,1.25, 0.0);
    glEnd();


    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.32,1.36, 0.0);
    glVertex3f(-0.32,1.36, -0.1);
    glVertex3f(-0.32,1.25, -0.1);
    glVertex3f(-0.32,1.25, 0.0);
    glEnd();


    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.34,1.36, 0.0);
    glVertex3f(-0.32,1.36, 0.0);
    glVertex3f(-0.34,1.36, -0.1);
    glVertex3f(-0.32,1.36, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.32,1.25, 0.0);
    glVertex3f(-0.34,1.25, 0.0);
    glVertex3f(-0.32,1.25, -0.1);
    glVertex3f(-0.34,1.25, -0.1);
    glEnd();





    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.34,1.31, 0.0);
    glVertex3f(-0.28,1.31, 0.0);
    glVertex3f(-0.28,1.29, 0.0);
    glVertex3f(-0.34,1.29, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.34,1.31, -0.1);
    glVertex3f(-0.28,1.31, -0.1);
    glVertex3f(-0.28,1.29, -0.1);
    glVertex3f(-0.34,1.29, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.34,1.31, 0.0);
    glVertex3f(-0.34,1.31, -0.1);
    glVertex3f(-0.34,1.29, -0.1);
    glVertex3f(-0.34,1.29, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.28,1.31, 0.0);
    glVertex3f(-0.28,1.31, -0.1);
    glVertex3f(-0.28,1.29, -0.1);
    glVertex3f(-0.28,1.29, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.34,1.31, 0.0);
    glVertex3f(-0.28,1.31, 0.0);
    glVertex3f(-0.34,1.31, -0.1);
    glVertex3f(-0.28,1.31, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.28,1.29, 0.0);
    glVertex3f(-0.34,1.29, 0.0);
    glVertex3f(-0.28,1.29, -0.1);
    glVertex3f(-0.34,1.29, -0.1);
    glEnd();




    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.28,1.31, 0.0);
    glVertex3f(-0.3,1.31, 0.0);
    glVertex3f(-0.3,1.25, 0.0);
    glVertex3f(-0.28,1.25, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.28,1.31, -0.1);
    glVertex3f(-0.3,1.31, -0.1);
    glVertex3f(-0.3,1.25, -0.1);
    glVertex3f(-0.28,1.25, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.28,1.31, 0.0);
    glVertex3f(-0.28,1.31, -0.1);
    glVertex3f(-0.28,1.25, -0.1);
    glVertex3f(-0.28,1.25, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.3,1.31, 0.0);
    glVertex3f(-0.3,1.31, -0.1);
    glVertex3f(-0.3,1.25, -0.1);
    glVertex3f(-0.3,1.25, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.28,1.31, 0.0);
    glVertex3f(-0.3,1.31, 0.0);
    glVertex3f(-0.28,1.31, -0.1);
    glVertex3f(-0.3,1.31, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.3,1.25, 0.0);
    glVertex3f(-0.28,1.25, 0.0);
    glVertex3f(-0.3,1.25, -0.1);
    glVertex3f(-0.28,1.25, -0.1);
    glEnd();




    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.34,1.27, 0.0);
    glVertex3f(-0.28,1.27, 0.0);
    glVertex3f(-0.28,1.25, 0.0);
    glVertex3f(-0.34,1.25, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.34,1.27, -0.1);
    glVertex3f(-0.28,1.27, -0.1);
    glVertex3f(-0.28,1.25, -0.1);
    glVertex3f(-0.34,1.25, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.34,1.27, 0.0);
    glVertex3f(-0.34,1.27, -0.1);
    glVertex3f(-0.34,1.25, -0.1);
    glVertex3f(-0.34,1.25, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.28,1.27, 0.0);
    glVertex3f(-0.28,1.27, -0.1);
    glVertex3f(-0.28,1.25, -0.1);
    glVertex3f(-0.28,1.25, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.34,1.27, 0.0);
    glVertex3f(-0.28,1.27, 0.0);
    glVertex3f(-0.34,1.27, -0.1);
    glVertex3f(-0.28,1.27, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.28,1.25, 0.0);
    glVertex3f(-0.34,1.25, 0.0);
    glVertex3f(-0.28,1.25, -0.1);
    glVertex3f(-0.34,1.25, -0.1);
    glEnd();



    //akhir 6

    //angka 68

    //angka 8


    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.07,1.36, 0.0);
    glVertex3f(0.13,1.36, 0.0);
    glVertex3f(0.13,1.34, 0.0);
    glVertex3f(0.07,1.34, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.07,1.36, -0.1);
    glVertex3f(0.13,1.36, -0.1);
    glVertex3f(0.13,1.34, -0.1);
    glVertex3f(0.07,1.34, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.07,1.36, 0.0);
    glVertex3f(0.07,1.36, -0.1);
    glVertex3f(0.07,1.34, -0.1);
    glVertex3f(0.07,1.34, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.13,1.36, 0.0);
    glVertex3f(0.13,1.36, -0.1);
    glVertex3f(0.13,1.34, -0.1);
    glVertex3f(0.13,1.34, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.07,1.36, 0.0);
    glVertex3f(0.13,1.36, 0.0);
    glVertex3f(0.07,1.36, -0.1);
    glVertex3f(0.13,1.36, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.13,1.34, 0.0);
    glVertex3f(0.07,1.34, 0.0);
    glVertex3f(0.13,1.34, -0.1);
    glVertex3f(0.07,1.34, -0.1);
    glEnd();



    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.07,1.36, 0.0);
    glVertex3f(0.09,1.36, 0.0);
    glVertex3f(0.09,1.25, 0.0);
    glVertex3f(0.07,1.25, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.07,1.36, -0.1);
    glVertex3f(0.09,1.36, -0.1);
    glVertex3f(0.09,1.25, -0.1);
    glVertex3f(0.07,1.25, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.07,1.36, 0.0);
    glVertex3f(0.07,1.36, -0.1);
    glVertex3f(0.07,1.25, -0.1);
    glVertex3f(0.07,1.25, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.09,1.36, 0.0);
    glVertex3f(0.09,1.36, -0.1);
    glVertex3f(0.09,1.25, -0.1);
    glVertex3f(0.09,1.25, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.07,1.36, 0.0);
    glVertex3f(0.09,1.36, 0.0);
    glVertex3f(0.07,1.36, -0.1);
    glVertex3f(0.09,1.36, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.09,1.25, 0.0);
    glVertex3f(0.07,1.25, 0.0);
    glVertex3f(0.09,1.25, -0.1);
    glVertex3f(0.07,1.25, -0.1);
    glEnd();



    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.07,1.31, 0.0);
    glVertex3f(0.13,1.31, 0.0);
    glVertex3f(0.13,1.29, 0.0);
    glVertex3f(0.07,1.29, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.07,1.31, -0.1);
    glVertex3f(0.13,1.31, -0.1);
    glVertex3f(0.13,1.29, -0.1);
    glVertex3f(0.07,1.29, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.07,1.31, 0.0);
    glVertex3f(0.07,1.31, -0.1);
    glVertex3f(0.07,1.29, -0.1);
    glVertex3f(0.07,1.29, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.13,1.31, 0.0);
    glVertex3f(0.13,1.31, -0.1);
    glVertex3f(0.13,1.29, -0.1);
    glVertex3f(0.13,1.29, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.07,1.31, 0.0);
    glVertex3f(0.13,1.31, 0.0);
    glVertex3f(0.07,1.31, -0.1);
    glVertex3f(0.13,1.31, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.13,1.29, 0.0);
    glVertex3f(0.07,1.29, 0.0);
    glVertex3f(0.13,1.29, -0.1);
    glVertex3f(0.07,1.29, -0.1);
    glEnd();



    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.13,1.36, 0.0);
    glVertex3f(0.11,1.36, 0.0);
    glVertex3f(0.11,1.25, 0.0);
    glVertex3f(0.13,1.25, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.13,1.36, -0.1);
    glVertex3f(0.11,1.36, -0.1);
    glVertex3f(0.11,1.25, -0.1);
    glVertex3f(0.13,1.25, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.13,1.36, 0.0);
    glVertex3f(0.13,1.36, -0.1);
    glVertex3f(0.13,1.25, -0.1);
    glVertex3f(0.13,1.25, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.11,1.36, 0.0);
    glVertex3f(0.11,1.36, -0.1);
    glVertex3f(0.11,1.25, -0.1);
    glVertex3f(0.11,1.25, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.13,1.36, 0.0);
    glVertex3f(0.11,1.36, 0.0);
    glVertex3f(0.13,1.36, -0.1);
    glVertex3f(0.11,1.36, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.11,1.25, 0.0);
    glVertex3f(0.13,1.25, 0.0);
    glVertex3f(0.11,1.25, -0.1);
    glVertex3f(0.13,1.25, -0.1);
    glEnd();




    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.07,1.27, 0.0);
    glVertex3f(0.13,1.27, 0.0);
    glVertex3f(0.13,1.25, 0.0);
    glVertex3f(0.07,1.25, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.07,1.27, -0.1);
    glVertex3f(0.13,1.27, -0.1);
    glVertex3f(0.13,1.25, -0.1);
    glVertex3f(0.07,1.25, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.07,1.27, 0.0);
    glVertex3f(0.07,1.27, -0.1);
    glVertex3f(0.07,1.25, -0.1);
    glVertex3f(0.07,1.25, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.13,1.27, 0.0);
    glVertex3f(0.13,1.27, -0.1);
    glVertex3f(0.13,1.25, -0.1);
    glVertex3f(0.13,1.25, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.07,1.27, 0.0);
    glVertex3f(0.13,1.27, 0.0);
    glVertex3f(0.07,1.27, -0.1);
    glVertex3f(0.13,1.27, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.13,1.25, 0.0);
    glVertex3f(0.07,1.25, 0.0);
    glVertex3f(0.13,1.25, -0.1);
    glVertex3f(0.07,1.25, -0.1);
    glEnd();




    //akhir 8

    //angka 6

    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.03,1.36, 0.0);
    glVertex3f(0.03,1.36, 0.0);
    glVertex3f(0.03,1.34, 0.0);
    glVertex3f(-0.03,1.34, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.03,1.36, -0.1);
    glVertex3f(0.03,1.36, -0.1);
    glVertex3f(0.03,1.34, -0.1);
    glVertex3f(-0.03,1.34, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.03,1.36, 0.0);
    glVertex3f(-0.03,1.36, -0.1);
    glVertex3f(-0.03,1.34, -0.1);
    glVertex3f(-0.03,1.34, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.03,1.36, 0.0);
    glVertex3f(0.03,1.36, -0.1);
    glVertex3f(0.03,1.34, -0.1);
    glVertex3f(0.03,1.34, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.03,1.36, 0.0);
    glVertex3f(0.03,1.36, 0.0);
    glVertex3f(-0.03,1.36, -0.1);
    glVertex3f(0.03,1.36, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.03,1.34, 0.0);
    glVertex3f(-0.03,1.34, 0.0);
    glVertex3f(0.03,1.34, -0.1);
    glVertex3f(-0.03,1.34, -0.1);
    glEnd();




    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.03,1.36, 0.0);
    glVertex3f(-0.01,1.36, 0.0);
    glVertex3f(-0.01,1.25, 0.0);
    glVertex3f(-0.03,1.25, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.03,1.36, -0.1);
    glVertex3f(-0.01,1.36, -0.1);
    glVertex3f(-0.01,1.25, -0.1);
    glVertex3f(-0.03,1.25, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.03,1.36, 0.0);
    glVertex3f(-0.03,1.36, -0.1);
    glVertex3f(-0.03,1.25, -0.1);
    glVertex3f(-0.03,1.25, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.01,1.36, 0.0);
    glVertex3f(-0.01,1.36, -0.1);
    glVertex3f(-0.01,1.25, -0.1);
    glVertex3f(-0.01,1.25, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.03,1.36, 0.0);
    glVertex3f(-0.01,1.36, 0.0);
    glVertex3f(-0.03,1.36, -0.1);
    glVertex3f(-0.01,1.36, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.01,1.25, 0.0);
    glVertex3f(-0.03,1.25, 0.0);
    glVertex3f(-0.01,1.25, -0.1);
    glVertex3f(-0.03,1.25, -0.1);
    glEnd();




    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.03,1.31, 0.0);
    glVertex3f(0.03,1.31, 0.0);
    glVertex3f(0.03,1.29, 0.0);
    glVertex3f(-0.03,1.29, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.03,1.31, -0.1);
    glVertex3f(0.03,1.31, -0.1);
    glVertex3f(0.03,1.29, -0.1);
    glVertex3f(-0.03,1.29, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.03,1.31, 0.0);
    glVertex3f(-0.03,1.31, -0.1);
    glVertex3f(-0.03,1.29, -0.1);
    glVertex3f(-0.03,1.29, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.03,1.31, 0.0);
    glVertex3f(0.03,1.31, -0.1);
    glVertex3f(0.03,1.29, -0.1);
    glVertex3f(0.03,1.29, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.03,1.31, 0.0);
    glVertex3f(0.03,1.31, 0.0);
    glVertex3f(-0.03,1.31, -0.1);
    glVertex3f(0.03,1.31, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.03,1.29, 0.0);
    glVertex3f(-0.03,1.29, 0.0);
    glVertex3f(0.03,1.29, -0.1);
    glVertex3f(-0.03,1.29, -0.1);
    glEnd();



    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.03,1.31, 0.0);
    glVertex3f(0.01,1.31, 0.0);
    glVertex3f(0.01,1.25, 0.0);
    glVertex3f(0.03,1.25, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.03,1.31, -0.1);
    glVertex3f(0.01,1.31, -0.1);
    glVertex3f(0.01,1.25, -0.1);
    glVertex3f(0.03,1.25, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.03,1.31, 0.0);
    glVertex3f(0.03,1.31, -0.1);
    glVertex3f(0.03,1.25, -0.1);
    glVertex3f(0.03,1.25, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.01,1.31, 0.0);
    glVertex3f(0.01,1.31, -0.1);
    glVertex3f(0.01,1.25, -0.1);
    glVertex3f(0.01,1.25, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.03,1.31, 0.0);
    glVertex3f(0.01,1.31, 0.0);
    glVertex3f(0.03,1.31, -0.1);
    glVertex3f(0.01,1.31, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.01,1.25, 0.0);
    glVertex3f(0.03,1.25, 0.0);
    glVertex3f(0.01,1.25, -0.1);
    glVertex3f(0.03,1.25, -0.1);
    glEnd();




    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.03,1.27, 0.0);
    glVertex3f(0.03,1.27, 0.0);
    glVertex3f(0.03,1.25, 0.0);
    glVertex3f(-0.03,1.25, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.03,1.27, -0.1);
    glVertex3f(0.03,1.27, -0.1);
    glVertex3f(0.03,1.25, -0.1);
    glVertex3f(-0.03,1.25, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.03,1.27, 0.0);
    glVertex3f(-0.03,1.27, -0.1);
    glVertex3f(-0.03,1.25, -0.1);
    glVertex3f(-0.03,1.25, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.03,1.27, 0.0);
    glVertex3f(0.03,1.27, -0.1);
    glVertex3f(0.03,1.25, -0.1);
    glVertex3f(0.03,1.25, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.03,1.27, 0.0);
    glVertex3f(0.03,1.27, 0.0);
    glVertex3f(-0.03,1.27, -0.1);
    glVertex3f(0.03,1.27, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.03,1.25, 0.0);
    glVertex3f(-0.03,1.25, 0.0);
    glVertex3f(0.03,1.25, -0.1);
    glVertex3f(-0.03,1.25, -0.1);
    glEnd();



    //akhir 6

    //akhir 68

    //angka 6

    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.48,1.34, 0.0);
    glVertex3f(0.54,1.34, 0.0);
    glVertex3f(0.54,1.32, 0.0);
    glVertex3f(0.48,1.32, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.48,1.34, -0.1);
    glVertex3f(0.54,1.34, -0.1);
    glVertex3f(0.54,1.32, -0.1);
    glVertex3f(0.48,1.32, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.48,1.34, 0.0);
    glVertex3f(0.48,1.34, -0.1);
    glVertex3f(0.48,1.32, -0.1);
    glVertex3f(0.48,1.32, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.54,1.34, 0.0);
    glVertex3f(0.54,1.34, -0.1);
    glVertex3f(0.54,1.32, -0.1);
    glVertex3f(0.54,1.32, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.48,1.34, 0.0);
    glVertex3f(0.54,1.34, 0.0);
    glVertex3f(0.48,1.34, -0.1);
    glVertex3f(0.54,1.34, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.54,1.32, 0.0);
    glVertex3f(0.48,1.32, 0.0);
    glVertex3f(0.54,1.32, -0.1);
    glVertex3f(0.48,1.32, -0.1);
    glEnd();





    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.48,1.34, 0.0);
    glVertex3f(0.5,1.34, 0.0);
    glVertex3f(0.5,1.23, 0.0);
    glVertex3f(0.48,1.23, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.48,1.34, -0.1);
    glVertex3f(0.5,1.34, -0.1);
    glVertex3f(0.5,1.23, -0.1);
    glVertex3f(0.48,1.23, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.48,1.34, 0.0);
    glVertex3f(0.48,1.34, -0.1);
    glVertex3f(0.48,1.23, -0.1);
    glVertex3f(0.48,1.23, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.5,1.34, 0.0);
    glVertex3f(0.5,1.34, -0.1);
    glVertex3f(0.5,1.23, -0.1);
    glVertex3f(0.5,1.23, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.48,1.34, 0.0);
    glVertex3f(0.5,1.34, 0.0);
    glVertex3f(0.48,1.34, -0.1);
    glVertex3f(0.5,1.34, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.5,1.23, 0.0);
    glVertex3f(0.48,1.23, 0.0);
    glVertex3f(0.5,1.23, -0.1);
    glVertex3f(0.48,1.23, -0.1);
    glEnd();



    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.48,1.29, 0.0);
    glVertex3f(0.54,1.29, 0.0);
    glVertex3f(0.54,1.27, 0.0);
    glVertex3f(0.48,1.27, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.48,1.29, -0.1);
    glVertex3f(0.54,1.29, -0.1);
    glVertex3f(0.54,1.27, -0.1);
    glVertex3f(0.48,1.27, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.48,1.29, 0.0);
    glVertex3f(0.48,1.29, -0.1);
    glVertex3f(0.48,1.27, -0.1);
    glVertex3f(0.48,1.27, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.54,1.29, 0.0);
    glVertex3f(0.54,1.29, -0.1);
    glVertex3f(0.54,1.27, -0.1);
    glVertex3f(0.54,1.27, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.48,1.29, 0.0);
    glVertex3f(0.54,1.29, 0.0);
    glVertex3f(0.48,1.29, -0.1);
    glVertex3f(0.54,1.29, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.54,1.27, 0.0);
    glVertex3f(0.48,1.27, 0.0);
    glVertex3f(0.54,1.27, -0.1);
    glVertex3f(0.48,1.27, -0.1);
    glEnd();




    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.54,1.29, 0.0);
    glVertex3f(0.52,1.29, 0.0);
    glVertex3f(0.52,1.23, 0.0);
    glVertex3f(0.54,1.23, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.54,1.29, -0.1);
    glVertex3f(0.52,1.29, -0.1);
    glVertex3f(0.52,1.23, -0.1);
    glVertex3f(0.54,1.23, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.54,1.29, 0.0);
    glVertex3f(0.54,1.29, -0.1);
    glVertex3f(0.54,1.23, -0.1);
    glVertex3f(0.54,1.23, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.52,1.29, 0.0);
    glVertex3f(0.52,1.29, -0.1);
    glVertex3f(0.52,1.23, -0.1);
    glVertex3f(0.52,1.23, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.54,1.29, 0.0);
    glVertex3f(0.52,1.29, 0.0);
    glVertex3f(0.54,1.29, -0.1);
    glVertex3f(0.52,1.29, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.52,1.23, 0.0);
    glVertex3f(0.54,1.23, 0.0);
    glVertex3f(0.52,1.23, -0.1);
    glVertex3f(0.54,1.23, -0.1);
    glEnd();



    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.48,1.25, 0.0);
    glVertex3f(0.54,1.25, 0.0);
    glVertex3f(0.54,1.23, 0.0);
    glVertex3f(0.48,1.23, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.48,1.25, -0.1);
    glVertex3f(0.54,1.25, -0.1);
    glVertex3f(0.54,1.23, -0.1);
    glVertex3f(0.48,1.23, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.48,1.25, 0.0);
    glVertex3f(0.48,1.25, -0.1);
    glVertex3f(0.48,1.23, -0.1);
    glVertex3f(0.48,1.23, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.54,1.25, 0.0);
    glVertex3f(0.54,1.25, -0.1);
    glVertex3f(0.54,1.23, -0.1);
    glVertex3f(0.54,1.23, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.48,1.25, 0.0);
    glVertex3f(0.54,1.25, 0.0);
    glVertex3f(0.48,1.25, -0.1);
    glVertex3f(0.54,1.25, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.54,1.23, 0.0);
    glVertex3f(0.48,1.23, 0.0);
    glVertex3f(0.54,1.23, -0.1);
    glVertex3f(0.48,1.23, -0.1);
    glEnd();



    //akhir 6

    //angka 66


    //angka 6

    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.89,1.34, 0.0);
    glVertex3f(0.95,1.34, 0.0);
    glVertex3f(0.95,1.32, 0.0);
    glVertex3f(0.89,1.32, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.89,1.34, -0.1);
    glVertex3f(0.95,1.34, -0.1);
    glVertex3f(0.95,1.32, -0.1);
    glVertex3f(0.89,1.32, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.89,1.34, 0.0);
    glVertex3f(0.89,1.34, -0.1);
    glVertex3f(0.89,1.32, -0.1);
    glVertex3f(0.89,1.32, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.95,1.34, 0.0);
    glVertex3f(0.95,1.34, -0.1);
    glVertex3f(0.95,1.32, -0.1);
    glVertex3f(0.95,1.32, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.89,1.34, 0.0);
    glVertex3f(0.95,1.34, 0.0);
    glVertex3f(0.89,1.34, -0.1);
    glVertex3f(0.95,1.34, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.95,1.32, 0.0);
    glVertex3f(0.89,1.32, 0.0);
    glVertex3f(0.95,1.32, -0.1);
    glVertex3f(0.89,1.32, -0.1);
    glEnd();



    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.89,1.34, 0.0);
    glVertex3f(0.87,1.34, 0.0);
    glVertex3f(0.87,1.23, 0.0);
    glVertex3f(0.89,1.23, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.89,1.34, -0.1);
    glVertex3f(0.87,1.34, -0.1);
    glVertex3f(0.87,1.23, -0.1);
    glVertex3f(0.89,1.23, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.89,1.34, 0.0);
    glVertex3f(0.89,1.34, -0.1);
    glVertex3f(0.89,1.23, -0.1);
    glVertex3f(0.89,1.23, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.87,1.34, 0.0);
    glVertex3f(0.87,1.34, -0.1);
    glVertex3f(0.87,1.23, -0.1);
    glVertex3f(0.87,1.23, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.89,1.34, 0.0);
    glVertex3f(0.87,1.34, 0.0);
    glVertex3f(0.89,1.34, -0.1);
    glVertex3f(0.87,1.34, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.87,1.23, 0.0);
    glVertex3f(0.89,1.23, 0.0);
    glVertex3f(0.87,1.23, -0.1);
    glVertex3f(0.89,1.23, -0.1);
    glEnd();




    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.89,1.29, 0.0);
    glVertex3f(0.95,1.29, 0.0);
    glVertex3f(0.95,1.27, 0.0);
    glVertex3f(0.89,1.27, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.89,1.29, -0.1);
    glVertex3f(0.95,1.29, -0.1);
    glVertex3f(0.95,1.27, -0.1);
    glVertex3f(0.89,1.27, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.89,1.29, 0.0);
    glVertex3f(0.89,1.29, -0.1);
    glVertex3f(0.89,1.27, -0.1);
    glVertex3f(0.89,1.27, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.95,1.29, 0.0);
    glVertex3f(0.95,1.29, -0.1);
    glVertex3f(0.95,1.27, -0.1);
    glVertex3f(0.95,1.27, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.89,1.29, 0.0);
    glVertex3f(0.95,1.29, 0.0);
    glVertex3f(0.89,1.29, -0.1);
    glVertex3f(0.95,1.29, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.95,1.27, 0.0);
    glVertex3f(0.89,1.27, 0.0);
    glVertex3f(0.95,1.27, -0.1);
    glVertex3f(0.89,1.27, -0.1);
    glEnd();





    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.95,1.29, 0.0);
    glVertex3f(0.93,1.29, 0.0);
    glVertex3f(0.93,1.23, 0.0);
    glVertex3f(0.95,1.23, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.95,1.29, -0.1);
    glVertex3f(0.93,1.29, -0.1);
    glVertex3f(0.93,1.23, -0.1);
    glVertex3f(0.95,1.23, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.95,1.29, 0.0);
    glVertex3f(0.95,1.29, -0.1);
    glVertex3f(0.95,1.23, -0.1);
    glVertex3f(0.95,1.23, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.93,1.29, 0.0);
    glVertex3f(0.93,1.29, -0.1);
    glVertex3f(0.93,1.23, -0.1);
    glVertex3f(0.93,1.23, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.95,1.29, 0.0);
    glVertex3f(0.93,1.29, 0.0);
    glVertex3f(0.95,1.29, -0.1);
    glVertex3f(0.93,1.29, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.93,1.23, 0.0);
    glVertex3f(0.95,1.23, 0.0);
    glVertex3f(0.93,1.23, -0.1);
    glVertex3f(0.95,1.23, -0.1);
    glEnd();



    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.89,1.25, 0.0);
    glVertex3f(0.95,1.25, 0.0);
    glVertex3f(0.95,1.23, 0.0);
    glVertex3f(0.89,1.23, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.89,1.25, -0.1);
    glVertex3f(0.95,1.25, -0.1);
    glVertex3f(0.95,1.23, -0.1);
    glVertex3f(0.89,1.23, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.89,1.25, 0.0);
    glVertex3f(0.89,1.25, -0.1);
    glVertex3f(0.89,1.23, -0.1);
    glVertex3f(0.89,1.23, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.95,1.25, 0.0);
    glVertex3f(0.95,1.25, -0.1);
    glVertex3f(0.95,1.23, -0.1);
    glVertex3f(0.95,1.23, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.89,1.25, 0.0);
    glVertex3f(0.95,1.25, 0.0);
    glVertex3f(0.89,1.25, -0.1);
    glVertex3f(0.95,1.25, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.95,1.23, 0.0);
    glVertex3f(0.89,1.23, 0.0);
    glVertex3f(0.95,1.23, -0.1);
    glVertex3f(0.89,1.23, -0.1);
    glEnd();



    //akhir 6

    //angka 6

    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.79,1.34, 0.0);
    glVertex3f(0.85,1.34, 0.0);
    glVertex3f(0.85,1.32, 0.0);
    glVertex3f(0.79,1.32, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.79,1.34, -0.1);
    glVertex3f(0.85,1.34, -0.1);
    glVertex3f(0.85,1.32, -0.1);
    glVertex3f(0.79,1.32, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.79,1.34, 0.0);
    glVertex3f(0.79,1.34, -0.1);
    glVertex3f(0.79,1.32, -0.1);
    glVertex3f(0.79,1.32, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.85,1.34, 0.0);
    glVertex3f(0.85,1.34, -0.1);
    glVertex3f(0.85,1.32, -0.1);
    glVertex3f(0.85,1.32, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.79,1.34, 0.0);
    glVertex3f(0.85,1.34, 0.0);
    glVertex3f(0.79,1.34, -0.1);
    glVertex3f(0.85,1.34, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.85,1.32, 0.0);
    glVertex3f(0.79,1.32, 0.0);
    glVertex3f(0.85,1.32, -0.1);
    glVertex3f(0.79,1.32, -0.1);
    glEnd();



    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.79,1.34, 0.0);
    glVertex3f(0.81,1.34, 0.0);
    glVertex3f(0.81,1.23, 0.0);
    glVertex3f(0.79,1.23, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.79,1.34, -0.1);
    glVertex3f(0.81,1.34, -0.1);
    glVertex3f(0.81,1.23, -0.1);
    glVertex3f(0.79,1.23, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.79,1.34, 0.0);
    glVertex3f(0.79,1.34, -0.1);
    glVertex3f(0.79,1.23, -0.1);
    glVertex3f(0.79,1.23, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.81,1.34, 0.0);
    glVertex3f(0.81,1.34, -0.1);
    glVertex3f(0.81,1.23, -0.1);
    glVertex3f(0.81,1.23, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.79,1.34, 0.0);
    glVertex3f(0.81,1.34, 0.0);
    glVertex3f(0.79,1.34, -0.1);
    glVertex3f(0.81,1.34, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.81,1.23, 0.0);
    glVertex3f(0.79,1.23, 0.0);
    glVertex3f(0.81,1.23, -0.1);
    glVertex3f(0.79,1.23, -0.1);
    glEnd();




    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.79,1.29, 0.0);
    glVertex3f(0.85,1.29, 0.0);
    glVertex3f(0.85,1.27, 0.0);
    glVertex3f(0.79,1.27, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.79,1.29, -0.1);
    glVertex3f(0.85,1.29, -0.1);
    glVertex3f(0.85,1.27, -0.1);
    glVertex3f(0.79,1.27, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.79,1.29, 0.0);
    glVertex3f(0.79,1.29, -0.1);
    glVertex3f(0.79,1.27, -0.1);
    glVertex3f(0.79,1.27, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.85,1.29, 0.0);
    glVertex3f(0.85,1.29, -0.1);
    glVertex3f(0.85,1.27, -0.1);
    glVertex3f(0.85,1.27, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.79,1.29, 0.0);
    glVertex3f(0.85,1.29, 0.0);
    glVertex3f(0.79,1.29, -0.1);
    glVertex3f(0.85,1.29, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.85,1.27, 0.0);
    glVertex3f(0.79,1.27, 0.0);
    glVertex3f(0.85,1.27, -0.1);
    glVertex3f(0.79,1.27, -0.1);
    glEnd();





    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.85,1.29, 0.0);
    glVertex3f(0.83,1.29, 0.0);
    glVertex3f(0.83,1.23, 0.0);
    glVertex3f(0.85,1.23, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.85,1.29, -0.1);
    glVertex3f(0.83,1.29, -0.1);
    glVertex3f(0.83,1.23, -0.1);
    glVertex3f(0.85,1.23, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.85,1.29, 0.0);
    glVertex3f(0.85,1.29, -0.1);
    glVertex3f(0.85,1.23, -0.1);
    glVertex3f(0.85,1.23, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.83,1.29, 0.0);
    glVertex3f(0.83,1.29, -0.1);
    glVertex3f(0.83,1.23, -0.1);
    glVertex3f(0.83,1.23, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.85,1.29, 0.0);
    glVertex3f(0.83,1.29, 0.0);
    glVertex3f(0.85,1.29, -0.1);
    glVertex3f(0.83,1.29, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.83,1.23, 0.0);
    glVertex3f(0.85,1.23, 0.0);
    glVertex3f(0.83,1.23, -0.1);
    glVertex3f(0.85,1.23, -0.1);
    glEnd();



    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.79,1.25, 0.0);
    glVertex3f(0.85,1.25, 0.0);
    glVertex3f(0.85,1.23, 0.0);
    glVertex3f(0.79,1.23, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.79,1.25, -0.1);
    glVertex3f(0.85,1.25, -0.1);
    glVertex3f(0.85,1.23, -0.1);
    glVertex3f(0.79,1.23, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.79,1.25, 0.0);
    glVertex3f(0.79,1.25, -0.1);
    glVertex3f(0.79,1.23, -0.1);
    glVertex3f(0.79,1.23, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.85,1.25, 0.0);
    glVertex3f(0.85,1.25, -0.1);
    glVertex3f(0.85,1.23, -0.1);
    glVertex3f(0.85,1.23, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.79,1.25, 0.0);
    glVertex3f(0.85,1.25, 0.0);
    glVertex3f(0.79,1.25, -0.1);
    glVertex3f(0.85,1.25, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.85,1.23, 0.0);
    glVertex3f(0.79,1.23, 0.0);
    glVertex3f(0.85,1.23, -0.1);
    glVertex3f(0.79,1.23, -0.1);
    glEnd();

    //akhir 6

    //akhir 66

    //angka 6


    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.3,1.36, 0.0);
    glVertex3f(1.36,1.36, 0.0);
    glVertex3f(1.36,1.34, 0.0);
    glVertex3f(1.3,1.34, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.3,1.36, -0.1);
    glVertex3f(1.36,1.36, -0.1);
    glVertex3f(1.36,1.34, -0.1);
    glVertex3f(1.3,1.34, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.3,1.36, 0.0);
    glVertex3f(1.3,1.36, -0.1);
    glVertex3f(1.3,1.34, -0.1);
    glVertex3f(1.3,1.34, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.36,1.36, 0.0);
    glVertex3f(1.36,1.36, -0.1);
    glVertex3f(1.36,1.34, -0.1);
    glVertex3f(1.36,1.34, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.3,1.36, 0.0);
    glVertex3f(1.36,1.36, 0.0);
    glVertex3f(1.3,1.36, -0.1);
    glVertex3f(1.36,1.36, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.36,1.34, 0.0);
    glVertex3f(1.3,1.34, 0.0);
    glVertex3f(1.36,1.34, -0.1);
    glVertex3f(1.3,1.34, -0.1);
    glEnd();



    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.3,1.36, 0.0);
    glVertex3f(1.32,1.36, 0.0);
    glVertex3f(1.32,1.23, 0.0);
    glVertex3f(1.3,1.23, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.3,1.36, -0.1);
    glVertex3f(1.32,1.36, -0.1);
    glVertex3f(1.32,1.23, -0.1);
    glVertex3f(1.3,1.23, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.3,1.36, 0.0);
    glVertex3f(1.3,1.36, -0.1);
    glVertex3f(1.3,1.23, -0.1);
    glVertex3f(1.3,1.23, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.32,1.36, 0.0);
    glVertex3f(1.32,1.36, -0.1);
    glVertex3f(1.32,1.23, -0.1);
    glVertex3f(1.32,1.23, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.3,1.36, 0.0);
    glVertex3f(1.32,1.36, 0.0);
    glVertex3f(1.3,1.36, -0.1);
    glVertex3f(1.32,1.36, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.32,1.23, 0.0);
    glVertex3f(1.3,1.23, 0.0);
    glVertex3f(1.32,1.23, -0.1);
    glVertex3f(1.3,1.23, -0.1);
    glEnd();




    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.3,1.31, 0.0);
    glVertex3f(1.36,1.31, 0.0);
    glVertex3f(1.36,1.29, 0.0);
    glVertex3f(1.3,1.29, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.3,1.31, -0.1);
    glVertex3f(1.36,1.31, -0.1);
    glVertex3f(1.36,1.29, -0.1);
    glVertex3f(1.3,1.29, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.3,1.31, 0.0);
    glVertex3f(1.3,1.31, -0.1);
    glVertex3f(1.3,1.29, -0.1);
    glVertex3f(1.3,1.29, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.36,1.31, 0.0);
    glVertex3f(1.36,1.31, -0.1);
    glVertex3f(1.36,1.29, -0.1);
    glVertex3f(1.36,1.29, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.3,1.31, 0.0);
    glVertex3f(1.36,1.31, 0.0);
    glVertex3f(1.3,1.31, -0.1);
    glVertex3f(1.36,1.31, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.36,1.29, 0.0);
    glVertex3f(1.3,1.29, 0.0);
    glVertex3f(1.36,1.29, -0.1);
    glVertex3f(1.3,1.29, -0.1);
    glEnd();



    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.36,1.31, 0.0);
    glVertex3f(1.34,1.31, 0.0);
    glVertex3f(1.34,1.23, 0.0);
    glVertex3f(1.36,1.23, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.36,1.31, -0.1);
    glVertex3f(1.34,1.31, -0.1);
    glVertex3f(1.34,1.23, -0.1);
    glVertex3f(1.36,1.23, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.36,1.31, 0.0);
    glVertex3f(1.36,1.31, -0.1);
    glVertex3f(1.34,1.23, -0.1);
    glVertex3f(1.36,1.23, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.34,1.31, 0.0);
    glVertex3f(1.34,1.31, -0.1);
    glVertex3f(1.34,1.23, -0.1);
    glVertex3f(1.34,1.23, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.36,1.31, 0.0);
    glVertex3f(1.34,1.31, 0.0);
    glVertex3f(1.36,1.31, -0.1);
    glVertex3f(1.34,1.31, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.34,1.23, 0.0);
    glVertex3f(1.36,1.23, 0.0);
    glVertex3f(1.34,1.23, -0.1);
    glVertex3f(1.36,1.23, -0.1);
    glEnd();



    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.3,1.25, 0.0);
    glVertex3f(1.36,1.25, 0.0);
    glVertex3f(1.36,1.23, 0.0);
    glVertex3f(1.3,1.23, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.3,1.25, -0.1);
    glVertex3f(1.36,1.25, -0.1);
    glVertex3f(1.36,1.23, -0.1);
    glVertex3f(1.3,1.23, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.3,1.25, 0.0);
    glVertex3f(1.3,1.25, -0.1);
    glVertex3f(1.3,1.23, -0.1);
    glVertex3f(1.3,1.23, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.36,1.25, 0.0);
    glVertex3f(1.36,1.25, -0.1);
    glVertex3f(1.36,1.23, -0.1);
    glVertex3f(1.36,1.23, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.3,1.25, 0.0);
    glVertex3f(1.36,1.25, 0.0);
    glVertex3f(1.3,1.25, -0.1);
    glVertex3f(1.36,1.25, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.36,1.23, 0.0);
    glVertex3f(1.3,1.23, 0.0);
    glVertex3f(1.36,1.23, -0.1);
    glVertex3f(1.3,1.23, -0.1);
    glEnd();




    //akhir 6

    //angka 6


    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.72,1.36, 0.0);
    glVertex3f(1.78,1.36, 0.0);
    glVertex3f(1.78,1.34, 0.0);
    glVertex3f(1.72,1.34, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.72,1.36, -0.1);
    glVertex3f(1.78,1.36, -0.1);
    glVertex3f(1.78,1.34, -0.1);
    glVertex3f(1.72,1.34, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.72,1.36, 0.0);
    glVertex3f(1.72,1.36, -0.1);
    glVertex3f(1.72,1.34, -0.1);
    glVertex3f(1.72,1.34, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.78,1.36, 0.0);
    glVertex3f(1.78,1.36, -0.1);
    glVertex3f(1.78,1.34, -0.1);
    glVertex3f(1.78,1.34, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.72,1.36, 0.0);
    glVertex3f(1.78,1.36, 0.0);
    glVertex3f(1.72,1.36, -0.1);
    glVertex3f(1.78,1.36, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.78,1.34, 0.0);
    glVertex3f(1.72,1.34, 0.0);
    glVertex3f(1.78,1.34, -0.1);
    glVertex3f(1.72,1.34, -0.1);
    glEnd();



    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.72,1.36, 0.0);
    glVertex3f(1.74,1.36, 0.0);
    glVertex3f(1.74,1.23, 0.0);
    glVertex3f(1.72,1.23, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.72,1.36, -0.1);
    glVertex3f(1.74,1.36, -0.1);
    glVertex3f(1.74,1.23, -0.1);
    glVertex3f(1.72,1.23, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.72,1.36, 0.0);
    glVertex3f(1.72,1.36, -0.1);
    glVertex3f(1.72,1.23, -0.1);
    glVertex3f(1.72,1.23, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.74,1.36, 0.0);
    glVertex3f(1.74,1.36, -0.1);
    glVertex3f(1.74,1.23, -0.1);
    glVertex3f(1.74,1.23, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.72,1.36, 0.0);
    glVertex3f(1.74,1.36, 0.0);
    glVertex3f(1.72,1.36, -0.1);
    glVertex3f(1.74,1.36, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.74,1.23, 0.0);
    glVertex3f(1.72,1.23, 0.0);
    glVertex3f(1.74,1.23, -0.1);
    glVertex3f(1.72,1.23, -0.1);
    glEnd();





    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.72,1.31, 0.0);
    glVertex3f(1.78,1.31, 0.0);
    glVertex3f(1.78,1.29, 0.0);
    glVertex3f(1.72,1.29, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.72,1.31, -0.1);
    glVertex3f(1.78,1.31, -0.1);
    glVertex3f(1.78,1.29, -0.1);
    glVertex3f(1.72,1.29, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.72,1.31, 0.0);
    glVertex3f(1.72,1.31, -0.1);
    glVertex3f(1.72,1.29, -0.1);
    glVertex3f(1.72,1.29, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.78,1.31, 0.0);
    glVertex3f(1.78,1.31, -0.1);
    glVertex3f(1.78,1.29, -0.1);
    glVertex3f(1.78,1.29, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.72,1.31, 0.0);
    glVertex3f(1.78,1.31, 0.0);
    glVertex3f(1.72,1.31, -0.1);
    glVertex3f(1.78,1.31, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.78,1.29, 0.0);
    glVertex3f(1.72,1.29, 0.0);
    glVertex3f(1.78,1.29, -0.1);
    glVertex3f(1.72,1.29, -0.1);
    glEnd();



    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.78,1.31, 0.0);
    glVertex3f(1.76,1.31, 0.0);
    glVertex3f(1.76,1.23, 0.0);
    glVertex3f(1.78,1.23, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.78,1.31, -0.1);
    glVertex3f(1.76,1.31, -0.1);
    glVertex3f(1.76,1.23, -0.1);
    glVertex3f(1.78,1.23, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.78,1.31, 0.0);
    glVertex3f(1.78,1.31, -0.1);
    glVertex3f(1.78,1.23, -0.1);
    glVertex3f(1.78,1.23, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.76,1.31, 0.0);
    glVertex3f(1.76,1.31, -0.1);
    glVertex3f(1.76,1.23, -0.1);
    glVertex3f(1.76,1.23, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.78,1.31, 0.0);
    glVertex3f(1.76,1.31, 0.0);
    glVertex3f(1.78,1.31, -0.1);
    glVertex3f(1.76,1.31, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.76,1.23, 0.0);
    glVertex3f(1.78,1.23, 0.0);
    glVertex3f(1.76,1.23, -0.1);
    glVertex3f(1.78,1.23, -0.1);
    glEnd();



    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.72,1.25, 0.0);
    glVertex3f(1.78,1.25, 0.0);
    glVertex3f(1.78,1.23, 0.0);
    glVertex3f(1.72,1.23, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.72,1.25, -0.1);
    glVertex3f(1.78,1.25, -0.1);
    glVertex3f(1.78,1.23, -0.1);
    glVertex3f(1.72,1.23, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.72,1.25, 0.0);
    glVertex3f(1.72,1.25, -0.1);
    glVertex3f(1.72,1.23, -0.1);
    glVertex3f(1.72,1.23, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.78,1.25, 0.0);
    glVertex3f(1.78,1.25, -0.1);
    glVertex3f(1.78,1.23, -0.1);
    glVertex3f(1.78,1.23, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.72,1.25, 0.0);
    glVertex3f(1.78,1.25, 0.0);
    glVertex3f(1.72,1.25, -0.1);
    glVertex3f(1.78,1.25, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.78,1.23, 0.0);
    glVertex3f(1.72,1.23, 0.0);
    glVertex3f(1.78,1.23, -0.1);
    glVertex3f(1.72,1.23, -0.1);
    glEnd();


    //akhir 6

    //angka 6


    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.16,0.94, 0.0);
    glVertex3f(-1.1,0.94, 0.0);
    glVertex3f(-1.1,0.92, 0.0);
    glVertex3f(-1.16,0.92, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.16,0.94, -0.1);
    glVertex3f(-1.1,0.94, -0.1);
    glVertex3f(-1.1,0.92, -0.1);
    glVertex3f(-1.16,0.92, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.16,0.94, 0.0);
    glVertex3f(-1.16,0.94, -0.1);
    glVertex3f(-1.16,0.92, -0.1);
    glVertex3f(-1.16,0.92, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.1,0.94, 0.0);
    glVertex3f(-1.1,0.94, -0.1);
    glVertex3f(-1.1,0.92, -0.1);
    glVertex3f(-1.1,0.92, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.16,0.94, 0.0);
    glVertex3f(-1.1,0.94, 0.0);
    glVertex3f(-1.16,0.94, -0.1);
    glVertex3f(-1.1,0.94, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.1,0.92, 0.0);
    glVertex3f(-1.16,0.92, 0.0);
    glVertex3f(-1.1,0.92, -0.1);
    glVertex3f(-1.16,0.92, -0.1);
    glEnd();




    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.16,0.94, 0.0);
    glVertex3f(-1.14,0.94, 0.0);
    glVertex3f(-1.14,0.83, 0.0);
    glVertex3f(-1.16,0.83, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.16,0.94, -0.1);
    glVertex3f(-1.14,0.94, -0.1);
    glVertex3f(-1.14,0.83, -0.1);
    glVertex3f(-1.16,0.83, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.16,0.94, 0.0);
    glVertex3f(-1.16,0.94, -0.1);
    glVertex3f(-1.16,0.83, -0.1);
    glVertex3f(-1.16,0.83, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.14,0.94, 0.0);
    glVertex3f(-1.14,0.94, -0.1);
    glVertex3f(-1.14,0.83, -0.1);
    glVertex3f(-1.14,0.83, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.16,0.94, 0.0);
    glVertex3f(-1.14,0.94, 0.0);
    glVertex3f(-1.16,0.94, -0.1);
    glVertex3f(-1.14,0.94, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.14,0.83, 0.0);
    glVertex3f(-1.16,0.83, 0.0);
    glVertex3f(-1.14,0.83, -0.1);
    glVertex3f(-1.16,0.83, -0.1);
    glEnd();




    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.16,0.89, 0.0);
    glVertex3f(-1.1,0.89, 0.0);
    glVertex3f(-1.1,0.87, 0.0);
    glVertex3f(-1.16,0.87, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.16,0.89, -0.1);
    glVertex3f(-1.1,0.89, -0.1);
    glVertex3f(-1.1,0.87, -0.1);
    glVertex3f(-1.16,0.87, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.16,0.89, 0.0);
    glVertex3f(-1.16,0.89, -0.1);
    glVertex3f(-1.16,0.87, -0.1);
    glVertex3f(-1.16,0.87, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.1,0.89, 0.0);
    glVertex3f(-1.1,0.89, -0.1);
    glVertex3f(-1.1,0.87, -0.1);
    glVertex3f(-1.1,0.87, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.16,0.89, 0.0);
    glVertex3f(-1.1,0.89, 0.0);
    glVertex3f(-1.16,0.89, -0.1);
    glVertex3f(-1.1,0.89, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.1,0.87, 0.0);
    glVertex3f(-1.16,0.87, 0.0);
    glVertex3f(-1.1,0.87, -0.1);
    glVertex3f(-1.16,0.87, -0.1);
    glEnd();



    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.1,0.89, 0.0);
    glVertex3f(-1.12,0.89, 0.0);
    glVertex3f(-1.12,0.83, 0.0);
    glVertex3f(-1.1,0.83, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.1,0.89, -0.1);
    glVertex3f(-1.12,0.89, -0.1);
    glVertex3f(-1.12,0.83, -0.1);
    glVertex3f(-1.1,0.83, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.1,0.89, 0.0);
    glVertex3f(-1.1,0.89, -0.1);
    glVertex3f(-1.1,0.83, -0.1);
    glVertex3f(-1.1,0.83, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.12,0.89, 0.0);
    glVertex3f(-1.12,0.89, -0.1);
    glVertex3f(-1.12,0.83, -0.1);
    glVertex3f(-1.12,0.83, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.1,0.89, 0.0);
    glVertex3f(-1.12,0.89, 0.0);
    glVertex3f(-1.1,0.89, -0.1);
    glVertex3f(-1.12,0.89, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.12,0.83, 0.0);
    glVertex3f(-1.1,0.83, 0.0);
    glVertex3f(-1.12,0.83, -0.1);
    glVertex3f(-1.1,0.83, -0.1);
    glEnd();



    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.16,0.85, 0.0);
    glVertex3f(-1.1,0.85, 0.0);
    glVertex3f(-1.1,0.83, 0.0);
    glVertex3f(-1.16,0.83, 0.0);
    glEnd();

    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.16,0.85, -0.1);
    glVertex3f(-1.1,0.85, -0.1);
    glVertex3f(-1.1,0.83, -0.1);
    glVertex3f(-1.16,0.83, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.16,0.85, 0.0);
    glVertex3f(-1.16,0.85, -0.1);
    glVertex3f(-1.16,0.83, -0.1);
    glVertex3f(-1.16,0.83, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.1,0.85, 0.0);
    glVertex3f(-1.1,0.85, -0.1);
    glVertex3f(-1.1,0.83, -0.1);
    glVertex3f(-1.1,0.83, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.16,0.85, 0.0);
    glVertex3f(-1.1,0.85, 0.0);
    glVertex3f(-1.16,0.85, -0.1);
    glVertex3f(-1.1,0.85, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.1,0.83, 0.0);
    glVertex3f(-1.16,0.83, 0.0);
    glVertex3f(-1.1,0.83, -0.1);
    glVertex3f(-1.16,0.83, -0.1);
    glEnd();



    //akhir 6

    //angka 8

    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.34,0.94, 0.0);
    glVertex3f(-0.28,0.94, 0.0);
    glVertex3f(-0.28,0.92, 0.0);
    glVertex3f(-0.34,0.92, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.34,0.94, -0.1);
    glVertex3f(-0.28,0.94, -0.1);
    glVertex3f(-0.28,0.92, -0.1);
    glVertex3f(-0.34,0.92, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.34,0.94, 0.0);
    glVertex3f(-0.34,0.94, -0.1);
    glVertex3f(-0.34,0.92, -0.1);
    glVertex3f(-0.34,0.92, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.28,0.94, 0.0);
    glVertex3f(-0.28,0.94, -0.1);
    glVertex3f(-0.28,0.92, -0.1);
    glVertex3f(-0.28,0.92, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.34,0.94, 0.0);
    glVertex3f(-0.28,0.94, 0.0);
    glVertex3f(-0.34,0.94, -0.1);
    glVertex3f(-0.28,0.94, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.28,0.92, 0.0);
    glVertex3f(-0.34,0.92, 0.0);
    glVertex3f(-0.28,0.92, -0.1);
    glVertex3f(-0.34,0.92, -0.1);
    glEnd();




    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.34,0.94, 0.0);
    glVertex3f(-0.32,0.94, 0.0);
    glVertex3f(-0.32,0.83, 0.0);
    glVertex3f(-0.34,0.83, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.34,0.94, -0.1);
    glVertex3f(-0.32,0.94, -0.1);
    glVertex3f(-0.32,0.83, -0.1);
    glVertex3f(-0.34,0.83, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.34,0.94, 0.0);
    glVertex3f(-0.34,0.94, -0.1);
    glVertex3f(-0.34,0.83, -0.1);
    glVertex3f(-0.34,0.83, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.32,0.94, 0.0);
    glVertex3f(-0.32,0.94, -0.1);
    glVertex3f(-0.32,0.83, -0.1);
    glVertex3f(-0.32,0.83, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.34,0.94, 0.0);
    glVertex3f(-0.32,0.94, 0.0);
    glVertex3f(-0.34,0.94, -0.1);
    glVertex3f(-0.32,0.94, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.32,0.83, 0.0);
    glVertex3f(-0.34,0.83, 0.0);
    glVertex3f(-0.32,0.83, -0.1);
    glVertex3f(-0.34,0.83, -0.1);
    glEnd();



    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.34,0.89, 0.0);
    glVertex3f(-0.28,0.89, 0.0);
    glVertex3f(-0.28,0.87, 0.0);
    glVertex3f(-0.34,0.87, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.34,0.89, -0.1);
    glVertex3f(-0.28,0.89, -0.1);
    glVertex3f(-0.28,0.87, -0.1);
    glVertex3f(-0.34,0.87, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.34,0.89, 0.0);
    glVertex3f(-0.34,0.89, -0.1);
    glVertex3f(-0.34,0.87, -0.1);
    glVertex3f(-0.34,0.87, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.28,0.89, 0.0);
    glVertex3f(-0.28,0.89, -0.1);
    glVertex3f(-0.28,0.87, -0.1);
    glVertex3f(-0.28,0.87, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.34,0.89, 0.0);
    glVertex3f(-0.28,0.89, 0.0);
    glVertex3f(-0.34,0.89, -0.1);
    glVertex3f(-0.28,0.89, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.28,0.87, 0.0);
    glVertex3f(-0.34,0.87, 0.0);
    glVertex3f(-0.28,0.87, -0.1);
    glVertex3f(-0.34,0.87, -0.1);
    glEnd();



    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.28,0.94, 0.0);
    glVertex3f(-0.3,0.94, 0.0);
    glVertex3f(-0.3,0.83, 0.0);
    glVertex3f(-0.28,0.83, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.28,0.94, -0.1);
    glVertex3f(-0.3,0.94, -0.1);
    glVertex3f(-0.3,0.83, -0.1);
    glVertex3f(-0.28,0.83, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.28,0.94, 0.0);
    glVertex3f(-0.28,0.94, -0.1);
    glVertex3f(-0.28,0.83, -0.1);
    glVertex3f(-0.28,0.83, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.3,0.94, 0.0);
    glVertex3f(-0.3,0.94, -0.1);
    glVertex3f(-0.3,0.83, -0.1);
    glVertex3f(-0.3,0.83, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.28,0.94, 0.0);
    glVertex3f(-0.3,0.94, 0.0);
    glVertex3f(-0.28,0.94, -0.1);
    glVertex3f(-0.3,0.94, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.3,0.83, 0.0);
    glVertex3f(-0.28,0.83, 0.0);
    glVertex3f(-0.3,0.83, -0.1);
    glVertex3f(-0.28,0.83, -0.1);
    glEnd();



    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.34,0.85, 0.0);
    glVertex3f(-0.28,0.85, 0.0);
    glVertex3f(-0.28,0.83, 0.0);
    glVertex3f(-0.34,0.83, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.34,0.85, -0.1);
    glVertex3f(-0.28,0.85, -0.1);
    glVertex3f(-0.28,0.83, -0.1);
    glVertex3f(-0.34,0.83, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.34,0.85, 0.0);
    glVertex3f(-0.34,0.85, -0.1);
    glVertex3f(-0.34,0.83, -0.1);
    glVertex3f(-0.34,0.83, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.28,0.85, 0.0);
    glVertex3f(-0.28,0.85, -0.1);
    glVertex3f(-0.28,0.83, -0.1);
    glVertex3f(-0.28,0.83, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.34,0.85, 0.0);
    glVertex3f(-0.28,0.85, 0.0);
    glVertex3f(-0.34,0.85, -0.1);
    glVertex3f(-0.28,0.85, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.28,0.83, 0.0);
    glVertex3f(-0.34,0.83, 0.0);
    glVertex3f(-0.28,0.83, -0.1);
    glVertex3f(-0.34,0.83, -0.1);
    glEnd();


    //akhir 8

    //angka 6

    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.48,0.94, 0.0);
    glVertex3f(0.54,0.94, 0.0);
    glVertex3f(0.54,0.92, 0.0);
    glVertex3f(0.48,0.92, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.48,0.94, -0.1);
    glVertex3f(0.54,0.94, -0.1);
    glVertex3f(0.54,0.92, -0.1);
    glVertex3f(0.48,0.92, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.48,0.94, 0.0);
    glVertex3f(0.48,0.94, -0.1);
    glVertex3f(0.48,0.92, -0.1);
    glVertex3f(0.48,0.92, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.54,0.94, 0.0);
    glVertex3f(0.54,0.94, -0.1);
    glVertex3f(0.54,0.92, -0.1);
    glVertex3f(0.54,0.92, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.48,0.94, 0.0);
    glVertex3f(0.54,0.94, 0.0);
    glVertex3f(0.48,0.94, -0.1);
    glVertex3f(0.54,0.94, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.54,0.92, 0.0);
    glVertex3f(0.48,0.92, 0.0);
    glVertex3f(0.54,0.92, -0.1);
    glVertex3f(0.48,0.92, -0.1);
    glEnd();



    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.48,0.94, 0.0);
    glVertex3f(0.5,0.94, 0.0);
    glVertex3f(0.5,0.83, 0.0);
    glVertex3f(0.48,0.83, 0.0);
    glEnd();

    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.48,0.94, -0.1);
    glVertex3f(0.5,0.94, -0.1);
    glVertex3f(0.5,0.83, -0.1);
    glVertex3f(0.48,0.83, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.48,0.94, 0.0);
    glVertex3f(0.48,0.94, -0.1);
    glVertex3f(0.48,0.83, -0.1);
    glVertex3f(0.48,0.83, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.5,0.94, 0.0);
    glVertex3f(0.5,0.94, -0.1);
    glVertex3f(0.5,0.83, -0.1);
    glVertex3f(0.5,0.83, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.48,0.94, 0.0);
    glVertex3f(0.5,0.94, 0.0);
    glVertex3f(0.48,0.94, -0.1);
    glVertex3f(0.5,0.94, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.5,0.83, 0.0);
    glVertex3f(0.48,0.83, 0.0);
    glVertex3f(0.5,0.83, -0.1);
    glVertex3f(0.48,0.83, -0.1);
    glEnd();




    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.48,0.89, 0.0);
    glVertex3f(0.54,0.89, 0.0);
    glVertex3f(0.54,0.87, 0.0);
    glVertex3f(0.48,0.87, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.48,0.89, -0.1);
    glVertex3f(0.54,0.89, -0.1);
    glVertex3f(0.54,0.87, -0.1);
    glVertex3f(0.48,0.87, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.48,0.89, 0.0);
    glVertex3f(0.48,0.89, -0.1);
    glVertex3f(0.48,0.87, -0.1);
    glVertex3f(0.48,0.87, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.54,0.89, 0.0);
    glVertex3f(0.54,0.89, -0.1);
    glVertex3f(0.54,0.87, -0.1);
    glVertex3f(0.54,0.87, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.48,0.89, 0.0);
    glVertex3f(0.54,0.89, 0.0);
    glVertex3f(0.48,0.89, -0.1);
    glVertex3f(0.54,0.89, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.54,0.87, 0.0);
    glVertex3f(0.48,0.87, 0.0);
    glVertex3f(0.54,0.87, -0.1);
    glVertex3f(0.48,0.87, -0.1);
    glEnd();



    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.54,0.89, 0.0);
    glVertex3f(0.52,0.89, 0.0);
    glVertex3f(0.52,0.83, 0.0);
    glVertex3f(0.54,0.83, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.54,0.89, -0.1);
    glVertex3f(0.52,0.89, -0.1);
    glVertex3f(0.52,0.83, -0.1);
    glVertex3f(0.54,0.83, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.54,0.89, 0.0);
    glVertex3f(0.54,0.89, -0.1);
    glVertex3f(0.54,0.83, -0.1);
    glVertex3f(0.54,0.83, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.52,0.89, 0.0);
    glVertex3f(0.52,0.89, -0.1);
    glVertex3f(0.52,0.83, -0.1);
    glVertex3f(0.52,0.83, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.54,0.89, 0.0);
    glVertex3f(0.52,0.89, 0.0);
    glVertex3f(0.54,0.89, -0.1);
    glVertex3f(0.52,0.89, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.52,0.83, 0.0);
    glVertex3f(0.54,0.83, 0.0);
    glVertex3f(0.52,0.83, -0.1);
    glVertex3f(0.54,0.83, -0.1);
    glEnd();



    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.48,0.85, 0.0);
    glVertex3f(0.54,0.85, 0.0);
    glVertex3f(0.54,0.83, 0.0);
    glVertex3f(0.48,0.83, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.48,0.85, -0.1);
    glVertex3f(0.54,0.85, -0.1);
    glVertex3f(0.54,0.83, -0.1);
    glVertex3f(0.48,0.83, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.48,0.85, 0.0);
    glVertex3f(0.48,0.85, -0.1);
    glVertex3f(0.48,0.83, -0.1);
    glVertex3f(0.48,0.83, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.54,0.85, 0.0);
    glVertex3f(0.54,0.85, -0.1);
    glVertex3f(0.54,0.83, -0.1);
    glVertex3f(0.54,0.83, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.48,0.85, 0.0);
    glVertex3f(0.54,0.85, 0.0);
    glVertex3f(0.48,0.85, -0.1);
    glVertex3f(0.54,0.85, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.54,0.83, 0.0);
    glVertex3f(0.48,0.83, 0.0);
    glVertex3f(0.54,0.83, -0.1);
    glVertex3f(0.48,0.83, -0.1);
    glEnd();


    //akhir 6

    //angka 6

    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.89,0.94, 0.0);
    glVertex3f(0.95,0.94, 0.0);
    glVertex3f(0.95,0.92, 0.0);
    glVertex3f(0.89,0.92, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.89,0.94, -0.1);
    glVertex3f(0.95,0.94, -0.1);
    glVertex3f(0.95,0.92, -0.1);
    glVertex3f(0.89,0.92, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.89,0.94, 0.0);
    glVertex3f(0.89,0.94, -0.1);
    glVertex3f(0.89,0.92, -0.1);
    glVertex3f(0.89,0.92, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.95,0.94, 0.0);
    glVertex3f(0.95,0.94, -0.1);
    glVertex3f(0.95,0.92, -0.1);
    glVertex3f(0.95,0.92, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.89,0.94, 0.0);
    glVertex3f(0.95,0.94, 0.0);
    glVertex3f(0.89,0.94, -0.1);
    glVertex3f(0.95,0.94, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.95,0.92, 0.0);
    glVertex3f(0.89,0.92, 0.0);
    glVertex3f(0.95,0.92, -0.1);
    glVertex3f(0.89,0.92, -0.1);
    glEnd();



    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.89,0.94, 0.0);
    glVertex3f(0.87,0.94, 0.0);
    glVertex3f(0.87,0.83, 0.0);
    glVertex3f(0.89,0.83, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.89,0.94, -0.1);
    glVertex3f(0.87,0.94, -0.1);
    glVertex3f(0.87,0.83, -0.1);
    glVertex3f(0.89,0.83, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.89,0.94, 0.0);
    glVertex3f(0.89,0.94, -0.1);
    glVertex3f(0.89,0.83, -0.1);
    glVertex3f(0.89,0.83, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.87,0.94, 0.0);
    glVertex3f(0.87,0.94, -0.1);
    glVertex3f(0.87,0.83, -0.1);
    glVertex3f(0.87,0.83, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.89,0.94, 0.0);
    glVertex3f(0.87,0.94, 0.0);
    glVertex3f(0.89,0.94, -0.1);
    glVertex3f(0.87,0.94, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.87,0.83, 0.0);
    glVertex3f(0.89,0.83, 0.0);
    glVertex3f(0.87,0.83, -0.1);
    glVertex3f(0.89,0.83, -0.1);
    glEnd();



    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.89,0.89, 0.0);
    glVertex3f(0.95,0.89, 0.0);
    glVertex3f(0.95,0.87, 0.0);
    glVertex3f(0.89,0.87, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.89,0.89, -0.1);
    glVertex3f(0.95,0.89, -0.1);
    glVertex3f(0.95,0.87, -0.1);
    glVertex3f(0.89,0.87, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.89,0.89, 0.0);
    glVertex3f(0.89,0.89, -0.1);
    glVertex3f(0.89,0.87, -0.1);
    glVertex3f(0.89,0.87, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.95,0.89, 0.0);
    glVertex3f(0.95,0.89, -0.1);
    glVertex3f(0.95,0.87, -0.1);
    glVertex3f(0.95,0.87, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.89,0.89, 0.0);
    glVertex3f(0.95,0.89, 0.0);
    glVertex3f(0.89,0.89, -0.1);
    glVertex3f(0.95,0.89, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.95,0.87, 0.0);
    glVertex3f(0.89,0.87, 0.0);
    glVertex3f(0.95,0.87, -0.1);
    glVertex3f(0.89,0.87, -0.1);
    glEnd();



    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.95,0.89, 0.0);
    glVertex3f(0.93,0.89, 0.0);
    glVertex3f(0.93,0.83, 0.0);
    glVertex3f(0.95,0.83, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.95,0.89, -0.1);
    glVertex3f(0.93,0.89, -0.1);
    glVertex3f(0.93,0.83, -0.1);
    glVertex3f(0.95,0.83, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.95,0.89, 0.0);
    glVertex3f(0.95,0.89, -0.1);
    glVertex3f(0.95,0.83, -0.1);
    glVertex3f(0.95,0.83, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.93,0.89, 0.0);
    glVertex3f(0.93,0.89, -0.1);
    glVertex3f(0.93,0.83, -0.1);
    glVertex3f(0.93,0.83, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.95,0.89, 0.0);
    glVertex3f(0.93,0.89, 0.0);
    glVertex3f(0.95,0.89, -0.1);
    glVertex3f(0.93,0.89, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.93,0.83, 0.0);
    glVertex3f(0.95,0.83, 0.0);
    glVertex3f(0.93,0.83, -0.1);
    glVertex3f(0.95,0.83, -0.1);
    glEnd();




    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.89,0.85, 0.0);
    glVertex3f(0.95,0.85, 0.0);
    glVertex3f(0.95,0.83, 0.0);
    glVertex3f(0.89,0.83, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.89,0.85, -0.1);
    glVertex3f(0.95,0.85, -0.1);
    glVertex3f(0.95,0.83, -0.1);
    glVertex3f(0.89,0.83, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.89,0.85, 0.0);
    glVertex3f(0.89,0.85, -0.1);
    glVertex3f(0.89,0.83, -0.1);
    glVertex3f(0.89,0.83, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.95,0.85, 0.0);
    glVertex3f(0.95,0.85, -0.1);
    glVertex3f(0.95,0.83, -0.1);
    glVertex3f(0.95,0.83, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.89,0.85, 0.0);
    glVertex3f(0.95,0.85, 0.0);
    glVertex3f(0.89,0.85, -0.1);
    glVertex3f(0.95,0.85, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.95,0.83, 0.0);
    glVertex3f(0.89,0.83, 0.0);
    glVertex3f(0.95,0.83, -0.1);
    glVertex3f(0.89,0.83, -0.1);
    glEnd();



    //akhir 6

    //angka 62

    //angka 2

    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.3,0.94, 0.0);
    glVertex3f(1.36,0.94, 0.0);
    glVertex3f(1.36,0.92, 0.0);
    glVertex3f(1.3,0.92, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.3,0.94, -0.1);
    glVertex3f(1.36,0.94, -0.1);
    glVertex3f(1.36,0.92, -0.1);
    glVertex3f(1.3,0.92, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.3,0.94, 0.0);
    glVertex3f(1.3,0.94, -0.1);
    glVertex3f(1.3,0.92, -0.1);
    glVertex3f(1.3,0.92, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.36,0.94, 0.0);
    glVertex3f(1.36,0.94, -0.1);
    glVertex3f(1.36,0.92, -0.1);
    glVertex3f(1.36,0.92, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.3,0.94, 0.0);
    glVertex3f(1.36,0.94, 0.0);
    glVertex3f(1.3,0.94, -0.1);
    glVertex3f(1.36,0.94, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.36,0.92, 0.0);
    glVertex3f(1.3,0.92, 0.0);
    glVertex3f(1.36,0.92, -0.1);
    glVertex3f(1.3,0.92, -0.1);
    glEnd();



    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.34,0.92, 0.0);
    glVertex3f(1.36,0.92, 0.0);
    glVertex3f(1.36,0.87, 0.0);
    glVertex3f(1.34,0.87, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.34,0.92, -0.1);
    glVertex3f(1.36,0.92, -0.1);
    glVertex3f(1.36,0.87, -0.1);
    glVertex3f(1.34,0.87, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.34,0.92, 0.0);
    glVertex3f(1.34,0.92, -0.1);
    glVertex3f(1.34,0.87, -0.1);
    glVertex3f(1.34,0.87, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.36,0.92, 0.0);
    glVertex3f(1.36,0.92, -0.1);
    glVertex3f(1.36,0.87, -0.1);
    glVertex3f(1.36,0.87, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.34,0.92, 0.0);
    glVertex3f(1.36,0.92, 0.0);
    glVertex3f(1.34,0.92, -0.1);
    glVertex3f(1.36,0.92, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.36,0.87, 0.0);
    glVertex3f(1.34,0.87, 0.0);
    glVertex3f(1.36,0.87, -0.1);
    glVertex3f(1.34,0.87, -0.1);
    glEnd();



    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.3,0.89, 0.0);
    glVertex3f(1.36,0.89, 0.0);
    glVertex3f(1.36,0.87, 0.0);
    glVertex3f(1.3,0.87, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.3,0.89, -0.1);
    glVertex3f(1.36,0.89, -0.1);
    glVertex3f(1.36,0.87, -0.1);
    glVertex3f(1.3,0.87, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.3,0.89, 0.0);
    glVertex3f(1.3,0.89, -0.1);
    glVertex3f(1.36,0.87, -0.1);
    glVertex3f(1.3,0.87, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.36,0.89, 0.0);
    glVertex3f(1.36,0.89, -0.1);
    glVertex3f(1.36,0.87, -0.1);
    glVertex3f(1.36,0.87, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.3,0.89, 0.0);
    glVertex3f(1.36,0.89, 0.0);
    glVertex3f(1.3,0.89, -0.1);
    glVertex3f(1.36,0.89, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.36,0.87, 0.0);
    glVertex3f(1.3,0.87, 0.0);
    glVertex3f(1.36,0.87, -0.1);
    glVertex3f(1.3,0.87, -0.1);
    glEnd();




    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.3,0.89, 0.0);
    glVertex3f(1.32,0.89, 0.0);
    glVertex3f(1.32,0.83, 0.0);
    glVertex3f(1.3,0.83, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.3,0.89, -0.1);
    glVertex3f(1.32,0.89, -0.1);
    glVertex3f(1.32,0.83, -0.1);
    glVertex3f(1.3,0.83, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.3,0.89, 0.0);
    glVertex3f(1.3,0.89, -0.1);
    glVertex3f(1.3,0.83, -0.1);
    glVertex3f(1.3,0.83, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.32,0.89, 0.0);
    glVertex3f(1.32,0.89, -0.1);
    glVertex3f(1.32,0.83, -0.1);
    glVertex3f(1.32,0.83, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.3,0.89, 0.0);
    glVertex3f(1.32,0.89, 0.0);
    glVertex3f(1.3,0.89, -0.1);
    glVertex3f(1.32,0.89, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.32,0.83, 0.0);
    glVertex3f(1.3,0.83, 0.0);
    glVertex3f(1.32,0.83, -0.1);
    glVertex3f(1.3,0.83, -0.1);
    glEnd();




    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.3,0.85, 0.0);
    glVertex3f(1.36,0.85, 0.0);
    glVertex3f(1.36,0.83, 0.0);
    glVertex3f(1.3,0.83, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.3,0.85, -0.1);
    glVertex3f(1.36,0.85, -0.1);
    glVertex3f(1.36,0.83, -0.1);
    glVertex3f(1.3,0.83, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.3,0.85, 0.0);
    glVertex3f(1.3,0.85, -0.1);
    glVertex3f(1.3,0.83, -0.1);
    glVertex3f(1.3,0.83, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.36,0.85, 0.0);
    glVertex3f(1.36,0.85, -0.1);
    glVertex3f(1.36,0.83, -0.1);
    glVertex3f(1.36,0.83, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.3,0.85, 0.0);
    glVertex3f(1.36,0.85, 0.0);
    glVertex3f(1.3,0.85, -0.1);
    glVertex3f(1.36,0.85, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.36,0.83, 0.0);
    glVertex3f(1.3,0.83, 0.0);
    glVertex3f(1.36,0.83, -0.1);
    glVertex3f(1.3,0.83, -0.1);
    glEnd();


    //akhir 2

    //angka 6

    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.22,0.94, 0.0);
    glVertex3f(1.28,0.94, 0.0);
    glVertex3f(1.28,0.92, 0.0);
    glVertex3f(1.22,0.92, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.22,0.94, -0.1);
    glVertex3f(1.28,0.94, -0.1);
    glVertex3f(1.28,0.92, -0.1);
    glVertex3f(1.22,0.92, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.22,0.94, 0.0);
    glVertex3f(1.22,0.94, -0.1);
    glVertex3f(1.22,0.92, -0.1);
    glVertex3f(1.22,0.92, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.28,0.94, 0.0);
    glVertex3f(1.28,0.94, -0.1);
    glVertex3f(1.28,0.92, -0.1);
    glVertex3f(1.28,0.92, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.22,0.94, 0.0);
    glVertex3f(1.28,0.94, 0.0);
    glVertex3f(1.22,0.94, -0.1);
    glVertex3f(1.28,0.94, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.28,0.92, 0.0);
    glVertex3f(1.22,0.92, 0.0);
    glVertex3f(1.28,0.92, -0.1);
    glVertex3f(1.22,0.92, -0.1);
    glEnd();



    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.22,0.94, 0.0);
    glVertex3f(1.24,0.94, 0.0);
    glVertex3f(1.24,0.83, 0.0);
    glVertex3f(1.22,0.83, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.22,0.94, -0.1);
    glVertex3f(1.24,0.94, -0.1);
    glVertex3f(1.24,0.83, -0.1);
    glVertex3f(1.22,0.83, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.22,0.94, 0.0);
    glVertex3f(1.22,0.94, -0.1);
    glVertex3f(1.22,0.83, -0.1);
    glVertex3f(1.22,0.83, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.24,0.94, 0.0);
    glVertex3f(1.24,0.94, -0.1);
    glVertex3f(1.24,0.83, -0.1);
    glVertex3f(1.24,0.83, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.22,0.94, 0.0);
    glVertex3f(1.24,0.94, 0.0);
    glVertex3f(1.22,0.94, -0.1);
    glVertex3f(1.24,0.94, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.24,0.83, 0.0);
    glVertex3f(1.22,0.83, 0.0);
    glVertex3f(1.24,0.83, -0.1);
    glVertex3f(1.22,0.83, -0.1);
    glEnd();




    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.22,0.89, 0.0);
    glVertex3f(1.28,0.89, 0.0);
    glVertex3f(1.28,0.87, 0.0);
    glVertex3f(1.22,0.87, 0.0);
    glEnd();

    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.22,0.89, -0.1);
    glVertex3f(1.28,0.89, -0.1);
    glVertex3f(1.28,0.87, -0.1);
    glVertex3f(1.22,0.87, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.22,0.89, 0.0);
    glVertex3f(1.22,0.89, -0.1);
    glVertex3f(1.22,0.87, -0.1);
    glVertex3f(1.22,0.87, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.28,0.89, 0.0);
    glVertex3f(1.28,0.89, -0.1);
    glVertex3f(1.28,0.87, -0.1);
    glVertex3f(1.28,0.87, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.22,0.89, 0.0);
    glVertex3f(1.28,0.89, 0.0);
    glVertex3f(1.22,0.89, -0.1);
    glVertex3f(1.28,0.89, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.28,0.87, 0.0);
    glVertex3f(1.22,0.87, 0.0);
    glVertex3f(1.28,0.87, -0.1);
    glVertex3f(1.22,0.87, -0.1);
    glEnd();



    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.28,0.89, 0.0);
    glVertex3f(1.26,0.89, 0.0);
    glVertex3f(1.26,0.83, 0.0);
    glVertex3f(1.28,0.83, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.28,0.89, -0.1);
    glVertex3f(1.26,0.89, -0.1);
    glVertex3f(1.26,0.83, -0.1);
    glVertex3f(1.28,0.83, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.28,0.89, 0.0);
    glVertex3f(1.28,0.89, -0.1);
    glVertex3f(1.28,0.83, -0.1);
    glVertex3f(1.28,0.83, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.26,0.89, 0.0);
    glVertex3f(1.26,0.89, -0.1);
    glVertex3f(1.26,0.83, -0.1);
    glVertex3f(1.26,0.83, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.28,0.89, 0.0);
    glVertex3f(1.26,0.89, 0.0);
    glVertex3f(1.28,0.89, -0.1);
    glVertex3f(1.26,0.89, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.26,0.83, 0.0);
    glVertex3f(1.28,0.83, 0.0);
    glVertex3f(1.26,0.83, -0.1);
    glVertex3f(1.28,0.83, -0.1);
    glEnd();



    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.22,0.85, 0.0);
    glVertex3f(1.28,0.85, 0.0);
    glVertex3f(1.28,0.83, 0.0);
    glVertex3f(1.22,0.83, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.22,0.85, -0.1);
    glVertex3f(1.28,0.85, -0.1);
    glVertex3f(1.28,0.83, -0.1);
    glVertex3f(1.22,0.83, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.22,0.85, 0.0);
    glVertex3f(1.22,0.85, -0.1);
    glVertex3f(1.22,0.83, -0.1);
    glVertex3f(1.22,0.83, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.28,0.85, 0.0);
    glVertex3f(1.28,0.85, -0.1);
    glVertex3f(1.28,0.83, -0.1);
    glVertex3f(1.28,0.83, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.22,0.85, 0.0);
    glVertex3f(1.28,0.85, 0.0);
    glVertex3f(1.22,0.85, -0.1);
    glVertex3f(1.28,0.85, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.28,0.83, 0.0);
    glVertex3f(1.22,0.83, 0.0);
    glVertex3f(1.28,0.83, -0.1);
    glVertex3f(1.22,0.83, -0.1);
    glEnd();



    //akhir 6


    //akhir 62

    //angka 6

    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.72,0.94, 0.0);
    glVertex3f(1.78,0.94, 0.0);
    glVertex3f(1.78,0.92, 0.0);
    glVertex3f(1.72,0.92, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.72,0.94, -0.1);
    glVertex3f(1.78,0.94, -0.1);
    glVertex3f(1.78,0.92, -0.1);
    glVertex3f(1.72,0.92, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.72,0.94, 0.0);
    glVertex3f(1.72,0.94, -0.1);
    glVertex3f(1.72,0.92, -0.1);
    glVertex3f(1.72,0.92, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.78,0.94, 0.0);
    glVertex3f(1.78,0.94, -0.1);
    glVertex3f(1.78,0.92, -0.1);
    glVertex3f(1.78,0.92, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.72,0.94, 0.0);
    glVertex3f(1.78,0.94, 0.0);
    glVertex3f(1.72,0.94, -0.1);
    glVertex3f(1.78,0.94, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.78,0.92, 0.0);
    glVertex3f(1.72,0.92, 0.0);
    glVertex3f(1.78,0.92, -0.1);
    glVertex3f(1.72,0.92, -0.1);
    glEnd();




    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.72,0.94, 0.0);
    glVertex3f(1.74,0.94, 0.0);
    glVertex3f(1.74,0.83, 0.0);
    glVertex3f(1.72,0.83, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.72,0.94, -0.1);
    glVertex3f(1.74,0.94, -0.1);
    glVertex3f(1.74,0.83, -0.1);
    glVertex3f(1.72,0.83, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.72,0.94, 0.0);
    glVertex3f(1.72,0.94, -0.1);
    glVertex3f(1.72,0.83, -0.1);
    glVertex3f(1.72,0.83, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.74,0.94, 0.0);
    glVertex3f(1.74,0.94, -0.1);
    glVertex3f(1.74,0.83, -0.1);
    glVertex3f(1.74,0.83, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.72,0.94, 0.0);
    glVertex3f(1.74,0.94, 0.0);
    glVertex3f(1.72,0.94, -0.1);
    glVertex3f(1.74,0.94, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.74,0.83, 0.0);
    glVertex3f(1.72,0.83, 0.0);
    glVertex3f(1.74,0.83, -0.1);
    glVertex3f(1.72,0.83, -0.1);
    glEnd();



    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.72,0.89, 0.0);
    glVertex3f(1.78,0.89, 0.0);
    glVertex3f(1.78,0.87, 0.0);
    glVertex3f(1.72,0.87, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.72,0.89, -0.1);
    glVertex3f(1.78,0.89, -0.1);
    glVertex3f(1.78,0.87, -0.1);
    glVertex3f(1.72,0.87, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.72,0.89, 0.0);
    glVertex3f(1.72,0.89, -0.1);
    glVertex3f(1.72,0.87, -0.1);
    glVertex3f(1.72,0.87, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.78,0.89, 0.0);
    glVertex3f(1.78,0.89, -0.1);
    glVertex3f(1.78,0.87, -0.1);
    glVertex3f(1.78,0.87, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.72,0.89, 0.0);
    glVertex3f(1.78,0.89, 0.0);
    glVertex3f(1.72,0.89, -0.1);
    glVertex3f(1.78,0.89, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.78,0.87, 0.0);
    glVertex3f(1.72,0.87, 0.0);
    glVertex3f(1.78,0.87, -0.1);
    glVertex3f(1.72,0.87, -0.1);
    glEnd();



    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.78,0.89, 0.0);
    glVertex3f(1.76,0.89, 0.0);
    glVertex3f(1.76,0.83, 0.0);
    glVertex3f(1.78,0.83, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.78,0.89, -0.1);
    glVertex3f(1.76,0.89, -0.1);
    glVertex3f(1.76,0.83, -0.1);
    glVertex3f(1.78,0.83, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.78,0.89, 0.0);
    glVertex3f(1.78,0.89, -0.1);
    glVertex3f(1.78,0.83, -0.1);
    glVertex3f(1.78,0.83, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.76,0.89, 0.0);
    glVertex3f(1.76,0.89, -0.1);
    glVertex3f(1.76,0.83, -0.1);
    glVertex3f(1.76,0.83, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.78,0.89, 0.0);
    glVertex3f(1.76,0.89, 0.0);
    glVertex3f(1.78,0.89, -0.1);
    glVertex3f(1.76,0.89, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.76,0.83, 0.0);
    glVertex3f(1.78,0.83, 0.0);
    glVertex3f(1.76,0.83, -0.1);
    glVertex3f(1.78,0.83, -0.1);
    glEnd();




    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.72,0.85, 0.0);
    glVertex3f(1.78,0.85, 0.0);
    glVertex3f(1.78,0.83, 0.0);
    glVertex3f(1.72,0.83, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.72,0.85, -0.1);
    glVertex3f(1.78,0.85, -0.1);
    glVertex3f(1.78,0.83, -0.1);
    glVertex3f(1.72,0.83, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.72,0.85, 0.0);
    glVertex3f(1.72,0.85, -0.1);
    glVertex3f(1.72,0.83, -0.1);
    glVertex3f(1.72,0.83, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.78,0.85, 0.0);
    glVertex3f(1.78,0.85, -0.1);
    glVertex3f(1.78,0.83, -0.1);
    glVertex3f(1.78,0.83, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.72,0.85, 0.0);
    glVertex3f(1.78,0.85, 0.0);
    glVertex3f(1.72,0.85, -0.1);
    glVertex3f(1.78,0.85, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.78,0.83, 0.0);
    glVertex3f(1.72,0.83, 0.0);
    glVertex3f(1.78,0.83, -0.1);
    glVertex3f(1.72,0.83, -0.1);
    glEnd();



    //akhir 6

    //angka 2

    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.75,0.52, 0.0);
    glVertex3f(-0.69,0.52, 0.0);
    glVertex3f(-0.69,0.5, 0.0);
    glVertex3f(-0.75,0.5, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.75,0.52, -0.1);
    glVertex3f(-0.69,0.52, -0.1);
    glVertex3f(-0.69,0.5, -0.1);
    glVertex3f(-0.75,0.5, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.75,0.52, 0.0);
    glVertex3f(-0.75,0.52, -0.1);
    glVertex3f(-0.75,0.5, -0.1);
    glVertex3f(-0.75,0.5, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.69,0.52, 0.0);
    glVertex3f(-0.69,0.52, -0.1);
    glVertex3f(-0.69,0.5, -0.1);
    glVertex3f(-0.69,0.5, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.75,0.52, 0.0);
    glVertex3f(-0.69,0.52, 0.0);
    glVertex3f(-0.75,0.52, -0.1);
    glVertex3f(-0.69,0.52, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.69,0.5, 0.0);
    glVertex3f(-0.75,0.5, 0.0);
    glVertex3f(-0.69,0.5, -0.1);
    glVertex3f(-0.75,0.5, -0.1);
    glEnd();



    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.71,0.5, 0.0);
    glVertex3f(-0.69,0.5, 0.0);
    glVertex3f(-0.69,0.45, 0.0);
    glVertex3f(-0.71,0.45, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.71,0.5, -0.1);
    glVertex3f(-0.69,0.5, -0.1);
    glVertex3f(-0.69,0.45, -0.1);
    glVertex3f(-0.71,0.45, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.71,0.5, 0.0);
    glVertex3f(-0.71,0.5, -0.1);
    glVertex3f(-0.71,0.45, -0.1);
    glVertex3f(-0.71,0.45, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.69,0.5, 0.0);
    glVertex3f(-0.69,0.5, -0.1);
    glVertex3f(-0.69,0.45, -0.1);
    glVertex3f(-0.69,0.45, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.71,0.5, 0.0);
    glVertex3f(-0.69,0.5, 0.0);
    glVertex3f(-0.71,0.5, -0.1);
    glVertex3f(-0.69,0.5, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.69,0.45, 0.0);
    glVertex3f(-0.71,0.45, 0.0);
    glVertex3f(-0.69,0.45, -0.1);
    glVertex3f(-0.71,0.45, -0.1);
    glEnd();




    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.74,0.47, 0.0);
    glVertex3f(-0.69,0.47, 0.0);
    glVertex3f(-0.69,0.45, 0.0);
    glVertex3f(-0.74,0.45, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.74,0.47, -0.1);
    glVertex3f(-0.69,0.47, -0.1);
    glVertex3f(-0.69,0.45, -0.1);
    glVertex3f(-0.74,0.45, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.74,0.47, 0.0);
    glVertex3f(-0.74,0.47, -0.1);
    glVertex3f(-0.74,0.45, -0.1);
    glVertex3f(-0.74,0.45, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.69,0.47, 0.0);
    glVertex3f(-0.69,0.47, -0.1);
    glVertex3f(-0.69,0.45, -0.1);
    glVertex3f(-0.69,0.45, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.74,0.47, 0.0);
    glVertex3f(-0.69,0.47, 0.0);
    glVertex3f(-0.74,0.47, -0.1);
    glVertex3f(-0.69,0.47, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.69,0.45, 0.0);
    glVertex3f(-0.74,0.45, 0.0);
    glVertex3f(-0.69,0.45, -0.1);
    glVertex3f(-0.74,0.45, -0.1);
    glEnd();




    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.75,0.47, 0.0);
    glVertex3f(-0.73,0.47, 0.0);
    glVertex3f(-0.73,0.41, 0.0);
    glVertex3f(-0.75,0.41, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.75,0.47, -0.1);
    glVertex3f(-0.73,0.47, -0.1);
    glVertex3f(-0.73,0.41, -0.1);
    glVertex3f(-0.75,0.41, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.75,0.47, 0.0);
    glVertex3f(-0.75,0.47, -0.1);
    glVertex3f(-0.75,0.41, -0.1);
    glVertex3f(-0.75,0.41, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.73,0.47, 0.0);
    glVertex3f(-0.73,0.47, -0.1);
    glVertex3f(-0.73,0.41, -0.1);
    glVertex3f(-0.73,0.41, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.75,0.47, 0.0);
    glVertex3f(-0.73,0.47, 0.0);
    glVertex3f(-0.75,0.47, -0.1);
    glVertex3f(-0.73,0.47, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.73,0.41, 0.0);
    glVertex3f(-0.75,0.41, 0.0);
    glVertex3f(-0.73,0.41, -0.1);
    glVertex3f(-0.75,0.41, -0.1);
    glEnd();



    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.74,0.43, 0.0);
    glVertex3f(-0.69,0.43, 0.0);
    glVertex3f(-0.69,0.41, 0.0);
    glVertex3f(-0.74,0.41, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.74,0.43, -0.1);
    glVertex3f(-0.69,0.43, -0.1);
    glVertex3f(-0.69,0.41, -0.1);
    glVertex3f(-0.74,0.41, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.74,0.43, 0.0);
    glVertex3f(-0.74,0.43, -0.1);
    glVertex3f(-0.74,0.41, -0.1);
    glVertex3f(-0.74,0.41, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.69,0.43, 0.0);
    glVertex3f(-0.69,0.43, -0.1);
    glVertex3f(-0.69,0.41, -0.1);
    glVertex3f(-0.69,0.41, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.74,0.43, 0.0);
    glVertex3f(-0.69,0.43, 0.0);
    glVertex3f(-0.74,0.43, -0.1);
    glVertex3f(-0.69,0.43, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.69,0.41, 0.0);
    glVertex3f(-0.74,0.41, 0.0);
    glVertex3f(-0.69,0.41, -0.1);
    glVertex3f(-0.74,0.41, -0.1);
    glEnd();


    //akhir 2

    //angka 8

    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.89,0.52, 0.0);
    glVertex3f(0.95,0.52, 0.0);
    glVertex3f(0.95,0.5, 0.0);
    glVertex3f(0.89,0.5, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.89,0.52, -0.1);
    glVertex3f(0.95,0.52, -0.1);
    glVertex3f(0.95,0.5, -0.1);
    glVertex3f(0.89,0.5, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.89,0.52, 0.0);
    glVertex3f(0.89,0.52, -0.1);
    glVertex3f(0.89,0.5, -0.1);
    glVertex3f(0.89,0.5, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.95,0.52, 0.0);
    glVertex3f(0.95,0.52, -0.1);
    glVertex3f(0.95,0.5, -0.1);
    glVertex3f(0.95,0.5, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.89,0.52, 0.0);
    glVertex3f(0.95,0.52, 0.0);
    glVertex3f(0.89,0.52, -0.1);
    glVertex3f(0.95,0.52, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.95,0.5, 0.0);
    glVertex3f(0.89,0.5, 0.0);
    glVertex3f(0.95,0.5, -0.1);
    glVertex3f(0.89,0.5, -0.1);
    glEnd();



    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.89,0.52, 0.0);
    glVertex3f(0.91,0.52, 0.0);
    glVertex3f(0.91,0.41, 0.0);
    glVertex3f(0.89,0.41, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.89,0.52, -0.1);
    glVertex3f(0.91,0.52, -0.1);
    glVertex3f(0.91,0.41, -0.1);
    glVertex3f(0.89,0.41, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.89,0.52, 0.0);
    glVertex3f(0.89,0.52, -0.1);
    glVertex3f(0.89,0.41, -0.1);
    glVertex3f(0.89,0.41, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.91,0.52, 0.0);
    glVertex3f(0.91,0.52, -0.1);
    glVertex3f(0.91,0.41, -0.1);
    glVertex3f(0.91,0.41, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.89,0.52, 0.0);
    glVertex3f(0.91,0.52, 0.0);
    glVertex3f(0.89,0.52, -0.1);
    glVertex3f(0.91,0.52, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.91,0.41, 0.0);
    glVertex3f(0.89,0.41, 0.0);
    glVertex3f(0.91,0.41, -0.1);
    glVertex3f(0.89,0.41, -0.1);
    glEnd();



    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.89,0.47, 0.0);
    glVertex3f(0.95,0.47, 0.0);
    glVertex3f(0.95,0.45, 0.0);
    glVertex3f(0.89,0.45, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.89,0.47, -0.1);
    glVertex3f(0.95,0.47, -0.1);
    glVertex3f(0.95,0.45, -0.1);
    glVertex3f(0.89,0.45, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.89,0.47, 0.0);
    glVertex3f(0.89,0.47, -0.1);
    glVertex3f(0.89,0.45, -0.1);
    glVertex3f(0.89,0.45, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.95,0.47, 0.0);
    glVertex3f(0.95,0.47, -0.1);
    glVertex3f(0.95,0.45, -0.1);
    glVertex3f(0.95,0.45, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.89,0.47, 0.0);
    glVertex3f(0.95,0.47, 0.0);
    glVertex3f(0.89,0.47, -0.1);
    glVertex3f(0.95,0.47, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.95,0.45, 0.0);
    glVertex3f(0.89,0.45, 0.0);
    glVertex3f(0.95,0.45, -0.1);
    glVertex3f(0.89,0.45, -0.1);
    glEnd();



    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.95,0.52, 0.0);
    glVertex3f(0.93,0.52, 0.0);
    glVertex3f(0.93,0.41, 0.0);
    glVertex3f(0.95,0.41, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.95,0.52, -0.1);
    glVertex3f(0.93,0.52, -0.1);
    glVertex3f(0.93,0.41, -0.1);
    glVertex3f(0.95,0.41, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.95,0.52, 0.0);
    glVertex3f(0.95,0.52, -0.1);
    glVertex3f(0.95,0.41, -0.1);
    glVertex3f(0.95,0.41, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.93,0.52, 0.0);
    glVertex3f(0.93,0.52, -0.1);
    glVertex3f(0.93,0.41, -0.1);
    glVertex3f(0.93,0.41, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.95,0.52, 0.0);
    glVertex3f(0.93,0.52, 0.0);
    glVertex3f(0.95,0.52, -0.1);
    glVertex3f(0.93,0.52, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.93,0.41, 0.0);
    glVertex3f(0.95,0.41, 0.0);
    glVertex3f(0.93,0.41, -0.1);
    glVertex3f(0.95,0.41, -0.1);
    glEnd();



    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.89,0.43, 0.0);
    glVertex3f(0.95,0.43, 0.0);
    glVertex3f(0.95,0.41, 0.0);
    glVertex3f(0.89,0.41, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.89,0.43, -0.1);
    glVertex3f(0.95,0.43, -0.1);
    glVertex3f(0.95,0.41, -0.1);
    glVertex3f(0.89,0.41, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.89,0.43, 0.0);
    glVertex3f(0.89,0.43, -0.1);
    glVertex3f(0.89,0.41, -0.1);
    glVertex3f(0.89,0.41, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.95,0.43, 0.0);
    glVertex3f(0.95,0.43, -0.1);
    glVertex3f(0.95,0.41, -0.1);
    glVertex3f(0.95,0.41, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.89,0.43, 0.0);
    glVertex3f(0.95,0.43, 0.0);
    glVertex3f(0.89,0.43, -0.1);
    glVertex3f(0.95,0.43, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.95,0.41, 0.0);
    glVertex3f(0.89,0.41, 0.0);
    glVertex3f(0.95,0.41, -0.1);
    glVertex3f(0.89,0.41, -0.1);
    glEnd();



    //akhir 8

    //angka 6

    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.72,0.52, 0.0);
    glVertex3f(1.78,0.52, 0.0);
    glVertex3f(1.78,0.5, 0.0);
    glVertex3f(1.72,0.5, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.72,0.52, -0.1);
    glVertex3f(1.78,0.52, -0.1);
    glVertex3f(1.78,0.5, -0.1);
    glVertex3f(1.72,0.5, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.72,0.52, 0.0);
    glVertex3f(1.72,0.52, -0.1);
    glVertex3f(1.72,0.5, -0.1);
    glVertex3f(1.72,0.5, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.78,0.52, 0.0);
    glVertex3f(1.78,0.52, -0.1);
    glVertex3f(1.78,0.5, -0.1);
    glVertex3f(1.78,0.5, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.72,0.52, 0.0);
    glVertex3f(1.78,0.52, 0.0);
    glVertex3f(1.72,0.52, -0.1);
    glVertex3f(1.78,0.52, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.78,0.5, 0.0);
    glVertex3f(1.72,0.5, 0.0);
    glVertex3f(1.78,0.5, -0.1);
    glVertex3f(1.72,0.5, -0.1);
    glEnd();



    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.72,0.52, 0.0);
    glVertex3f(1.74,0.52, 0.0);
    glVertex3f(1.74,0.41, 0.0);
    glVertex3f(1.72,0.41, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.72,0.52, -0.1);
    glVertex3f(1.74,0.52, -0.1);
    glVertex3f(1.74,0.41, -0.1);
    glVertex3f(1.72,0.41, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.72,0.52, 0.0);
    glVertex3f(1.72,0.52, -0.1);
    glVertex3f(1.72,0.41, -0.1);
    glVertex3f(1.72,0.41, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.74,0.52, 0.0);
    glVertex3f(1.74,0.52, -0.1);
    glVertex3f(1.74,0.41, -0.1);
    glVertex3f(1.74,0.41, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.72,0.52, 0.0);
    glVertex3f(1.74,0.52, 0.0);
    glVertex3f(1.72,0.52, -0.1);
    glVertex3f(1.74,0.52, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.74,0.41, 0.0);
    glVertex3f(1.72,0.41, 0.0);
    glVertex3f(1.74,0.41, -0.1);
    glVertex3f(1.72,0.41, -0.1);
    glEnd();




    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.72,0.47, 0.0);
    glVertex3f(1.78,0.47, 0.0);
    glVertex3f(1.78,0.45, 0.0);
    glVertex3f(1.72,0.45, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.72,0.47, -0.1);
    glVertex3f(1.78,0.47, -0.1);
    glVertex3f(1.78,0.45, -0.1);
    glVertex3f(1.72,0.45, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.72,0.47, 0.0);
    glVertex3f(1.72,0.47, -0.1);
    glVertex3f(1.72,0.45, -0.1);
    glVertex3f(1.72,0.45, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.78,0.47, 0.0);
    glVertex3f(1.78,0.47, -0.1);
    glVertex3f(1.78,0.45, -0.1);
    glVertex3f(1.78,0.45, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.72,0.47, 0.0);
    glVertex3f(1.78,0.47, 0.0);
    glVertex3f(1.72,0.47, -0.1);
    glVertex3f(1.78,0.47, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.78,0.45, 0.0);
    glVertex3f(1.72,0.45, 0.0);
    glVertex3f(1.78,0.45, -0.1);
    glVertex3f(1.72,0.45, -0.1);
    glEnd();



    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.78,0.47, 0.0);
    glVertex3f(1.76,0.47, 0.0);
    glVertex3f(1.76,0.41, 0.0);
    glVertex3f(1.78,0.41, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.78,0.47, -0.1);
    glVertex3f(1.76,0.47, -0.1);
    glVertex3f(1.76,0.41, -0.1);
    glVertex3f(1.78,0.41, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.78,0.47, 0.0);
    glVertex3f(1.78,0.47, -0.1);
    glVertex3f(1.78,0.41, -0.1);
    glVertex3f(1.78,0.41, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.76,0.47, 0.0);
    glVertex3f(1.76,0.47, -0.1);
    glVertex3f(1.76,0.41, -0.1);
    glVertex3f(1.76,0.41, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.78,0.47, 0.0);
    glVertex3f(1.76,0.47, 0.0);
    glVertex3f(1.78,0.47, -0.1);
    glVertex3f(1.76,0.47, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.76,0.41, 0.0);
    glVertex3f(1.78,0.41, 0.0);
    glVertex3f(1.76,0.41, -0.1);
    glVertex3f(1.78,0.41, -0.1);
    glEnd();



    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.72,0.43, 0.0);
    glVertex3f(1.78,0.43, 0.0);
    glVertex3f(1.78,0.41, 0.0);
    glVertex3f(1.72,0.41, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.72,0.43, -0.1);
    glVertex3f(1.78,0.43, -0.1);
    glVertex3f(1.78,0.41, -0.1);
    glVertex3f(1.72,0.41, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.72,0.43, 0.0);
    glVertex3f(1.72,0.43, -0.1);
    glVertex3f(1.72,0.41, -0.1);
    glVertex3f(1.72,0.41, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.78,0.43, 0.0);
    glVertex3f(1.78,0.43, -0.1);
    glVertex3f(1.78,0.41, -0.1);
    glVertex3f(1.78,0.41, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.72,0.43, 0.0);
    glVertex3f(1.78,0.43, 0.0);
    glVertex3f(1.72,0.43, -0.1);
    glVertex3f(1.78,0.43, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.78,0.41, 0.0);
    glVertex3f(1.72,0.41, 0.0);
    glVertex3f(1.78,0.41, -0.1);
    glVertex3f(1.72,0.41, -0.1);
    glEnd();


    //akhir 6

    //angka 8

    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.16,0.1, 0.0);
    glVertex3f(-1.10,0.1, 0.0);
    glVertex3f(-1.10,0.08, 0.0);
    glVertex3f(-1.16,0.08, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.16,0.1, -0.1);
    glVertex3f(-1.10,0.1, -0.1);
    glVertex3f(-1.10,0.08, -0.1);
    glVertex3f(-1.16,0.08, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.16,0.1, 0.0);
    glVertex3f(-1.16,0.1, -0.1);
    glVertex3f(-1.16,0.08, -0.1);
    glVertex3f(-1.16,0.08, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.10,0.1, 0.0);
    glVertex3f(-1.10,0.1, -0.1);
    glVertex3f(-1.10,0.08, -0.1);
    glVertex3f(-1.10,0.08, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.16,0.1, 0.0);
    glVertex3f(-1.10,0.1, 0.0);
    glVertex3f(-1.16,0.1, -0.1);
    glVertex3f(-1.10,0.1, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.10,0.08, 0.0);
    glVertex3f(-1.16,0.08, 0.0);
    glVertex3f(-1.10,0.08, -0.1);
    glVertex3f(-1.16,0.08, -0.1);
    glEnd();



    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.16,0.1, 0.0);
    glVertex3f(-1.14,0.1, 0.0);
    glVertex3f(-1.14,-0.01, 0.0);
    glVertex3f(-1.16,-0.01, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.16,0.1, -0.1);
    glVertex3f(-1.14,0.1, -0.1);
    glVertex3f(-1.14,-0.01, -0.1);
    glVertex3f(-1.16,-0.01, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.16,0.1, 0.0);
    glVertex3f(-1.16,0.1, -0.1);
    glVertex3f(-1.16,-0.01, -0.1);
    glVertex3f(-1.16,-0.01, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.14,0.1, 0.0);
    glVertex3f(-1.14,0.1, -0.1);
    glVertex3f(-1.14,-0.01, -0.1);
    glVertex3f(-1.14,-0.01, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.16,0.1, 0.0);
    glVertex3f(-1.14,0.1, 0.0);
    glVertex3f(-1.16,0.1, -0.1);
    glVertex3f(-1.14,0.1, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.14,-0.01, 0.0);
    glVertex3f(-1.16,-0.01, 0.0);
    glVertex3f(-1.14,-0.01, -0.1);
    glVertex3f(-1.16,-0.01, -0.1);
    glEnd();



    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.16,0.05, 0.0);
    glVertex3f(-1.10,0.05, 0.0);
    glVertex3f(-1.10,0.03, 0.0);
    glVertex3f(-1.16,0.03, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.16,0.05, -0.1);
    glVertex3f(-1.10,0.05, -0.1);
    glVertex3f(-1.10,0.03, -0.1);
    glVertex3f(-1.16,0.03, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.16,0.05, 0.0);
    glVertex3f(-1.16,0.05, -0.1);
    glVertex3f(-1.16,0.03, -0.1);
    glVertex3f(-1.16,0.03, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.10,0.05, 0.0);
    glVertex3f(-1.10,0.05, -0.1);
    glVertex3f(-1.10,0.03, -0.1);
    glVertex3f(-1.10,0.03, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.16,0.05, 0.0);
    glVertex3f(-1.10,0.05, 0.0);
    glVertex3f(-1.16,0.05, -0.1);
    glVertex3f(-1.10,0.05, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.10,0.03, 0.0);
    glVertex3f(-1.16,0.03, 0.0);
    glVertex3f(-1.10,0.03, -0.1);
    glVertex3f(-1.16,0.03, -0.1);
    glEnd();




    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.10,0.1, 0.0);
    glVertex3f(-1.12,0.1, 0.0);
    glVertex3f(-1.12,-0.01, 0.0);
    glVertex3f(-1.10,-0.01, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.10,0.1, -0.1);
    glVertex3f(-1.12,0.1, -0.1);
    glVertex3f(-1.12,-0.01, -0.1);
    glVertex3f(-1.10,-0.01, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.10,0.1, 0.0);
    glVertex3f(-1.10,0.1, -0.1);
    glVertex3f(-1.10,-0.01, -0.1);
    glVertex3f(-1.10,-0.01, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.12,0.1, 0.0);
    glVertex3f(-1.12,0.1, -0.1);
    glVertex3f(-1.12,-0.01, -0.1);
    glVertex3f(-1.12,-0.01, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.10,0.1, 0.0);
    glVertex3f(-1.12,0.1, 0.0);
    glVertex3f(-1.10,0.1, -0.1);
    glVertex3f(-1.12,0.1, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.12,-0.01, 0.0);
    glVertex3f(-1.10,-0.01, 0.0);
    glVertex3f(-1.12,-0.01, -0.1);
    glVertex3f(-1.10,-0.01, -0.1);
    glEnd();




    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.16,0.01, 0.0);
    glVertex3f(-1.10,0.01, 0.0);
    glVertex3f(-1.10,-0.01, 0.0);
    glVertex3f(-1.16,-0.01, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.16,0.01, -0.1);
    glVertex3f(-1.10,0.01, -0.1);
    glVertex3f(-1.10,-0.01, -0.1);
    glVertex3f(-1.16,-0.01, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.16,0.01, 0.0);
    glVertex3f(-1.16,0.01, -0.1);
    glVertex3f(-1.16,-0.01, -0.1);
    glVertex3f(-1.16,-0.01, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.10,0.01, 0.0);
    glVertex3f(-1.10,0.01, -0.1);
    glVertex3f(-1.10,-0.01, -0.1);
    glVertex3f(-1.10,-0.01, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.16,0.01, 0.0);
    glVertex3f(-1.10,0.01, 0.0);
    glVertex3f(-1.16,0.01, -0.1);
    glVertex3f(-1.10,0.01, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.10,-0.01, 0.0);
    glVertex3f(-1.16,-0.01, 0.0);
    glVertex3f(-1.10,-0.01, -0.1);
    glVertex3f(-1.16,-0.01, -0.1);
    glEnd();



    //akhir 8

    //angka 2

    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.48,0.10, 0.0);
    glVertex3f(0.54,0.10, 0.0);
    glVertex3f(0.54,0.12, 0.0);
    glVertex3f(0.48,0.12, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.48,0.10, -0.1);
    glVertex3f(0.54,0.10, -0.1);
    glVertex3f(0.54,0.12, -0.1);
    glVertex3f(0.48,0.12, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.48,0.10, 0.0);
    glVertex3f(0.48,0.10, -0.1);
    glVertex3f(0.48,0.12, -0.1);
    glVertex3f(0.48,0.12, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.54,0.10, 0.0);
    glVertex3f(0.54,0.10, -0.1);
    glVertex3f(0.54,0.12, -0.1);
    glVertex3f(0.54,0.12, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.48,0.10, 0.0);
    glVertex3f(0.54,0.10, 0.0);
    glVertex3f(0.48,0.10, -0.1);
    glVertex3f(0.54,0.10, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.54,0.12, 0.0);
    glVertex3f(0.48,0.12, 0.0);
    glVertex3f(0.54,0.12, -0.1);
    glVertex3f(0.48,0.12, -0.1);
    glEnd();



    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.52,0.12, 0.0);
    glVertex3f(0.54,0.12, 0.0);
    glVertex3f(0.54,0.07, 0.0);
    glVertex3f(0.52,0.07, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.52,0.12, -0.1);
    glVertex3f(0.54,0.12, -0.1);
    glVertex3f(0.54,0.07, -0.1);
    glVertex3f(0.52,0.07, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.52,0.12, 0.0);
    glVertex3f(0.52,0.12, -0.1);
    glVertex3f(0.52,0.07, -0.1);
    glVertex3f(0.52,0.07, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.54,0.12, 0.0);
    glVertex3f(0.54,0.12, -0.1);
    glVertex3f(0.54,0.07, -0.1);
    glVertex3f(0.54,0.07, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.52,0.12, 0.0);
    glVertex3f(0.54,0.12, 0.0);
    glVertex3f(0.52,0.12, -0.1);
    glVertex3f(0.54,0.12, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.54,0.07, 0.0);
    glVertex3f(0.52,0.07, 0.0);
    glVertex3f(0.54,0.07, -0.1);
    glVertex3f(0.52,0.07, -0.1);
    glEnd();



    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.48,0.05, 0.0);
    glVertex3f(0.54,0.05, 0.0);
    glVertex3f(0.54,0.07, 0.0);
    glVertex3f(0.48,0.07, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.48,0.05, -0.1);
    glVertex3f(0.54,0.05, -0.1);
    glVertex3f(0.54,0.07, -0.1);
    glVertex3f(0.48,0.07, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.48,0.05, 0.0);
    glVertex3f(0.48,0.05, -0.1);
    glVertex3f(0.48,0.07, -0.1);
    glVertex3f(0.48,0.07, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.54,0.05, 0.0);
    glVertex3f(0.54,0.05, -0.1);
    glVertex3f(0.54,0.07, -0.1);
    glVertex3f(0.54,0.07, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.48,0.05, 0.0);
    glVertex3f(0.54,0.05, 0.0);
    glVertex3f(0.48,0.05, -0.1);
    glVertex3f(0.54,0.05, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.54,0.07, 0.0);
    glVertex3f(0.48,0.07, 0.0);
    glVertex3f(0.54,0.07, -0.1);
    glVertex3f(0.48,0.07, -0.1);
    glEnd();



    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.48,0.05, 0.0);
    glVertex3f(0.5,0.05, 0.0);
    glVertex3f(0.5,0.03, 0.0);
    glVertex3f(0.48,0.03, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.48,0.05, -0.1);
    glVertex3f(0.5,0.05, -0.1);
    glVertex3f(0.5,0.03, -0.1);
    glVertex3f(0.48,0.03, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.48,0.05, 0.0);
    glVertex3f(0.48,0.05, -0.1);
    glVertex3f(0.48,0.03, -0.1);
    glVertex3f(0.48,0.03, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.5,0.05, 0.0);
    glVertex3f(0.5,0.05, -0.1);
    glVertex3f(0.5,0.03, -0.1);
    glVertex3f(0.5,0.03, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.48,0.05, 0.0);
    glVertex3f(0.5,0.05, 0.0);
    glVertex3f(0.48,0.05, -0.1);
    glVertex3f(0.5,0.05, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.5,0.03, 0.0);
    glVertex3f(0.48,0.03, 0.0);
    glVertex3f(0.5,0.03, -0.1);
    glVertex3f(0.48,0.03, -0.1);
    glEnd();



    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.48,0.01, 0.0);
    glVertex3f(0.54,0.01, 0.0);
    glVertex3f(0.54,0.03, 0.0);
    glVertex3f(0.48,0.03, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.48,0.01, -0.1);
    glVertex3f(0.54,0.01, -0.1);
    glVertex3f(0.54,0.03, -0.1);
    glVertex3f(0.48,0.03, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.48,0.01, 0.0);
    glVertex3f(0.48,0.01, -0.1);
    glVertex3f(0.48,0.03, -0.1);
    glVertex3f(0.48,0.03, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.54,0.01, 0.0);
    glVertex3f(0.54,0.01, -0.1);
    glVertex3f(0.54,0.03, -0.1);
    glVertex3f(0.54,0.03, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.48,0.01, 0.0);
    glVertex3f(0.54,0.01, 0.0);
    glVertex3f(0.48,0.01, -0.1);
    glVertex3f(0.54,0.01, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.54,0.03, 0.0);
    glVertex3f(0.48,0.03, 0.0);
    glVertex3f(0.54,0.03, -0.1);
    glVertex3f(0.48,0.03, -0.1);
    glEnd();



    //akhir 2

    //angka 6

    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.57,-0.295, 0.0);
    glVertex3f(-1.51,-0.295, 0.0);
    glVertex3f(-1.51,-0.315, 0.0);
    glVertex3f(-1.57,-0.315, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.57,-0.295, -0.1);
    glVertex3f(-1.51,-0.295, -0.1);
    glVertex3f(-1.51,-0.315, -0.1);
    glVertex3f(-1.57,-0.315, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.57,-0.295, 0.0);
    glVertex3f(-1.57,-0.295, -0.1);
    glVertex3f(-1.57,-0.315, -0.1);
    glVertex3f(-1.57,-0.315, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.51,-0.295, 0.0);
    glVertex3f(-1.51,-0.295, -0.1);
    glVertex3f(-1.51,-0.315, -0.1);
    glVertex3f(-1.51,-0.315, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.57,-0.295, 0.0);
    glVertex3f(-1.51,-0.295, 0.0);
    glVertex3f(-1.57,-0.295, -0.1);
    glVertex3f(-1.51,-0.295, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.51,-0.315, 0.0);
    glVertex3f(-1.57,-0.315, 0.0);
    glVertex3f(-1.51,-0.315, -0.1);
    glVertex3f(-1.57,-0.315, -0.1);
    glEnd();



    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.57,-0.295, 0.0);
    glVertex3f(-1.59,-0.295, 0.0);
    glVertex3f(-1.59,-0.405, 0.0);
    glVertex3f(-1.57,-0.405, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.57,-0.295, -0.1);
    glVertex3f(-1.59,-0.295, -0.1);
    glVertex3f(-1.59,-0.405, -0.1);
    glVertex3f(-1.57,-0.405, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.57,-0.295, 0.0);
    glVertex3f(-1.57,-0.295, -0.1);
    glVertex3f(-1.57,-0.405, -0.1);
    glVertex3f(-1.57,-0.405, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.59,-0.295, 0.0);
    glVertex3f(-1.59,-0.295, -0.1);
    glVertex3f(-1.59,-0.405, -0.1);
    glVertex3f(-1.59,-0.405, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.57,-0.295, 0.0);
    glVertex3f(-1.59,-0.295, 0.0);
    glVertex3f(-1.57,-0.295, -0.1);
    glVertex3f(-1.59,-0.295, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.59,-0.405, 0.0);
    glVertex3f(-1.57,-0.405, 0.0);
    glVertex3f(-1.59,-0.405, -0.1);
    glVertex3f(-1.57,-0.405, -0.1);
    glEnd();




    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.57,-0.345, 0.0);
    glVertex3f(-1.51,-0.345, 0.0);
    glVertex3f(-1.51,-0.365, 0.0);
    glVertex3f(-1.57,-0.365, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.57,-0.345, -0.1);
    glVertex3f(-1.51,-0.345, -0.1);
    glVertex3f(-1.51,-0.365, -0.1);
    glVertex3f(-1.57,-0.365, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.57,-0.345, 0.0);
    glVertex3f(-1.57,-0.345, -0.1);
    glVertex3f(-1.57,-0.365, -0.1);
    glVertex3f(-1.57,-0.365, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.51,-0.345, 0.0);
    glVertex3f(-1.51,-0.345, -0.1);
    glVertex3f(-1.51,-0.365, -0.1);
    glVertex3f(-1.51,-0.365, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.57,-0.345, 0.0);
    glVertex3f(-1.51,-0.345, 0.0);
    glVertex3f(-1.57,-0.345, -0.1);
    glVertex3f(-1.51,-0.345, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.51,-0.365, 0.0);
    glVertex3f(-1.57,-0.365, 0.0);
    glVertex3f(-1.51,-0.365, -0.1);
    glVertex3f(-1.57,-0.365, -0.1);
    glEnd();



    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.51,-0.345, 0.0);
    glVertex3f(-1.53,-0.345, 0.0);
    glVertex3f(-1.53,-0.405, 0.0);
    glVertex3f(-1.51,-0.405, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.51,-0.345, -0.1);
    glVertex3f(-1.53,-0.345, -0.1);
    glVertex3f(-1.53,-0.405, -0.1);
    glVertex3f(-1.51,-0.405, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.51,-0.345, 0.0);
    glVertex3f(-1.51,-0.345, -0.1);
    glVertex3f(-1.51,-0.405, -0.1);
    glVertex3f(-1.51,-0.405, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.53,-0.345, 0.0);
    glVertex3f(-1.53,-0.345, -0.1);
    glVertex3f(-1.53,-0.405, -0.1);
    glVertex3f(-1.53,-0.405, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.51,-0.345, 0.0);
    glVertex3f(-1.53,-0.345, 0.0);
    glVertex3f(-1.51,-0.345, -0.1);
    glVertex3f(-1.53,-0.345, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.53,-0.405, 0.0);
    glVertex3f(-1.51,-0.405, 0.0);
    glVertex3f(-1.53,-0.405, -0.1);
    glVertex3f(-1.51,-0.405, -0.1);
    glEnd();



    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.57,-0.385, 0.0);
    glVertex3f(-1.51,-0.385, 0.0);
    glVertex3f(-1.51,-0.405, 0.0);
    glVertex3f(-1.57,-0.405, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.57,-0.385, -0.1);
    glVertex3f(-1.51,-0.385, -0.1);
    glVertex3f(-1.51,-0.405, -0.1);
    glVertex3f(-1.57,-0.405, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.57,-0.385, 0.0);
    glVertex3f(-1.57,-0.385, -0.1);
    glVertex3f(-1.57,-0.405, -0.1);
    glVertex3f(-1.57,-0.405, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.51,-0.385, 0.0);
    glVertex3f(-1.51,-0.385, -0.1);
    glVertex3f(-1.51,-0.405, -0.1);
    glVertex3f(-1.51,-0.405, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.57,-0.385, 0.0);
    glVertex3f(-1.51,-0.385, 0.0);
    glVertex3f(-1.57,-0.385, -0.1);
    glVertex3f(-1.51,-0.385, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.51,-0.405, 0.0);
    glVertex3f(-1.57,-0.405, 0.0);
    glVertex3f(-1.51,-0.405, -0.1);
    glVertex3f(-1.57,-0.405, -0.1);
    glEnd();



    //akhir 6

    //angka 2

    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.07,-0.32, 0.0);
    glVertex3f(0.13,-0.32, 0.0);
    glVertex3f(0.13,-0.34, 0.0);
    glVertex3f(0.07,-0.34, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.07,-0.32, -0.1);
    glVertex3f(0.13,-0.32, -0.1);
    glVertex3f(0.13,-0.34, -0.1);
    glVertex3f(0.07,-0.34, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.07,-0.32, 0.0);
    glVertex3f(0.07,-0.32, -0.1);
    glVertex3f(0.07,-0.34, -0.1);
    glVertex3f(0.07,-0.34, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.13,-0.32, 0.0);
    glVertex3f(0.13,-0.32, -0.1);
    glVertex3f(0.13,-0.34, -0.1);
    glVertex3f(0.13,-0.34, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.07,-0.32, 0.0);
    glVertex3f(0.13,-0.32, 0.0);
    glVertex3f(0.07,-0.32, -0.1);
    glVertex3f(0.13,-0.32, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.13,-0.34, 0.0);
    glVertex3f(0.07,-0.34, 0.0);
    glVertex3f(0.13,-0.34, -0.1);
    glVertex3f(0.07,-0.34, -0.1);
    glEnd();




    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.11,-0.34, 0.0);
    glVertex3f(0.13,-0.34, 0.0);
    glVertex3f(0.13,-0.39, 0.0);
    glVertex3f(0.11,-0.39, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.11,-0.34, -0.1);
    glVertex3f(0.13,-0.34, -0.1);
    glVertex3f(0.13,-0.39, -0.1);
    glVertex3f(0.11,-0.39, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.11,-0.34, 0.0);
    glVertex3f(0.11,-0.34, -0.1);
    glVertex3f(0.11,-0.39, -0.1);
    glVertex3f(0.11,-0.39, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.13,-0.34, 0.0);
    glVertex3f(0.13,-0.34, -0.1);
    glVertex3f(0.13,-0.39, -0.1);
    glVertex3f(0.13,-0.39, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.11,-0.34, 0.0);
    glVertex3f(0.13,-0.34, 0.0);
    glVertex3f(0.11,-0.34, -0.1);
    glVertex3f(0.13,-0.34, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.13,-0.39, 0.0);
    glVertex3f(0.11,-0.39, 0.0);
    glVertex3f(0.13,-0.39, -0.1);
    glVertex3f(0.11,-0.39, -0.1);
    glEnd();


    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.07,-0.37, 0.0);
    glVertex3f(0.13,-0.37, 0.0);
    glVertex3f(0.13,-0.39, 0.0);
    glVertex3f(0.07,-0.39, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.07,-0.37, -0.1);
    glVertex3f(0.13,-0.37, -0.1);
    glVertex3f(0.13,-0.39, -0.1);
    glVertex3f(0.07,-0.39, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.07,-0.37, 0.0);
    glVertex3f(0.07,-0.37, -0.1);
    glVertex3f(0.07,-0.39, -0.1);
    glVertex3f(0.07,-0.39, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.13,-0.37, 0.0);
    glVertex3f(0.13,-0.37, -0.1);
    glVertex3f(0.13,-0.39, -0.1);
    glVertex3f(0.13,-0.39, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.07,-0.37, 0.0);
    glVertex3f(0.13,-0.37, 0.0);
    glVertex3f(0.07,-0.37, -0.1);
    glVertex3f(0.13,-0.37, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.13,-0.39, 0.0);
    glVertex3f(0.07,-0.39, 0.0);
    glVertex3f(0.13,-0.39, -0.1);
    glVertex3f(0.07,-0.39, -0.1);
    glEnd();



    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.07,-0.37, 0.0);
    glVertex3f(0.09,-0.37, 0.0);
    glVertex3f(0.09,-0.43, 0.0);
    glVertex3f(0.07,-0.43, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.07,-0.37, -0.1);
    glVertex3f(0.09,-0.37, -0.1);
    glVertex3f(0.09,-0.43, -0.1);
    glVertex3f(0.07,-0.43, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.07,-0.37, 0.0);
    glVertex3f(0.07,-0.37, -0.1);
    glVertex3f(0.07,-0.43, -0.1);
    glVertex3f(0.07,-0.43, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.09,-0.37, 0.0);
    glVertex3f(0.09,-0.37, -0.1);
    glVertex3f(0.09,-0.43, -0.1);
    glVertex3f(0.09,-0.43, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.07,-0.37, 0.0);
    glVertex3f(0.09,-0.37, 0.0);
    glVertex3f(0.07,-0.37, -0.1);
    glVertex3f(0.09,-0.37, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.09,-0.43, 0.0);
    glVertex3f(0.07,-0.43, 0.0);
    glVertex3f(0.09,-0.43, -0.1);
    glVertex3f(0.07,-0.43, -0.1);
    glEnd();



    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.07,-0.41, 0.0);
    glVertex3f(0.13,-0.41, 0.0);
    glVertex3f(0.13,-0.43, 0.0);
    glVertex3f(0.07,-0.43, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.07,-0.41, -0.1);
    glVertex3f(0.13,-0.41, -0.1);
    glVertex3f(0.13,-0.43, -0.1);
    glVertex3f(0.07,-0.43, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.07,-0.41, 0.0);
    glVertex3f(0.07,-0.41, -0.1);
    glVertex3f(0.07,-0.43, -0.1);
    glVertex3f(0.07,-0.43, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.13,-0.41, 0.0);
    glVertex3f(0.13,-0.41, -0.1);
    glVertex3f(0.13,-0.43, -0.1);
    glVertex3f(0.13,-0.43, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.07,-0.41, 0.0);
    glVertex3f(0.13,-0.41, 0.0);
    glVertex3f(0.07,-0.41, -0.1);
    glVertex3f(0.13,-0.41, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.13,-0.43, 0.0);
    glVertex3f(0.07,-0.43, 0.0);
    glVertex3f(0.13,-0.43, -0.1);
    glVertex3f(0.07,-0.43, -0.1);
    glEnd();


    //akhir 2

    //angka 2

    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.3,-0.32, 0.0);
    glVertex3f(1.36,-0.32, 0.0);
    glVertex3f(1.36,-0.34, 0.0);
    glVertex3f(1.3,-0.34, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.3,-0.32, -0.1);
    glVertex3f(1.36,-0.32, -0.1);
    glVertex3f(1.36,-0.34, -0.1);
    glVertex3f(1.3,-0.34, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.3,-0.32, 0.0);
    glVertex3f(1.3,-0.32, -0.1);
    glVertex3f(1.3,-0.34, -0.1);
    glVertex3f(1.3,-0.34, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.36,-0.32, 0.0);
    glVertex3f(1.36,-0.32, -0.1);
    glVertex3f(1.36,-0.34, -0.1);
    glVertex3f(1.36,-0.34, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.3,-0.32, 0.0);
    glVertex3f(1.36,-0.32, 0.0);
    glVertex3f(1.3,-0.32, -0.1);
    glVertex3f(1.36,-0.32, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.36,-0.34, 0.0);
    glVertex3f(1.3,-0.34, 0.0);
    glVertex3f(1.36,-0.34, -0.1);
    glVertex3f(1.3,-0.34, -0.1);
    glEnd();




    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.34,-0.34, 0.0);
    glVertex3f(1.36,-0.34, 0.0);
    glVertex3f(1.36,-0.39, 0.0);
    glVertex3f(1.34,-0.39, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.34,-0.34, -0.1);
    glVertex3f(1.36,-0.34, -0.1);
    glVertex3f(1.36,-0.39, -0.1);
    glVertex3f(1.34,-0.39, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.34,-0.34, 0.0);
    glVertex3f(1.34,-0.34, -0.1);
    glVertex3f(1.34,-0.39, -0.1);
    glVertex3f(1.34,-0.39, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.36,-0.34, 0.0);
    glVertex3f(1.36,-0.34, -0.1);
    glVertex3f(1.36,-0.39, -0.1);
    glVertex3f(1.36,-0.39, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.34,-0.34, 0.0);
    glVertex3f(1.36,-0.34, 0.0);
    glVertex3f(1.34,-0.34, -0.1);
    glVertex3f(1.36,-0.34, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.36,-0.39, 0.0);
    glVertex3f(1.34,-0.39, 0.0);
    glVertex3f(1.36,-0.39, -0.1);
    glVertex3f(1.34,-0.39, -0.1);
    glEnd();




    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.3,-0.37, 0.0);
    glVertex3f(1.36,-0.37, 0.0);
    glVertex3f(1.36,-0.39, 0.0);
    glVertex3f(1.3,-0.39, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.3,-0.37, -0.1);
    glVertex3f(1.36,-0.37, -0.1);
    glVertex3f(1.36,-0.39, -0.1);
    glVertex3f(1.3,-0.39, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.3,-0.37, 0.0);
    glVertex3f(1.3,-0.37, -0.1);
    glVertex3f(1.3,-0.39, -0.1);
    glVertex3f(1.3,-0.39, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.36,-0.37, 0.0);
    glVertex3f(1.36,-0.37, -0.1);
    glVertex3f(1.36,-0.39, -0.1);
    glVertex3f(1.36,-0.39, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.3,-0.37, 0.0);
    glVertex3f(1.36,-0.37, 0.0);
    glVertex3f(1.3,-0.37, -0.1);
    glVertex3f(1.36,-0.37, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.36,-0.39, 0.0);
    glVertex3f(1.3,-0.39, 0.0);
    glVertex3f(1.36,-0.39, -0.1);
    glVertex3f(1.3,-0.39, -0.1);
    glEnd();



    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.3,-0.37, 0.0);
    glVertex3f(1.32,-0.37, 0.0);
    glVertex3f(1.32,-0.43, 0.0);
    glVertex3f(1.3,-0.43, 0.0);
    glEnd();

    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.3,-0.37, -0.1);
    glVertex3f(1.32,-0.37, -0.1);
    glVertex3f(1.32,-0.43, -0.1);
    glVertex3f(1.3,-0.43, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.3,-0.37, 0.0);
    glVertex3f(1.3,-0.37, -0.1);
    glVertex3f(1.3,-0.43, -0.1);
    glVertex3f(1.3,-0.43, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.32,-0.37, 0.0);
    glVertex3f(1.32,-0.37, -0.1);
    glVertex3f(1.32,-0.43, -0.1);
    glVertex3f(1.32,-0.43, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.3,-0.37, 0.0);
    glVertex3f(1.32,-0.37, 0.0);
    glVertex3f(1.3,-0.37, -0.1);
    glVertex3f(1.32,-0.37, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.32,-0.43, 0.0);
    glVertex3f(1.3,-0.43, 0.0);
    glVertex3f(1.32,-0.43, -0.1);
    glVertex3f(1.3,-0.43, -0.1);
    glEnd();


    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.3,-0.41, 0.0);
    glVertex3f(1.36,-0.41, 0.0);
    glVertex3f(1.36,-0.43, 0.0);
    glVertex3f(1.3,-0.43, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.3,-0.41, -0.1);
    glVertex3f(1.36,-0.41, -0.1);
    glVertex3f(1.36,-0.43, -0.1);
    glVertex3f(1.3,-0.43, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.3,-0.41, 0.0);
    glVertex3f(1.3,-0.41, -0.1);
    glVertex3f(1.3,-0.43, -0.1);
    glVertex3f(1.3,-0.43, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.36,-0.41, 0.0);
    glVertex3f(1.36,-0.41, -0.1);
    glVertex3f(1.36,-0.43, -0.1);
    glVertex3f(1.36,-0.43, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.3,-0.41, 0.0);
    glVertex3f(1.36,-0.41, 0.0);
    glVertex3f(1.3,-0.41, -0.1);
    glVertex3f(1.36,-0.41, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.36,-0.43, 0.0);
    glVertex3f(1.3,-0.43, 0.0);
    glVertex3f(1.36,-0.43, -0.1);
    glVertex3f(1.3,-0.43, -0.1);
    glEnd();


    //akhir 2

    //angka 28

    //angka 8

    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.72,-0.32, 0.0);
    glVertex3f(1.78,-0.32, 0.0);
    glVertex3f(1.78,-0.34, 0.0);
    glVertex3f(1.72,-0.34, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.72,-0.32, -0.1);
    glVertex3f(1.78,-0.32, -0.1);
    glVertex3f(1.78,-0.34, -0.1);
    glVertex3f(1.72,-0.34, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.72,-0.32, 0.0);
    glVertex3f(1.72,-0.32, -0.1);
    glVertex3f(1.72,-0.34, -0.1);
    glVertex3f(1.72,-0.34, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.78,-0.32, 0.0);
    glVertex3f(1.78,-0.32, -0.1);
    glVertex3f(1.78,-0.34, -0.1);
    glVertex3f(1.78,-0.34, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.72,-0.32, 0.0);
    glVertex3f(1.78,-0.32, 0.0);
    glVertex3f(1.72,-0.32, -0.1);
    glVertex3f(1.78,-0.32, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.78,-0.34, 0.0);
    glVertex3f(1.72,-0.34, 0.0);
    glVertex3f(1.78,-0.34, -0.1);
    glVertex3f(1.72,-0.34, -0.1);
    glEnd();



    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.72,-0.32, 0.0);
    glVertex3f(1.74,-0.32, 0.0);
    glVertex3f(1.74,-0.43, 0.0);
    glVertex3f(1.72,-0.43, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.72,-0.32, -0.1);
    glVertex3f(1.74,-0.32, -0.1);
    glVertex3f(1.74,-0.43, -0.1);
    glVertex3f(1.72,-0.43, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.72,-0.32, 0.0);
    glVertex3f(1.72,-0.32, -0.1);
    glVertex3f(1.72,-0.43, -0.1);
    glVertex3f(1.72,-0.43, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.74,-0.32, 0.0);
    glVertex3f(1.74,-0.32, -0.1);
    glVertex3f(1.74,-0.43, -0.1);
    glVertex3f(1.74,-0.43, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.72,-0.32, 0.0);
    glVertex3f(1.74,-0.32, 0.0);
    glVertex3f(1.72,-0.32, -0.1);
    glVertex3f(1.74,-0.32, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.74,-0.43, 0.0);
    glVertex3f(1.72,-0.43, 0.0);
    glVertex3f(1.74,-0.43, -0.1);
    glVertex3f(1.72,-0.43, -0.1);
    glEnd();



    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.72,-0.37, 0.0);
    glVertex3f(1.78,-0.37, 0.0);
    glVertex3f(1.78,-0.39, 0.0);
    glVertex3f(1.72,-0.39, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.72,-0.37, -0.1);
    glVertex3f(1.78,-0.37, -0.1);
    glVertex3f(1.78,-0.39, -0.1);
    glVertex3f(1.72,-0.39, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.72,-0.37, 0.0);
    glVertex3f(1.72,-0.37, -0.1);
    glVertex3f(1.72,-0.39, -0.1);
    glVertex3f(1.72,-0.39, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.78,-0.37, 0.0);
    glVertex3f(1.78,-0.37, -0.1);
    glVertex3f(1.78,-0.39, -0.1);
    glVertex3f(1.78,-0.39, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.72,-0.37, 0.0);
    glVertex3f(1.78,-0.37, 0.0);
    glVertex3f(1.72,-0.37, -0.1);
    glVertex3f(1.78,-0.37, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.78,-0.39, 0.0);
    glVertex3f(1.72,-0.39, 0.0);
    glVertex3f(1.78,-0.39, -0.1);
    glVertex3f(1.72,-0.39, -0.1);
    glEnd();



    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.78,-0.32, 0.0);
    glVertex3f(1.76,-0.32, 0.0);
    glVertex3f(1.76,-0.43, 0.0);
    glVertex3f(1.78,-0.43, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.78,-0.32, -0.1);
    glVertex3f(1.76,-0.32, -0.1);
    glVertex3f(1.76,-0.43, -0.1);
    glVertex3f(1.78,-0.43, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.78,-0.32, 0.0);
    glVertex3f(1.78,-0.32, -0.1);
    glVertex3f(1.78,-0.43, -0.1);
    glVertex3f(1.78,-0.43, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.76,-0.32, 0.0);
    glVertex3f(1.76,-0.32, -0.1);
    glVertex3f(1.76,-0.43, -0.1);
    glVertex3f(1.76,-0.43, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.78,-0.32, 0.0);
    glVertex3f(1.76,-0.32, 0.0);
    glVertex3f(1.78,-0.32, -0.1);
    glVertex3f(1.76,-0.32, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.76,-0.43, 0.0);
    glVertex3f(1.78,-0.43, 0.0);
    glVertex3f(1.76,-0.43, -0.1);
    glVertex3f(1.78,-0.43, -0.1);
    glEnd();



    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.72,-0.41, 0.0);
    glVertex3f(1.78,-0.41, 0.0);
    glVertex3f(1.78,-0.43, 0.0);
    glVertex3f(1.72,-0.43, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.72,-0.41, -0.1);
    glVertex3f(1.78,-0.41, -0.1);
    glVertex3f(1.78,-0.43, -0.1);
    glVertex3f(1.72,-0.43, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.72,-0.41, 0.0);
    glVertex3f(1.72,-0.41, -0.1);
    glVertex3f(1.72,-0.43, -0.1);
    glVertex3f(1.72,-0.43, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.78,-0.41, 0.0);
    glVertex3f(1.78,-0.41, -0.1);
    glVertex3f(1.78,-0.43, -0.1);
    glVertex3f(1.78,-0.43, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.72,-0.41, 0.0);
    glVertex3f(1.78,-0.41, 0.0);
    glVertex3f(1.72,-0.41, -0.1);
    glVertex3f(1.78,-0.41, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.78,-0.43, 0.0);
    glVertex3f(1.72,-0.43, 0.0);
    glVertex3f(1.78,-0.43, -0.1);
    glVertex3f(1.72,-0.43, -0.1);
    glEnd();



    //akhir 8

    //angka 2

    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.65,-0.32, 0.0);
    glVertex3f(1.71,-0.32, 0.0);
    glVertex3f(1.71,-0.34, 0.0);
    glVertex3f(1.65,-0.34, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.65,-0.32, -0.1);
    glVertex3f(1.71,-0.32, -0.1);
    glVertex3f(1.71,-0.34, -0.1);
    glVertex3f(1.65,-0.34, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.65,-0.32, 0.0);
    glVertex3f(1.65,-0.32, -0.1);
    glVertex3f(1.65,-0.34, -0.1);
    glVertex3f(1.65,-0.34, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.71,-0.32, 0.0);
    glVertex3f(1.71,-0.32, -0.1);
    glVertex3f(1.71,-0.34, -0.1);
    glVertex3f(1.71,-0.34, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.65,-0.32, 0.0);
    glVertex3f(1.71,-0.32, 0.0);
    glVertex3f(1.65,-0.32, -0.1);
    glVertex3f(1.71,-0.32, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.71,-0.34, 0.0);
    glVertex3f(1.65,-0.34, 0.0);
    glVertex3f(1.71,-0.34, -0.1);
    glVertex3f(1.65,-0.34, -0.1);
    glEnd();



    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.69,-0.34, 0.0);
    glVertex3f(1.71,-0.34, 0.0);
    glVertex3f(1.71,-0.39, 0.0);
    glVertex3f(1.69,-0.39, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.69,-0.34, -0.1);
    glVertex3f(1.71,-0.34, -0.1);
    glVertex3f(1.71,-0.39, -0.1);
    glVertex3f(1.69,-0.39, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.69,-0.34, 0.0);
    glVertex3f(1.69,-0.34, -0.1);
    glVertex3f(1.69,-0.39, -0.1);
    glVertex3f(1.69,-0.39, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.71,-0.34, 0.0);
    glVertex3f(1.71,-0.34, -0.1);
    glVertex3f(1.71,-0.39, -0.1);
    glVertex3f(1.71,-0.39, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.69,-0.34, 0.0);
    glVertex3f(1.71,-0.34, 0.0);
    glVertex3f(1.69,-0.34, -0.1);
    glVertex3f(1.71,-0.34, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.71,-0.39, 0.0);
    glVertex3f(1.69,-0.39, 0.0);
    glVertex3f(1.71,-0.39, -0.1);
    glVertex3f(1.69,-0.39, -0.1);
    glEnd();



    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.65,-0.37, 0.0);
    glVertex3f(1.71,-0.37, 0.0);
    glVertex3f(1.71,-0.39, 0.0);
    glVertex3f(1.65,-0.39, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.65,-0.37, -0.1);
    glVertex3f(1.71,-0.37, -0.1);
    glVertex3f(1.71,-0.39, -0.1);
    glVertex3f(1.65,-0.39, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.65,-0.37, 0.0);
    glVertex3f(1.65,-0.37, -0.1);
    glVertex3f(1.65,-0.39, -0.1);
    glVertex3f(1.65,-0.39, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.71,-0.37, 0.0);
    glVertex3f(1.71,-0.37, -0.1);
    glVertex3f(1.71,-0.39, -0.1);
    glVertex3f(1.71,-0.39, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.65,-0.37, 0.0);
    glVertex3f(1.71,-0.37, 0.0);
    glVertex3f(1.65,-0.37, -0.1);
    glVertex3f(1.71,-0.37, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.71,-0.39, 0.0);
    glVertex3f(1.65,-0.39, 0.0);
    glVertex3f(1.71,-0.39, -0.1);
    glVertex3f(1.65,-0.39, -0.1);
    glEnd();




    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.65,-0.37, 0.0);
    glVertex3f(1.67,-0.37, 0.0);
    glVertex3f(1.67,-0.43, 0.0);
    glVertex3f(1.65,-0.43, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.65,-0.37, -0.1);
    glVertex3f(1.67,-0.37, -0.1);
    glVertex3f(1.67,-0.43, -0.1);
    glVertex3f(1.65,-0.43, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.65,-0.37, 0.0);
    glVertex3f(1.65,-0.37, -0.1);
    glVertex3f(1.65,-0.43, -0.1);
    glVertex3f(1.65,-0.43, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.67,-0.37, 0.0);
    glVertex3f(1.67,-0.37, -0.1);
    glVertex3f(1.67,-0.43, -0.1);
    glVertex3f(1.67,-0.43, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.65,-0.37, 0.0);
    glVertex3f(1.67,-0.37, 0.0);
    glVertex3f(1.65,-0.37, -0.1);
    glVertex3f(1.67,-0.37, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.67,-0.43, 0.0);
    glVertex3f(1.65,-0.43, 0.0);
    glVertex3f(1.67,-0.43, -0.1);
    glVertex3f(1.65,-0.43, -0.1);
    glEnd();



    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.65,-0.41, 0.0);
    glVertex3f(1.71,-0.41, 0.0);
    glVertex3f(1.71,-0.43, 0.0);
    glVertex3f(1.65,-0.43, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.65,-0.41, -0.1);
    glVertex3f(1.71,-0.41, -0.1);
    glVertex3f(1.71,-0.43, -0.1);
    glVertex3f(1.65,-0.43, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.65,-0.41, 0.0);
    glVertex3f(1.65,-0.41, -0.1);
    glVertex3f(1.65,-0.43, -0.1);
    glVertex3f(1.65,-0.43, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.71,-0.41, 0.0);
    glVertex3f(1.71,-0.41, -0.1);
    glVertex3f(1.71,-0.43, -0.1);
    glVertex3f(1.71,-0.43, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.65,-0.41, 0.0);
    glVertex3f(1.71,-0.41, 0.0);
    glVertex3f(1.65,-0.41, -0.1);
    glVertex3f(1.71,-0.41, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.71,-0.43, 0.0);
    glVertex3f(1.65,-0.43, 0.0);
    glVertex3f(1.71,-0.43, -0.1);
    glVertex3f(1.65,-0.43, -0.1);
    glEnd();


    //akhir 2

    //akhir 28

    //angka 2

    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.16,-0.74, 0.0);
    glVertex3f(-1.1,-0.74, 0.0);
    glVertex3f(-1.1,-0.76, 0.0);
    glVertex3f(-1.16,-0.76, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.16,-0.74, -0.1);
    glVertex3f(-1.1,-0.74, -0.1);
    glVertex3f(-1.1,-0.76, -0.1);
    glVertex3f(-1.16,-0.76, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.16,-0.74, 0.0);
    glVertex3f(-1.16,-0.74, -0.1);
    glVertex3f(-1.16,-0.76, -0.1);
    glVertex3f(-1.16,-0.76, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.1,-0.74, 0.0);
    glVertex3f(-1.1,-0.74, -0.1);
    glVertex3f(-1.1,-0.76, -0.1);
    glVertex3f(-1.1,-0.76, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.16,-0.74, 0.0);
    glVertex3f(-1.1,-0.74, 0.0);
    glVertex3f(-1.16,-0.74, -0.1);
    glVertex3f(-1.1,-0.74, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.1,-0.76, 0.0);
    glVertex3f(-1.16,-0.76, 0.0);
    glVertex3f(-1.1,-0.76, -0.1);
    glVertex3f(-1.16,-0.76, -0.1);
    glEnd();



    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.12,-0.76, 0.0);
    glVertex3f(-1.1,-0.76, 0.0);
    glVertex3f(-1.1,-0.81, 0.0);
    glVertex3f(-1.12,-0.81, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.12,-0.76, -0.1);
    glVertex3f(-1.1,-0.76, -0.1);
    glVertex3f(-1.1,-0.81, -0.1);
    glVertex3f(-1.12,-0.81, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.12,-0.76, 0.0);
    glVertex3f(-1.12,-0.76, -0.1);
    glVertex3f(-1.12,-0.81, -0.1);
    glVertex3f(-1.12,-0.81, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.1,-0.76, 0.0);
    glVertex3f(-1.1,-0.76, -0.1);
    glVertex3f(-1.1,-0.81, -0.1);
    glVertex3f(-1.1,-0.81, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.12,-0.76, 0.0);
    glVertex3f(-1.1,-0.76, 0.0);
    glVertex3f(-1.12,-0.76, -0.1);
    glVertex3f(-1.1,-0.76, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.1,-0.81, 0.0);
    glVertex3f(-1.12,-0.81, 0.0);
    glVertex3f(-1.1,-0.81, -0.1);
    glVertex3f(-1.12,-0.81, -0.1);
    glEnd();



    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.15,-0.79, 0.0);
    glVertex3f(-1.1,-0.79, 0.0);
    glVertex3f(-1.1,-0.81, 0.0);
    glVertex3f(-1.15,-0.81, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.15,-0.79, -0.1);
    glVertex3f(-1.1,-0.79, -0.1);
    glVertex3f(-1.1,-0.81, -0.1);
    glVertex3f(-1.15,-0.81, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.15,-0.79, 0.0);
    glVertex3f(-1.15,-0.79, -0.1);
    glVertex3f(-1.15,-0.81, -0.1);
    glVertex3f(-1.15,-0.81, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.1,-0.79, 0.0);
    glVertex3f(-1.1,-0.79, -0.1);
    glVertex3f(-1.1,-0.81, -0.1);
    glVertex3f(-1.1,-0.81, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.15,-0.79, 0.0);
    glVertex3f(-1.1,-0.79, 0.0);
    glVertex3f(-1.15,-0.79, -0.1);
    glVertex3f(-1.1,-0.79, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.1,-0.81, 0.0);
    glVertex3f(-1.15,-0.81, 0.0);
    glVertex3f(-1.1,-0.81, -0.1);
    glVertex3f(-1.15,-0.81, -0.1);
    glEnd();




    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.16,-0.79, 0.0);
    glVertex3f(-1.14,-0.79, 0.0);
    glVertex3f(-1.14,-0.85, 0.0);
    glVertex3f(-1.16,-0.85, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.16,-0.79, -0.1);
    glVertex3f(-1.14,-0.79, -0.1);
    glVertex3f(-1.14,-0.85, -0.1);
    glVertex3f(-1.16,-0.85, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.16,-0.79, 0.0);
    glVertex3f(-1.16,-0.79, -0.1);
    glVertex3f(-1.16,-0.85, -0.1);
    glVertex3f(-1.16,-0.85, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.14,-0.79, 0.0);
    glVertex3f(-1.14,-0.79, -0.1);
    glVertex3f(-1.14,-0.85, -0.1);
    glVertex3f(-1.14,-0.85, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.16,-0.79, 0.0);
    glVertex3f(-1.14,-0.79, 0.0);
    glVertex3f(-1.16,-0.79, -0.1);
    glVertex3f(-1.14,-0.79, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.14,-0.85, 0.0);
    glVertex3f(-1.16,-0.85, 0.0);
    glVertex3f(-1.14,-0.85, -0.1);
    glVertex3f(-1.16,-0.85, -0.1);
    glEnd();



    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.15,-0.83, 0.0);
    glVertex3f(-1.1,-0.83, 0.0);
    glVertex3f(-1.1,-0.85, 0.0);
    glVertex3f(-1.15,-0.85, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.15,-0.83, -0.1);
    glVertex3f(-1.1,-0.83, -0.1);
    glVertex3f(-1.1,-0.85, -0.1);
    glVertex3f(-1.15,-0.85, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.15,-0.83, 0.0);
    glVertex3f(-1.15,-0.83, -0.1);
    glVertex3f(-1.15,-0.85, -0.1);
    glVertex3f(-1.15,-0.85, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.1,-0.83, 0.0);
    glVertex3f(-1.1,-0.83, -0.1);
    glVertex3f(-1.1,-0.85, -0.1);
    glVertex3f(-1.1,-0.85, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.15,-0.83, 0.0);
    glVertex3f(-1.1,-0.83, 0.0);
    glVertex3f(-1.15,-0.83, -0.1);
    glVertex3f(-1.1,-0.83, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.1,-0.85, 0.0);
    glVertex3f(-1.15,-0.85, 0.0);
    glVertex3f(-1.1,-0.85, -0.1);
    glVertex3f(-1.15,-0.85, -0.1);
    glEnd();


    //akhir 2

    //angka 2

    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.75,-0.74, 0.0);
    glVertex3f(-0.69,-0.74, 0.0);
    glVertex3f(-0.69,-0.76, 0.0);
    glVertex3f(-0.75,-0.76, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.75,-0.74, -0.1);
    glVertex3f(-0.69,-0.74, -0.1);
    glVertex3f(-0.69,-0.76, -0.1);
    glVertex3f(-0.75,-0.76, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.75,-0.74, 0.0);
    glVertex3f(-0.75,-0.74, -0.1);
    glVertex3f(-0.75,-0.76, -0.1);
    glVertex3f(-0.75,-0.76, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.69,-0.74, 0.0);
    glVertex3f(-0.69,-0.74, -0.1);
    glVertex3f(-0.69,-0.76, -0.1);
    glVertex3f(-0.69,-0.76, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.75,-0.74, 0.0);
    glVertex3f(-0.69,-0.74, 0.0);
    glVertex3f(-0.75,-0.74, -0.1);
    glVertex3f(-0.69,-0.74, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.69,-0.76, 0.0);
    glVertex3f(-0.75,-0.76, 0.0);
    glVertex3f(-0.69,-0.76, -0.1);
    glVertex3f(-0.75,-0.76, -0.1);
    glEnd();



    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.71,-0.76, 0.0);
    glVertex3f(-0.69,-0.76, 0.0);
    glVertex3f(-0.69,-0.81, 0.0);
    glVertex3f(-0.71,-0.81, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.71,-0.76, -0.1);
    glVertex3f(-0.69,-0.76, -0.1);
    glVertex3f(-0.69,-0.81, -0.1);
    glVertex3f(-0.71,-0.81, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.71,-0.76, 0.0);
    glVertex3f(-0.71,-0.76, -0.1);
    glVertex3f(-0.71,-0.81, -0.1);
    glVertex3f(-0.71,-0.81, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.69,-0.76, 0.0);
    glVertex3f(-0.69,-0.76, -0.1);
    glVertex3f(-0.69,-0.81, -0.1);
    glVertex3f(-0.69,-0.81, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.71,-0.76, 0.0);
    glVertex3f(-0.69,-0.76, 0.0);
    glVertex3f(-0.71,-0.76, -0.1);
    glVertex3f(-0.69,-0.76, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.69,-0.81, 0.0);
    glVertex3f(-0.71,-0.81, 0.0);
    glVertex3f(-0.69,-0.81, -0.1);
    glVertex3f(-0.71,-0.81, -0.1);
    glEnd();




    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.74,-0.79, 0.0);
    glVertex3f(-0.69,-0.79, 0.0);
    glVertex3f(-0.69,-0.81, 0.0);
    glVertex3f(-0.74,-0.81, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.74,-0.79, -0.1);
    glVertex3f(-0.69,-0.79, -0.1);
    glVertex3f(-0.69,-0.81, -0.1);
    glVertex3f(-0.74,-0.81, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.74,-0.79, 0.0);
    glVertex3f(-0.74,-0.79, -0.1);
    glVertex3f(-0.74,-0.81, -0.1);
    glVertex3f(-0.74,-0.81, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.69,-0.79, 0.0);
    glVertex3f(-0.69,-0.79, -0.1);
    glVertex3f(-0.69,-0.81, -0.1);
    glVertex3f(-0.69,-0.81, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.74,-0.79, 0.0);
    glVertex3f(-0.69,-0.79, 0.0);
    glVertex3f(-0.74,-0.79, -0.1);
    glVertex3f(-0.69,-0.79, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.69,-0.81, 0.0);
    glVertex3f(-0.74,-0.81, 0.0);
    glVertex3f(-0.69,-0.81, -0.1);
    glVertex3f(-0.74,-0.81, -0.1);
    glEnd();




    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.75,-0.79, 0.0);
    glVertex3f(-0.73,-0.79, 0.0);
    glVertex3f(-0.73,-0.85, 0.0);
    glVertex3f(-0.75,-0.85, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.75,-0.79, -0.1);
    glVertex3f(-0.73,-0.79, -0.1);
    glVertex3f(-0.73,-0.85, -0.1);
    glVertex3f(-0.75,-0.85, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.75,-0.79, 0.0);
    glVertex3f(-0.75,-0.79, -0.1);
    glVertex3f(-0.75,-0.85, -0.1);
    glVertex3f(-0.75,-0.85, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.73,-0.79, 0.0);
    glVertex3f(-0.73,-0.79, -0.1);
    glVertex3f(-0.73,-0.85, -0.1);
    glVertex3f(-0.73,-0.85, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.75,-0.79, 0.0);
    glVertex3f(-0.73,-0.79, 0.0);
    glVertex3f(-0.75,-0.79, -0.1);
    glVertex3f(-0.73,-0.79, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.73,-0.85, 0.0);
    glVertex3f(-0.75,-0.85, 0.0);
    glVertex3f(-0.73,-0.85, -0.1);
    glVertex3f(-0.75,-0.85, -0.1);
    glEnd();



    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.74,-0.83, 0.0);
    glVertex3f(-0.69,-0.83, 0.0);
    glVertex3f(-0.69,-0.85, 0.0);
    glVertex3f(-0.74,-0.85, 0.0);
    glEnd();

    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.74,-0.83, -0.1);
    glVertex3f(-0.69,-0.83, -0.1);
    glVertex3f(-0.69,-0.85, -0.1);
    glVertex3f(-0.74,-0.85, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.74,-0.83, 0.0);
    glVertex3f(-0.74,-0.83, -0.1);
    glVertex3f(-0.74,-0.85, -0.1);
    glVertex3f(-0.74,-0.85, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.69,-0.83, 0.0);
    glVertex3f(-0.69,-0.83, -0.1);
    glVertex3f(-0.69,-0.85, -0.1);
    glVertex3f(-0.69,-0.85, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.74,-0.83, 0.0);
    glVertex3f(-0.69,-0.83, 0.0);
    glVertex3f(-0.74,-0.83, -0.1);
    glVertex3f(-0.69,-0.83, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.69,-0.85, 0.0);
    glVertex3f(-0.74,-0.85, 0.0);
    glVertex3f(-0.69,-0.85, -0.1);
    glVertex3f(-0.74,-0.85, -0.1);
    glEnd();

    //akhir 2

    //angka 22

    //angka 2

    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.34,-0.74, 0.0);
    glVertex3f(-0.28,-0.74, 0.0);
    glVertex3f(-0.28,-0.76, 0.0);
    glVertex3f(-0.34,-0.76, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.34,-0.74, -0.1);
    glVertex3f(-0.28,-0.74, -0.1);
    glVertex3f(-0.28,-0.76, -0.1);
    glVertex3f(-0.34,-0.76, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.34,-0.74, 0.0);
    glVertex3f(-0.34,-0.74, -0.1);
    glVertex3f(-0.34,-0.76, -0.1);
    glVertex3f(-0.34,-0.76, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.28,-0.74, 0.0);
    glVertex3f(-0.28,-0.74, -0.1);
    glVertex3f(-0.28,-0.76, -0.1);
    glVertex3f(-0.28,-0.76, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.34,-0.74, 0.0);
    glVertex3f(-0.28,-0.74, 0.0);
    glVertex3f(-0.34,-0.74, -0.1);
    glVertex3f(-0.28,-0.74, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.28,-0.76, 0.0);
    glVertex3f(-0.34,-0.76, 0.0);
    glVertex3f(-0.28,-0.76, -0.1);
    glVertex3f(-0.34,-0.76, -0.1);
    glEnd();



    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.3,-0.76, 0.0);
    glVertex3f(-0.28,-0.76, 0.0);
    glVertex3f(-0.28,-0.81, 0.0);
    glVertex3f(-0.3,-0.81, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.3,-0.76, -0.1);
    glVertex3f(-0.28,-0.76, -0.1);
    glVertex3f(-0.28,-0.81, -0.1);
    glVertex3f(-0.3,-0.81, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.3,-0.76, 0.0);
    glVertex3f(-0.3,-0.76, -0.1);
    glVertex3f(-0.3,-0.81, -0.1);
    glVertex3f(-0.3,-0.81, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.28,-0.76, 0.0);
    glVertex3f(-0.28,-0.76, -0.1);
    glVertex3f(-0.28,-0.81, -0.1);
    glVertex3f(-0.28,-0.81, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.3,-0.76, 0.0);
    glVertex3f(-0.28,-0.76, 0.0);
    glVertex3f(-0.3,-0.76, -0.1);
    glVertex3f(-0.28,-0.76, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.28,-0.81, 0.0);
    glVertex3f(-0.3,-0.81, 0.0);
    glVertex3f(-0.28,-0.81, -0.1);
    glVertex3f(-0.3,-0.81, -0.1);
    glEnd();



    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.33,-0.79, 0.0);
    glVertex3f(-0.28,-0.79, 0.0);
    glVertex3f(-0.28,-0.81, 0.0);
    glVertex3f(-0.33,-0.81, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.33,-0.79, -0.1);
    glVertex3f(-0.28,-0.79, -0.1);
    glVertex3f(-0.28,-0.81, -0.1);
    glVertex3f(-0.33,-0.81, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.33,-0.79, 0.0);
    glVertex3f(-0.33,-0.79, -0.1);
    glVertex3f(-0.33,-0.81, -0.1);
    glVertex3f(-0.33,-0.81, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.28,-0.79, 0.0);
    glVertex3f(-0.28,-0.79, -0.1);
    glVertex3f(-0.28,-0.81, -0.1);
    glVertex3f(-0.28,-0.81, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.33,-0.79, 0.0);
    glVertex3f(-0.28,-0.79, 0.0);
    glVertex3f(-0.33,-0.79, -0.1);
    glVertex3f(-0.28,-0.79, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.28,-0.81, 0.0);
    glVertex3f(-0.33,-0.81, 0.0);
    glVertex3f(-0.28,-0.81, -0.1);
    glVertex3f(-0.33,-0.81, -0.1);
    glEnd();



    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.34,-0.79, 0.0);
    glVertex3f(-0.32,-0.79, 0.0);
    glVertex3f(-0.32,-0.85, 0.0);
    glVertex3f(-0.34,-0.85, 0.0);
    glEnd();

    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.34,-0.79, -0.1);
    glVertex3f(-0.32,-0.79, -0.1);
    glVertex3f(-0.32,-0.85, -0.1);
    glVertex3f(-0.34,-0.85, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.34,-0.79, 0.0);
    glVertex3f(-0.34,-0.79, -0.1);
    glVertex3f(-0.34,-0.85, -0.1);
    glVertex3f(-0.34,-0.85, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.32,-0.79, 0.0);
    glVertex3f(-0.32,-0.79, -0.1);
    glVertex3f(-0.32,-0.85, -0.1);
    glVertex3f(-0.32,-0.85, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.34,-0.79, 0.0);
    glVertex3f(-0.32,-0.79, 0.0);
    glVertex3f(-0.34,-0.79, -0.1);
    glVertex3f(-0.32,-0.79, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.32,-0.85, 0.0);
    glVertex3f(-0.34,-0.85, 0.0);
    glVertex3f(-0.32,-0.85, -0.1);
    glVertex3f(-0.34,-0.85, -0.1);
    glEnd();




    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.33,-0.83, 0.0);
    glVertex3f(-0.28,-0.83, 0.0);
    glVertex3f(-0.28,-0.85, 0.0);
    glVertex3f(-0.33,-0.85, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.33,-0.83, -0.1);
    glVertex3f(-0.28,-0.83, -0.1);
    glVertex3f(-0.28,-0.85, -0.1);
    glVertex3f(-0.33,-0.85, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.33,-0.83, 0.0);
    glVertex3f(-0.33,-0.83, -0.1);
    glVertex3f(-0.33,-0.85, -0.1);
    glVertex3f(-0.33,-0.85, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.28,-0.83, 0.0);
    glVertex3f(-0.28,-0.83, -0.1);
    glVertex3f(-0.28,-0.85, -0.1);
    glVertex3f(-0.28,-0.85, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.33,-0.83, 0.0);
    glVertex3f(-0.28,-0.83, 0.0);
    glVertex3f(-0.33,-0.83, -0.1);
    glVertex3f(-0.28,-0.83, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.28,-0.85, 0.0);
    glVertex3f(-0.33,-0.85, 0.0);
    glVertex3f(-0.28,-0.85, -0.1);
    glVertex3f(-0.33,-0.85, -0.1);
    glEnd();


    //akhir 2

    //angka 2

    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.42,-0.74, 0.0);
    glVertex3f(-0.36,-0.74, 0.0);
    glVertex3f(-0.36,-0.76, 0.0);
    glVertex3f(-0.42,-0.76, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.42,-0.74, -0.1);
    glVertex3f(-0.36,-0.74, -0.1);
    glVertex3f(-0.36,-0.76, -0.1);
    glVertex3f(-0.42,-0.76, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.42,-0.74, 0.0);
    glVertex3f(-0.42,-0.74, -0.1);
    glVertex3f(-0.42,-0.76, -0.1);
    glVertex3f(-0.42,-0.76, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.36,-0.74, 0.0);
    glVertex3f(-0.36,-0.74, -0.1);
    glVertex3f(-0.36,-0.76, -0.1);
    glVertex3f(-0.36,-0.76, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.42,-0.74, 0.0);
    glVertex3f(-0.36,-0.74, 0.0);
    glVertex3f(-0.42,-0.74, -0.1);
    glVertex3f(-0.36,-0.74, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.36,-0.76, 0.0);
    glVertex3f(-0.42,-0.76, 0.0);
    glVertex3f(-0.36,-0.76, -0.1);
    glVertex3f(-0.42,-0.76, -0.1);
    glEnd();



    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.38,-0.76, 0.0);
    glVertex3f(-0.36,-0.76, 0.0);
    glVertex3f(-0.36,-0.81, 0.0);
    glVertex3f(-0.38,-0.81, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.38,-0.76, -0.1);
    glVertex3f(-0.36,-0.76, -0.1);
    glVertex3f(-0.36,-0.81, -0.1);
    glVertex3f(-0.38,-0.81, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.38,-0.76, 0.0);
    glVertex3f(-0.38,-0.76, -0.1);
    glVertex3f(-0.38,-0.81, -0.1);
    glVertex3f(-0.38,-0.81, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.36,-0.76, 0.0);
    glVertex3f(-0.36,-0.76, -0.1);
    glVertex3f(-0.36,-0.81, -0.1);
    glVertex3f(-0.36,-0.81, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.38,-0.76, 0.0);
    glVertex3f(-0.36,-0.76, 0.0);
    glVertex3f(-0.38,-0.76, -0.1);
    glVertex3f(-0.36,-0.76, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.36,-0.81, 0.0);
    glVertex3f(-0.38,-0.81, 0.0);
    glVertex3f(-0.36,-0.81, -0.1);
    glVertex3f(-0.38,-0.81, -0.1);
    glEnd();



    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.41,-0.79, 0.0);
    glVertex3f(-0.36,-0.79, 0.0);
    glVertex3f(-0.36,-0.81, 0.0);
    glVertex3f(-0.41,-0.81, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.41,-0.79, -0.1);
    glVertex3f(-0.36,-0.79, -0.1);
    glVertex3f(-0.36,-0.81, -0.1);
    glVertex3f(-0.41,-0.81, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.41,-0.79, 0.0);
    glVertex3f(-0.41,-0.79, -0.1);
    glVertex3f(-0.41,-0.81, -0.1);
    glVertex3f(-0.41,-0.81, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.36,-0.79, 0.0);
    glVertex3f(-0.36,-0.79, -0.1);
    glVertex3f(-0.36,-0.81, -0.1);
    glVertex3f(-0.36,-0.81, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.41,-0.79, 0.0);
    glVertex3f(-0.36,-0.79, 0.0);
    glVertex3f(-0.41,-0.79, -0.1);
    glVertex3f(-0.36,-0.79, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.36,-0.81, 0.0);
    glVertex3f(-0.41,-0.81, 0.0);
    glVertex3f(-0.36,-0.81, -0.1);
    glVertex3f(-0.41,-0.81, -0.1);
    glEnd();


    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.42,-0.79, 0.0);
    glVertex3f(-0.4,-0.79, 0.0);
    glVertex3f(-0.4,-0.85, 0.0);
    glVertex3f(-0.42,-0.85, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.42,-0.79, -0.1);
    glVertex3f(-0.4,-0.79, -0.1);
    glVertex3f(-0.4,-0.85, -0.1);
    glVertex3f(-0.42,-0.85, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.42,-0.79, 0.0);
    glVertex3f(-0.42,-0.79, -0.1);
    glVertex3f(-0.42,-0.85, -0.1);
    glVertex3f(-0.42,-0.85, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.4,-0.79, 0.0);
    glVertex3f(-0.4,-0.79, -0.1);
    glVertex3f(-0.4,-0.85, -0.1);
    glVertex3f(-0.4,-0.85, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.42,-0.79, 0.0);
    glVertex3f(-0.4,-0.79, 0.0);
    glVertex3f(-0.42,-0.79, -0.1);
    glVertex3f(-0.4,-0.79, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.4,-0.85, 0.0);
    glVertex3f(-0.42,-0.85, 0.0);
    glVertex3f(-0.4,-0.85, -0.1);
    glVertex3f(-0.42,-0.85, -0.1);
    glEnd();



    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.41,-0.83, 0.0);
    glVertex3f(-0.36,-0.83, 0.0);
    glVertex3f(-0.36,-0.85, 0.0);
    glVertex3f(-0.41,-0.85, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.41,-0.83, -0.1);
    glVertex3f(-0.36,-0.83, -0.1);
    glVertex3f(-0.36,-0.85, -0.1);
    glVertex3f(-0.41,-0.85, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.41,-0.83, 0.0);
    glVertex3f(-0.41,-0.83, -0.1);
    glVertex3f(-0.41,-0.85, -0.1);
    glVertex3f(-0.41,-0.85, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.36,-0.83, 0.0);
    glVertex3f(-0.36,-0.83, -0.1);
    glVertex3f(-0.36,-0.85, -0.1);
    glVertex3f(-0.36,-0.85, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.41,-0.83, 0.0);
    glVertex3f(-0.36,-0.83, 0.0);
    glVertex3f(-0.41,-0.83, -0.1);
    glVertex3f(-0.36,-0.83, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.36,-0.85, 0.0);
    glVertex3f(-0.41,-0.85, 0.0);
    glVertex3f(-0.36,-0.85, -0.1);
    glVertex3f(-0.41,-0.85, -0.1);
    glEnd();


    //akhir 2

    //akhir 22

    //angka 2

    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.07,-0.74, 0.0);
    glVertex3f(0.13,-0.74, 0.0);
    glVertex3f(0.13,-0.76, 0.0);
    glVertex3f(0.07,-0.76, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.07,-0.74, -0.1);
    glVertex3f(0.13,-0.74, -0.1);
    glVertex3f(0.13,-0.76, -0.1);
    glVertex3f(0.07,-0.76, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.07,-0.74, 0.0);
    glVertex3f(0.07,-0.74, -0.1);
    glVertex3f(0.07,-0.76, -0.1);
    glVertex3f(0.07,-0.76, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.13,-0.74, 0.0);
    glVertex3f(0.13,-0.74, -0.1);
    glVertex3f(0.13,-0.76, -0.1);
    glVertex3f(0.13,-0.76, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.07,-0.74, 0.0);
    glVertex3f(0.13,-0.74, 0.0);
    glVertex3f(0.07,-0.74, -0.1);
    glVertex3f(0.13,-0.74, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.13,-0.76, 0.0);
    glVertex3f(0.07,-0.76, 0.0);
    glVertex3f(0.13,-0.76, -0.1);
    glVertex3f(0.07,-0.76, -0.1);
    glEnd();



    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.11,-0.76, 0.0);
    glVertex3f(0.13,-0.76, 0.0);
    glVertex3f(0.13,-0.81, 0.0);
    glVertex3f(0.11,-0.81, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.11,-0.76, -0.1);
    glVertex3f(0.13,-0.76, -0.1);
    glVertex3f(0.13,-0.81, -0.1);
    glVertex3f(0.11,-0.81, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.11,-0.76, 0.0);
    glVertex3f(0.11,-0.76, -0.1);
    glVertex3f(0.11,-0.81, -0.1);
    glVertex3f(0.11,-0.81, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.13,-0.76, 0.0);
    glVertex3f(0.13,-0.76, -0.1);
    glVertex3f(0.13,-0.81, -0.1);
    glVertex3f(0.13,-0.81, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.11,-0.76, 0.0);
    glVertex3f(0.13,-0.76, 0.0);
    glVertex3f(0.11,-0.76, -0.1);
    glVertex3f(0.13,-0.76, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.13,-0.81, 0.0);
    glVertex3f(0.11,-0.81, 0.0);
    glVertex3f(0.13,-0.81, -0.1);
    glVertex3f(0.11,-0.81, -0.1);
    glEnd();




    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.07,-0.79, 0.0);
    glVertex3f(0.13,-0.79, 0.0);
    glVertex3f(0.13,-0.81, 0.0);
    glVertex3f(0.07,-0.81, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.07,-0.79, -0.1);
    glVertex3f(0.13,-0.79, -0.1);
    glVertex3f(0.13,-0.81, -0.1);
    glVertex3f(0.07,-0.81, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.07,-0.79, 0.0);
    glVertex3f(0.07,-0.79, -0.1);
    glVertex3f(0.07,-0.81, -0.1);
    glVertex3f(0.07,-0.81, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.13,-0.79, 0.0);
    glVertex3f(0.13,-0.79, -0.1);
    glVertex3f(0.13,-0.81, -0.1);
    glVertex3f(0.13,-0.81, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.07,-0.79, 0.0);
    glVertex3f(0.13,-0.79, 0.0);
    glVertex3f(0.07,-0.79, -0.1);
    glVertex3f(0.13,-0.79, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.13,-0.81, 0.0);
    glVertex3f(0.07,-0.81, 0.0);
    glVertex3f(0.13,-0.81, -0.1);
    glVertex3f(0.07,-0.81, -0.1);
    glEnd();



    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.07,-0.79, 0.0);
    glVertex3f(0.09,-0.79, 0.0);
    glVertex3f(0.09,-0.85, 0.0);
    glVertex3f(0.07,-0.85, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.07,-0.79, -0.1);
    glVertex3f(0.09,-0.79, -0.1);
    glVertex3f(0.09,-0.85, -0.1);
    glVertex3f(0.07,-0.85, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.07,-0.79, 0.0);
    glVertex3f(0.07,-0.79, -0.1);
    glVertex3f(0.07,-0.85, -0.1);
    glVertex3f(0.07,-0.85, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.09,-0.79, 0.0);
    glVertex3f(0.09,-0.79, -0.1);
    glVertex3f(0.09,-0.85, -0.1);
    glVertex3f(0.09,-0.85, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.07,-0.79, 0.0);
    glVertex3f(0.09,-0.79, 0.0);
    glVertex3f(0.07,-0.79, -0.1);
    glVertex3f(0.09,-0.79, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.09,-0.85, 0.0);
    glVertex3f(0.07,-0.85, 0.0);
    glVertex3f(0.09,-0.85, -0.1);
    glVertex3f(0.07,-0.85, -0.1);
    glEnd();



    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.07,-0.83, 0.0);
    glVertex3f(0.13,-0.83, 0.0);
    glVertex3f(0.13,-0.85, 0.0);
    glVertex3f(0.07,-0.85, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.07,-0.83, -0.1);
    glVertex3f(0.13,-0.83, -0.1);
    glVertex3f(0.13,-0.85, -0.1);
    glVertex3f(0.07,-0.85, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.07,-0.83, 0.0);
    glVertex3f(0.07,-0.83, -0.1);
    glVertex3f(0.07,-0.85, -0.1);
    glVertex3f(0.07,-0.85, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.13,-0.83, 0.0);
    glVertex3f(0.13,-0.83, -0.1);
    glVertex3f(0.13,-0.85, -0.1);
    glVertex3f(0.13,-0.85, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.07,-0.83, 0.0);
    glVertex3f(0.13,-0.83, 0.0);
    glVertex3f(0.07,-0.83, -0.1);
    glVertex3f(0.13,-0.83, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.13,-0.85, 0.0);
    glVertex3f(0.07,-0.85, 0.0);
    glVertex3f(0.13,-0.85, -0.1);
    glVertex3f(0.07,-0.85, -0.1);
    glEnd();


    //akhir 2

    //angka 2

    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.48,-0.74, 0.0);
    glVertex3f(0.54,-0.74, 0.0);
    glVertex3f(0.54,-0.76, 0.0);
    glVertex3f(0.48,-0.76, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.48,-0.74, -0.1);
    glVertex3f(0.54,-0.74, -0.1);
    glVertex3f(0.54,-0.76, -0.1);
    glVertex3f(0.48,-0.76, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.48,-0.74, 0.0);
    glVertex3f(0.48,-0.74, -0.1);
    glVertex3f(0.48,-0.76, -0.1);
    glVertex3f(0.48,-0.76, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.54,-0.74, 0.0);
    glVertex3f(0.54,-0.74, -0.1);
    glVertex3f(0.54,-0.76, -0.1);
    glVertex3f(0.54,-0.76, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.48,-0.74, 0.0);
    glVertex3f(0.54,-0.74, 0.0);
    glVertex3f(0.48,-0.74, -0.1);
    glVertex3f(0.54,-0.74, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.54,-0.76, 0.0);
    glVertex3f(0.48,-0.76, 0.0);
    glVertex3f(0.54,-0.76, -0.1);
    glVertex3f(0.48,-0.76, -0.1);
    glEnd();




    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.52,-0.76, 0.0);
    glVertex3f(0.54,-0.76, 0.0);
    glVertex3f(0.54,-0.81, 0.0);
    glVertex3f(0.52,-0.81, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.52,-0.76, -0.1);
    glVertex3f(0.54,-0.76, -0.1);
    glVertex3f(0.54,-0.81, -0.1);
    glVertex3f(0.52,-0.81, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.52,-0.76, 0.0);
    glVertex3f(0.52,-0.76, -0.1);
    glVertex3f(0.52,-0.81, -0.1);
    glVertex3f(0.52,-0.81, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.54,-0.76, 0.0);
    glVertex3f(0.54,-0.76, -0.1);
    glVertex3f(0.54,-0.81, -0.1);
    glVertex3f(0.54,-0.81, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.52,-0.76, 0.0);
    glVertex3f(0.54,-0.76, 0.0);
    glVertex3f(0.52,-0.76, -0.1);
    glVertex3f(0.54,-0.76, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.54,-0.81, 0.0);
    glVertex3f(0.52,-0.81, 0.0);
    glVertex3f(0.54,-0.81, -0.1);
    glVertex3f(0.52,-0.81, -0.1);
    glEnd();




    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.48,-0.79, 0.0);
    glVertex3f(0.54,-0.79, 0.0);
    glVertex3f(0.54,-0.81, 0.0);
    glVertex3f(0.48,-0.81, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.48,-0.79, -0.1);
    glVertex3f(0.54,-0.79, -0.1);
    glVertex3f(0.54,-0.81, -0.1);
    glVertex3f(0.48,-0.81, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.48,-0.79, 0.0);
    glVertex3f(0.48,-0.79, -0.1);
    glVertex3f(0.48,-0.81, -0.1);
    glVertex3f(0.48,-0.81, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.54,-0.79, 0.0);
    glVertex3f(0.54,-0.79, -0.1);
    glVertex3f(0.54,-0.81, -0.1);
    glVertex3f(0.54,-0.81, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.48,-0.79, 0.0);
    glVertex3f(0.54,-0.79, 0.0);
    glVertex3f(0.48,-0.79, -0.1);
    glVertex3f(0.54,-0.79, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.54,-0.81, 0.0);
    glVertex3f(0.48,-0.81, 0.0);
    glVertex3f(0.54,-0.81, -0.1);
    glVertex3f(0.48,-0.81, -0.1);
    glEnd();




    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.48,-0.79, 0.0);
    glVertex3f(0.5,-0.79, 0.0);
    glVertex3f(0.5,-0.85, 0.0);
    glVertex3f(0.48,-0.85, 0.0);
    glEnd();

    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.48,-0.79, -0.1);
    glVertex3f(0.5,-0.79, -0.1);
    glVertex3f(0.5,-0.85, -0.1);
    glVertex3f(0.48,-0.85, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.48,-0.79, 0.0);
    glVertex3f(0.48,-0.79, -0.1);
    glVertex3f(0.48,-0.85, -0.1);
    glVertex3f(0.48,-0.85, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.5,-0.79, 0.0);
    glVertex3f(0.5,-0.79, -0.1);
    glVertex3f(0.5,-0.85, -0.1);
    glVertex3f(0.5,-0.85, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.48,-0.79, 0.0);
    glVertex3f(0.5,-0.79, 0.0);
    glVertex3f(0.48,-0.79, -0.1);
    glVertex3f(0.5,-0.79, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.5,-0.85, 0.0);
    glVertex3f(0.48,-0.85, 0.0);
    glVertex3f(0.5,-0.85, -0.1);
    glVertex3f(0.48,-0.85, -0.1);
    glEnd();



    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.48,-0.83, 0.0);
    glVertex3f(0.54,-0.83, 0.0);
    glVertex3f(0.54,-0.85, 0.0);
    glVertex3f(0.48,-0.85, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.48,-0.83, -0.1);
    glVertex3f(0.54,-0.83, -0.1);
    glVertex3f(0.54,-0.85, -0.1);
    glVertex3f(0.48,-0.85, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.48,-0.83, 0.0);
    glVertex3f(0.48,-0.83, -0.1);
    glVertex3f(0.48,-0.85, -0.1);
    glVertex3f(0.48,-0.85, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.54,-0.83, 0.0);
    glVertex3f(0.54,-0.83, -0.1);
    glVertex3f(0.54,-0.85, -0.1);
    glVertex3f(0.54,-0.85, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.48,-0.83, 0.0);
    glVertex3f(0.54,-0.83, 0.0);
    glVertex3f(0.48,-0.83, -0.1);
    glVertex3f(0.54,-0.83, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.54,-0.85, 0.0);
    glVertex3f(0.48,-0.85, 0.0);
    glVertex3f(0.54,-0.85, -0.1);
    glVertex3f(0.48,-0.85, -0.1);
    glEnd();



    //akhir 2

    //angka 2

    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.89,-0.74, 0.0);
    glVertex3f(0.95,-0.74, 0.0);
    glVertex3f(0.95,-0.76, 0.0);
    glVertex3f(0.89,-0.76, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.89,-0.74, -0.1);
    glVertex3f(0.95,-0.74, -0.1);
    glVertex3f(0.95,-0.76, -0.1);
    glVertex3f(0.89,-0.76, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.89,-0.74, 0.0);
    glVertex3f(0.89,-0.74, -0.1);
    glVertex3f(0.89,-0.76, -0.1);
    glVertex3f(0.89,-0.76, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.95,-0.74, 0.0);
    glVertex3f(0.95,-0.74, -0.1);
    glVertex3f(0.95,-0.76, -0.1);
    glVertex3f(0.95,-0.76, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.89,-0.74, 0.0);
    glVertex3f(0.95,-0.74, 0.0);
    glVertex3f(0.89,-0.74, -0.1);
    glVertex3f(0.95,-0.74, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.95,-0.76, 0.0);
    glVertex3f(0.89,-0.76, 0.0);
    glVertex3f(0.95,-0.76, -0.1);
    glVertex3f(0.89,-0.76, -0.1);
    glEnd();



    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.93,-0.76, 0.0);
    glVertex3f(0.95,-0.76, 0.0);
    glVertex3f(0.95,-0.81, 0.0);
    glVertex3f(0.93,-0.81, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.93,-0.76, -0.1);
    glVertex3f(0.95,-0.76, -0.1);
    glVertex3f(0.95,-0.81, -0.1);
    glVertex3f(0.93,-0.81, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.93,-0.76, 0.0);
    glVertex3f(0.93,-0.76, -0.1);
    glVertex3f(0.93,-0.81, -0.1);
    glVertex3f(0.93,-0.81, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.95,-0.76, 0.0);
    glVertex3f(0.95,-0.76, -0.1);
    glVertex3f(0.95,-0.81, -0.1);
    glVertex3f(0.95,-0.81, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.93,-0.76, 0.0);
    glVertex3f(0.95,-0.76, 0.0);
    glVertex3f(0.93,-0.76, -0.1);
    glVertex3f(0.95,-0.76, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.95,-0.81, 0.0);
    glVertex3f(0.93,-0.81, 0.0);
    glVertex3f(0.95,-0.81, -0.1);
    glVertex3f(0.93,-0.81, -0.1);
    glEnd();



    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.89,-0.79, 0.0);
    glVertex3f(0.95,-0.79, 0.0);
    glVertex3f(0.95,-0.81, 0.0);
    glVertex3f(0.89,-0.81, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.89,-0.79, -0.1);
    glVertex3f(0.95,-0.79, -0.1);
    glVertex3f(0.95,-0.81, -0.1);
    glVertex3f(0.89,-0.81, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.89,-0.79, 0.0);
    glVertex3f(0.89,-0.79, -0.1);
    glVertex3f(0.89,-0.81, -0.1);
    glVertex3f(0.89,-0.81, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.95,-0.79, 0.0);
    glVertex3f(0.95,-0.79, -0.1);
    glVertex3f(0.95,-0.81, -0.1);
    glVertex3f(0.95,-0.81, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.89,-0.79, 0.0);
    glVertex3f(0.95,-0.79, 0.0);
    glVertex3f(0.89,-0.79, -0.1);
    glVertex3f(0.95,-0.79, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.95,-0.81, 0.0);
    glVertex3f(0.89,-0.81, 0.0);
    glVertex3f(0.95,-0.81, -0.1);
    glVertex3f(0.89,-0.81, -0.1);
    glEnd();



    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.89,-0.79, 0.0);
    glVertex3f(0.91,-0.79, 0.0);
    glVertex3f(0.91,-0.85, 0.0);
    glVertex3f(0.89,-0.85, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.89,-0.79, -0.1);
    glVertex3f(0.91,-0.79, -0.1);
    glVertex3f(0.91,-0.85, -0.1);
    glVertex3f(0.89,-0.85, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.89,-0.79, 0.0);
    glVertex3f(0.89,-0.79, -0.1);
    glVertex3f(0.89,-0.85, -0.1);
    glVertex3f(0.89,-0.85, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.91,-0.79, 0.0);
    glVertex3f(0.91,-0.79, -0.1);
    glVertex3f(0.91,-0.85, -0.1);
    glVertex3f(0.91,-0.85, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.89,-0.79, 0.0);
    glVertex3f(0.91,-0.79, 0.0);
    glVertex3f(0.89,-0.79, -0.1);
    glVertex3f(0.91,-0.79, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.91,-0.85, 0.0);
    glVertex3f(0.89,-0.85, 0.0);
    glVertex3f(0.91,-0.85, -0.1);
    glVertex3f(0.89,-0.85, -0.1);
    glEnd();



    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.89,-0.83, 0.0);
    glVertex3f(0.95,-0.83, 0.0);
    glVertex3f(0.95,-0.85, 0.0);
    glVertex3f(0.89,-0.85, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.89,-0.83, -0.1);
    glVertex3f(0.95,-0.83, -0.1);
    glVertex3f(0.95,-0.85, -0.1);
    glVertex3f(0.89,-0.85, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.89,-0.83, 0.0);
    glVertex3f(0.89,-0.83, -0.1);
    glVertex3f(0.89,-0.85, -0.1);
    glVertex3f(0.89,-0.85, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.95,-0.83, 0.0);
    glVertex3f(0.95,-0.83, -0.1);
    glVertex3f(0.95,-0.85, -0.1);
    glVertex3f(0.95,-0.85, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.89,-0.83, 0.0);
    glVertex3f(0.95,-0.83, 0.0);
    glVertex3f(0.89,-0.83, -0.1);
    glVertex3f(0.95,-0.83, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.95,-0.85, 0.0);
    glVertex3f(0.89,-0.85, 0.0);
    glVertex3f(0.95,-0.85, -0.1);
    glVertex3f(0.89,-0.85, -0.1);
    glEnd();



    //akhir 2

    //angka 26

    //angka 6

    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.30,-0.74, 0.0);
    glVertex3f(1.36,-0.74, 0.0);
    glVertex3f(1.36,-0.76, 0.0);
    glVertex3f(1.30,-0.76, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.30,-0.74, -0.1);
    glVertex3f(1.36,-0.74, -0.1);
    glVertex3f(1.36,-0.76, -0.1);
    glVertex3f(1.30,-0.76, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.30,-0.74, 0.0);
    glVertex3f(1.30,-0.74, -0.1);
    glVertex3f(1.30,-0.76, -0.1);
    glVertex3f(1.30,-0.76, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.36,-0.74, 0.0);
    glVertex3f(1.36,-0.74, -0.1);
    glVertex3f(1.36,-0.76, -0.1);
    glVertex3f(1.36,-0.76, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.30,-0.74, 0.0);
    glVertex3f(1.36,-0.74, 0.0);
    glVertex3f(1.30,-0.74, -0.1);
    glVertex3f(1.36,-0.74, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.36,-0.76, 0.0);
    glVertex3f(1.30,-0.76, 0.0);
    glVertex3f(1.36,-0.76, -0.1);
    glVertex3f(1.30,-0.76, -0.1);
    glEnd();



    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.30,-0.74, 0.0);
    glVertex3f(1.32,-0.74, 0.0);
    glVertex3f(1.32,-0.85, 0.0);
    glVertex3f(1.30,-0.85, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.30,-0.74, -0.1);
    glVertex3f(1.32,-0.74, -0.1);
    glVertex3f(1.32,-0.85, -0.1);
    glVertex3f(1.30,-0.85, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.30,-0.74, 0.0);
    glVertex3f(1.30,-0.74, -0.1);
    glVertex3f(1.30,-0.85, -0.1);
    glVertex3f(1.30,-0.85, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.32,-0.74, 0.0);
    glVertex3f(1.32,-0.74, -0.1);
    glVertex3f(1.32,-0.85, -0.1);
    glVertex3f(1.32,-0.85, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.30,-0.74, 0.0);
    glVertex3f(1.32,-0.74, 0.0);
    glVertex3f(1.30,-0.74, -0.1);
    glVertex3f(1.32,-0.74, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.32,-0.85, 0.0);
    glVertex3f(1.30,-0.85, 0.0);
    glVertex3f(1.32,-0.85, -0.1);
    glVertex3f(1.30,-0.85, -0.1);
    glEnd();



    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.30,-0.79, 0.0);
    glVertex3f(1.36,-0.79, 0.0);
    glVertex3f(1.36,-0.81, 0.0);
    glVertex3f(1.30,-0.81, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.30,-0.79, -0.1);
    glVertex3f(1.36,-0.79, -0.1);
    glVertex3f(1.36,-0.81, -0.1);
    glVertex3f(1.30,-0.81, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.30,-0.79, 0.0);
    glVertex3f(1.30,-0.79, -0.1);
    glVertex3f(1.30,-0.81, -0.1);
    glVertex3f(1.30,-0.81, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.36,-0.79, 0.0);
    glVertex3f(1.36,-0.79, -0.1);
    glVertex3f(1.36,-0.81, -0.1);
    glVertex3f(1.36,-0.81, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.30,-0.79, 0.0);
    glVertex3f(1.36,-0.79, 0.0);
    glVertex3f(1.30,-0.79, -0.1);
    glVertex3f(1.36,-0.79, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.36,-0.81, 0.0);
    glVertex3f(1.30,-0.81, 0.0);
    glVertex3f(1.36,-0.81, -0.1);
    glVertex3f(1.30,-0.81, -0.1);
    glEnd();



    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.36,-0.79, 0.0);
    glVertex3f(1.34,-0.79, 0.0);
    glVertex3f(1.34,-0.85, 0.0);
    glVertex3f(1.36,-0.85, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.36,-0.79, -0.1);
    glVertex3f(1.34,-0.79, -0.1);
    glVertex3f(1.34,-0.85, -0.1);
    glVertex3f(1.36,-0.85, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.36,-0.79, 0.0);
    glVertex3f(1.36,-0.79, -0.1);
    glVertex3f(1.36,-0.85, -0.1);
    glVertex3f(1.36,-0.85, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.34,-0.79, 0.0);
    glVertex3f(1.34,-0.79, -0.1);
    glVertex3f(1.34,-0.85, -0.1);
    glVertex3f(1.34,-0.85, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.36,-0.79, 0.0);
    glVertex3f(1.34,-0.79, 0.0);
    glVertex3f(1.36,-0.79, -0.1);
    glVertex3f(1.34,-0.79, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.34,-0.85, 0.0);
    glVertex3f(1.36,-0.85, 0.0);
    glVertex3f(1.34,-0.85, -0.1);
    glVertex3f(1.36,-0.85, -0.1);
    glEnd();



    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.30,-0.83, 0.0);
    glVertex3f(1.36,-0.83, 0.0);
    glVertex3f(1.36,-0.85, 0.0);
    glVertex3f(1.30,-0.85, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.30,-0.83, -0.1);
    glVertex3f(1.36,-0.83, -0.1);
    glVertex3f(1.36,-0.85, -0.1);
    glVertex3f(1.30,-0.85, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.30,-0.83, 0.0);
    glVertex3f(1.30,-0.83, -0.1);
    glVertex3f(1.30,-0.85, -0.1);
    glVertex3f(1.30,-0.85, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.36,-0.83, 0.0);
    glVertex3f(1.36,-0.83, -0.1);
    glVertex3f(1.36,-0.85, -0.1);
    glVertex3f(1.36,-0.85, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.30,-0.83, 0.0);
    glVertex3f(1.36,-0.83, 0.0);
    glVertex3f(1.30,-0.83, -0.1);
    glVertex3f(1.36,-0.83, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.36,-0.85, 0.0);
    glVertex3f(1.30,-0.85, 0.0);
    glVertex3f(1.36,-0.85, -0.1);
    glVertex3f(1.30,-0.85, -0.1);
    glEnd();


    //akhir 6

    //angka 2

    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.22,-0.74, 0.0);
    glVertex3f(1.28,-0.74, 0.0);
    glVertex3f(1.28,-0.76, 0.0);
    glVertex3f(1.22,-0.76, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.22,-0.74, -0.1);
    glVertex3f(1.28,-0.74, -0.1);
    glVertex3f(1.28,-0.76, -0.1);
    glVertex3f(1.22,-0.76, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.22,-0.74, 0.0);
    glVertex3f(1.22,-0.74, -0.1);
    glVertex3f(1.22,-0.76, -0.1);
    glVertex3f(1.22,-0.76, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.28,-0.74, 0.0);
    glVertex3f(1.28,-0.74, -0.1);
    glVertex3f(1.28,-0.76, -0.1);
    glVertex3f(1.28,-0.76, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.22,-0.74, 0.0);
    glVertex3f(1.28,-0.74, 0.0);
    glVertex3f(1.22,-0.74, -0.1);
    glVertex3f(1.28,-0.74, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.28,-0.76, 0.0);
    glVertex3f(1.22,-0.76, 0.0);
    glVertex3f(1.28,-0.76, -0.1);
    glVertex3f(1.22,-0.76, -0.1);
    glEnd();



    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.26,-0.76, 0.0);
    glVertex3f(1.28,-0.76, 0.0);
    glVertex3f(1.28,-0.81, 0.0);
    glVertex3f(1.26,-0.81, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.26,-0.76, -0.1);
    glVertex3f(1.28,-0.76, -0.1);
    glVertex3f(1.28,-0.81, -0.1);
    glVertex3f(1.26,-0.81, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.26,-0.76, 0.0);
    glVertex3f(1.26,-0.76, -0.1);
    glVertex3f(1.26,-0.81, -0.1);
    glVertex3f(1.26,-0.81, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.28,-0.76, 0.0);
    glVertex3f(1.28,-0.76, -0.1);
    glVertex3f(1.28,-0.81, -0.1);
    glVertex3f(1.28,-0.81, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.26,-0.76, 0.0);
    glVertex3f(1.28,-0.76, 0.0);
    glVertex3f(1.26,-0.76, -0.1);
    glVertex3f(1.28,-0.76, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.28,-0.81, 0.0);
    glVertex3f(1.26,-0.81, 0.0);
    glVertex3f(1.28,-0.81, -0.1);
    glVertex3f(1.26,-0.81, -0.1);
    glEnd();



    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.22,-0.79, 0.0);
    glVertex3f(1.28,-0.79, 0.0);
    glVertex3f(1.28,-0.81, 0.0);
    glVertex3f(1.22,-0.81, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.22,-0.79, -0.1);
    glVertex3f(1.28,-0.79, -0.1);
    glVertex3f(1.28,-0.81, -0.1);
    glVertex3f(1.22,-0.81, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.22,-0.79, 0.0);
    glVertex3f(1.22,-0.79, -0.1);
    glVertex3f(1.22,-0.81, -0.1);
    glVertex3f(1.22,-0.81, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.28,-0.79, 0.0);
    glVertex3f(1.28,-0.79, -0.1);
    glVertex3f(1.28,-0.81, -0.1);
    glVertex3f(1.28,-0.81, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.22,-0.79, 0.0);
    glVertex3f(1.28,-0.79, 0.0);
    glVertex3f(1.22,-0.79, -0.1);
    glVertex3f(1.28,-0.79, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.28,-0.81, 0.0);
    glVertex3f(1.22,-0.81, 0.0);
    glVertex3f(1.28,-0.81, -0.1);
    glVertex3f(1.22,-0.81, -0.1);
    glEnd();




    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.22,-0.79, 0.0);
    glVertex3f(1.24,-0.79, 0.0);
    glVertex3f(1.24,-0.85, 0.0);
    glVertex3f(1.22,-0.85, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.22,-0.79, -0.1);
    glVertex3f(1.24,-0.79, -0.1);
    glVertex3f(1.24,-0.85, -0.1);
    glVertex3f(1.22,-0.85, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.22,-0.79, 0.0);
    glVertex3f(1.22,-0.79, -0.1);
    glVertex3f(1.22,-0.85, -0.1);
    glVertex3f(1.22,-0.85, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.24,-0.79, 0.0);
    glVertex3f(1.24,-0.79, -0.1);
    glVertex3f(1.24,-0.85, -0.1);
    glVertex3f(1.24,-0.85, 0.0);;
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.22,-0.79, 0.0);
    glVertex3f(1.24,-0.79, 0.0);
    glVertex3f(1.22,-0.79, -0.1);
    glVertex3f(1.24,-0.79, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.24,-0.85, 0.0);
    glVertex3f(1.22,-0.85, 0.0);
    glVertex3f(1.24,-0.85, -0.1);
    glVertex3f(1.22,-0.85, -0.1);
    glEnd();


    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.22,-0.83, 0.0);
    glVertex3f(1.28,-0.83, 0.0);
    glVertex3f(1.28,-0.85, 0.0);
    glVertex3f(1.22,-0.85, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.22,-0.83, -0.1);
    glVertex3f(1.28,-0.83, -0.1);
    glVertex3f(1.28,-0.85, -0.1);
    glVertex3f(1.22,-0.85, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.22,-0.83, 0.0);
    glVertex3f(1.22,-0.83, -0.1);
    glVertex3f(1.22,-0.85, -0.1);
    glVertex3f(1.22,-0.85, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.28,-0.83, 0.0);
    glVertex3f(1.28,-0.83, -0.1);
    glVertex3f(1.28,-0.85, -0.1);
    glVertex3f(1.28,-0.85, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.22,-0.83, 0.0);
    glVertex3f(1.28,-0.83, 0.0);
    glVertex3f(1.22,-0.83, -0.1);
    glVertex3f(1.28,-0.83, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.28,-0.85, 0.0);
    glVertex3f(1.22,-0.85, 0.0);
    glVertex3f(1.28,-0.85, -0.1);
    glVertex3f(1.22,-0.85, -0.1);
    glEnd();

    //akhir 2

    //akhir 26

    //angka 2

    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.72,-0.74, 0.0);
    glVertex3f(1.78,-0.74, 0.0);
    glVertex3f(1.78,-0.76, 0.0);
    glVertex3f(1.72,-0.76, 0.0);
    glEnd();

    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.72,-0.74, -0.1);
    glVertex3f(1.78,-0.74, -0.1);
    glVertex3f(1.78,-0.76, -0.1);
    glVertex3f(1.72,-0.76, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.72,-0.74, 0.0);
    glVertex3f(1.72,-0.74, -0.1);
    glVertex3f(1.72,-0.76, -0.1);
    glVertex3f(1.72,-0.76, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.78,-0.74, 0.0);
    glVertex3f(1.78,-0.74, -0.1);
    glVertex3f(1.78,-0.76, -0.1);
    glVertex3f(1.78,-0.76, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.72,-0.74, 0.0);
    glVertex3f(1.78,-0.74, 0.0);
    glVertex3f(1.72,-0.74, -0.1);
    glVertex3f(1.78,-0.74, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.78,-0.76, 0.0);
    glVertex3f(1.72,-0.76, 0.0);
    glVertex3f(1.78,-0.76, -0.1);
    glVertex3f(1.72,-0.76, -0.1);
    glEnd();



    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.76,-0.76, 0.0);
    glVertex3f(1.78,-0.76, 0.0);
    glVertex3f(1.78,-0.81, 0.0);
    glVertex3f(1.76,-0.81, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.76,-0.76, -0.1);
    glVertex3f(1.78,-0.76, -0.1);
    glVertex3f(1.78,-0.81, -0.1);
    glVertex3f(1.76,-0.81, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.76,-0.76, 0.0);
    glVertex3f(1.76,-0.76, -0.1);
    glVertex3f(1.76,-0.81, -0.1);
    glVertex3f(1.76,-0.81, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.78,-0.76, 0.0);
    glVertex3f(1.78,-0.76, -0.1);
    glVertex3f(1.78,-0.81, -0.1);
    glVertex3f(1.78,-0.81, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.76,-0.76, 0.0);
    glVertex3f(1.78,-0.76, 0.0);
    glVertex3f(1.76,-0.76, -0.1);
    glVertex3f(1.78,-0.76, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.78,-0.81, 0.0);
    glVertex3f(1.76,-0.81, 0.0);
    glVertex3f(1.78,-0.81, -0.1);
    glVertex3f(1.76,-0.81, -0.1);
    glEnd();



    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.72,-0.79, 0.0);
    glVertex3f(1.78,-0.79, 0.0);
    glVertex3f(1.78,-0.81, 0.0);
    glVertex3f(1.72,-0.81, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.72,-0.79, -0.1);
    glVertex3f(1.78,-0.79, -0.1);
    glVertex3f(1.78,-0.81, -0.1);
    glVertex3f(1.72,-0.81, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.72,-0.79, 0.0);
    glVertex3f(1.72,-0.79, -0.1);
    glVertex3f(1.72,-0.81, -0.1);
    glVertex3f(1.72,-0.81, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.78,-0.79, 0.0);
    glVertex3f(1.78,-0.79, -0.1);
    glVertex3f(1.78,-0.81, -0.1);
    glVertex3f(1.78,-0.81, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.72,-0.79, 0.0);
    glVertex3f(1.78,-0.79, 0.0);
    glVertex3f(1.72,-0.79, -0.1);
    glVertex3f(1.78,-0.79, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.78,-0.81, 0.0);
    glVertex3f(1.72,-0.81, 0.0);
    glVertex3f(1.78,-0.81, -0.1);
    glVertex3f(1.72,-0.81, -0.1);
    glEnd();



    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.72,-0.79, 0.0);
    glVertex3f(1.74,-0.79, 0.0);
    glVertex3f(1.74,-0.85, 0.0);
    glVertex3f(1.72,-0.85, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.72,-0.79, -0.1);
    glVertex3f(1.74,-0.79, -0.1);
    glVertex3f(1.74,-0.85, -0.1);
    glVertex3f(1.72,-0.85, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.72,-0.79, 0.0);
    glVertex3f(1.72,-0.79, -0.1);
    glVertex3f(1.72,-0.85, -0.1);
    glVertex3f(1.72,-0.85, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.74,-0.79, 0.0);
    glVertex3f(1.74,-0.79, -0.1);
    glVertex3f(1.74,-0.85, -0.1);
    glVertex3f(1.74,-0.85, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.72,-0.79, 0.0);
    glVertex3f(1.74,-0.79, 0.0);
    glVertex3f(1.72,-0.79, -0.1);
    glVertex3f(1.74,-0.79, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.74,-0.85, 0.0);
    glVertex3f(1.72,-0.85, 0.0);
    glVertex3f(1.74,-0.85, -0.1);
    glVertex3f(1.72,-0.85, -0.1);
    glEnd();



    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.72,-0.83, 0.0);
    glVertex3f(1.78,-0.83, 0.0);
    glVertex3f(1.78,-0.85, 0.0);
    glVertex3f(1.72,-0.85, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.72,-0.83, -0.1);
    glVertex3f(1.78,-0.83, -0.1);
    glVertex3f(1.78,-0.85, -0.1);
    glVertex3f(1.72,-0.85, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.72,-0.83, 0.0);
    glVertex3f(1.72,-0.83, -0.1);
    glVertex3f(1.72,-0.85, -0.1);
    glVertex3f(1.72,-0.85, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.78,-0.83, 0.0);
    glVertex3f(1.78,-0.83, -0.1);
    glVertex3f(1.78,-0.85, -0.1);
    glVertex3f(1.78,-0.85, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.72,-0.83, 0.0);
    glVertex3f(1.78,-0.83, 0.0);
    glVertex3f(1.72,-0.83, -0.1);
    glVertex3f(1.78,-0.83, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.78,-0.85, 0.0);
    glVertex3f(1.72,-0.85, 0.0);
    glVertex3f(1.78,-0.85, -0.1);
    glVertex3f(1.72,-0.85, -0.1);
    glEnd();


    //akhir 2

    //angka 8

    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.58,-1.135, 0.0);
    glVertex3f(-1.52,-1.135, 0.0);
    glVertex3f(-1.52,-1.155, 0.0);
    glVertex3f(-1.58,-1.155, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.58,-1.135, -0.1);
    glVertex3f(-1.52,-1.135, -0.1);
    glVertex3f(-1.52,-1.155, -0.1);
    glVertex3f(-1.58,-1.155, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.58,-1.135, 0.0);
    glVertex3f(-1.58,-1.135, -0.1);
    glVertex3f(-1.58,-1.155, -0.1);
    glVertex3f(-1.58,-1.155, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.52,-1.135, 0.0);
    glVertex3f(-1.52,-1.135, -0.1);
    glVertex3f(-1.52,-1.155, -0.1);
    glVertex3f(-1.52,-1.155, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.58,-1.135, 0.0);
    glVertex3f(-1.52,-1.135, 0.0);
    glVertex3f(-1.58,-1.135, -0.1);
    glVertex3f(-1.52,-1.135, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.52,-1.155, 0.0);
    glVertex3f(-1.58,-1.155, 0.0);
    glVertex3f(-1.52,-1.155, -0.1);
    glVertex3f(-1.58,-1.155, -0.1);
    glEnd();



    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.58,-1.135, 0.0);
    glVertex3f(-1.56,-1.135, 0.0);
    glVertex3f(-1.56,-1.245, 0.0);
    glVertex3f(-1.58,-1.245, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.58,-1.135, -0.1);
    glVertex3f(-1.56,-1.135, -0.1);
    glVertex3f(-1.56,-1.245, -0.1);
    glVertex3f(-1.58,-1.245, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.58,-1.135, 0.0);
    glVertex3f(-1.58,-1.135, -0.1);
    glVertex3f(-1.58,-1.245, -0.1);
    glVertex3f(-1.58,-1.245, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.56,-1.135, 0.0);
    glVertex3f(-1.56,-1.135, -0.1);
    glVertex3f(-1.56,-1.245, -0.1);
    glVertex3f(-1.56,-1.245, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.58,-1.135, 0.0);
    glVertex3f(-1.56,-1.135, 0.0);
    glVertex3f(-1.58,-1.135, -0.1);
    glVertex3f(-1.56,-1.135, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.56,-1.245, 0.0);
    glVertex3f(-1.58,-1.245, 0.0);
    glVertex3f(-1.56,-1.245, -0.1);
    glVertex3f(-1.58,-1.245, -0.1);
    glEnd();



    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.58,-1.185, 0.0);
    glVertex3f(-1.52,-1.185, 0.0);
    glVertex3f(-1.52,-1.205, 0.0);
    glVertex3f(-1.58,-1.205, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.58,-1.185, -0.1);
    glVertex3f(-1.52,-1.185, -0.1);
    glVertex3f(-1.52,-1.205, -0.1);
    glVertex3f(-1.58,-1.205, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.58,-1.185, 0.0);
    glVertex3f(-1.58,-1.185, -0.1);
    glVertex3f(-1.58,-1.205, -0.1);
    glVertex3f(-1.58,-1.205, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.52,-1.185, 0.0);
    glVertex3f(-1.52,-1.185, -0.1);
    glVertex3f(-1.52,-1.205, -0.1);
    glVertex3f(-1.52,-1.205, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.58,-1.185, 0.0);
    glVertex3f(-1.52,-1.185, 0.0);
    glVertex3f(-1.58,-1.185, -0.1);
    glVertex3f(-1.52,-1.185, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.52,-1.205, 0.0);
    glVertex3f(-1.58,-1.205, 0.0);
    glVertex3f(-1.52,-1.205, -0.1);
    glVertex3f(-1.58,-1.205, -0.1);
    glEnd();


    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.52,-1.135, 0.0);
    glVertex3f(-1.54,-1.135, 0.0);
    glVertex3f(-1.54,-1.245, 0.0);
    glVertex3f(-1.52,-1.245, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.52,-1.135, -0.1);
    glVertex3f(-1.54,-1.135, -0.1);
    glVertex3f(-1.54,-1.245, -0.1);
    glVertex3f(-1.52,-1.245, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.52,-1.135, 0.0);
    glVertex3f(-1.52,-1.135, -0.1);
    glVertex3f(-1.52,-1.245, -0.1);
    glVertex3f(-1.52,-1.245, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.54,-1.135, 0.0);
    glVertex3f(-1.54,-1.135, -0.1);
    glVertex3f(-1.54,-1.245, -0.1);
    glVertex3f(-1.54,-1.245, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.52,-1.135, 0.0);
    glVertex3f(-1.54,-1.135, 0.0);
    glVertex3f(-1.52,-1.135, -0.1);
    glVertex3f(-1.54,-1.135, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.54,-1.245, 0.0);
    glVertex3f(-1.52,-1.245, 0.0);
    glVertex3f(-1.54,-1.245, -0.1);
    glVertex3f(-1.52,-1.245, -0.1);
    glEnd();



    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.58,-1.225, 0.0);
    glVertex3f(-1.52,-1.225, 0.0);
    glVertex3f(-1.52,-1.245, 0.0);
    glVertex3f(-1.58,-1.245, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.58,-1.225, -0.1);
    glVertex3f(-1.52,-1.225, -0.1);
    glVertex3f(-1.52,-1.245, -0.1);
    glVertex3f(-1.58,-1.245, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.58,-1.225, 0.0);
    glVertex3f(-1.58,-1.225, -0.1);
    glVertex3f(-1.58,-1.245, -0.1);
    glVertex3f(-1.58,-1.245, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.52,-1.225, 0.0);
    glVertex3f(-1.52,-1.225, -0.1);
    glVertex3f(-1.52,-1.245, -0.1);
    glVertex3f(-1.52,-1.245, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.58,-1.225, 0.0);
    glVertex3f(-1.52,-1.225, 0.0);
    glVertex3f(-1.58,-1.225, -0.1);
    glVertex3f(-1.52,-1.225, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.52,-1.245, 0.0);
    glVertex3f(-1.58,-1.245, 0.0);
    glVertex3f(-1.52,-1.245, -0.1);
    glVertex3f(-1.58,-1.245, -0.1);
    glEnd();



    //akhir 8

    //angka 6

    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.75,-1.16, 0.0);
    glVertex3f(-0.69,-1.16, 0.0);
    glVertex3f(-0.69,-1.18, 0.0);
    glVertex3f(-0.75,-1.18, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.75,-1.16, -0.1);
    glVertex3f(-0.69,-1.16, -0.1);
    glVertex3f(-0.69,-1.18, -0.1);
    glVertex3f(-0.75,-1.18, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.75,-1.16, 0.0);
    glVertex3f(-0.75,-1.16, -0.1);
    glVertex3f(-0.75,-1.18, -0.1);
    glVertex3f(-0.75,-1.18, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.69,-1.16, 0.0);
    glVertex3f(-0.69,-1.16, -0.1);
    glVertex3f(-0.69,-1.18, -0.1);
    glVertex3f(-0.69,-1.18, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.75,-1.16, 0.0);
    glVertex3f(-0.69,-1.16, 0.0);
    glVertex3f(-0.75,-1.16, -0.1);
    glVertex3f(-0.69,-1.16, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.69,-1.18, 0.0);
    glVertex3f(-0.75,-1.18, 0.0);
    glVertex3f(-0.69,-1.18, -0.1);
    glVertex3f(-0.75,-1.18, -0.1);
    glEnd();



    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.75,-1.16, 0.0);
    glVertex3f(-0.73,-1.16, 0.0);
    glVertex3f(-0.73,-1.27, 0.0);
    glVertex3f(-0.75,-1.27, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.75,-1.16, -0.1);
    glVertex3f(-0.73,-1.16, -0.1);
    glVertex3f(-0.73,-1.27, -0.1);
    glVertex3f(-0.75,-1.27, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.75,-1.16, 0.0);
    glVertex3f(-0.75,-1.16, -0.1);
    glVertex3f(-0.75,-1.27, -0.1);
    glVertex3f(-0.75,-1.27, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.73,-1.16, 0.0);
    glVertex3f(-0.73,-1.16, -0.1);
    glVertex3f(-0.73,-1.27, -0.1);
    glVertex3f(-0.73,-1.27, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.75,-1.16, 0.0);
    glVertex3f(-0.73,-1.16, 0.0);
    glVertex3f(-0.75,-1.16, -0.1);
    glVertex3f(-0.73,-1.16, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.73,-1.27, 0.0);
    glVertex3f(-0.75,-1.27, 0.0);
    glVertex3f(-0.73,-1.27, -0.1);
    glVertex3f(-0.75,-1.27, -0.1);
    glEnd();



    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.75,-1.21, 0.0);
    glVertex3f(-0.69,-1.21, 0.0);
    glVertex3f(-0.69,-1.23, 0.0);
    glVertex3f(-0.75,-1.23, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.75,-1.21, -0.1);
    glVertex3f(-0.69,-1.21, -0.1);
    glVertex3f(-0.69,-1.23, -0.1);
    glVertex3f(-0.75,-1.23, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.75,-1.21, 0.0);
    glVertex3f(-0.75,-1.21, -0.1);
    glVertex3f(-0.75,-1.23, -0.1);
    glVertex3f(-0.75,-1.23, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.69,-1.21, 0.0);
    glVertex3f(-0.69,-1.21, -0.1);
    glVertex3f(-0.69,-1.23, -0.1);
    glVertex3f(-0.69,-1.23, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.75,-1.21, 0.0);
    glVertex3f(-0.69,-1.21, 0.0);
    glVertex3f(-0.75,-1.21, -0.1);
    glVertex3f(-0.69,-1.21, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.69,-1.23, 0.0);
    glVertex3f(-0.75,-1.23, 0.0);
    glVertex3f(-0.69,-1.23, -0.1);
    glVertex3f(-0.75,-1.23, -0.1);
    glEnd();



    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.69,-1.21, 0.0);
    glVertex3f(-0.71,-1.21, 0.0);
    glVertex3f(-0.71,-1.27, 0.0);
    glVertex3f(-0.69,-1.27, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.69,-1.21, -0.1);
    glVertex3f(-0.71,-1.21, -0.1);
    glVertex3f(-0.71,-1.27, -0.1);
    glVertex3f(-0.69,-1.27, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.69,-1.21, 0.0);
    glVertex3f(-0.69,-1.21, -0.1);
    glVertex3f(-0.69,-1.27, -0.1);
    glVertex3f(-0.69,-1.27, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.71,-1.21, 0.0);
    glVertex3f(-0.71,-1.21, -0.1);
    glVertex3f(-0.71,-1.27, -0.1);
    glVertex3f(-0.71,-1.27, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.69,-1.21, 0.0);
    glVertex3f(-0.71,-1.21, 0.0);
    glVertex3f(-0.69,-1.21, -0.1);
    glVertex3f(-0.71,-1.21, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.71,-1.27, 0.0);
    glVertex3f(-0.69,-1.27, 0.0);
    glVertex3f(-0.71,-1.27, -0.1);
    glVertex3f(-0.69,-1.27, -0.1);
    glEnd();



    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.75,-1.25, 0.0);
    glVertex3f(-0.69,-1.25, 0.0);
    glVertex3f(-0.69,-1.27, 0.0);
    glVertex3f(-0.75,-1.27, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.75,-1.25, -0.1);
    glVertex3f(-0.69,-1.25, -0.1);
    glVertex3f(-0.69,-1.27, -0.1);
    glVertex3f(-0.75,-1.27, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.75,-1.25, 0.0);
    glVertex3f(-0.75,-1.25, -0.1);
    glVertex3f(-0.75,-1.27, -0.1);
    glVertex3f(-0.75,-1.27, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.69,-1.25, 0.0);
    glVertex3f(-0.69,-1.25, -0.1);
    glVertex3f(-0.69,-1.27, -0.1);
    glVertex3f(-0.69,-1.27, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.75,-1.25, 0.0);
    glVertex3f(-0.69,-1.25, 0.0);
    glVertex3f(-0.75,-1.25, -0.1);
    glVertex3f(-0.69,-1.25, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.69,-1.27, 0.0);
    glVertex3f(-0.75,-1.27, 0.0);
    glVertex3f(-0.69,-1.27, -0.1);
    glVertex3f(-0.75,-1.27, -0.1);
    glEnd();



    //akhir 6

    //angka 2

    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.89,-1.16, 0.0);
    glVertex3f(0.95,-1.16, 0.0);
    glVertex3f(0.95,-1.18, 0.0);
    glVertex3f(0.89,-1.18, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.89,-1.16, -0.1);
    glVertex3f(0.95,-1.16, -0.1);
    glVertex3f(0.95,-1.18, -0.1);
    glVertex3f(0.89,-1.18, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.89,-1.16, 0.0);
    glVertex3f(0.89,-1.16, -0.1);
    glVertex3f(0.89,-1.18, -0.1);
    glVertex3f(0.89,-1.18, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.95,-1.16, 0.0);
    glVertex3f(0.95,-1.16, -0.1);
    glVertex3f(0.95,-1.18, -0.1);
    glVertex3f(0.95,-1.18, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.89,-1.16, 0.0);
    glVertex3f(0.95,-1.16, 0.0);
    glVertex3f(0.89,-1.16, -0.1);
    glVertex3f(0.95,-1.16, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.95,-1.18, 0.0);
    glVertex3f(0.89,-1.18, 0.0);
    glVertex3f(0.95,-1.18, -0.1);
    glVertex3f(0.89,-1.18, -0.1);
    glEnd();



    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.93,-1.18, 0.0);
    glVertex3f(0.95,-1.18, 0.0);
    glVertex3f(0.95,-1.23, 0.0);
    glVertex3f(0.93,-1.23, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.93,-1.18, -0.1);
    glVertex3f(0.95,-1.18, -0.1);
    glVertex3f(0.95,-1.23, -0.1);
    glVertex3f(0.93,-1.23, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.93,-1.18, 0.0);
    glVertex3f(0.93,-1.18, -0.1);
    glVertex3f(0.93,-1.23, -0.1);
    glVertex3f(0.93,-1.23, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.95,-1.18, 0.0);
    glVertex3f(0.95,-1.18, -0.1);
    glVertex3f(0.95,-1.23, -0.1);
    glVertex3f(0.95,-1.23, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.93,-1.18, 0.0);
    glVertex3f(0.95,-1.18, 0.0);
    glVertex3f(0.93,-1.18, -0.1);
    glVertex3f(0.95,-1.18, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.95,-1.23, 0.0);
    glVertex3f(0.93,-1.23, 0.0);
    glVertex3f(0.95,-1.23, -0.1);
    glVertex3f(0.93,-1.23, -0.1);
    glEnd();



    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.9,-1.2, 0.0);
    glVertex3f(0.95,-1.2, 0.0);
    glVertex3f(0.95,-1.23, 0.0);
    glVertex3f(0.9,-1.23, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.9,-1.2, -0.1);
    glVertex3f(0.95,-1.2, -0.1);
    glVertex3f(0.95,-1.23, -0.1);
    glVertex3f(0.9,-1.23, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.9,-1.2, 0.0);
    glVertex3f(0.9,-1.2, -0.1);
    glVertex3f(0.9,-1.23, -0.1);
    glVertex3f(0.9,-1.23, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.95,-1.2, 0.0);
    glVertex3f(0.95,-1.2, -0.1);
    glVertex3f(0.95,-1.23, -0.1);
    glVertex3f(0.95,-1.23, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.9,-1.2, 0.0);
    glVertex3f(0.95,-1.2, 0.0);
    glVertex3f(0.9,-1.2, -0.1);
    glVertex3f(0.95,-1.2, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.95,-1.23, 0.0);
    glVertex3f(0.9,-1.23, 0.0);
    glVertex3f(0.95,-1.23, -0.1);
    glVertex3f(0.9,-1.23, -0.1);
    glEnd();




    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.89,-1.2, 0.0);
    glVertex3f(0.91,-1.2, 0.0);
    glVertex3f(0.91,-1.26, 0.0);
    glVertex3f(0.89,-1.26, 0.0);
    glEnd();

    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.89,-1.2, -0.1);
    glVertex3f(0.91,-1.2, -0.1);
    glVertex3f(0.91,-1.26, -0.1);
    glVertex3f(0.89,-1.26, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.89,-1.2, 0.0);
    glVertex3f(0.89,-1.2, -0.1);
    glVertex3f(0.89,-1.26, -0.1);
    glVertex3f(0.89,-1.26, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.91,-1.2, 0.0);
    glVertex3f(0.91,-1.2, -0.1);
    glVertex3f(0.91,-1.26, -0.1);
    glVertex3f(0.91,-1.26, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.89,-1.2, 0.0);
    glVertex3f(0.91,-1.2, 0.0);
    glVertex3f(0.89,-1.2, -0.1);
    glVertex3f(0.91,-1.2, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.91,-1.26, 0.0);
    glVertex3f(0.89,-1.26, 0.0);
    glVertex3f(0.91,-1.26, -0.1);
    glVertex3f(0.89,-1.26, -0.1);
    glEnd();



    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.89,-1.25, 0.0);
    glVertex3f(0.95,-1.25, 0.0);
    glVertex3f(0.95,-1.27, 0.0);
    glVertex3f(0.89,-1.27, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.89,-1.25, -0.1);
    glVertex3f(0.95,-1.25, -0.1);
    glVertex3f(0.95,-1.27, -0.1);
    glVertex3f(0.89,-1.27, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.89,-1.25, 0.0);
    glVertex3f(0.89,-1.25, -0.1);
    glVertex3f(0.89,-1.27, -0.1);
    glVertex3f(0.89,-1.27, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.95,-1.25, 0.0);
    glVertex3f(0.95,-1.25, -0.1);
    glVertex3f(0.95,-1.27, -0.1);
    glVertex3f(0.95,-1.27, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.89,-1.25, 0.0);
    glVertex3f(0.95,-1.25, 0.0);
    glVertex3f(0.89,-1.25, -0.1);
    glVertex3f(0.95,-1.25, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.95,-1.27, 0.0);
    glVertex3f(0.89,-1.27, 0.0);
    glVertex3f(0.95,-1.27, -0.1);
    glVertex3f(0.89,-1.27, -0.1);
    glEnd();



    //akhir 2

    //angka 2

    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.16,-1.58, 0.0);
    glVertex3f(-1.1,-1.58, 0.0);
    glVertex3f(-1.1,-1.6, 0.0);
    glVertex3f(-1.16,-1.6, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.16,-1.58, -0.1);
    glVertex3f(-1.1,-1.58, -0.1);
    glVertex3f(-1.1,-1.6, -0.1);
    glVertex3f(-1.16,-1.6, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.16,-1.58, 0.0);
    glVertex3f(-1.16,-1.58, -0.1);
    glVertex3f(-1.16,-1.6, -0.1);
    glVertex3f(-1.16,-1.6, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.1,-1.58, 0.0);
    glVertex3f(-1.1,-1.58, -0.1);
    glVertex3f(-1.1,-1.6, -0.1);
    glVertex3f(-1.1,-1.6, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.16,-1.58, 0.0);
    glVertex3f(-1.1,-1.58, 0.0);
    glVertex3f(-1.16,-1.58, -0.1);
    glVertex3f(-1.1,-1.58, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.1,-1.6, 0.0);
    glVertex3f(-1.16,-1.6, 0.0);
    glVertex3f(-1.1,-1.6, -0.1);
    glVertex3f(-1.16,-1.6, -0.1);
    glEnd();



    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.12,-1.6, 0.0);
    glVertex3f(-1.1,-1.6, 0.0);
    glVertex3f(-1.1,-1.65, 0.0);
    glVertex3f(-1.12,-1.65, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.12,-1.6, -0.1);
    glVertex3f(-1.1,-1.6, -0.1);
    glVertex3f(-1.1,-1.65, -0.1);
    glVertex3f(-1.12,-1.65, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.12,-1.6, 0.0);
    glVertex3f(-1.12,-1.6, -0.1);
    glVertex3f(-1.12,-1.65, -0.1);
    glVertex3f(-1.12,-1.65, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.1,-1.6, 0.0);
    glVertex3f(-1.1,-1.6, -0.1);
    glVertex3f(-1.1,-1.65, -0.1);
    glVertex3f(-1.1,-1.65, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.12,-1.6, 0.0);
    glVertex3f(-1.1,-1.6, 0.0);
    glVertex3f(-1.12,-1.6, -0.1);
    glVertex3f(-1.1,-1.6, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.1,-1.65, 0.0);
    glVertex3f(-1.12,-1.65, 0.0);
    glVertex3f(-1.1,-1.65, -0.1);
    glVertex3f(-1.12,-1.65, -0.1);
    glEnd();



    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.15,-1.63, 0.0);
    glVertex3f(-1.1,-1.63, 0.0);
    glVertex3f(-1.1,-1.65, 0.0);
    glVertex3f(-1.15,-1.65, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.15,-1.63, -0.1);
    glVertex3f(-1.1,-1.63, -0.1);
    glVertex3f(-1.1,-1.65, -0.1);
    glVertex3f(-1.15,-1.65, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.15,-1.63, 0.0);
    glVertex3f(-1.15,-1.63, -0.1);
    glVertex3f(-1.15,-1.65, -0.1);
    glVertex3f(-1.15,-1.65, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.1,-1.63, 0.0);
    glVertex3f(-1.1,-1.63, -0.1);
    glVertex3f(-1.1,-1.65, -0.1);
    glVertex3f(-1.1,-1.65, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.15,-1.63, 0.0);
    glVertex3f(-1.1,-1.63, 0.0);
    glVertex3f(-1.15,-1.63, -0.1);
    glVertex3f(-1.1,-1.63, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.1,-1.65, 0.0);
    glVertex3f(-1.15,-1.65, 0.0);
    glVertex3f(-1.1,-1.65, -0.1);
    glVertex3f(-1.15,-1.65, -0.1);
    glEnd();



    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.16,-1.63, 0.0);
    glVertex3f(-1.14,-1.63, 0.0);
    glVertex3f(-1.14,-1.69, 0.0);
    glVertex3f(-1.16,-1.69, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.16,-1.63, -0.1);
    glVertex3f(-1.14,-1.63, -0.1);
    glVertex3f(-1.14,-1.69, -0.1);
    glVertex3f(-1.16,-1.69, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.16,-1.63, 0.0);
    glVertex3f(-1.16,-1.63, -0.1);
    glVertex3f(-1.16,-1.69, -0.1);
    glVertex3f(-1.16,-1.69, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.14,-1.63, 0.0);
    glVertex3f(-1.14,-1.63, -0.1);
    glVertex3f(-1.14,-1.69, -0.1);
    glVertex3f(-1.14,-1.69, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.16,-1.63, 0.0);
    glVertex3f(-1.14,-1.63, 0.0);
    glVertex3f(-1.16,-1.63, -0.1);
    glVertex3f(-1.14,-1.63, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.14,-1.69, 0.0);
    glVertex3f(-1.16,-1.69, 0.0);
    glVertex3f(-1.14,-1.69, -0.1);
    glVertex3f(-1.16,-1.69, -0.1);
    glEnd();

    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.15,-1.67, 0.0);
    glVertex3f(-1.1,-1.67, 0.0);
    glVertex3f(-1.1,-1.69, 0.0);
    glVertex3f(-1.15,-1.69, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.15,-1.67, -0.1);
    glVertex3f(-1.1,-1.67, -0.1);
    glVertex3f(-1.1,-1.69, -0.1);
    glVertex3f(-1.15,-1.69, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.15,-1.67, 0.0);
    glVertex3f(-1.15,-1.67, -0.1);
    glVertex3f(-1.15,-1.69, -0.1);
    glVertex3f(-1.15,-1.69, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.1,-1.67, 0.0);
    glVertex3f(-1.1,-1.67, -0.1);
    glVertex3f(-1.1,-1.69, -0.1);
    glVertex3f(-1.1,-1.69, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.15,-1.67, 0.0);
    glVertex3f(-1.1,-1.67, 0.0);
    glVertex3f(-1.15,-1.67, -0.1);
    glVertex3f(-1.1,-1.67, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.1,-1.69, 0.0);
    glVertex3f(-1.15,-1.69, 0.0);
    glVertex3f(-1.1,-1.69, -0.1);
    glVertex3f(-1.15,-1.69, -0.1);
    glEnd();


    //akhir 2

    //angka 6

    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.48,-1.58, 0.0);
    glVertex3f(0.54,-1.58, 0.0);
    glVertex3f(0.54,-1.6, 0.0);
    glVertex3f(0.48,-1.6, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.48,-1.58, -0.1);
    glVertex3f(0.54,-1.58, -0.1);
    glVertex3f(0.54,-1.6, -0.1);
    glVertex3f(0.48,-1.6, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.48,-1.58, 0.0);
    glVertex3f(0.48,-1.58, -0.1);
    glVertex3f(0.48,-1.6, -0.1);
    glVertex3f(0.48,-1.6, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.54,-1.58, 0.0);
    glVertex3f(0.54,-1.58, -0.1);
    glVertex3f(0.54,-1.6, -0.1);
    glVertex3f(0.54,-1.6, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.48,-1.58, 0.0);
    glVertex3f(0.54,-1.58, 0.0);
    glVertex3f(0.48,-1.58, -0.1);
    glVertex3f(0.54,-1.58, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.54,-1.6, 0.0);
    glVertex3f(0.48,-1.6, 0.0);
    glVertex3f(0.54,-1.6, -0.1);
    glVertex3f(0.48,-1.6, -0.1);
    glEnd();


    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.48,-1.58, 0.0);
    glVertex3f(0.50,-1.58, 0.0);
    glVertex3f(0.50,-1.69, 0.0);
    glVertex3f(0.48,-1.69, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.48,-1.58, -0.1);
    glVertex3f(0.50,-1.58, -0.1);
    glVertex3f(0.50,-1.69, -0.1);
    glVertex3f(0.48,-1.69, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.48,-1.58, 0.0);
    glVertex3f(0.48,-1.58, -0.1);
    glVertex3f(0.48,-1.69, -0.1);
    glVertex3f(0.48,-1.69, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.50,-1.58, 0.0);
    glVertex3f(0.50,-1.58, -0.1);
    glVertex3f(0.50,-1.69, -0.1);
    glVertex3f(0.50,-1.69, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.48,-1.58, 0.0);
    glVertex3f(0.50,-1.58, 0.0);
    glVertex3f(0.48,-1.58, -0.1);
    glVertex3f(0.50,-1.58, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.50,-1.69, 0.0);
    glVertex3f(0.48,-1.69, 0.0);
    glVertex3f(0.50,-1.69, -0.1);
    glVertex3f(0.48,-1.69, -0.1);
    glEnd();



    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.48,-1.63, 0.0);
    glVertex3f(0.54,-1.63, 0.0);
    glVertex3f(0.54,-1.65, 0.0);
    glVertex3f(0.48,-1.65, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.48,-1.63, -0.1);
    glVertex3f(0.54,-1.63, -0.1);
    glVertex3f(0.54,-1.65, -0.1);
    glVertex3f(0.48,-1.65, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.48,-1.63, 0.0);
    glVertex3f(0.48,-1.63, -0.1);
    glVertex3f(0.48,-1.65, -0.1);
    glVertex3f(0.48,-1.65, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.54,-1.63, 0.0);
    glVertex3f(0.54,-1.63, -0.1);
    glVertex3f(0.54,-1.65, -0.1);
    glVertex3f(0.54,-1.65, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.48,-1.63, 0.0);
    glVertex3f(0.54,-1.63, 0.0);
    glVertex3f(0.48,-1.63, -0.1);
    glVertex3f(0.54,-1.63, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.54,-1.65, 0.0);
    glVertex3f(0.48,-1.65, 0.0);
    glVertex3f(0.54,-1.65, -0.1);
    glVertex3f(0.48,-1.65, -0.1);
    glEnd();



    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.54,-1.63, 0.0);
    glVertex3f(0.52,-1.63, 0.0);
    glVertex3f(0.52,-1.69, 0.0);
    glVertex3f(0.54,-1.69, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.54,-1.63, -0.1);
    glVertex3f(0.52,-1.63, -0.1);
    glVertex3f(0.52,-1.69, -0.1);
    glVertex3f(0.54,-1.69, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.54,-1.63, 0.0);
    glVertex3f(0.54,-1.63, -0.1);
    glVertex3f(0.54,-1.69, -0.1);
    glVertex3f(0.54,-1.69, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.52,-1.63, 0.0);
    glVertex3f(0.52,-1.63, -0.1);
    glVertex3f(0.52,-1.69, -0.1);
    glVertex3f(0.52,-1.69, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.54,-1.63, 0.0);
    glVertex3f(0.52,-1.63, 0.0);
    glVertex3f(0.54,-1.63, -0.1);
    glVertex3f(0.52,-1.63, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.52,-1.69, 0.0);
    glVertex3f(0.54,-1.69, 0.0);
    glVertex3f(0.52,-1.69, -0.1);
    glVertex3f(0.54,-1.69, -0.1);
    glEnd();


    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.48,-1.67, 0.0);
    glVertex3f(0.54,-1.67, 0.0);
    glVertex3f(0.54,-1.69, 0.0);
    glVertex3f(0.48,-1.69, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.48,-1.67, -0.1);
    glVertex3f(0.54,-1.67, -0.1);
    glVertex3f(0.54,-1.69, -0.1);
    glVertex3f(0.48,-1.69, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.48,-1.67, 0.0);
    glVertex3f(0.48,-1.67, -0.1);
    glVertex3f(0.48,-1.69, -0.1);
    glVertex3f(0.48,-1.69, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.54,-1.67, 0.0);
    glVertex3f(0.54,-1.67, -0.1);
    glVertex3f(0.54,-1.69, -0.1);
    glVertex3f(0.54,-1.69, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.48,-1.67, 0.0);
    glVertex3f(0.54,-1.67, 0.0);
    glVertex3f(0.48,-1.67, -0.1);
    glVertex3f(0.54,-1.67, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.54,-1.69, 0.0);
    glVertex3f(0.48,-1.69, 0.0);
    glVertex3f(0.54,-1.69, -0.1);
    glVertex3f(0.48,-1.69, -0.1);
    glEnd();



    //akhir 6

    //angka 8

    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.3,-1.58, 0.0);
    glVertex3f(1.36,-1.58, 0.0);
    glVertex3f(1.36,-1.6, 0.0);
    glVertex3f(1.3,-1.6, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.3,-1.58, -0.1);
    glVertex3f(1.36,-1.58, -0.1);
    glVertex3f(1.36,-1.6, -0.1);
    glVertex3f(1.3,-1.6, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.3,-1.58, 0.0);
    glVertex3f(1.3,-1.58, -0.1);
    glVertex3f(1.3,-1.6, -0.1);
    glVertex3f(1.3,-1.6, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.36,-1.58, 0.0);
    glVertex3f(1.36,-1.58, -0.1);
    glVertex3f(1.36,-1.6, -0.1);
    glVertex3f(1.36,-1.6, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.3,-1.58, 0.0);
    glVertex3f(1.36,-1.58, 0.0);
    glVertex3f(1.3,-1.58, -0.1);
    glVertex3f(1.36,-1.58, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.36,-1.6, 0.0);
    glVertex3f(1.3,-1.6, 0.0);
    glVertex3f(1.36,-1.6, -0.1);
    glVertex3f(1.3,-1.6, -0.1);
    glEnd();



    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.3,-1.58, 0.0);
    glVertex3f(1.32,-1.58, 0.0);
    glVertex3f(1.32,-1.69, 0.0);
    glVertex3f(1.3,-1.69, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.3,-1.58, -0.1);
    glVertex3f(1.32,-1.58, -0.1);
    glVertex3f(1.32,-1.69, -0.1);
    glVertex3f(1.3,-1.69, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.3,-1.58, 0.0);
    glVertex3f(1.3,-1.58, -0.1);
    glVertex3f(1.3,-1.69, -0.1);
    glVertex3f(1.3,-1.69, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.32,-1.58, 0.0);
    glVertex3f(1.32,-1.58, -0.1);
    glVertex3f(1.32,-1.69, -0.1);
    glVertex3f(1.32,-1.69, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.3,-1.58, 0.0);
    glVertex3f(1.32,-1.58, 0.0);
    glVertex3f(1.3,-1.58, -0.1);
    glVertex3f(1.32,-1.58, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.32,-1.69, 0.0);
    glVertex3f(1.3,-1.69, 0.0);
    glVertex3f(1.32,-1.69, -0.1);
    glVertex3f(1.3,-1.69, -0.1);
    glEnd();



    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.3,-1.63, 0.0);
    glVertex3f(1.36,-1.63, 0.0);
    glVertex3f(1.36,-1.65, 0.0);
    glVertex3f(1.3,-1.65, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.3,-1.63, -0.1);
    glVertex3f(1.36,-1.63, -0.1);
    glVertex3f(1.36,-1.65, -0.1);
    glVertex3f(1.3,-1.65, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.3,-1.63, 0.0);
    glVertex3f(1.3,-1.63, -0.1);
    glVertex3f(1.3,-1.65, -0.1);
    glVertex3f(1.3,-1.65, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.36,-1.63, 0.0);
    glVertex3f(1.36,-1.63, -0.1);
    glVertex3f(1.36,-1.65, -0.1);
    glVertex3f(1.36,-1.65, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.3,-1.63, 0.0);
    glVertex3f(1.36,-1.63, 0.0);
    glVertex3f(1.3,-1.63, -0.1);
    glVertex3f(1.36,-1.63, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.36,-1.65, 0.0);
    glVertex3f(1.3,-1.65, 0.0);
    glVertex3f(1.36,-1.65, -0.1);
    glVertex3f(1.3,-1.65, -0.1);
    glEnd();



    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.36,-1.58, 0.0);
    glVertex3f(1.34,-1.58, 0.0);
    glVertex3f(1.34,-1.69, 0.0);
    glVertex3f(1.36,-1.69, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.36,-1.58, -0.1);
    glVertex3f(1.34,-1.58, -0.1);
    glVertex3f(1.34,-1.69, -0.1);
    glVertex3f(1.36,-1.69, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.36,-1.58, 0.0);
    glVertex3f(1.36,-1.58, -0.1);
    glVertex3f(1.36,-1.69, -0.1);
    glVertex3f(1.36,-1.69, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.34,-1.58, 0.0);
    glVertex3f(1.34,-1.58, -0.1);
    glVertex3f(1.34,-1.69, -0.1);
    glVertex3f(1.34,-1.69, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.36,-1.58, 0.0);
    glVertex3f(1.34,-1.58, 0.0);
    glVertex3f(1.36,-1.58, -0.1);
    glVertex3f(1.34,-1.58, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.34,-1.69, 0.0);
    glVertex3f(1.36,-1.69, 0.0);
    glVertex3f(1.34,-1.69, -0.1);
    glVertex3f(1.36,-1.69, -0.1);
    glEnd();



    //belakang
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.3,-1.67, 0.0);
    glVertex3f(1.36,-1.67, 0.0);
    glVertex3f(1.36,-1.69, 0.0);
    glVertex3f(1.3,-1.69, 0.0);
    glEnd();

    //depan
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.3,-1.67, -0.1);
    glVertex3f(1.36,-1.67, -0.1);
    glVertex3f(1.36,-1.69, -0.1);
    glVertex3f(1.3,-1.69, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.3,-1.67, 0.0);
    glVertex3f(1.3,-1.67, -0.1);
    glVertex3f(1.3,-1.69, -0.1);
    glVertex3f(1.3,-1.69, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.36,-1.67, 0.0);
    glVertex3f(1.36,-1.67, -0.1);
    glVertex3f(1.36,-1.69, -0.1);
    glVertex3f(1.36,-1.69, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.3,-1.67, 0.0);
    glVertex3f(1.36,-1.67, 0.0);
    glVertex3f(1.3,-1.67, -0.1);
    glVertex3f(1.36,-1.67, -0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(1.36,-1.69, 0.0);
    glVertex3f(1.3,-1.69, 0.0);
    glVertex3f(1.36,-1.69, -0.1);
    glVertex3f(1.3,-1.69, -0.1);
    glEnd();



    //akhir 8

    //player2 belakang
    glBegin(GL_POLYGON);
    glColor3fv(color8);
    glVertex3f(nilai_x1_p2 ,-1.71 + y_play_p2, -0.1);
    glVertex3f(nilai_x2_p2 ,-1.81 + y_play_p2, -0.1);
    glVertex3f(nilai_x3_p2 ,-1.81 + y_play_p2, -0.1);
    glEnd();

    //player2 depan
    glBegin(GL_POLYGON);
    glColor3fv(color8);
    glVertex3f(nilai_x1_p2 ,-1.71 + y_play_p2, -0.2);
    glVertex3f(nilai_x2_p2 ,-1.81 + y_play_p2, -0.2);
    glVertex3f(nilai_x3_p2 ,-1.81 + y_play_p2, -0.2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color8);
    glVertex3f(nilai_x1_p2 ,-1.71 + y_play_p2, -0.1);
    glVertex3f(nilai_x1_p2 ,-1.71 + y_play_p2, -0.2);
    glVertex3f(nilai_x3_p2 ,-1.81 + y_play_p2, -0.2);
    glVertex3f(nilai_x3_p2 ,-1.81 + y_play_p2, -0.1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color8);
    glVertex3f(nilai_x1_p2 ,-1.71 + y_play_p2, -0.1);
    glVertex3f(nilai_x1_p2 ,-1.71 + y_play_p2, -0.2);
    glVertex3f(nilai_x2_p2 ,-1.81 + y_play_p2, -0.2);
    glVertex3f(nilai_x2_p2 ,-1.81 + y_play_p2, -0.1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color8);
    glVertex3f(nilai_x2_p2 ,-1.81 + y_play_p2, -0.1);
    glVertex3f(nilai_x3_p2 ,-1.81 + y_play_p2, -0.1);
    glVertex3f(nilai_x2_p2 ,-1.81 + y_play_p2, -0.2);
    glVertex3f(nilai_x3_p2 ,-1.81 + y_play_p2, -0.2);
    glEnd();

    //player1 belakang
    glBegin(GL_POLYGON);
    glColor3fv(color7);
    glVertex3f(nilai_x1_p1 ,-1.56 + y_play_p1, -0.1);
    glVertex3f(nilai_x2_p1 ,-1.56 + y_play_p1, -0.1);
    glVertex3f(nilai_x2_p1 ,-1.66 + y_play_p1, -0.1);
    glVertex3f(nilai_x1_p1 ,-1.66 + y_play_p1, -0.1);
    glEnd();

    //player1 depan
    glBegin(GL_POLYGON);
    glColor3fv(color7);
    glVertex3f(nilai_x1_p1 ,-1.56 + y_play_p1, -0.2);
    glVertex3f(nilai_x2_p1 ,-1.56 + y_play_p1, -0.2);
    glVertex3f(nilai_x2_p1 ,-1.66 + y_play_p1, -0.2);
    glVertex3f(nilai_x1_p1 ,-1.66 + y_play_p1, -0.2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color7);
    glVertex3f(nilai_x1_p1 ,-1.56 + y_play_p1, -0.1);
    glVertex3f(nilai_x1_p1 ,-1.56 + y_play_p1, -0.2);
    glVertex3f(nilai_x1_p1 ,-1.66 + y_play_p1, -0.2);
    glVertex3f(nilai_x1_p1 ,-1.66 + y_play_p1, -0.1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color7);
    glVertex3f(nilai_x2_p1 ,-1.56 + y_play_p1, -0.1);
    glVertex3f(nilai_x2_p1 ,-1.56 + y_play_p1, -0.2);
    glVertex3f(nilai_x2_p1 ,-1.66 + y_play_p1, -0.2);
    glVertex3f(nilai_x2_p1 ,-1.66 + y_play_p1, -0.1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color7);
    glVertex3f(nilai_x1_p1 ,-1.56 + y_play_p1, -0.1);
    glVertex3f(nilai_x2_p1 ,-1.56 + y_play_p1, -0.1);
    glVertex3f(nilai_x1_p1 ,-1.56 + y_play_p1, -0.2);
    glVertex3f(nilai_x2_p1 ,-1.56 + y_play_p1, -0.2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color7);
    glVertex3f(nilai_x2_p1 ,-1.66 + y_play_p1, -0.1);
    glVertex3f(nilai_x1_p1 ,-1.66 + y_play_p1, -0.1);
    glVertex3f(nilai_x2_p1 ,-1.66 + y_play_p1, -0.2);
    glVertex3f(nilai_x1_p1 ,-1.66 + y_play_p1, -0.2);
    glEnd();

    //observer
    glColor3f(1.0, 0.753, 0.796);
    glBegin(GL_POLYGON);
    glVertex3f(x1_observer, y1_observer, -0.1);
    glVertex3f(x2_observer, y1_observer, -0.1);
    glVertex3f(x2_observer, y2_observer, -0.1);
    glVertex3f(x1_observer, y2_observer, -0.1);
    glEnd();

    glColor3f(1.0, 0.753, 0.796);
    glBegin(GL_POLYGON);
    glVertex3f(x1_observer, y1_observer, -0.2);
    glVertex3f(x2_observer, y1_observer, -0.2);
    glVertex3f(x2_observer, y2_observer, -0.2);
    glVertex3f(x1_observer, y2_observer, -0.2);
    glEnd();

    glColor3f(1.0, 0.753, 0.796);
    glBegin(GL_POLYGON);
    glVertex3f(x1_observer, y1_observer, -0.1);
    glVertex3f(x1_observer, y1_observer, -0.2);
    glVertex3f(x1_observer, y2_observer, -0.2);
    glVertex3f(x1_observer, y2_observer, -0.1);
    glEnd();

    glColor3f(1.0, 0.753, 0.796);
    glBegin(GL_POLYGON);
    glVertex3f(x2_observer, y1_observer, -0.1);
    glVertex3f(x2_observer, y1_observer, -0.2);
    glVertex3f(x2_observer, y2_observer, -0.2);
    glVertex3f(x2_observer, y2_observer, -0.1);
    glEnd();

    glColor3f(1.0, 0.753, 0.796);
    glBegin(GL_POLYGON);
    glVertex3f(x1_observer, y1_observer, -0.1);
    glVertex3f(x2_observer, y1_observer, -0.1);
    glVertex3f(x1_observer, y1_observer, -0.2);
    glVertex3f(x2_observer, y1_observer, -0.2);
    glEnd();

    glColor3f(1.0, 0.753, 0.796);
    glBegin(GL_POLYGON);
    glVertex3f(x2_observer, y2_observer, -0.1);
    glVertex3f(x1_observer, y2_observer, -0.1);
    glVertex3f(x2_observer, y2_observer, -0.2);
    glVertex3f(x1_observer, y2_observer, -0.2);
    glEnd();




    //ladder 11 to 44 kiri belakang
    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(1.10,0.12, -0.1);
    glVertex3f(1.15,0.12, -0.1);
    glVertex3f(1.15,-1.41, -0.1);
    glVertex3f(1.10,-1.41, -0.1);
    glEnd();

    //ladder 11 to 44 kiri depan
    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(1.10,0.12, -0.2);
    glVertex3f(1.15,0.12, -0.2);
    glVertex3f(1.15,-1.41, -0.2);
    glVertex3f(1.10,-1.41, -0.2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(1.10,0.12, -0.1);
    glVertex3f(1.10,0.12, -0.2);
    glVertex3f(1.10,-1.41, -0.2);
    glVertex3f(1.10,-1.41, -0.1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(1.15,0.12, -0.1);
    glVertex3f(1.15,0.12, -0.2);
    glVertex3f(1.15,-1.41, -0.2);
    glVertex3f(1.15,-1.41, -0.1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(1.10,0.12, -0.1);
    glVertex3f(1.15,0.12, -0.1);
    glVertex3f(1.10,0.12, -0.2);
    glVertex3f(1.15,0.12, -0.2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(1.15,-1.41, -0.1);
    glVertex3f(1.10,-1.41, -0.1);
    glVertex3f(1.15,-1.41, -0.2);
    glVertex3f(1.10,-1.41, -0.2);
    glEnd();



    //ladder 11 to 44 kanan belakang
    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(1.30,0.12, -0.1);
    glVertex3f(1.35,0.12,-0.1);
    glVertex3f(1.35,-1.41, -0.1);
    glVertex3f(1.30,-1.41, -0.1);
    glEnd();

    //ladder 11 to 44 kanan depan
    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(1.30,0.12, -0.2);
    glVertex3f(1.35,0.12,-0.2);
    glVertex3f(1.35,-1.41, -0.2);
    glVertex3f(1.30,-1.41, -0.2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(1.30,0.12, -0.1);
    glVertex3f(1.30,0.12, -0.2);
    glVertex3f(1.30,-1.41, -0.2);
    glVertex3f(1.30,-1.41, -0.1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(1.35,0.12,-0.1);
    glVertex3f(1.35,0.12,-0.2);
    glVertex3f(1.35,-1.41, -0.2);
    glVertex3f(1.35,-1.41, -0.1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(1.30,0.12, -0.1);
    glVertex3f(1.35,0.12,-0.1);
    glVertex3f(1.30,0.12, -0.2);
    glVertex3f(1.35,0.12,-0.2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(1.35,-1.41, -0.1);
    glVertex3f(1.30,-1.41, -0.1);
    glVertex3f(1.35,-1.41, -0.2);
    glVertex3f(1.30,-1.41, -0.2);
    glEnd();


    //anak tangga 11 to 44 belakang
    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(1.15,-0.03, -0.1);
    glVertex3f(1.30,-0.03, -0.1);
    glVertex3f(1.30,-0.08, -0.1);
    glVertex3f(1.15,-0.08, -0.1);
    glEnd();

    //anak tangga 11 to 44 depan
    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(1.15,-0.03, -0.2);
    glVertex3f(1.30,-0.03, -0.2);
    glVertex3f(1.30,-0.08, -0.2);
    glVertex3f(1.15,-0.08, -0.2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(1.15,-0.03, -0.1);
    glVertex3f(1.15,-0.03, -0.2);
    glVertex3f(1.15,-0.08, -0.2);
    glVertex3f(1.15,-0.08, -0.1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(1.30,-0.03, -0.1);
    glVertex3f(1.30,-0.03, -0.2);
    glVertex3f(1.30,-0.08, -0.2);
    glVertex3f(1.30,-0.08, -0.1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(1.15,-0.03, -0.1);
    glVertex3f(1.30,-0.03, -0.1);
    glVertex3f(1.15,-0.03, -0.2);
    glVertex3f(1.30,-0.03, -0.2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(1.30,-0.08, -0.1);
    glVertex3f(1.15,-0.08, -0.1);
    glVertex3f(1.30,-0.08, -0.2);
    glVertex3f(1.15,-0.08, -0.2);
    glEnd();


    //belakang
    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(1.15,-0.18, -0.1);
    glVertex3f(1.30,-0.18, -0.1);
    glVertex3f(1.30,-0.23, -0.1);
    glVertex3f(1.15,-0.23, -0.1);
    glEnd();

    //depan
    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(1.15,-0.18, -0.2);
    glVertex3f(1.30,-0.18, -0.2);
    glVertex3f(1.30,-0.23, -0.2);
    glVertex3f(1.15,-0.23, -0.2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(1.15,-0.18, -0.1);
    glVertex3f(1.15,-0.18, -0.2);
    glVertex3f(1.15,-0.23, -0.2);
    glVertex3f(1.15,-0.23, -0.1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(1.30,-0.18, -0.1);
    glVertex3f(1.30,-0.18, -0.2);
    glVertex3f(1.30,-0.23, -0.2);
    glVertex3f(1.30,-0.23, -0.1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(1.15,-0.18, -0.1);
    glVertex3f(1.30,-0.18, -0.1);
    glVertex3f(1.15,-0.18, -0.2);
    glVertex3f(1.30,-0.18, -0.2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(1.30,-0.23, -0.1);
    glVertex3f(1.15,-0.23, -0.1);
    glVertex3f(1.30,-0.23, -0.2);
    glVertex3f(1.15,-0.23, -0.2);
    glEnd();



    //belakang
    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(1.15,-0.33, -0.1);
    glVertex3f(1.30,-0.33, -0.1);
    glVertex3f(1.30,-0.38, -0.1);
    glVertex3f(1.15,-0.38, -0.1);
    glEnd();

    //depan
    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(1.15,-0.33, -0.2);
    glVertex3f(1.30,-0.33, -0.2);
    glVertex3f(1.30,-0.38, -0.2);
    glVertex3f(1.15,-0.38, -0.2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(1.15,-0.33, -0.1);
    glVertex3f(1.15,-0.33, -0.2);
    glVertex3f(1.15,-0.38, -0.2);
    glVertex3f(1.15,-0.38, -0.1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(1.30,-0.33, -0.1);
    glVertex3f(1.30,-0.33, -0.2);
    glVertex3f(1.30,-0.38, -0.2);
    glVertex3f(1.30,-0.38, -0.1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(1.15,-0.33, -0.1);
    glVertex3f(1.30,-0.33, -0.1);
    glVertex3f(1.30,-0.38, -0.2);
    glVertex3f(1.15,-0.38, -0.2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(1.30,-0.38, -0.1);
    glVertex3f(1.15,-0.38, -0.1);
    glVertex3f(1.30,-0.38, -0.2);
    glVertex3f(1.15,-0.38, -0.2);
    glEnd();



    //belakang
    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(1.15,-0.48, -0.1);
    glVertex3f(1.30,-0.48, -0.1);
    glVertex3f(1.30,-0.53, -0.1);
    glVertex3f(1.15,-0.53, -0.1);
    glEnd();

    //depan
    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(1.15,-0.48, -0.2);
    glVertex3f(1.30,-0.48, -0.2);
    glVertex3f(1.30,-0.53, -0.2);
    glVertex3f(1.15,-0.53, -0.2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(1.15,-0.48, -0.1);
    glVertex3f(1.15,-0.48, -0.2);
    glVertex3f(1.15,-0.53, -0.2);
    glVertex3f(1.15,-0.53, -0.1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(1.30,-0.48, -0.1);
    glVertex3f(1.30,-0.48, -0.2);
    glVertex3f(1.30,-0.53, -0.2);
    glVertex3f(1.30,-0.53, -0.1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(1.15,-0.48, -0.1);
    glVertex3f(1.30,-0.48, -0.1);
    glVertex3f(1.15,-0.48, -0.2);
    glVertex3f(1.30,-0.48, -0.2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(1.30,-0.53, -0.1);
    glVertex3f(1.15,-0.53, -0.1);
    glVertex3f(1.30,-0.53, -0.2);
    glVertex3f(1.15,-0.53, -0.2);
    glEnd();




    //belakang
    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(1.15,-0.63, -0.1);
    glVertex3f(1.30,-0.63, -0.1);
    glVertex3f(1.30,-0.68, -0.1);
    glVertex3f(1.15,-0.68, -0.1);
    glEnd();

    //belakang
    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(1.15,-0.63, -0.2);
    glVertex3f(1.30,-0.63, -0.2);
    glVertex3f(1.30,-0.68, -0.2);
    glVertex3f(1.15,-0.68, -0.2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(1.15,-0.63, -0.1);
    glVertex3f(1.15,-0.63, -0.2);
    glVertex3f(1.15,-0.68, -0.2);
    glVertex3f(1.15,-0.68, -0.1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(1.30,-0.63, -0.1);
    glVertex3f(1.30,-0.63, -0.2);
    glVertex3f(1.30,-0.68, -0.2);
    glVertex3f(1.30,-0.68, -0.1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(1.15,-0.63, -0.1);
    glVertex3f(1.30,-0.63, -0.1);
    glVertex3f(1.15,-0.63, -0.2);
    glVertex3f(1.30,-0.63, -0.2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(1.30,-0.68, -0.1);
    glVertex3f(1.15,-0.68, -0.1);
    glVertex3f(1.30,-0.68, -0.2);
    glVertex3f(1.15,-0.68, -0.2);
    glEnd();




    //belakang
    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(1.15,-0.78, -0.1);
    glVertex3f(1.30,-0.78, -0.1);
    glVertex3f(1.30,-0.83, -0.1);
    glVertex3f(1.15,-0.83, -0.1);
    glEnd();

    //depan
    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(1.15,-0.78, -0.2);
    glVertex3f(1.30,-0.78, -0.2);
    glVertex3f(1.30,-0.83, -0.2);
    glVertex3f(1.15,-0.83, -0.2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(1.15,-0.78, -0.1);
    glVertex3f(1.15,-0.78, -0.2);
    glVertex3f(1.15,-0.83, -0.2);
    glVertex3f(1.15,-0.83, -0.1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(1.30,-0.78, -0.1);
    glVertex3f(1.30,-0.78, -0.2);
    glVertex3f(1.30,-0.83, -0.2);
    glVertex3f(1.30,-0.83, -0.1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(1.15,-0.78, -0.1);
    glVertex3f(1.30,-0.78, -0.1);
    glVertex3f(1.15,-0.78, -0.2);
    glVertex3f(1.30,-0.78, -0.2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(1.30,-0.83, -0.1);
    glVertex3f(1.15,-0.83, -0.1);
    glVertex3f(1.30,-0.83, -0.2);
    glVertex3f(1.15,-0.83, -0.2);
    glEnd();





    //belakang
    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(1.15,-0.93, -0.1);
    glVertex3f(1.30,-0.93, -0.1);
    glVertex3f(1.30,-0.98, -0.1);
    glVertex3f(1.15,-0.98, -0.1);
    glEnd();

    //belakang
    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(1.15,-0.93, -0.2);
    glVertex3f(1.30,-0.93, -0.2);
    glVertex3f(1.30,-0.98, -0.2);
    glVertex3f(1.15,-0.98, -0.2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(1.15,-0.93, -0.1);
    glVertex3f(1.15,-0.93, -0.2);
    glVertex3f(1.15,-0.98, -0.2);
    glVertex3f(1.15,-0.98, -0.1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(1.30,-0.93, -0.1);
    glVertex3f(1.30,-0.93, -0.2);
    glVertex3f(1.30,-0.98, -0.2);
    glVertex3f(1.30,-0.98, -0.1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(1.15,-0.93, -0.1);
    glVertex3f(1.30,-0.93, -0.1);
    glVertex3f(1.15,-0.93, -0.2);
    glVertex3f(1.30,-0.93, -0.2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(1.30,-0.98, -0.1);
    glVertex3f(1.15,-0.98, -0.1);
    glVertex3f(1.30,-0.98, -0.2);
    glVertex3f(1.15,-0.98, -0.2);
    glEnd();




    //belakang
    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(1.15,-1.08, -0.1);
    glVertex3f(1.30,-1.08, -0.1);
    glVertex3f(1.30,-1.13, -0.1);
    glVertex3f(1.15,-1.13, -0.1);
    glEnd();

    //depan
    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(1.15,-1.08, -0.2);
    glVertex3f(1.30,-1.08, -0.2);
    glVertex3f(1.30,-1.13, -0.2);
    glVertex3f(1.15,-1.13, -0.2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(1.15,-1.08, -0.1);
    glVertex3f(1.15,-1.08, -0.2);
    glVertex3f(1.15,-1.13, -0.2);
    glVertex3f(1.15,-1.13, -0.1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(1.30,-1.08, -0.1);
    glVertex3f(1.30,-1.08, -0.2);
    glVertex3f(1.30,-1.13, -0.2);
    glVertex3f(1.30,-1.13, -0.1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(1.15,-1.08, -0.1);
    glVertex3f(1.30,-1.08, -0.1);
    glVertex3f(1.15,-1.08, -0.2);
    glVertex3f(1.30,-1.08, -0.2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(1.30,-1.13, -0.1);
    glVertex3f(1.15,-1.13, -0.1);
    glVertex3f(1.30,-1.13, -0.2);
    glVertex3f(1.15,-1.13, -0.2);
    glEnd();





    //belakang
    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(1.15,-1.23, -0.1);
    glVertex3f(1.30,-1.23, -0.1);
    glVertex3f(1.30,-1.28, -0.1);
    glVertex3f(1.15,-1.28, -0.1);
    glEnd();

    //depan
    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(1.15,-1.23, -0.2);
    glVertex3f(1.30,-1.23, -0.2);
    glVertex3f(1.30,-1.28, -0.2);
    glVertex3f(1.15,-1.28, -0.2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(1.15,-1.23, -0.1);
    glVertex3f(1.15,-1.23, -0.2);
    glVertex3f(1.15,-1.28, -0.2);
    glVertex3f(1.15,-1.28, -0.1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(1.30,-1.23, -0.1);
    glVertex3f(1.30,-1.23, -0.2);
    glVertex3f(1.30,-1.28, -0.2);
    glVertex3f(1.30,-1.28, -0.1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(1.15,-1.23, -0.1);
    glVertex3f(1.30,-1.23, -0.1);
    glVertex3f(1.15,-1.23, -0.2);
    glVertex3f(1.30,-1.23, -0.2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(1.30,-1.28, -0.1);
    glVertex3f(1.15,-1.28, -0.1);
    glVertex3f(1.30,-1.28, -0.2);
    glVertex3f(1.15,-1.28, -0.2);
    glEnd();


    //ladder 19 to 22 atas belakang
    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-1.80,-0.935, -0.1); //1
    glVertex3f(-0.26,-0.935, -0.1); //2
    glVertex3f(-0.26,-0.985, -0.1); //3
    glVertex3f(-1.80,-0.985, -0.1); //4
    glEnd();

    //ladder 19 to 22 atas depan
    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-1.80,-0.935, -0.2); //1
    glVertex3f(-0.26,-0.935, -0.2); //2
    glVertex3f(-0.26,-0.985, -0.2); //3
    glVertex3f(-1.80,-0.985, -0.2); //4
    glEnd();



    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-1.80,-0.935, -0.1);
    glVertex3f(-1.80,-0.935, -0.2);
    glVertex3f(-1.80,-0.985, -0.2);
    glVertex3f(-1.80,-0.985, -0.1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-0.26,-0.935, -0.1);
    glVertex3f(-0.26,-0.935, -0.2);
    glVertex3f(-0.26,-0.985, -0.2);
    glVertex3f(-1.80,-0.985, -0.1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-1.80,-0.935, -0.1);
    glVertex3f(-0.26,-0.935, -0.1);
    glVertex3f(-1.80,-0.935, -0.2);
    glVertex3f(-0.26,-0.935, -0.2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-0.26,-0.985, -0.1);
    glVertex3f(-1.80,-0.985, -0.1);
    glVertex3f(-0.26,-0.985, -0.2);
    glVertex3f(-1.80,-0.985, -0.2);
    glEnd();



    //ladder 19 to 22 bawah belakang
    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-1.80,-0.735, -0.1);
    glVertex3f(-0.26,-0.735, -0.1);
    glVertex3f(-0.26,-0.785, -0.1);
    glVertex3f(-1.80,-0.785, -0.1);
    glEnd();

    //ladder 19 to 22 bawah depan
    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-1.80,-0.735, -0.2);
    glVertex3f(-0.26,-0.735, -0.2);
    glVertex3f(-0.26,-0.785, -0.2);
    glVertex3f(-1.80,-0.785, -0.2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-1.80,-0.735, -0.1);
    glVertex3f(-1.80,-0.735, -0.2);
    glVertex3f(-1.80,-0.785, -0.2);
    glVertex3f(-1.80,-0.785, -0.1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-0.26,-0.735, -0.1);
    glVertex3f(-0.26,-0.735, -0.2);
    glVertex3f(-0.26,-0.785, -0.2);
    glVertex3f(-0.26,-0.785, -0.1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-1.80,-0.735, -0.1);
    glVertex3f(-0.26,-0.735, -0.1);
    glVertex3f(-1.80,-0.735, -0.2);
    glVertex3f(-0.26,-0.735, -0.2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-0.26,-0.785, -0.1);
    glVertex3f(-1.80,-0.785, -0.1);
    glVertex3f(-0.26,-0.785, -0.2);
    glVertex3f(-1.80,-0.785, -0.2);
    glEnd();





    //anak tangga 19 to 22 belakang
    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-1.65,-0.935, -0.1);
    glVertex3f(-1.6,-0.935, -0.1);
    glVertex3f(-1.6,-0.735, -0.1);
    glVertex3f(-1.65,-0.735, -0.1);
    glEnd();

    //anak tangga 19 to 22 depan
    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-1.65,-0.935, -0.2);
    glVertex3f(-1.6,-0.935, -0.2);
    glVertex3f(-1.6,-0.735, -0.2);
    glVertex3f(-1.65,-0.735, -0.2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-1.65,-0.935, -0.1);
    glVertex3f(-1.65,-0.935, -0.2);
    glVertex3f(-1.65,-0.735, -0.2);
    glVertex3f(-1.65,-0.735, -0.1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-1.6,-0.935, -0.1);
    glVertex3f(-1.6,-0.935, -0.2);
    glVertex3f(-1.6,-0.735, -0.2);
    glVertex3f(-1.6,-0.735, -0.1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-1.65,-0.935, -0.1);
    glVertex3f(-1.6,-0.935, -0.1);
    glVertex3f(-1.65,-0.935, -0.2);
    glVertex3f(-1.6,-0.935, -0.2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-1.6,-0.735, -0.1);
    glVertex3f(-1.65,-0.735, -0.1);
    glVertex3f(-1.6,-0.735, -0.2);
    glVertex3f(-1.65,-0.735, -0.2);
    glEnd();





    //depan
    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-1.5,-0.935, -0.1);
    glVertex3f(-1.45,-0.935, -0.1);
    glVertex3f(-1.45,-0.735, -0.1);
    glVertex3f(-1.5,-0.735, -0.1);
    glEnd();

    //belakang
    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-1.5,-0.935, -0.2);
    glVertex3f(-1.45,-0.935, -0.2);
    glVertex3f(-1.45,-0.735, -0.2);
    glVertex3f(-1.5,-0.735, -0.2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-1.5,-0.935, -0.1);
    glVertex3f(-1.5,-0.935, -0.2);
    glVertex3f(-1.5,-0.735, -0.2);
    glVertex3f(-1.5,-0.735, -0.1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-1.45,-0.935, -0.1);
    glVertex3f(-1.45,-0.935, -0.2);
    glVertex3f(-1.45,-0.735, -0.2);
    glVertex3f(-1.45,-0.735, -0.1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-1.5,-0.935, -0.1);
    glVertex3f(-1.45,-0.935, -0.1);
    glVertex3f(-1.5,-0.935, -0.2);
    glVertex3f(-1.45,-0.935, -0.2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-1.45,-0.735, -0.1);
    glVertex3f(-1.5,-0.735, -0.1);
    glVertex3f(-1.45,-0.735, -0.2);
    glVertex3f(-1.5,-0.735, -0.2);
    glEnd();





    //belakang
    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-1.35,-0.935, -0.1);
    glVertex3f(-1.3,-0.935, -0.1);
    glVertex3f(-1.3,-0.735, -0.1);
    glVertex3f(-1.35,-0.735, -0.1);
    glEnd();

    //depan
    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-1.35,-0.935, -0.2);
    glVertex3f(-1.3,-0.935, -0.2);
    glVertex3f(-1.3,-0.735, -0.2);
    glVertex3f(-1.35,-0.735, -0.2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-1.35,-0.935, -0.1);
    glVertex3f(-1.35,-0.935, -0.2);
    glVertex3f(-1.35,-0.735, -0.2);
    glVertex3f(-1.35,-0.735, -0.1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-1.3,-0.935, -0.1);
    glVertex3f(-1.3,-0.935, -0.2);
    glVertex3f(-1.3,-0.735, -0.2);
    glVertex3f(-1.3,-0.735, -0.1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-1.35,-0.935, -0.1);
    glVertex3f(-1.3,-0.935, -0.1);
    glVertex3f(-1.35,-0.935, -0.2);
    glVertex3f(-1.3,-0.935, -0.2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-1.3,-0.735, -0.1);
    glVertex3f(-1.35,-0.735, -0.1);
    glVertex3f(-1.3,-0.735, -0.2);
    glVertex3f(-1.35,-0.735, -0.2);
    glEnd();



    //belakang
    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-1.2,-0.935, -0.1);
    glVertex3f(-1.15,-0.935, -0.1);
    glVertex3f(-1.15,-0.735, -0.1);
    glVertex3f(-1.2,-0.735, -0.1);
    glEnd();

    //depan
    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-1.2,-0.935, -0.2);
    glVertex3f(-1.15,-0.935, -0.2);
    glVertex3f(-1.15,-0.735, -0.2);
    glVertex3f(-1.2,-0.735, -0.2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-1.2,-0.935, -0.1);
    glVertex3f(-1.2,-0.935, -0.2);
    glVertex3f(-1.2,-0.735, -0.2);
    glVertex3f(-1.2,-0.735, -0.1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-1.15,-0.935, -0.1);
    glVertex3f(-1.15,-0.935, -0.2);
    glVertex3f(-1.15,-0.735, -0.2);
    glVertex3f(-1.15,-0.735, -0.1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-1.2,-0.935, -0.1);
    glVertex3f(-1.15,-0.935, -0.1);
    glVertex3f(-1.2,-0.935, -0.2);
    glVertex3f(-1.15,-0.935, -0.2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-1.15,-0.735, -0.1);
    glVertex3f(-1.2,-0.735, -0.1);
    glVertex3f(-1.15,-0.735, -0.2);
    glVertex3f(-1.2,-0.735, -0.2);
    glEnd();




    //belakang
    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-1.05,-0.935, -0.1);
    glVertex3f(-1.0,-0.935, -0.1);
    glVertex3f(-1.0,-0.735, -0.1);
    glVertex3f(-1.05,-0.735, -0.1);
    glEnd();

    //depan
    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-1.05,-0.935, -0.2);
    glVertex3f(-1.0,-0.935, -0.2);
    glVertex3f(-1.0,-0.735, -0.2);
    glVertex3f(-1.05,-0.735, -0.2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-1.05,-0.935, -0.1);
    glVertex3f(-1.05,-0.935, -0.2);
    glVertex3f(-1.05,-0.735, -0.2);
    glVertex3f(-1.05,-0.735, -0.1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-1.0,-0.935, -0.1);
    glVertex3f(-1.05,-0.935, -0.2);
    glVertex3f(-1.05,-0.735, -0.2);
    glVertex3f(-1.0,-0.735, -0.1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-1.05,-0.935, -0.1);
    glVertex3f(-1.0,-0.935, -0.1);
    glVertex3f(-1.05,-0.935, -0.2);
    glVertex3f(-1.0,-0.935, -0.2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-1.0,-0.735, -0.1);
    glVertex3f(-1.05,-0.735, -0.1);
    glVertex3f(-1.0,-0.735, -0.2);
    glVertex3f(-1.05,-0.735, -0.2);
    glEnd();



    //belakang
    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-0.9,-0.935, -0.1);
    glVertex3f(-0.85,-0.935, -0.1);
    glVertex3f(-0.85,-0.735, -0.1);
    glVertex3f(-0.9,-0.735, -0.1);
    glEnd();

    //depan
    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-0.9,-0.935, -0.2);
    glVertex3f(-0.85,-0.935, -0.2);
    glVertex3f(-0.85,-0.735, -0.2);
    glVertex3f(-0.9,-0.735, -0.2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-0.9,-0.935, -0.1);
    glVertex3f(-0.9,-0.935, -0.2);
    glVertex3f(-0.9,-0.735, -0.2);
    glVertex3f(-0.9,-0.735, -0.1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-0.85,-0.935, -0.1);
    glVertex3f(-0.85,-0.935, -0.2);
    glVertex3f(-0.85,-0.735, -0.2);
    glVertex3f(-0.85,-0.735, -0.1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-0.9,-0.935, -0.1);
    glVertex3f(-0.85,-0.935, -0.1);
    glVertex3f(-0.9,-0.935, -0.2);
    glVertex3f(-0.85,-0.935, -0.2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-0.85,-0.735, -0.1);
    glVertex3f(-0.9,-0.735, -0.1);
    glVertex3f(-0.85,-0.735, -0.2);
    glVertex3f(-0.9,-0.735, -0.2);
    glEnd();



    //belakang
    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-0.75,-0.935, -0.1);
    glVertex3f(-0.7,-0.935, -0.1);
    glVertex3f(-0.7,-0.735, -0.1);
    glVertex3f(-0.75,-0.735, -0.1);
    glEnd();

    //depan
    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-0.75,-0.935, -0.2);
    glVertex3f(-0.7,-0.935, -0.2);
    glVertex3f(-0.7,-0.735, -0.2);
    glVertex3f(-0.75,-0.735, -0.2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-0.75,-0.935, -0.1);
    glVertex3f(-0.75,-0.935, -0.2);
    glVertex3f(-0.75,-0.735, -0.2);
    glVertex3f(-0.75,-0.735, -0.1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-0.7,-0.935, -0.1);
    glVertex3f(-0.7,-0.935, -0.2);
    glVertex3f(-0.7,-0.735, -0.2);
    glVertex3f(-0.7,-0.735, -0.1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-0.75,-0.935, -0.1);
    glVertex3f(-0.7,-0.935, -0.1);
    glVertex3f(-0.75,-0.935, -0.2);
    glVertex3f(-0.7,-0.935, -0.2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-0.7,-0.735, -0.1);
    glVertex3f(-0.75,-0.735, -0.1);
    glVertex3f(-0.7,-0.735, -0.2);
    glVertex3f(-0.75,-0.735, -0.2);
    glEnd();




    //belakang
    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-0.6,-0.935, -0.1);
    glVertex3f(-0.55,-0.935, -0.1);
    glVertex3f(-0.55,-0.735, -0.1);
    glVertex3f(-0.6,-0.735, -0.1);
    glEnd();

    //depan
    glBegin(GL_POLYGON);   //ladder 53 to 77 kiri belakang
    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-0.07,1.85, -0.1);
    glVertex3f(-1.35,0.57, -0.1);
    glVertex3f(-1.3,0.52, -0.1);
    glVertex3f(-0.02,1.8, -0.1);
    glEnd();

    //ladder 53 to 77 kiri depan
    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-0.07,1.85, -0.2);
    glVertex3f(-1.35,0.57, -0.2);
    glVertex3f(-1.3,0.52, -0.2);
    glVertex3f(-0.02,1.8, -0.2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-0.07,1.85, -0.1);
    glVertex3f(-0.07,1.85, -0.2);
    glVertex3f(-0.02,1.8, -0.2);
    glVertex3f(-0.02,1.8, -0.1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-1.35,0.57, -0.1);
    glVertex3f(-1.35,0.57, -0.2);
    glVertex3f(-1.3,0.52, -0.2);
    glVertex3f(-1.3,0.52, -0.2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-0.07,1.85, -0.1);
    glVertex3f(-1.35,0.57, -0.1);
    glVertex3f(-0.07,1.85, -0.2);
    glVertex3f(-1.35,0.57, -0.2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-1.3,0.52, -0.1);
    glVertex3f(-0.02,1.8, -0.1);
    glVertex3f(-1.3,0.52, -0.2);
    glVertex3f(-0.02,1.8, -0.2);
    glEnd();
    glColor3fv(color4);
    glVertex3f(-0.6,-0.935, -0.2);
    glVertex3f(-0.55,-0.935, -0.2);
    glVertex3f(-0.55,-0.735, -0.2);
    glVertex3f(-0.6,-0.735, -0.2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-0.6,-0.935, -0.1);
    glVertex3f(-0.6,-0.935, -0.2);
    glVertex3f(-0.6,-0.735, -0.2);
    glVertex3f(-0.6,-0.735, -0.1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-0.55,-0.935, -0.1);
    glVertex3f(-0.55,-0.935, -0.2);
    glVertex3f(-0.55,-0.735, -0.2);
    glVertex3f(-0.55,-0.735, -0.1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-0.6,-0.935, -0.1);
    glVertex3f(-0.55,-0.935, -0.1);
    glVertex3f(-0.6,-0.935, -0.2);
    glVertex3f(-0.55,-0.935, -0.2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-0.55,-0.735, -0.1);
    glVertex3f(-0.6,-0.735, -0.1);
    glVertex3f(-0.55,-0.735, -0.2);
    glVertex3f(-0.6,-0.735, -0.2);
    glEnd();





    //belakang
    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-0.45,-0.935, -0.1);
    glVertex3f(-0.4,-0.935, -0.1);
    glVertex3f(-0.4,-0.735, -0.1);
    glVertex3f(-0.45,-0.735, -0.1);
    glEnd();

    //depan
    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-0.45,-0.935, -0.2);
    glVertex3f(-0.4,-0.935, -0.2);
    glVertex3f(-0.4,-0.735, -0.2);
    glVertex3f(-0.45,-0.735, -0.2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-0.45,-0.935, -0.1);
    glVertex3f(-0.45,-0.935, -0.2);
    glVertex3f(-0.45,-0.735, -0.2);
    glVertex3f(-0.45,-0.735, -0.1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-0.4,-0.935, -0.1);
    glVertex3f(-0.4,-0.935, -0.2);
    glVertex3f(-0.4,-0.735, -0.2);
    glVertex3f(-0.4,-0.735, -0.1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-0.45,-0.935, -0.1);
    glVertex3f(-0.4,-0.935, -0.1);
    glVertex3f(-0.45,-0.935, -0.2);
    glVertex3f(-0.4,-0.935, -0.2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-0.4,-0.735, -0.1);
    glVertex3f(-0.45,-0.735, -0.1);
    glVertex3f(-0.4,-0.735, -0.2);
    glVertex3f(-0.45,-0.735, -0.2);
    glEnd();



    //ladder 53 to 77 belakang
    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-1.14,0.37, -0.1);
    glVertex3f(0.14,1.65, -0.1);
    glVertex3f(0.19,1.60, -0.1);
    glVertex3f(-1.09,0.32, -0.1);
    glEnd();

    //ladder 53 to 77 depan
    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-1.14,0.37, -0.2);
    glVertex3f(0.14,1.65, -0.2);
    glVertex3f(0.19,1.60, -0.2);
    glVertex3f(-1.09,0.32, -0.2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-1.14,0.37, -0.1);
    glVertex3f(-1.14,0.37, -0.2);
    glVertex3f(-1.09,0.32, -0.2);
    glVertex3f(-1.09,0.32, -0.1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(0.14,1.65, -0.1);
    glVertex3f(0.14,1.65, -0.2);
    glVertex3f(0.19,1.60, -0.2);
    glVertex3f(0.19,1.60, -0.1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-1.14,0.37, -0.1);
    glVertex3f(0.14,1.65, -0.1);
    glVertex3f(-1.14,0.37, -0.2);
    glVertex3f(0.14,1.65, -0.2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(0.19,1.60, -0.1);
    glVertex3f(-1.09,0.32, -0.1);
    glVertex3f(0.19,1.60, -0.2);
    glVertex3f(-1.09,0.32, -0.2);
    glEnd();



    //ladder 53 to 77 kiri belakang
    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-0.07,1.85, -0.1);
    glVertex3f(-1.35,0.57, -0.1);
    glVertex3f(-1.3,0.52, -0.1);
    glVertex3f(-0.02,1.8, -0.1);
    glEnd();

    //ladder 53 to 77 kiri depan
    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-0.07,1.85, -0.2);
    glVertex3f(-1.35,0.57, -0.2);
    glVertex3f(-1.3,0.52, -0.2);
    glVertex3f(-0.02,1.8, -0.2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-0.07,1.85, -0.1);
    glVertex3f(-0.07,1.85, -0.2);
    glVertex3f(-0.02,1.8, -0.2);
    glVertex3f(-0.02,1.8, -0.1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-1.35,0.57, -0.1);
    glVertex3f(-1.35,0.57, -0.2);
    glVertex3f(-1.3,0.52, -0.2);
    glVertex3f(-1.3,0.52, -0.2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-0.07,1.85, -0.1);
    glVertex3f(-1.35,0.57, -0.1);
    glVertex3f(-0.07,1.85, -0.2);
    glVertex3f(-1.35,0.57, -0.2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-1.3,0.52, -0.1);
    glVertex3f(-0.02,1.8, -0.1);
    glVertex3f(-1.3,0.52, -0.2);
    glVertex3f(-0.02,1.8, -0.2);
    glEnd();





     //ladder 53 to 77 kiri belakang
    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-0.07,1.85, -0.1);
    glVertex3f(-1.35,0.57, -0.1);
    glVertex3f(-1.3,0.52, -0.1);
    glVertex3f(-0.02,1.8, -0.1);
    glEnd();

    //ladder 53 to 77 kiri depan
    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-0.07,1.85, -0.2);
    glVertex3f(-1.35,0.57, -0.2);
    glVertex3f(-1.3,0.52, -0.2);
    glVertex3f(-0.02,1.8, -0.2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-0.07,1.85, -0.1);
    glVertex3f(-0.07,1.85, -0.2);
    glVertex3f(-0.02,1.8, -0.2);
    glVertex3f(-0.02,1.8, -0.1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-1.35,0.57, -0.1);
    glVertex3f(-1.35,0.57, -0.2);
    glVertex3f(-1.3,0.52, -0.2);
    glVertex3f(-1.3,0.52, -0.1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-0.07,1.85, -0.1);
    glVertex3f(-1.35,0.57, -0.1);
    glVertex3f(-0.07,1.85, -0.2);
    glVertex3f(-1.35,0.57, -0.2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-1.3,0.52, -0.1);
    glVertex3f(-0.02,1.8, -0.1);
    glVertex3f(-1.3,0.52, -0.2);
    glVertex3f(-0.02,1.8, -0.2);
    glEnd();


    //anak tangga 53 to 77 belakang
    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-1.2,0.72, -0.1);
    glVertex3f(-1.15,0.77, -0.1);
    glVertex3f(-0.9,0.52, -0.1);
    glVertex3f(-0.95,0.47, -0.1);
    glEnd();

    //anak tangga 53 to 77 depan
    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-1.2,0.72, -0.2);
    glVertex3f(-1.15,0.77, -0.2);
    glVertex3f(-0.9,0.52, -0.2);
    glVertex3f(-0.95,0.47, -0.2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-1.2,0.72, -0.1);
    glVertex3f(-1.2,0.72, -0.2);
    glVertex3f(-0.95,0.47, -0.2);
    glVertex3f(-0.95,0.47, -0.1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-1.15,0.77, -0.1);
    glVertex3f(-1.15,0.77, -0.2);
    glVertex3f(-0.9,0.52, -0.2);
    glVertex3f(-0.9,0.52, -0.1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-1.2,0.72, -0.1);
    glVertex3f(-1.15,0.77, -0.1);
    glVertex3f(-1.2,0.72, -0.2);
    glVertex3f(-1.15,0.77, -0.2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-0.9,0.52, -0.1);
    glVertex3f(-0.95,0.47, -0.1);
    glVertex3f(-0.9,0.52, -0.2);
    glVertex3f(-0.95,0.47, -0.2);
    glEnd();





    //belakang
    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-1.05,0.87, -0.1);
    glVertex3f(-1.0,0.92, -0.1);
    glVertex3f(-0.75,0.67, -0.1);
    glVertex3f(-0.8,0.62, -0.1);
    glEnd();

    //depan
    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-1.05,0.87, -0.2);
    glVertex3f(-1.0,0.92, -0.2);
    glVertex3f(-0.75,0.67, -0.2);
    glVertex3f(-0.8,0.62, -0.2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-1.05,0.87, -0.1);
    glVertex3f(-1.05,0.87, -0.2);
    glVertex3f(-0.8,0.62, -0.2);
    glVertex3f(-0.8,0.62, -0.1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-1.0,0.92, -0.1);
    glVertex3f(-1.0,0.92, -0.2);
    glVertex3f(-0.75,0.67, -0.2);
    glVertex3f(-0.75,0.67, -0.1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-1.05,0.87, -0.1);
    glVertex3f(-1.0,0.92, -0.1);
    glVertex3f(-1.05,0.87, -0.2);
    glVertex3f(-1.0,0.92, -0.2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-0.75,0.67, -0.1);
    glVertex3f(-0.8,0.62, -0.1);
    glVertex3f(-0.75,0.67, -0.2);
    glVertex3f(-0.8,0.62, -0.2);
    glEnd();





    //belakang
    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-0.9,1.02, -0.1);
    glVertex3f(-0.85,1.07, -0.1);
    glVertex3f(-0.6,0.82, -0.1);
    glVertex3f(-0.65,0.77, -0.1);
    glEnd();

    //depan
    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-0.9,1.02, -0.2);
    glVertex3f(-0.85,1.07, -0.2);
    glVertex3f(-0.6,0.82, -0.2);
    glVertex3f(-0.65,0.77, -0.2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-0.9,1.02, -0.1);
    glVertex3f(-0.9,1.02, -0.2);
    glVertex3f(-0.65,0.77, -0.2);
    glVertex3f(-0.65,0.77, -0.1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-0.85,1.07, -0.1);
    glVertex3f(-0.85,1.07, -0.2);
    glVertex3f(-0.6,0.82, -0.2);
    glVertex3f(-0.6,0.82, -0.1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-0.9,1.02, -0.1);
    glVertex3f(-0.85,1.07, -0.1);
    glVertex3f(-0.9,1.02, -0.2);
    glVertex3f(-0.85,1.07, -0.2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-0.6,0.82, -0.1);
    glVertex3f(-0.65,0.77, -0.1);
    glVertex3f(-0.6,0.82, -0.2);
    glVertex3f(-0.65,0.77, -0.2);
    glEnd();




    //belakang
    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-0.75,1.17, -0.1);
    glVertex3f(-0.7,1.22, -0.1);
    glVertex3f(-0.45,0.97, -0.1);
    glVertex3f(-0.5,0.92, -0.1);
    glEnd();

    //depan
    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-0.75,1.17, -0.2);
    glVertex3f(-0.7,1.22, -0.2);
    glVertex3f(-0.45,0.97, -0.2);
    glVertex3f(-0.5,0.92, -0.2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-0.75,1.17, -0.1);
    glVertex3f(-0.75,1.17, -0.2);
    glVertex3f(-0.5,0.92, -0.2);
    glVertex3f(-0.5,0.92, -0.1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-0.7,1.22, -0.1);
    glVertex3f(-0.7,1.22, -0.2);
    glVertex3f(-0.45,0.97, -0.2);
    glVertex3f(-0.45,0.97, -0.1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-0.75,1.17, -0.1);
    glVertex3f(-0.7,1.22, -0.1);
    glVertex3f(-0.75,1.17, -0.2);
    glVertex3f(-0.7,1.22, -0.2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-0.45,0.97, -0.1);
    glVertex3f(-0.5,0.92, -0.1);
    glVertex3f(-0.45,0.97, -0.2);
    glVertex3f(-0.5,0.92, -0.2);
    glEnd();



    //belakang
    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-0.6,1.32, -0.1);
    glVertex3f(-0.55,1.37, -0.1);
    glVertex3f(-0.3,1.12, -0.1);
    glVertex3f(-0.35,1.07, -0.1);
    glEnd();

    //depan
    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-0.6,1.32, -0.2);
    glVertex3f(-0.55,1.37, -0.2);
    glVertex3f(-0.3,1.12, -0.2);
    glVertex3f(-0.35,1.07, -0.2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-0.6,1.32, -0.1);
    glVertex3f(-0.6,1.32, -0.2);
    glVertex3f(-0.35,1.07, -0.2);
    glVertex3f(-0.35,1.07, -0.1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-0.55,1.37, -0.1);
    glVertex3f(-0.55,1.37, -0.2);
    glVertex3f(-0.3,1.12, -0.2);
    glVertex3f(-0.3,1.12, -0.1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-0.6,1.32, -0.1);
    glVertex3f(-0.55,1.37, -0.1);
    glVertex3f(-0.6,1.32, -0.2);
    glVertex3f(-0.55,1.37, -0.2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-0.3,1.12, -0.1);
    glVertex3f(-0.35,1.07, -0.1);
    glVertex3f(-0.3,1.12, -0.2);
    glVertex3f(-0.35,1.07, -0.2);
    glEnd();




    //belakang
    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-0.45,1.47, -0.1);
    glVertex3f(-0.4,1.52, -0.1);
    glVertex3f(-0.15,1.27, -0.1);
    glVertex3f(-0.2,1.22, -0.1);
    glEnd();

    //depan
    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-0.45,1.47, -0.2);
    glVertex3f(-0.4,1.52, -0.2);
    glVertex3f(-0.15,1.27, -0.2);
    glVertex3f(-0.2,1.22, -0.2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-0.45,1.47, -0.1);
    glVertex3f(-0.45,1.47, -0.2);
    glVertex3f(-0.2,1.22, -0.2);
    glVertex3f(-0.2,1.22, -0.1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-0.4,1.52, -0.1);
    glVertex3f(-0.4,1.52, -0.2);
    glVertex3f(-0.15,1.27, -0.2);
    glVertex3f(-0.15,1.27, -0.1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-0.45,1.47, -0.1);
    glVertex3f(-0.4,1.52, -0.1);
    glVertex3f(-0.45,1.47, -0.2);
    glVertex3f(-0.4,1.52, -0.2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-0.15,1.27, -0.1);
    glVertex3f(-0.2,1.22, -0.1);
    glVertex3f(-0.15,1.27, -0.2);
    glVertex3f(-0.2,1.22, -0.2);
    glEnd();




    //belakang
    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-0.3,1.62, -0.1);
    glVertex3f(-0.25,1.67, -0.1);
    glVertex3f(-0.0,1.42, -0.1);
    glVertex3f(-0.05,1.37, -0.1);
    glEnd();

    //depan
    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-0.3,1.62, -0.2);
    glVertex3f(-0.25,1.67, -0.2);
    glVertex3f(-0.0,1.42, -0.2);
    glVertex3f(-0.05,1.37, -0.2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-0.3,1.62, -0.1);
    glVertex3f(-0.3,1.62, -0.2);
    glVertex3f(-0.05,1.37, -0.2);
    glVertex3f(-0.05,1.37, -0.1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-0.25,1.67, -0.1);
    glVertex3f(-0.25,1.67, -0.2);
    glVertex3f(-0.0,1.42, -0.2);
    glVertex3f(-0.0,1.42, -0.1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-0.3,1.62, -0.1);
    glVertex3f(-0.25,1.67, -0.1);
    glVertex3f(-0.3,1.62, -0.2);
    glVertex3f(-0.25,1.67, -0.2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex3f(-0.0,1.42, -0.1);
    glVertex3f(-0.05,1.37, -0.1);
    glVertex3f(-0.0,1.42, -0.2);
    glVertex3f(-0.05,1.37, -0.2);
    glEnd();



    //snake 16 to 7
    //segmen 1 belakang
    glBegin(GL_POLYGON);
    glColor3fv(color6);
    glVertex3f(-0.81,-1.2, -0.1);
    glVertex3f(-0.14,-1.41, -0.1);
    glVertex3f(-0.14,-1.44, -0.1);
    glVertex3f(-0.81,-1.23, -0.1);
    glEnd();

    //segmen 1 depan
    glBegin(GL_POLYGON);
    glColor3fv(color6);
    glVertex3f(-0.81,-1.2, -0.2);
    glVertex3f(-0.14,-1.41, -0.2);
    glVertex3f(-0.14,-1.44, -0.2);
    glVertex3f(-0.81,-1.23, -0.2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color6);
    glVertex3f(-0.81,-1.2, -0.1);
    glVertex3f(-0.81,-1.2, -0.2);
    glVertex3f(-0.81,-1.23, -0.2);
    glVertex3f(-0.81,-1.23, -0.1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color6);
    glVertex3f(-0.14,-1.41, -0.1);
    glVertex3f(-0.14,-1.41, -0.2);
    glVertex3f(-0.14,-1.44, -0.2);
    glVertex3f(-0.14,-1.44, -0.1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color6);
    glVertex3f(-0.81,-1.2, -0.1);
    glVertex3f(-0.14,-1.41, -0.1);
    glVertex3f(-0.81,-1.2, -0.2);
    glVertex3f(-0.14,-1.41, -0.2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color6);
    glVertex3f(-0.14,-1.44, -0.1);
    glVertex3f(-0.81,-1.23, -0.1);
    glVertex3f(-0.14,-1.44, -0.2);
    glVertex3f(-0.81,-1.23, -0.2);
    glEnd();




    //segmen 2 belakang
    glBegin(GL_POLYGON);
    glColor3fv(color6);
    glVertex3f(-0.14,-1.41, -0.1);
    glVertex3f(0.34,-1.27, -0.1);
    glVertex3f(0.3,-1.24, -0.1);
    glVertex3f(-0.14,-1.44, -0.1);
    glEnd();

    //segmen 2 depan
    glBegin(GL_POLYGON);
    glColor3fv(color6);
    glVertex3f(-0.14,-1.41, -0.2);
    glVertex3f(0.34,-1.27, -0.2);
    glVertex3f(0.3,-1.24, -0.2);
    glVertex3f(-0.14,-1.44, -0.2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color6);
    glVertex3f(-0.14,-1.41, -0.1);
    glVertex3f(-0.14,-1.41, -0.2);
    glVertex3f(-0.14,-1.44, -0.2);
    glVertex3f(-0.14,-1.44, -0.1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color6);
    glVertex3f(0.34,-1.27, -0.1);
    glVertex3f(0.34,-1.27, -0.2);
    glVertex3f(0.3,-1.24, -0.2);
    glVertex3f(0.3,-1.24, -0.1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color6);
    glVertex3f(-0.14,-1.41, -0.1);
    glVertex3f(0.34,-1.27, -0.1);
    glVertex3f(-0.14,-1.41, -0.2);
    glVertex3f(0.34,-1.27, -0.2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color6);
    glVertex3f(0.3,-1.24, -0.1);
    glVertex3f(-0.14,-1.44, -0.1);
    glVertex3f(0.3,-1.24, -0.2);
    glVertex3f(-0.14,-1.44, -0.2);
    glEnd();





    //segmen 3 belakang
    glBegin(GL_POLYGON);
    glColor3fv(color6);
    glVertex3f(0.3,-1.24, -0.1);
    glVertex3f(0.82,-1.72, -0.1);
    glVertex3f(0.86,-1.7, -0.1);
    glVertex3f(0.34,-1.26, -0.1);
    glEnd();

    //segmen 3 depan
    glBegin(GL_POLYGON);
    glColor3fv(color6);
    glVertex3f(0.3,-1.24, -0.2);
    glVertex3f(0.82,-1.72, -0.2);
    glVertex3f(0.86,-1.7, -0.2);
    glVertex3f(0.34,-1.26, -0.2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color6);
    glVertex3f(0.3,-1.24, -0.1);
    glVertex3f(0.3,-1.24, -0.2);
    glVertex3f(0.34,-1.26, -0.2);
    glVertex3f(0.34,-1.26, -0.1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color6);
    glVertex3f(0.82,-1.72, -0.1);
    glVertex3f(0.82,-1.72, -0.2);
    glVertex3f(0.86,-1.7, -0.2);
    glVertex3f(0.86,-1.7, -0.1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color6);
    glVertex3f(0.3,-1.24, -0.1);
    glVertex3f(0.82,-1.72, -0.1);
    glVertex3f(0.3,-1.24, -0.2);
    glVertex3f(0.82,-1.72, -0.2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color6);
    glVertex3f(0.86,-1.7, -0.1);
    glVertex3f(0.34,-1.26, -0.1);
    glVertex3f(0.86,-1.7, -0.2);
    glVertex3f(0.34,-1.26, -0.2);
    glEnd();






    //ular 48 to 33
    //segmen 1 belakang
    glBegin(GL_POLYGON);
    glColor3fv(color6);
    glVertex3f(0.81,0.37, -0.1);
    glVertex3f(0.4,0.22, -0.1);
    glVertex3f(0.44,0.20, -0.1);
    glVertex3f(0.84,0.35, -0.1);
    glEnd();

    //segmen 1 depan
    glBegin(GL_POLYGON);
    glColor3fv(color6);
    glVertex3f(0.81,0.37, -0.2);
    glVertex3f(0.4,0.22, -0.2);
    glVertex3f(0.44,0.20, -0.2);
    glVertex3f(0.84,0.35, -0.2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color6);
    glVertex3f(0.81,0.37, -0.1);
    glVertex3f(0.81,0.37, -0.2);
    glVertex3f(0.84,0.35, -0.2);
    glVertex3f(0.84,0.35, -0.1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color6);
    glVertex3f(0.4,0.22, -0.1);
    glVertex3f(0.4,0.22, -0.2);
    glVertex3f(0.44,0.20, -0.2);
    glVertex3f(0.44,0.20, -0.1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color6);
    glVertex3f(0.81,0.37, -0.1);
    glVertex3f(0.4,0.22, -0.1);
    glVertex3f(0.81,0.37, -0.2);
    glVertex3f(0.4,0.22, -0.2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color6);
    glVertex3f(0.44,0.20, -0.1);
    glVertex3f(0.84,0.35, -0.1);
    glVertex3f(0.44,0.20, -0.2);
    glVertex3f(0.84,0.35, -0.2);
    glEnd();





    //segmen 2 belakang
    glBegin(GL_POLYGON);
    glColor3fv(color6);
    glVertex3f(0.4,0.22, -0.1);
    glVertex3f(0.52,-0.13, -0.1);
    glVertex3f(0.55,-0.17, -0.1);
    glVertex3f(0.44,0.20, -0.1);
    glEnd();


    //segmen 2 depan
    glBegin(GL_POLYGON);
    glColor3fv(color6);
    glVertex3f(0.4,0.22, -0.2);
    glVertex3f(0.52,-0.13, -0.2);
    glVertex3f(0.55,-0.17, -0.2);
    glVertex3f(0.44,0.20, -0.2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color6);
    glVertex3f(0.4,0.22, -0.1);
    glVertex3f(0.4,0.22, -0.2);
    glVertex3f(0.44,0.20, -0.2);
    glVertex3f(0.44,0.20, -0.1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color6);
    glVertex3f(0.52,-0.13, -0.1);
    glVertex3f(0.52,-0.13, -0.2);
    glVertex3f(0.55,-0.17, -0.2);
    glVertex3f(0.55,-0.17, -0.1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color6);
    glVertex3f(0.4,0.22, -0.1);
    glVertex3f(0.52,-0.13, -0.1);
    glVertex3f(0.4,0.22, -0.2);
    glVertex3f(0.52,-0.13, -0.2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color6);
    glVertex3f(0.55,-0.17, -0.1);
    glVertex3f(0.44,0.20, -0.1);
    glVertex3f(0.55,-0.17, -0.2);
    glVertex3f(0.44,0.20, -0.2);
    glEnd();



    //segmen 3 belakang
    glBegin(GL_POLYGON);
    glColor3fv(color6);
    glVertex3f(0.52,-0.13, -0.1);
    glVertex3f(0.0,-0.43, -0.1);
    glVertex3f(0.0,-0.46, -0.1);
    glVertex3f(0.55,-0.17, -0.1);
    glEnd();

    //segmen 3 depan
    glBegin(GL_POLYGON);
    glColor3fv(color6);
    glVertex3f(0.52,-0.13, -0.2);
    glVertex3f(0.0,-0.43, -0.2);
    glVertex3f(0.0,-0.46, -0.2);
    glVertex3f(0.55,-0.17, -0.2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color6);
    glVertex3f(0.52,-0.13, -0.1);
    glVertex3f(0.52,-0.13, -0.2);
    glVertex3f(0.55,-0.17, -0.2);
    glVertex3f(0.55,-0.17, -0.1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color6);
    glVertex3f(0.0,-0.43, -0.1);
    glVertex3f(0.0,-0.43, -0.2);
    glVertex3f(0.0,-0.46, -0.2);
    glVertex3f(0.0,-0.46, -0.1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color6);
    glVertex3f(0.52,-0.13, -0.1);
    glVertex3f(0.0,-0.43, -0.1);
    glVertex3f(0.52,-0.13, -0.2);
    glVertex3f(0.0,-0.43, -0.2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color6);
    glVertex3f(0.0,-0.46, -0.1);
    glVertex3f(0.55,-0.17, -0.1);
    glVertex3f(0.0,-0.46, -0.2);
    glVertex3f(0.55,-0.17, -0.2);
    glEnd();




    //ular 74 to 60
    //segmen 1 belakang
    glBegin(GL_POLYGON);
    glColor3fv(color6);
    glVertex3f(-1.27,1.57, -0.1);
    glVertex3f(-0.38,1.3, -0.1);
    glVertex3f(-0.4,1.32, -0.1);
    glVertex3f(-1.23,1.6, -0.1);
    glEnd();

    //segmen 1 depan
    glBegin(GL_POLYGON);
    glColor3fv(color6);
    glVertex3f(-1.27,1.57, -0.2);
    glVertex3f(-0.38,1.3, -0.2);
    glVertex3f(-0.4,1.32, -0.2);
    glVertex3f(-1.23,1.6, -0.2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color6);
    glVertex3f(-1.27,1.57, -0.1);
    glVertex3f(-1.27,1.57, -0.2);
    glVertex3f(-1.23,1.6, -0.2);
    glVertex3f(-1.23,1.6, -0.1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color6);
    glVertex3f(-0.38,1.3, -0.1);
    glVertex3f(-0.38,1.3, -0.2);
    glVertex3f(-0.4,1.32, -0.2);
    glVertex3f(-0.4,1.32, -0.1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color6);
    glVertex3f(-1.27,1.57, -0.1);
    glVertex3f(-0.38,1.3, -0.1);
    glVertex3f(-1.27,1.57, -0.2);
    glVertex3f(-0.38,1.3, -0.2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color6);
    glVertex3f(-0.4,1.32, -0.1);
    glVertex3f(-1.23,1.6, -0.1);
    glVertex3f(-0.4,1.32, -0.2);
    glVertex3f(-1.23,1.6, -0.2);
    glEnd();




    //segmen 2 belakang
    glBegin(GL_POLYGON);
    glColor3fv(color6);
    glVertex3f(-0.38,1.3, -0.1);
    glVertex3f(0.34,1.36, -0.1);
    glVertex3f(0.32,1.39, -0.1);
    glVertex3f(-0.4,1.32, -0.1);
    glEnd();

    //segmen 2 belakang
    glBegin(GL_POLYGON);
    glColor3fv(color6);
    glVertex3f(-0.38,1.3, -0.2);
    glVertex3f(0.34,1.36, -0.2);
    glVertex3f(0.32,1.39, -0.2);
    glVertex3f(-0.4,1.32, -0.2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color6);
    glVertex3f(-0.38,1.3, -0.1);
    glVertex3f(-0.38,1.3, -0.2);
    glVertex3f(-0.4,1.32, -0.2);
    glVertex3f(-0.4,1.32, -0.1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color6);
    glVertex3f(0.34,1.36, -0.1);
    glVertex3f(0.34,1.36, -0.2);
    glVertex3f(0.32,1.39, -0.2);
    glVertex3f(0.32,1.39, -0.1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color6);
    glVertex3f(-0.38,1.3, -0.1);
    glVertex3f(0.34,1.36, -0.1);
    glVertex3f(-0.38,1.3, -0.2);
    glVertex3f(0.34,1.36, -0.2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color6);
    glVertex3f(0.32,1.39, -0.1);
    glVertex3f(-0.4,1.32, -0.1);
    glVertex3f(0.32,1.39, -0.2);
    glVertex3f(-0.4,1.32, -0.2);
    glEnd();




    //segmen 3 belakang
    glBegin(GL_POLYGON);
    glColor3fv(color6);
    glVertex3f(0.34,1.39, -0.1);
    glVertex3f(0.41,0.82, -0.1);
    glVertex3f(0.44,0.85, -0.1);
    glVertex3f(0.32,1.36, -0.1);
    glEnd();

    //segmen 3 belakang
    glBegin(GL_POLYGON);
    glColor3fv(color6);
    glVertex3f(0.34,1.39, -0.2);
    glVertex3f(0.41,0.82, -0.2);
    glVertex3f(0.44,0.85, -0.2);
    glVertex3f(0.32,1.36, -0.2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color6);
    glVertex3f(0.34,1.39, -0.1);
    glVertex3f(0.34,1.39, -0.2);
    glVertex3f(0.32,1.36, -0.2);
    glVertex3f(0.32,1.36, -0.1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color6);
    glVertex3f(0.41,0.82, -0.1);
    glVertex3f(0.41,0.82, -0.2);
    glVertex3f(0.44,0.85, -0.2);
    glVertex3f(0.44,0.85, -0.1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color6);
    glVertex3f(0.34,1.39, -0.1);
    glVertex3f(0.41,0.82, -0.1);
    glVertex3f(0.34,1.39, -0.2);
    glVertex3f(0.41,0.82, -0.2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color6);
    glVertex3f(0.44,0.85, -0.1);
    glVertex3f(0.32,1.36, -0.1);
    glVertex3f(0.44,0.85, -0.2);
    glVertex3f(0.32,1.36, -0.2);
    glEnd();



    //pager kiri belakang
    glBegin(GL_POLYGON);
    glColor3fv(color3);
    glVertex3f(-1.9,1.9, 0);
    glVertex3f(-1.85,1.9, 0);
    glVertex3f(-1.85,-1.95, 0);
    glVertex3f(-1.9,-1.95, 0);
    glEnd();

    //pager kiri depan
    glBegin(GL_POLYGON);
    glColor3fv(color3);
    glVertex3f(-1.9,1.9, -0.1);
    glVertex3f(-1.85,1.9, -0.1);
    glVertex3f(-1.85,-1.95, -0.1);
    glVertex3f(-1.9,-1.95, -0.1);
    glEnd();

    //pager kiri kiri
    glBegin(GL_POLYGON);
    glColor3fv(color3);
    glVertex3f(-1.9,1.9, 0);
    glVertex3f(-1.9,1.9, -0.1);
    glVertex3f(-1.9,-1.95, -0.1);
    glVertex3f(-1.9,-1.95, 0);
    glEnd();

    //pager kiri kanan
    glBegin(GL_POLYGON);
    glColor3fv(color3);
    glVertex3f(-1.85,1.9, 0);
    glVertex3f(-1.85,1.9, -0.1);
    glVertex3f(-1.85,-1.95, -0.1);
    glVertex3f(-1.85,-1.95, 0);
    glEnd();

    //pager kiri atas
    glBegin(GL_POLYGON);
    glColor3fv(color3);
    glVertex3f(-1.9,1.9, 0);
    glVertex3f(-1.85,1.9, 0);
    glVertex3f(-1.9,1.9, -0.1);
    glVertex3f(-1.85,1.9, -0.1);
    glEnd();

    //pager kiri bawah
    glBegin(GL_POLYGON);
    glColor3fv(color3);
    glVertex3f(-1.85,-1.95, 0);
    glVertex3f(-1.9,-1.95, 0);
    glVertex3f(-1.85,-1.95, -0.1);
    glVertex3f(-1.9,-1.95, -0.1);
    glEnd();

    //pager kanan belakang
    glBegin(GL_POLYGON);
    glColor3fv(color3);
    glVertex3f(1.9,1.9, 0);
    glVertex3f(1.85,1.9, 0);
    glVertex3f(1.85,-1.95, 0);
    glVertex3f(1.9,-1.95, 0);
    glEnd();

    //pager kanan depan
    glBegin(GL_POLYGON);
    glColor3fv(color3);
    glVertex3f(1.9,1.9, -0.1);
    glVertex3f(1.85,1.9, -0.1);
    glVertex3f(1.85,-1.95, -0.1);
    glVertex3f(1.9,-1.95, -0.1);
    glEnd();

    //pager kanan kiri
    glBegin(GL_POLYGON);
    glColor3fv(color3);
    glVertex3f(1.9,1.9, 0);
    glVertex3f(1.9,1.9, -0.1);
    glVertex3f(1.9,-1.95, -0.1);
    glVertex3f(1.9,-1.95, 0);
    glEnd();

    //pager kanan kiri
    glBegin(GL_POLYGON);
    glColor3fv(color3);
    glVertex3f(1.85,1.9, 0);
    glVertex3f(1.85,1.9, -0.1);
    glVertex3f(1.85,-1.95, -0.1);
    glVertex3f(1.85,-1.95, 0);
    glEnd();

    //pager kanan atas
    glBegin(GL_POLYGON);
    glColor3fv(color3);
    glVertex3f(1.9,1.9, 0);
    glVertex3f(1.85,1.9, 0);
    glVertex3f(1.9,1.9, -0.1);
    glVertex3f(1.85,1.9, -0.1);
    glEnd();

    //pager kanan bawah
    glBegin(GL_POLYGON);
    glColor3fv(color3);
    glVertex3f(1.85,-1.95, 0);
    glVertex3f(1.9,-1.95, 0);
    glVertex3f(1.85,-1.95, -0.1);
    glVertex3f(1.9,-1.95, -0.1);
    glEnd();



    //pager atas baris 9 belakang
    glBegin(GL_POLYGON);
    glColor3fv(color3);
    glVertex3f(-1.9,1.9, 0);
    glVertex3f(1.9,1.9, 0);
    glVertex3f(1.9,1.85, 0);
    glVertex3f(-1.9,1.85, 0);
    glEnd();

    //pager atas baris 9 depan
    glBegin(GL_POLYGON);
    glColor3fv(color3);
    glVertex3f(-1.9,1.9, -0.1);
    glVertex3f(1.9,1.9, -0.1);
    glVertex3f(1.9,1.85, -0.1);
    glVertex3f(-1.9,1.85, -0.1);
    glEnd();

    //pager atas baris 9 kiri
    glBegin(GL_POLYGON);
    glColor3fv(color3);
    glVertex3f(-1.9,1.9, 0);
    glVertex3f(-1.9,1.9, -0.1);
    glVertex3f(-1.9,1.85, -0.1);
    glVertex3f(-1.9,1.85, 0);
    glEnd();

    //pager atas baris 9 kanan
    glBegin(GL_POLYGON);
    glColor3fv(color3);
    glVertex3f(1.9,1.9, 0);
    glVertex3f(1.9,1.9, -0.1);
    glVertex3f(1.9,1.85, -0.1);
    glVertex3f(-1.9,1.85, 0);
    glEnd();

    //pager atas baris 9 atas
    glBegin(GL_POLYGON);
    glColor3fv(color3);
    glVertex3f(-1.9,1.9, 0);
    glVertex3f(1.9,1.9, 0);
    glVertex3f(-1.9,1.9, -0.1);
    glVertex3f(1.9,1.9, -0.1);
    glEnd();

    //pager atas baris 9 bawah
    glBegin(GL_POLYGON);
    glColor3fv(color3);
    glVertex3f(1.9,1.85, 0);
    glVertex3f(-1.9,1.85, 0);
    glVertex3f(1.9,1.85, -0.1);
    glVertex3f(-1.9,1.85, -0.1);
    glEnd();



    //pager atas baris 8 atau pager bawah bais 9 belakang
    glBegin(GL_POLYGON);
    glColor3fv(color3);
    glVertex3f(-1.44,1.48, 0);
    glVertex3f(1.9,1.48, 0);
    glVertex3f(1.9,1.43, 0);
    glVertex3f(-1.44,1.43, 0);
    glEnd();

    //pager atas baris 8 atau pager bawah bais 9 deoan
    glBegin(GL_POLYGON);
    glColor3fv(color3);
    glVertex3f(-1.44,1.48, -0.1);
    glVertex3f(1.9,1.48, -0.1);
    glVertex3f(1.9,1.43, -0.1);
    glVertex3f(-1.44,1.43, -0.1);
    glEnd();

    //pager atas baris 8 atau pager bawah bais 9 kiri
    glBegin(GL_POLYGON);
    glColor3fv(color3);
    glVertex3f(-1.44,1.48, 0);
    glVertex3f(-1.44,1.48, -0.1);
    glVertex3f(-1.44,1.43, -0.1);
    glVertex3f(-1.44,1.43, 0);
    glEnd();

    //pager atas baris 8 atau pager bawah bais 9 kanan
    glBegin(GL_POLYGON);
    glColor3fv(color3);
    glVertex3f(1.9,1.48, 0);
    glVertex3f(1.9,1.48, -0.1);
    glVertex3f(1.9,1.43, -0.1);
    glVertex3f(1.9,1.43, 0);
    glEnd();

    //pager atas baris 8 atau pager bawah bais 9 atas
    glBegin(GL_POLYGON);
    glColor3fv(color3);
    glVertex3f(-1.44,1.48, 0);
    glVertex3f(1.9,1.48, 0);
    glVertex3f(-1.44,1.48, -0.1);
    glVertex3f(1.9,1.48, -0.1);
    glEnd();

    //pager atas baris 8 atau pager bawah bais 9 atas
    glBegin(GL_POLYGON);
    glColor3fv(color3);
    glVertex3f(1.9,1.43, 0);
    glVertex3f(-1.44,1.43, 0);
    glVertex3f(1.9,1.43, -0.1);
    glVertex3f(-1.44,1.43, -0.1);
    glEnd();




    //pager atas baris 7 atau pager bawah garis 8 belakang
    glBegin(GL_POLYGON);
    glColor3fv(color3);
    glVertex3f(-1.9,1.06, 0);
    glVertex3f(1.44,1.06, 0);
    glVertex3f(1.44,1.01, 0);
    glVertex3f(-1.9,1.01, 0);
    glEnd();

    //pager atas baris 7 atau pager bawah garis 8 depan
    glBegin(GL_POLYGON);
    glColor3fv(color3);
    glVertex3f(-1.9,1.06, -0.1);
    glVertex3f(1.44,1.06, -0.1);
    glVertex3f(1.44,1.01, -0.1);
    glVertex3f(-1.9,1.01, -0.1);
    glEnd();

    //pager atas baris 7 atau pager bawah garis 8 depan
    glBegin(GL_POLYGON);
    glColor3fv(color3);
    glVertex3f(-1.9,1.06, 0);
    glVertex3f(-1.9,1.06, -0.1);
    glVertex3f(-1.9,1.01, -0.1);
    glVertex3f(-1.9,1.01, 0);
    glEnd();

    //pager atas baris 7 atau pager bawah garis 8 depan
    glBegin(GL_POLYGON);
    glColor3fv(color3);
    glVertex3f(1.44,1.06, 0);
    glVertex3f(1.44,1.06, -0.1);
    glVertex3f(1.44,1.01, -0.1);
    glVertex3f(1.44,1.01, 0);
    glEnd();

    //pager atas baris 7 atau pager bawah garis 8 depan
    glBegin(GL_POLYGON);
    glColor3fv(color3);
    glVertex3f(-1.9,1.06, 0);
    glVertex3f(1.44,1.06, 0);
    glVertex3f(-1.9,1.06, -0.1);
    glVertex3f(1.44,1.06, -0.1);
    glEnd();

    //pager atas baris 7 atau pager bawah garis 8 depan
    glBegin(GL_POLYGON);
    glColor3fv(color3);
    glVertex3f(1.44,1.01, 0);
    glVertex3f(-1.9,1.01, 0);
    glVertex3f(1.44,1.01, -0.1);
    glVertex3f(-1.9,1.01, -0.1);
    glEnd();



    //pager atas baris 6 atau pager bawah baris 7 belakang
    glBegin(GL_POLYGON);
    glColor3fv(color3);
    glVertex3f(-1.44,0.64, 0);
    glVertex3f(1.9,0.64, 0);
    glVertex3f(1.9,0.59, 0);
    glVertex3f(-1.44,0.59, 0);
    glEnd();

    //pager atas baris 6 atau pager bawah baris 7 depan
    glBegin(GL_POLYGON);
    glColor3fv(color3);
    glVertex3f(-1.44,0.64, -0.1);
    glVertex3f(1.9,0.64, -0.1);
    glVertex3f(1.9,0.59, -0.1);
    glVertex3f(-1.44,0.59, -0.1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color3);
    glVertex3f(-1.44,0.64, 0);
    glVertex3f(-1.44,0.64, -0.1);
    glVertex3f(-1.44,0.59, -0.1);
    glVertex3f(-1.44,0.59, 0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color3);
    glVertex3f(1.9,0.64, 0);
    glVertex3f(1.9,0.64, -0.1);
    glVertex3f(1.9,0.59, -0.1);
    glVertex3f(1.9,0.59, 0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color3);
    glVertex3f(-1.44,0.64, 0);
    glVertex3f(1.9,0.64, 0);
    glVertex3f(-1.44,0.64, -0.1);
    glVertex3f(1.9,0.64, -0.1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color3);
    glVertex3f(1.9,0.59, 0);
    glVertex3f(-1.44,0.59, 0);
    glVertex3f(1.9,0.59, -0.1);
    glVertex3f(-1.44,0.59, -0.1);
    glEnd();




    //pager atas baris 5 atau pager bawah baris 6 belakang
    glBegin(GL_POLYGON);
    glColor3fv(color3);
    glVertex3f(-1.9,0.22, 0);
    glVertex3f(1.44,0.22, 0);
    glVertex3f(1.44,0.17, 0);
    glVertex3f(-1.9,0.17, 0);
    glEnd();

    //pager atas baris 5 atau pager bawah baris 6 depan
    glBegin(GL_POLYGON);
    glColor3fv(color3);
    glVertex3f(-1.9,0.22, -0.1);
    glVertex3f(1.44,0.22, -0.1);
    glVertex3f(1.44,0.17, -0.1);
    glVertex3f(-1.9,0.17, -0.1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color3);
    glVertex3f(-1.9,0.22, 0);
    glVertex3f(-1.9,0.22, -0.1);
    glVertex3f(-1.9,0.17, -0.1);
    glVertex3f(-1.9,0.17, 0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color3);
    glVertex3f(1.44,0.22, 0);
    glVertex3f(1.44,0.22, -0.1);
    glVertex3f(1.44,0.17, -0.1);
    glVertex3f(1.44,0.17, 0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color3);
    glVertex3f(-1.9,0.22, 0);
    glVertex3f(1.44,0.22, 0);
    glVertex3f(-1.9,0.22, -0.1);
    glVertex3f(1.44,0.22, -0.1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color3);
    glVertex3f(1.44,0.17, 0);
    glVertex3f(-1.9,0.17, 0);
    glVertex3f(1.44,0.17, -0.1);
    glVertex3f(-1.9,0.17, -0.1);
    glEnd();



    //pager atas baris 4 atau pager bawah baris 5 belakang
    glBegin(GL_POLYGON);
    glColor3fv(color3);
    glVertex3f(-1.44,-0.2, 0);
    glVertex3f(1.9,-0.2, 0);
    glVertex3f(1.9,-0.25, 0);
    glVertex3f(-1.44,-0.25, 0);
    glEnd();

    //pager atas baris 4 atau pager bawah baris 5 depan
    glBegin(GL_POLYGON);
    glColor3fv(color3);
    glVertex3f(-1.44,-0.2, -0.1);
    glVertex3f(1.9,-0.2, -0.1);
    glVertex3f(1.9,-0.25, -0.1);
    glVertex3f(-1.44,-0.25, -0.1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color3);
    glVertex3f(-1.44,-0.2, 0);
    glVertex3f(-1.44,-0.2, -0.1);
    glVertex3f(-1.44,-0.25, -0.1);
    glVertex3f(-1.44,-0.25, 0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color3);
    glVertex3f(1.9,-0.2, 0);
    glVertex3f(1.9,-0.2, -0.1);
    glVertex3f(1.9,-0.25, -0.1);
    glVertex3f(1.9,-0.25, 0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color3);
    glVertex3f(-1.44,-0.2, 0);
    glVertex3f(1.9,-0.2, 0);
    glVertex3f(-1.44,-0.2, -0.1);
    glVertex3f(1.9,-0.2, -0.1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color3);
    glVertex3f(1.9,-0.25, 0);
    glVertex3f(-1.44,-0.25, 0);
    glVertex3f(1.9,-0.25, -0.1);
    glVertex3f(-1.44,-0.25, -0.1);
    glEnd();




    //pager atas baris 3 atau pager bawah baris 4 belakang
    glBegin(GL_POLYGON);
    glColor3fv(color3);
    glVertex3f(-1.9,-0.62, 0);
    glVertex3f(1.44,-0.62, 0);
    glVertex3f(1.44,-0.67, 0);
    glVertex3f(-1.9,-0.67, 0);
    glEnd();

    //pager atas baris 3 atau pager bawah baris 4 depan
    glBegin(GL_POLYGON);
    glColor3fv(color3);
    glVertex3f(-1.9,-0.62, -0.1);
    glVertex3f(1.44,-0.62, -0.1);
    glVertex3f(1.44,-0.67, -0.1);
    glVertex3f(-1.9,-0.67, -0.1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color3);
    glVertex3f(-1.9,-0.62, 0);
    glVertex3f(-1.9,-0.62, -0.1);
    glVertex3f(-1.9,-0.67, -0.1);
    glVertex3f(-1.9,-0.67, 0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color3);
    glVertex3f(1.44,-0.62, 0);
    glVertex3f(1.44,-0.62, -0.1);
    glVertex3f(1.44,-0.67, -0.1);
    glVertex3f(1.44,-0.67, 0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color3);
    glVertex3f(-1.9,-0.62, 0);
    glVertex3f(1.44,-0.62, 0);
    glVertex3f(-1.9,-0.62, -0.1);
    glVertex3f(1.44,-0.62, -0.1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color3);
    glVertex3f(1.44,-0.67, 0);
    glVertex3f(-1.9,-0.67, 0);
    glVertex3f(1.44,-0.67, -0.1);
    glVertex3f(-1.9,-0.67, -0.1);
    glEnd();



    //pager atas baris 2 atau pager bawah baris 3 belakang
    glBegin(GL_POLYGON);
    glColor3fv(color3);
    glVertex3f(-1.44,-1.04, 0);
    glVertex3f(1.9,-1.04, 0);
    glVertex3f(1.9,-1.09, 0);
    glVertex3f(-1.44,-1.09, 0);
    glEnd();

        //pager atas baris 2 atau pager bawah baris 3 depan
    glBegin(GL_POLYGON);
    glColor3fv(color3);
    glVertex3f(-1.44,-1.04, -0.1);
    glVertex3f(1.9,-1.04, -0.1);
    glVertex3f(1.9,-1.09, -0.1);
    glVertex3f(-1.44,-1.09, -0.1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color3);
    glVertex3f(-1.44,-1.04, 0);
    glVertex3f(-1.44,-1.04, -0.1);
    glVertex3f(-1.44,-1.09, -0.1);
    glVertex3f(-1.44,-1.09, 0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color3);
    glVertex3f(1.9,-1.04, 0);
    glVertex3f(1.9,-1.04, -0.1);
    glVertex3f(1.9,-1.09, -0.1);
    glVertex3f(1.9,-1.09, 0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color3);
    glVertex3f(-1.44,-1.04, 0);
    glVertex3f(1.9,-1.04, 0);
    glVertex3f(-1.44,-1.04, -0.1);
    glVertex3f(1.9,-1.04, -0.1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color3);
    glVertex3f(1.9,-1.09, 0);
    glVertex3f(-1.44,-1.09, 0);
    glVertex3f(1.9,-1.09, -0.1);
    glVertex3f(-1.44,-1.09, -0.1);
    glEnd();



    //pager atas baris 1 atau pager bawah baris 2 belakang
    glBegin(GL_POLYGON);
    glColor3fv(color3);
    glVertex3f(-1.9,-1.46, 0);
    glVertex3f(1.44,-1.46, 0);
    glVertex3f(1.44,-1.51, 0);
    glVertex3f(-1.9,-1.51, 0);
    glEnd();

    //pager atas baris 1 atau pager bawah baris 2 belakang
    glBegin(GL_POLYGON);
    glColor3fv(color3);
    glVertex3f(-1.9,-1.46, -0.1);
    glVertex3f(1.44,-1.46, -0.1);
    glVertex3f(1.44,-1.51, -0.1);
    glVertex3f(-1.9,-1.51, -0.1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color3);
    glVertex3f(-1.9,-1.46, 0);
    glVertex3f(-1.9,-1.46, -0.1);
    glVertex3f(-1.9,-1.51, -0.1);
    glVertex3f(-1.9,-1.51, 0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color3);
    glVertex3f(1.44,-1.46, 0);
    glVertex3f(1.44,-1.46, -0.1);
    glVertex3f(1.44,-1.51, -0.1);
    glVertex3f(1.44,-1.51, 0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color3);
    glVertex3f(-1.9,-1.46, 0);
    glVertex3f(1.44,-1.46, 0);
    glVertex3f(1.44,-1.51, -0.1);
    glVertex3f(-1.9,-1.51, -0.1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color3);
    glVertex3f(1.44,-1.51, 0);
    glVertex3f(-1.9,-1.51, 0);
    glVertex3f(1.44,-1.51, -0.1);
    glVertex3f(-1.9,-1.51, -0.1);
    glEnd();



    //pager bawah baris 1 belakang
    glBegin(GL_POLYGON);
    glColor3fv(color3);
    glVertex3f(-1.9,-1.95, 0);
    glVertex3f(1.9,-1.95, 0);
    glVertex3f(1.9,-1.9, 0);
    glVertex3f(-1.9,-1.9, 0);
    glEnd();

    //pager bawah baris 1 belakang
    glBegin(GL_POLYGON);
    glColor3fv(color3);
    glVertex3f(-1.9,-1.95, -0.1);
    glVertex3f(1.9,-1.95, -0.1);
    glVertex3f(1.9,-1.9, -0.1);
    glVertex3f(-1.9,-1.9, -0.1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color3);
    glVertex3f(-1.9,-1.95, 0);
    glVertex3f(-1.9,-1.95, -0.1);
    glVertex3f(-1.9,-1.9, -0.1);
    glVertex3f(-1.9,-1.9, 0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color3);
    glVertex3f(1.9,-1.95, 0);
    glVertex3f(1.9,-1.95, -0.1);
    glVertex3f(1.9,-1.9, -0.1);
    glVertex3f(1.9,-1.9, 0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color3);
    glVertex3f(-1.9,-1.95, 0);
    glVertex3f(1.9,-1.95, 0);
    glVertex3f(-1.9,-1.95, -0.1);
    glVertex3f(1.9,-1.95, -0.1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color3);
    glVertex3f(1.9,-1.9, 0);
    glVertex3f(-1.9,-1.9, 0);
    glVertex3f(1.9,-1.9, -0.1);
    glVertex3f(-1.9,-1.9, -0.1);
    glEnd();




    //baris 9
    //belakang
    glBegin(GL_POLYGON);
    glColor4f(0.0, 0.0, 0.0, 0.5);
    glVertex3f(-1.85,1.85, 0.0);
    glVertex3f(-1.44,1.85, 0.0);
    glVertex3f(-1.44,1.455, 0.0);
    glVertex3f(-1.85,1.455, 0.0);
    glEnd();

    //depan
    glBegin(GL_POLYGON);
    glColor4f(0.0, 0.0, 0.0, 0.5);
    glVertex3f(-1.85,1.85, -0.01);
    glVertex3f(-1.44,1.85, -0.01);
    glVertex3f(-1.44,1.455, -0.01);
    glVertex3f(-1.85,1.455, -0.01);
    glEnd();

    glBegin(GL_POLYGON);
    glColor4f(0.0, 0.0, 0.0, 0.5);
    glVertex3f(-1.85,1.85, 0.0);
    glVertex3f(-1.85,1.85, -0.01);
    glVertex3f(-1.85,1.455, -0.01);
    glVertex3f(-1.85,1.455, 0.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor4f(0.0, 0.0, 0.0, 0.5);
    glVertex3f(-1.44,1.85, 0.0);
    glVertex3f(-1.44,1.85, -0.01);
    glVertex3f(-1.44,1.455, -0.01);
    glVertex3f(-1.44,1.455, 0.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor4f(0.0, 0.0, 0.0, 0.5);
    glVertex3f(-1.85,1.85, 0.0);
    glVertex3f(-1.44,1.85, 0.0);
    glVertex3f(-1.85,1.85, -0.01);
    glVertex3f(-1.44,1.85, -0.01);
    glEnd();

    glBegin(GL_POLYGON);
    glColor4f(0.0, 0.0, 0.0, 0.5);
    glVertex3f(-1.44,1.455, 0.0);
    glVertex3f(-1.85,1.455, 0.0);
    glVertex3f(-1.44,1.455, -0.01);
    glVertex3f(-1.85,1.455, -0.01);
    glEnd();



    //belakang
    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.44,1.85, 0.0);
    glVertex3f(-1.03,1.85, 0.0);
    glVertex3f(-1.03,1.48, 0.0);
    glVertex3f(-1.44,1.48, 0.0);
    glEnd();

    //depan
    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.44,1.85, -0.01);
    glVertex3f(-1.03,1.85, -0.01);
    glVertex3f(-1.03,1.48, -0.01);
    glVertex3f(-1.44,1.48, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.44,1.85, 0.0);
    glVertex3f(-1.44,1.85, -0.01);
    glVertex3f(-1.44,1.48, -0.01);
    glVertex3f(-1.44,1.48, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.03,1.85, 0.0);
    glVertex3f(-1.03,1.85, -0.01);
    glVertex3f(-1.03,1.48, -0.01);
    glVertex3f(-1.03,1.48, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.44,1.85, 0.0);
    glVertex3f(-1.03,1.85, 0.0);
    glVertex3f(-1.44,1.85, -0.01);
    glVertex3f(-1.03,1.85, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.03,1.48, 0.0);
    glVertex3f(-1.44,1.48, 0.0);
    glVertex3f(-1.03,1.48, -0.01);
    glVertex3f(-1.44,1.48, -0.01);
    glEnd();



    //belakang
    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.03,1.85, 0.0);
    glVertex3f(-0.62,1.85, 0.0);
    glVertex3f(-0.62,1.48, 0.0);
    glVertex3f(-1.03,1.48, 0.0);
    glEnd();

    //depan
    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.03,1.85, -0.01);
    glVertex3f(-0.62,1.85, -0.01);
    glVertex3f(-0.62,1.48, -0.01);
    glVertex3f(-1.03,1.48, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.03,1.85, 0.0);
    glVertex3f(-1.03,1.85, -0.01);
    glVertex3f(-1.03,1.48, -0.01);
    glVertex3f(-1.03,1.48, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-0.62,1.85, 0.0);
    glVertex3f(-0.62,1.85, -0.01);
    glVertex3f(-0.62,1.48, -0.01);
    glVertex3f(-0.62,1.48, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.03,1.85, 0.0);
    glVertex3f(-0.62,1.85, 0.0);
    glVertex3f(-1.03,1.85, -0.01);
    glVertex3f(-0.62,1.85, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-0.62,1.48, 0.0);
    glVertex3f(-1.03,1.48, 0.0);
    glVertex3f(-0.62,1.48, -0.01);
    glVertex3f(-1.03,1.48, -0.01);
    glEnd();




    //belakang
    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-0.62,1.85, 0.0);
    glVertex3f(-0.21,1.85, 0.0);
    glVertex3f(-0.21,1.48, 0.0);
    glVertex3f(-0.62,1.48, 0.0);
    glEnd();

    //depan
    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-0.62,1.85, -0.01);
    glVertex3f(-0.21,1.85, -0.01);
    glVertex3f(-0.21,1.48, -0.01);
    glVertex3f(-0.62,1.48, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-0.62,1.85, 0.0);
    glVertex3f(-0.62,1.85, -0.01);
    glVertex3f(-0.62,1.48, -0.01);
    glVertex3f(-0.62,1.48, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-0.21,1.85, 0.0);
    glVertex3f(-0.21,1.85, -0.01);
    glVertex3f(-0.21,1.48, -0.01);
    glVertex3f(-0.21,1.48, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-0.62,1.85, 0.0);
    glVertex3f(-0.21,1.85, 0.0);
    glVertex3f(-0.62,1.85, -0.01);
    glVertex3f(-0.21,1.85, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-0.21,1.48, 0.0);
    glVertex3f(-0.62,1.48, 0.0);
    glVertex3f(-0.21,1.48, -0.01);
    glVertex3f(-0.62,1.48, -0.01);
    glEnd();



    //belakang
    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-0.21,1.85, 0.0);
    glVertex3f(0.2,1.85, 0.0);
    glVertex3f(0.2,1.48, 0.0);
    glVertex3f(-0.21,1.48, 0.0);
    glEnd();

    //depan
    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-0.21,1.85, -0.01);
    glVertex3f(0.2,1.85, -0.01);
    glVertex3f(0.2,1.48, -0.01);
    glVertex3f(-0.21,1.48, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-0.21,1.85, 0.0);
    glVertex3f(-0.21,1.85, -0.01);
    glVertex3f(-0.21,1.48, -0.01);
    glVertex3f(-0.21,1.48, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(0.2,1.85, 0.0);
    glVertex3f(0.2,1.85, -0.01);
    glVertex3f(0.2,1.48, -0.01);
    glVertex3f(0.2,1.48, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-0.21,1.85, 0.0);
    glVertex3f(0.2,1.85, 0.0);
    glVertex3f(-0.21,1.85, -0.01);
    glVertex3f(0.2,1.85, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(0.2,1.48, 0.0);
    glVertex3f(-0.21,1.48, 0.0);
    glVertex3f(0.2,1.48, -0.01);
    glVertex3f(-0.21,1.48, -0.01);
    glEnd();




    //belakang
    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(0.2,1.85, 0.0);
    glVertex3f(0.61,1.85, 0.0);
    glVertex3f(0.61,1.48, 0.0);
    glVertex3f(0.2,1.48, 0.0);
    glEnd();

    //depan
    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(0.2,1.85, -0.01);
    glVertex3f(0.61,1.85, -0.01);
    glVertex3f(0.61,1.48, -0.01);
    glVertex3f(0.2,1.48, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(0.2,1.85, 0.0);
    glVertex3f(0.2,1.85, -0.01);
    glVertex3f(0.2,1.48, -0.01);
    glVertex3f(0.2,1.48, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(0.61,1.85, 0.0);
    glVertex3f(0.61,1.85, -0.01);
    glVertex3f(0.61,1.48, -0.01);
    glVertex3f(0.61,1.48, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(0.2,1.85, 0.0);
    glVertex3f(0.61,1.85, 0.0);
    glVertex3f(0.2,1.85, -0.01);
    glVertex3f(0.61,1.85, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(0.61,1.48, 0.0);
    glVertex3f(0.2,1.48, 0.0);
    glVertex3f(0.61,1.48, -0.01);
    glVertex3f(0.2,1.48, -0.01);
    glEnd();


    //belakang
    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(0.61,1.85, 0.0);
    glVertex3f(1.02,1.85, 0.0);
    glVertex3f(1.02,1.48, 0.0);
    glVertex3f(0.61,1.48, 0.0);
    glEnd();

    //depan
    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(0.61,1.85, -0.01);
    glVertex3f(1.02,1.85, -0.01);
    glVertex3f(1.02,1.48, -0.01);
    glVertex3f(0.61,1.48, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(0.61,1.85, 0.0);
    glVertex3f(0.61,1.85, -0.01);
    glVertex3f(0.61,1.48, -0.01);
    glVertex3f(0.61,1.48, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.02,1.85, 0.0);
    glVertex3f(1.02,1.85, -0.01);
    glVertex3f(1.02,1.48, -0.01);
    glVertex3f(1.02,1.48, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(0.61,1.85, 0.0);
    glVertex3f(1.02,1.85, 0.0);
    glVertex3f(0.61,1.85, -0.01);
    glVertex3f(1.02,1.85, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.02,1.48, 0.0);
    glVertex3f(0.61,1.48, 0.0);
    glVertex3f(1.02,1.48, -0.01);
    glVertex3f(0.61,1.48, -0.01);
    glEnd();


    //belakang
    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.02,1.85, 0.0);
    glVertex3f(1.43,1.85, 0.0);
    glVertex3f(1.43,1.48, 0.0);
    glVertex3f(1.02,1.48, 0.0);
    glEnd();

    //depan
    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.02,1.85, -0.01);
    glVertex3f(1.43,1.85, -0.01);
    glVertex3f(1.43,1.48, -0.01);
    glVertex3f(1.02,1.48, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.02,1.85, 0.0);
    glVertex3f(1.02,1.85, -0.01);
    glVertex3f(1.02,1.48, -0.01);
    glVertex3f(1.02,1.48, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.43,1.85, 0.0);
    glVertex3f(1.43,1.85, -0.01);
    glVertex3f(1.43,1.48, -0.01);
    glVertex3f(1.43,1.48, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.02,1.85, 0.0);
    glVertex3f(1.43,1.85, 0.0);
    glVertex3f(1.02,1.85, -0.01);
    glVertex3f(1.43,1.85, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.43,1.48, 0.0);
    glVertex3f(1.02,1.48, 0.0);
    glVertex3f(1.43,1.48, -0.01);
    glVertex3f(1.02,1.48, -0.01);
    glEnd();



    //belakang
    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.43,1.85, 0.0);
    glVertex3f(1.85,1.85, 0.0);
    glVertex3f(1.85,1.48, 0.0);
    glVertex3f(1.43,1.48, 0.0);
    glEnd();

    //depan
    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.43,1.85, -0.01);
    glVertex3f(1.85,1.85, -0.01);
    glVertex3f(1.85,1.48, -0.01);
    glVertex3f(1.43,1.48, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.43,1.85, 0.0);
    glVertex3f(1.43,1.85, -0.01);
    glVertex3f(1.43,1.48, -0.01);
    glVertex3f(1.43,1.48, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.85,1.85, 0.0);
    glVertex3f(1.85,1.85, -0.01);
    glVertex3f(1.85,1.48, -0.01);
    glVertex3f(1.85,1.48, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.43,1.85, 0.0);
    glVertex3f(1.85,1.85, 0.0);
    glVertex3f(1.43,1.85, -0.01);
    glVertex3f(1.85,1.85, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.85,1.48, 0.0);
    glVertex3f(1.43,1.48, 0.0);
    glVertex3f(1.85,1.48, -0.01);
    glVertex3f(1.43,1.48, -0.01);
    glEnd();



    //baris 8

    //belakang
    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.85,1.455, 0.0);
    glVertex3f(-1.44,1.455, 0.0);
    glVertex3f(-1.44,1.06, 0.0);
    glVertex3f(-1.85,1.06, 0.0);
    glEnd();

    //depan
    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.85,1.455, -0.01);
    glVertex3f(-1.44,1.455, -0.01);
    glVertex3f(-1.44,1.06, -0.01);
    glVertex3f(-1.85,1.06, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.85,1.455, 0.0);
    glVertex3f(-1.85,1.455, -0.01);
    glVertex3f(-1.85,1.06, -0.01);
    glVertex3f(-1.85,1.06, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.44,1.455, 0.0);
    glVertex3f(-1.44,1.455, -0.01);
    glVertex3f(-1.44,1.06, 0.0);
    glVertex3f(-1.85,1.06, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.85,1.455, 0.0);
    glVertex3f(-1.44,1.455, 0.0);
    glVertex3f(-1.85,1.455, -0.01);
    glVertex3f(-1.44,1.455, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.44,1.06, 0.0);
    glVertex3f(-1.85,1.06, 0.0);
    glVertex3f(-1.44,1.06, -0.01);
    glVertex3f(-1.85,1.06, -0.01);
    glEnd();



    //belakang
    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.44,1.43, 0.0);
    glVertex3f(-1.03,1.43, 0.0);
    glVertex3f(-1.03,1.06, 0.0);
    glVertex3f(-1.44,1.06, 0.0);
    glEnd();

    //depan
    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.44,1.43, -0.01);
    glVertex3f(-1.03,1.43, -0.01);
    glVertex3f(-1.03,1.06, -0.01);
    glVertex3f(-1.44,1.06, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.44,1.43, 0.0);
    glVertex3f(-1.44,1.43, -0.01);
    glVertex3f(-1.44,1.06, -0.01);
    glVertex3f(-1.44,1.06, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.03,1.43, 0.0);
    glVertex3f(-1.03,1.43, -0.01);
    glVertex3f(-1.03,1.06, -0.01);
    glVertex3f(-1.03,1.06, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.44,1.43, 0.0);
    glVertex3f(-1.03,1.43, 0.0);
    glVertex3f(-1.44,1.43, -0.01);
    glVertex3f(-1.03,1.43, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.03,1.06, 0.0);
    glVertex3f(-1.44,1.06, 0.0);
    glVertex3f(-1.03,1.06, -0.01);
    glVertex3f(-1.44,1.06, -0.01);
    glEnd();



    //belakang
    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.03,1.43, 0.0);
    glVertex3f(-0.62,1.43, 0.0);
    glVertex3f(-0.62,1.06, 0.0);
    glVertex3f(-1.03,1.06, 0.0);
    glEnd();

    //depan
    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.03,1.43, -0.01);
    glVertex3f(-0.62,1.43, -0.01);
    glVertex3f(-0.62,1.06, -0.01);
    glVertex3f(-1.03,1.06, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.03,1.43, 0.0);
    glVertex3f(-1.03,1.43, -0.01);
    glVertex3f(-1.03,1.06, -0.01);
    glVertex3f(-1.03,1.06, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-0.62,1.43, 0.0);
    glVertex3f(-0.62,1.43, -0.01);
    glVertex3f(-0.62,1.06, -0.01);
    glVertex3f(-0.62,1.06, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.03,1.43, 0.0);
    glVertex3f(-0.62,1.43, 0.0);
    glVertex3f(-1.03,1.43, -0.01);
    glVertex3f(-0.62,1.43, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-0.62,1.06, 0.0);
    glVertex3f(-1.03,1.06, 0.0);
    glVertex3f(-0.62,1.06, -0.01);
    glVertex3f(-1.03,1.06, -0.01);
    glEnd();



    //belakang
    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-0.62,1.43, 0.0);
    glVertex3f(-0.21,1.43, 0.0);
    glVertex3f(-0.21,1.06, 0.0);
    glVertex3f(-0.62,1.06, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-0.62,1.43, -0.01);
    glVertex3f(-0.21,1.43, -0.01);
    glVertex3f(-0.21,1.06, -0.01);
    glVertex3f(-0.62,1.06, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-0.62,1.43, 0.0);
    glVertex3f(-0.62,1.43, -0.01);
    glVertex3f(-0.62,1.06, -0.01);
    glVertex3f(-0.62,1.06, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-0.21,1.43, 0.0);
    glVertex3f(-0.21,1.43, -0.01);
    glVertex3f(-0.21,1.06, -0.01);
    glVertex3f(-0.21,1.06, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-0.62,1.43, 0.0);
    glVertex3f(-0.21,1.43, 0.0);
    glVertex3f(-0.62,1.43, -0.01);
    glVertex3f(-0.21,1.43, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-0.21,1.06, 0.0);
    glVertex3f(-0.62,1.06, 0.0);
    glVertex3f(-0.21,1.06, -0.01);
    glVertex3f(-0.62,1.06, -0.01);
    glEnd();


    //belakang
    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-0.21,1.43, 0.0);
    glVertex3f(0.2,1.43, 0.0);
    glVertex3f(0.2,1.06, 0.0);
    glVertex3f(-0.21,1.06, 0.0);
    glEnd();

    //depan
    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-0.21,1.43, -0.01);
    glVertex3f(0.2,1.43, -0.01);
    glVertex3f(0.2,1.06, -0.01);
    glVertex3f(-0.21,1.06, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-0.21,1.43, 0.0);
    glVertex3f(-0.21,1.43, -0.01);
    glVertex3f(-0.21,1.06, -0.01);
    glVertex3f(-0.21,1.06, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(0.2,1.43, 0.0);
    glVertex3f(0.2,1.43, -0.01);
    glVertex3f(0.2,1.06, -0.01);
    glVertex3f(0.2,1.06, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-0.21,1.43, 0.0);
    glVertex3f(0.2,1.43, 0.0);
    glVertex3f(-0.21,1.43, -0.01);
    glVertex3f(0.2,1.43, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(0.2,1.06, 0.0);
    glVertex3f(-0.21,1.06, 0.0);
    glVertex3f(0.2,1.06, -0.01);
    glVertex3f(-0.21,1.06, -0.01);
    glEnd();



    //belakang
    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(0.2,1.43, 0.0);
    glVertex3f(0.61,1.43, 0.0);
    glVertex3f(0.61,1.06, 0.0);
    glVertex3f(0.2,1.06, 0.0);
    glEnd();

    //depan
    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(0.2,1.43, -0.01);
    glVertex3f(0.61,1.43, -0.01);
    glVertex3f(0.61,1.06, -0.01);
    glVertex3f(0.2,1.06, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(0.2,1.43, 0.0);
    glVertex3f(0.2,1.43, -0.01);
    glVertex3f(0.2,1.06, -0.01);
    glVertex3f(0.2,1.06, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(0.61,1.43, 0.0);
    glVertex3f(0.61,1.43, -0.01);
    glVertex3f(0.61,1.06, -0.01);
    glVertex3f(0.61,1.06, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(0.2,1.43, 0.0);
    glVertex3f(0.61,1.43, 0.0);
    glVertex3f(0.2,1.43, -0.01);
    glVertex3f(0.61,1.43, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(0.61,1.06, 0.0);
    glVertex3f(0.2,1.06, 0.0);
    glVertex3f(0.61,1.06, -0.01);
    glVertex3f(0.2,1.06, -0.01);
    glEnd();



    //belakang
    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(0.61,1.43, 0.0);
    glVertex3f(1.02,1.43, 0.0);
    glVertex3f(1.02,1.06, 0.0);
    glVertex3f(0.61,1.06, 0.0);
    glEnd();

    //depan
    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(0.61,1.43, -0.01);
    glVertex3f(1.02,1.43, -0.01);
    glVertex3f(1.02,1.06, -0.01);
    glVertex3f(0.61,1.06, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(0.61,1.43, 0.0);
    glVertex3f(0.61,1.43, -0.01);
    glVertex3f(0.61,1.06, -0.01);
    glVertex3f(0.61,1.06, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.02,1.43, 0.0);
    glVertex3f(1.02,1.43, -0.01);
    glVertex3f(1.02,1.06, -0.01);
    glVertex3f(1.02,1.06, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(0.61,1.43, 0.0);
    glVertex3f(1.02,1.43, 0.0);
    glVertex3f(0.61,1.43, -0.01);
    glVertex3f(1.02,1.43, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.02,1.06, 0.0);
    glVertex3f(0.61,1.06, 0.0);
    glVertex3f(1.02,1.06, -0.01);
    glVertex3f(0.61,1.06, -0.01);
    glEnd();



    //belakang
    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.02,1.43, 0.0);
    glVertex3f(1.43,1.43, 0.0);
    glVertex3f(1.43,1.06, 0.0);
    glVertex3f(1.02,1.06, 0.0);
    glEnd();

    //depan
    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.02,1.43, -0.01);
    glVertex3f(1.43,1.43, -0.01);
    glVertex3f(1.43,1.06, -0.01);
    glVertex3f(1.02,1.06, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.02,1.43, 0.0);
    glVertex3f(1.02,1.43, -0.01);
    glVertex3f(1.02,1.06, -0.01);
    glVertex3f(1.02,1.06, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.43,1.43, 0.0);
    glVertex3f(1.43,1.43, -0.01);
    glVertex3f(1.43,1.06, -0.01);
    glVertex3f(1.43,1.06, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.02,1.43, 0.0);
    glVertex3f(1.43,1.43, 0.0);
    glVertex3f(1.02,1.43, -0.01);
    glVertex3f(1.43,1.43, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.43,1.06, 0.0);
    glVertex3f(1.02,1.06, 0.0);
    glVertex3f(1.43,1.06, -0.01);
    glVertex3f(1.02,1.06, -0.01);
    glEnd();


    //belakang
    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.43,1.43, 0.0);
    glVertex3f(1.85,1.43, 0.0);
    glVertex3f(1.85,1.035, 0.0);
    glVertex3f(1.43,1.035, 0.0);
    glEnd();

    //depan
    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.43,1.43, -0.01);
    glVertex3f(1.85,1.43, -0.01);
    glVertex3f(1.85,1.035, -0.01);
    glVertex3f(1.43,1.035, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.43,1.43, 0.0);
    glVertex3f(1.43,1.43, -0.01);
    glVertex3f(1.43,1.035, -0.01);
    glVertex3f(1.43,1.035, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.85,1.43, 0.0);
    glVertex3f(1.85,1.43, -0.01);
    glVertex3f(1.85,1.035, -0.01);
    glVertex3f(1.85,1.035, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.43,1.43, 0.0);
    glVertex3f(1.85,1.43, 0.0);
    glVertex3f(1.43,1.43, -0.01);
    glVertex3f(1.85,1.43, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.85,1.035, 0.0);
    glVertex3f(1.43,1.035, 0.0);
    glVertex3f(1.85,1.035, -0.01);
    glVertex3f(1.43,1.035, -0.01);
    glEnd();


    //baris 7

    //belakang
    glBegin(GL_POLYGON);
    glColor4f(0.0, 0.0, 0.0, 0.5);
    glVertex3f(-1.85,1.01, 0.0);
    glVertex3f(-1.44,1.01, 0.0);
    glVertex3f(-1.44,0.615, 0.0);
    glVertex3f(-1.85,0.615, 0.0);
    glEnd();

    //depan
    glBegin(GL_POLYGON);
    glColor4f(0.0, 0.0, 0.0, 0.5);
    glVertex3f(-1.85,1.01, -0.01);
    glVertex3f(-1.44,1.01, -0.01);
    glVertex3f(-1.44,0.615, -0.01);
    glVertex3f(-1.85,0.615, -0.01);
    glEnd();

    glBegin(GL_POLYGON);
    glColor4f(0.0, 0.0, 0.0, 0.5);
    glVertex3f(-1.85,1.01, 0.0);
    glVertex3f(-1.85,1.01, -0.01);
    glVertex3f(-1.85,0.615, -0.01);
    glVertex3f(-1.85,0.615, 0.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor4f(0.0, 0.0, 0.0, 0.5);
    glVertex3f(-1.44,1.01, 0.0);
    glVertex3f(-1.44,1.01, -0.01);
    glVertex3f(-1.44,0.615, -0.01);
    glVertex3f(-1.44,0.615, 0.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor4f(0.0, 0.0, 0.0, 0.5);
    glVertex3f(-1.85,1.01, 0.0);
    glVertex3f(-1.44,1.01, 0.0);
    glVertex3f(-1.85,1.01, -0.01);
    glVertex3f(-1.44,1.01, -0.01);
    glEnd();

    glBegin(GL_POLYGON);
    glColor4f(0.0, 0.0, 0.0, 0.5);
    glVertex3f(-1.44,0.615, 0.0);
    glVertex3f(-1.85,0.615, 0.0);
    glVertex3f(-1.44,0.615, -0.01);
    glVertex3f(-1.85,0.615, -0.01);
    glEnd();




    //belakang
    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.44,1.01, 0.0);
    glVertex3f(-1.03,1.01, 0.0);
    glVertex3f(-1.03,0.64, 0.0);
    glVertex3f(-1.44,0.64, 0.0);
    glEnd();

    //depan
    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.44,1.01, -0.01);
    glVertex3f(-1.03,1.01, -0.01);
    glVertex3f(-1.03,0.64, -0.01);
    glVertex3f(-1.44,0.64, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.44,1.01, 0.0);
    glVertex3f(-1.44,1.01, -0.01);
    glVertex3f(-1.44,0.64, -0.01);
    glVertex3f(-1.44,0.64, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.03,1.01, 0.0);
    glVertex3f(-1.03,1.01, -0.01);
    glVertex3f(-1.03,0.64, -0.01);
    glVertex3f(-1.03,0.64, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.44,1.01, 0.0);
    glVertex3f(-1.03,1.01, 0.0);
    glVertex3f(-1.44,1.01, -0.01);
    glVertex3f(-1.03,1.01, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.03,0.64, 0.0);
    glVertex3f(-1.44,0.64, 0.0);
    glVertex3f(-1.03,0.64, -0.01);
    glVertex3f(-1.44,0.64, -0.01);
    glEnd();



    //belakang
    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.03,1.01, 0.0);
    glVertex3f(-0.62,1.01, 0.0);
    glVertex3f(-0.62,0.64, 0.0);
    glVertex3f(-1.03,0.64, 0.0);
    glEnd();

    //depan
    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.03,1.01, -0.01);
    glVertex3f(-0.62,1.01, -0.01);
    glVertex3f(-0.62,0.64, -0.01);
    glVertex3f(-1.03,0.64, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.03,1.01, 0.0);
    glVertex3f(-1.03,1.01, -0.01);
    glVertex3f(-1.03,0.64, -0.01);
    glVertex3f(-1.03,0.64, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-0.62,1.01, 0.0);
    glVertex3f(-0.62,1.01, -0.01);
    glVertex3f(-0.62,0.64, -0.01);
    glVertex3f(-0.62,0.64, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.03,1.01, 0.0);
    glVertex3f(-0.62,1.01, 0.0);
    glVertex3f(-1.03,1.01, -0.01);
    glVertex3f(-0.62,1.01, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-0.62,0.64, 0.0);
    glVertex3f(-1.03,0.64, 0.0);
    glVertex3f(-0.62,0.64, -0.01);
    glVertex3f(-1.03,0.64, -0.01);
    glEnd();


    //belakang
    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-0.62,1.01, 0.0);
    glVertex3f(-0.21,1.01, 0.0);
    glVertex3f(-0.21,0.64, 0.0);
    glVertex3f(-0.62,0.64, 0.0);
    glEnd();

    //depan
    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-0.62,1.01, -0.01);
    glVertex3f(-0.21,1.01, -0.01);
    glVertex3f(-0.21,0.64, -0.01);
    glVertex3f(-0.62,0.64, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-0.62,1.01, 0.0);
    glVertex3f(-0.62,1.01, -0.01);
    glVertex3f(-0.62,0.64, -0.01);
    glVertex3f(-0.62,0.64, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-0.21,1.01, 0.0);
    glVertex3f(-0.21,1.01, -0.01);
    glVertex3f(-0.21,0.64, -0.01);
    glVertex3f(-0.21,0.64, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-0.62,1.01, 0.0);
    glVertex3f(-0.21,1.01, 0.0);
    glVertex3f(-0.62,1.01, -0.01);
    glVertex3f(-0.21,1.01, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-0.21,0.64, 0.0);
    glVertex3f(-0.62,0.64, 0.0);
    glVertex3f(-0.21,0.64, -0.01);
    glVertex3f(-0.62,0.64, -0.01);
    glEnd();



    //belakang
    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-0.21,1.01, 0.0);
    glVertex3f(0.2,1.01, 0.0);
    glVertex3f(0.2,0.64, 0.0);
    glVertex3f(-0.21,0.64, 0.0);
    glEnd();

    //depan
    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-0.21,1.01, -0.01);
    glVertex3f(0.2,1.01, -0.01);
    glVertex3f(0.2,0.64, -0.01);
    glVertex3f(-0.21,0.64, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-0.21,1.01, 0.0);
    glVertex3f(-0.21,1.01, -0.01);
    glVertex3f(-0.21,0.64, -0.01);
    glVertex3f(-0.21,0.64, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(0.2,1.01, 0.0);
    glVertex3f(0.2,1.01, -0.01);
    glVertex3f(0.2,0.64, -0.01);
    glVertex3f(0.2,0.64, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-0.21,1.01, 0.0);
    glVertex3f(0.2,1.01, 0.0);
    glVertex3f(-0.21,1.01, -0.01);
    glVertex3f(0.2,1.01, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(0.2,0.64, 0.0);
    glVertex3f(-0.21,0.64, 0.0);
    glVertex3f(0.2,0.64, -0.01);
    glVertex3f(-0.21,0.64, -0.01);
    glEnd();



    //belakang
    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(0.2,1.01, 0.0);
    glVertex3f(0.61,1.01, 0.0);
    glVertex3f(0.61,0.64, 0.0);
    glVertex3f(0.2,0.64, 0.0);
    glEnd();

    //depan
    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(0.2,1.01, -0.01);
    glVertex3f(0.61,1.01, -0.01);
    glVertex3f(0.61,0.64, -0.01);
    glVertex3f(0.2,0.64, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(0.2,1.01, 0.0);
    glVertex3f(0.2,1.01, -0.01);
    glVertex3f(0.2,0.64, -0.01);
    glVertex3f(0.2,0.64, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(0.61,1.01, 0.0);
    glVertex3f(0.61,1.01, -0.01);
    glVertex3f(0.61,0.64, -0.01);
    glVertex3f(0.61,0.64, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(0.2,1.01, 0.0);
    glVertex3f(0.61,1.01, 0.0);
    glVertex3f(0.2,1.01, -0.01);
    glVertex3f(0.61,1.01, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(0.61,0.64, 0.0);
    glVertex3f(0.2,0.64, 0.0);
    glVertex3f(0.61,0.64, -0.01);
    glVertex3f(0.2,0.64, -0.01);
    glEnd();


    //belakang
    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(0.61,1.01, 0.0);
    glVertex3f(1.02,1.01, 0.0);
    glVertex3f(1.02,0.64, 0.0);
    glVertex3f(0.61,0.64, 0.0);
    glEnd();

    //depan
    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(0.61,1.01, -0.01);
    glVertex3f(1.02,1.01, -0.01);
    glVertex3f(1.02,0.64, -0.01);
    glVertex3f(0.61,0.64, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(0.61,1.01, 0.0);
    glVertex3f(0.61,1.01, -0.01);
    glVertex3f(0.61,0.64, -0.01);
    glVertex3f(0.61,0.64, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.02,1.01, 0.0);
    glVertex3f(1.02,1.01, -0.01);
    glVertex3f(1.02,0.64, -0.01);
    glVertex3f(1.02,0.64, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(0.61,1.01, 0.0);
    glVertex3f(1.02,1.01, 0.0);
    glVertex3f(0.61,1.01, -0.01);
    glVertex3f(1.02,1.01, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.02,0.64, 0.0);
    glVertex3f(0.61,0.64, 0.0);
    glVertex3f(1.02,0.64, -0.01);
    glVertex3f(0.61,0.64, -0.01);
    glEnd();


    //belakang
    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.02,1.01, 0.0);
    glVertex3f(1.43,1.01, 0.0);
    glVertex3f(1.43,0.64, 0.0);
    glVertex3f(1.02,0.64, 0.0);
    glEnd();

    //depan
    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.02,1.01, -0.01);
    glVertex3f(1.43,1.01, -0.01);
    glVertex3f(1.43,0.64, -0.01);
    glVertex3f(1.02,0.64, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.02,1.01, 0.0);
    glVertex3f(1.02,1.01, -0.01);
    glVertex3f(1.02,0.64, -0.01);
    glVertex3f(1.02,0.64, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.43,1.01, 0.0);
    glVertex3f(1.43,1.01, -0.01);
    glVertex3f(1.43,0.64, -0.01);
    glVertex3f(1.43,0.64, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.02,1.01, 0.0);
    glVertex3f(1.43,1.01, 0.0);
    glVertex3f(1.02,1.01, -0.01);
    glVertex3f(1.43,1.01, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.43,0.64, 0.0);
    glVertex3f(1.02,0.64, 0.0);
    glVertex3f(1.43,0.64, -0.01);
    glVertex3f(1.02,0.64, -0.01);
    glEnd();


    //belakang
    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.43,1.035, 0.0);
    glVertex3f(1.85,1.035, 0.0);
    glVertex3f(1.85,0.64, 0.0);
    glVertex3f(1.43,0.64, 0.0);
    glEnd();

    //depan
    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.43,1.035, -0.01);
    glVertex3f(1.85,1.035, -0.01);
    glVertex3f(1.85,0.64, -0.01);
    glVertex3f(1.43,0.64, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.43,1.035, 0.0);
    glVertex3f(1.43,1.035, -0.01);
    glVertex3f(1.43,0.64, -0.01);
    glVertex3f(1.43,0.64, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.85,1.035, 0.0);
    glVertex3f(1.85,1.035, -0.01);
    glVertex3f(1.85,0.64, -0.01);
    glVertex3f(1.85,0.64, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.43,1.035, 0.0);
    glVertex3f(1.85,1.035, 0.0);
    glVertex3f(1.43,1.035, -0.01);
    glVertex3f(1.85,1.035, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.85,0.64, 0.0);
    glVertex3f(1.43,0.64, 0.0);
    glVertex3f(1.85,0.64, -0.01);
    glVertex3f(1.43,0.64, -0.01);
    glEnd();


    //baris 6

    //belakang
    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.85,0.615, 0.0);
    glVertex3f(-1.44,0.615, 0.0);
    glVertex3f(-1.44,0.22, 0.0);
    glVertex3f(-1.85,0.22, 0.0);
    glEnd();

    //depan
    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.85,0.615, -0.01);
    glVertex3f(-1.44,0.615, -0.01);
    glVertex3f(-1.44,0.22, -0.01);
    glVertex3f(-1.85,0.22, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.85,0.615, 0.0);
    glVertex3f(-1.85,0.615, -0.01);
    glVertex3f(-1.85,0.22, -0.01);
    glVertex3f(-1.85,0.22, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.44,0.615, 0.0);
    glVertex3f(-1.44,0.615, -0.01);
    glVertex3f(-1.44,0.22, -0.01);
    glVertex3f(-1.44,0.22, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.85,0.615, 0.0);
    glVertex3f(-1.44,0.615, 0.0);
    glVertex3f(-1.85,0.615, -0.01);
    glVertex3f(-1.44,0.615, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.44,0.22, 0.0);
    glVertex3f(-1.85,0.22, 0.0);
    glVertex3f(-1.44,0.22, -0.01);
    glVertex3f(-1.85,0.22, -0.01);
    glEnd();


    //belakang
    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.44,0.59, 0.0);
    glVertex3f(-1.03,0.59, 0.0);
    glVertex3f(-1.03,0.22, 0.0);
    glVertex3f(-1.44,0.22, 0.0);
    glEnd();

    //depan
    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.44,0.59, -0.01);
    glVertex3f(-1.03,0.59, -0.01);
    glVertex3f(-1.03,0.22, -0.01);
    glVertex3f(-1.44,0.22, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.44,0.59, 0.0);
    glVertex3f(-1.44,0.59, -0.01);
    glVertex3f(-1.44,0.22, -0.01);
    glVertex3f(-1.44,0.22, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.03,0.59, 0.0);
    glVertex3f(-1.03,0.59, -0.01);
    glVertex3f(-1.03,0.22, -0.01);
    glVertex3f(-1.03,0.22, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.44,0.59, 0.0);
    glVertex3f(-1.03,0.59, 0.0);
    glVertex3f(-1.44,0.59, -0.01);
    glVertex3f(-1.03,0.59, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.03,0.22, 0.0);
    glVertex3f(-1.44,0.22, 0.0);
    glVertex3f(-1.03,0.22, -0.01);
    glVertex3f(-1.44,0.22, -0.01);
    glEnd();


    //belakang
    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.03,0.59, 0.0);
    glVertex3f(-0.62,0.59, 0.0);
    glVertex3f(-0.62,0.22, 0.0);
    glVertex3f(-1.03,0.22, 0.0);
    glEnd();

    //depan
    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.03,0.59, -0.01);
    glVertex3f(-0.62,0.59, -0.01);
    glVertex3f(-0.62,0.22, -0.01);
    glVertex3f(-1.03,0.22, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.03,0.59, 0.0);
    glVertex3f(-1.03,0.59, -0.01);
    glVertex3f(-1.03,0.22, -0.01);
    glVertex3f(-1.03,0.22, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-0.62,0.59, 0.0);
    glVertex3f(-0.62,0.59, -0.01);
    glVertex3f(-0.62,0.22, -0.01);
    glVertex3f(-0.62,0.22, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.03,0.59, 0.0);
    glVertex3f(-0.62,0.59, 0.0);
    glVertex3f(-1.03,0.59, -0.01);
    glVertex3f(-0.62,0.59, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-0.62,0.22, 0.0);
    glVertex3f(-1.03,0.22, 0.0);
    glVertex3f(-0.62,0.22, -0.01);
    glVertex3f(-1.03,0.22, -0.01);
    glEnd();



    //belakang
    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-0.62,0.59, 0.0);
    glVertex3f(-0.21,0.59, 0.0);
    glVertex3f(-0.21,0.22, 0.0);
    glVertex3f(-0.62,0.22, 0.0);
    glEnd();

    //depan
    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-0.62,0.59, -0.01);
    glVertex3f(-0.21,0.59, -0.01);
    glVertex3f(-0.21,0.22, -0.01);
    glVertex3f(-0.62,0.22, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-0.62,0.59, 0.0);
    glVertex3f(-0.62,0.59, -0.01);
    glVertex3f(-0.62,0.22, -0.01);
    glVertex3f(-0.62,0.22, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-0.21,0.59, 0.0);
    glVertex3f(-0.21,0.59, -0.01);
    glVertex3f(-0.21,0.22, -0.01);
    glVertex3f(-0.21,0.22, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-0.62,0.59, 0.0);
    glVertex3f(-0.21,0.59, 0.0);
    glVertex3f(-0.62,0.59, -0.01);
    glVertex3f(-0.21,0.59, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-0.21,0.22, 0.0);
    glVertex3f(-0.62,0.22, 0.0);
    glVertex3f(-0.21,0.22, -0.01);
    glVertex3f(-0.62,0.22, -0.01);
    glEnd();



    //belakang
    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-0.21,0.59, 0.0);
    glVertex3f(0.2,0.59, 0.0);
    glVertex3f(0.2,0.22, 0.0);
    glVertex3f(-0.21,0.22, 0.0);
    glEnd();

    //depan
    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-0.21,0.59, -0.01);
    glVertex3f(0.2,0.59, -0.01);
    glVertex3f(0.2,0.22, -0.01);
    glVertex3f(-0.21,0.22, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-0.21,0.59, 0.0);
    glVertex3f(-0.21,0.59, -0.01);
    glVertex3f(-0.21,0.22, -0.01);
    glVertex3f(-0.21,0.22, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(0.2,0.59, 0.0);
    glVertex3f(0.2,0.59, -0.01);
    glVertex3f(0.2,0.22, -0.01);
    glVertex3f(0.2,0.22, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-0.21,0.59, 0.0);
    glVertex3f(0.2,0.59, 0.0);
    glVertex3f(-0.21,0.59, -0.01);
    glVertex3f(0.2,0.59, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(0.2,0.22, 0.0);
    glVertex3f(-0.21,0.22, 0.0);
    glVertex3f(0.2,0.22, -0.01);
    glVertex3f(-0.21,0.22, -0.01);
    glEnd();



    //belakang
    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(0.2,0.59, 0.0);
    glVertex3f(0.61,0.59, 0.0);
    glVertex3f(0.61,0.22, 0.0);
    glVertex3f(0.2,0.22, 0.0);
    glEnd();

    //depan
    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(0.2,0.59, -0.01);
    glVertex3f(0.61,0.59, -0.01);
    glVertex3f(0.61,0.22, -0.01);
    glVertex3f(0.2,0.22, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(0.2,0.59, 0.0);
    glVertex3f(0.2,0.59, -0.01);
    glVertex3f(0.2,0.22, -0.01);
    glVertex3f(0.2,0.22, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(0.61,0.59, 0.0);
    glVertex3f(0.61,0.59, -0.01);
    glVertex3f(0.61,0.22, -0.01);
    glVertex3f(0.61,0.22, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(0.2,0.59, 0.0);
    glVertex3f(0.61,0.59, 0.0);
    glVertex3f(0.2,0.59, -0.01);
    glVertex3f(0.61,0.59, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(0.61,0.22, 0.0);
    glVertex3f(0.2,0.22, 0.0);
    glVertex3f(0.61,0.22, -0.01);
    glVertex3f(0.2,0.22, -0.01);
    glEnd();



    //belakang
    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(0.61,0.59, 0.0);
    glVertex3f(1.02,0.59, 0.0);
    glVertex3f(1.02,0.22, 0.0);
    glVertex3f(0.61,0.22, 0.0);
    glEnd();

    //depan
    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(0.61,0.59, -0.01);
    glVertex3f(1.02,0.59, -0.01);
    glVertex3f(1.02,0.22, -0.01);
    glVertex3f(0.61,0.22, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(0.61,0.59, 0.0);
    glVertex3f(0.61,0.59, -0.01);
    glVertex3f(0.61,0.22, -0.01);
    glVertex3f(0.61,0.22, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.02,0.59, 0.0);
    glVertex3f(1.02,0.59, -0.01);
    glVertex3f(1.02,0.22, -0.01);
    glVertex3f(1.02,0.22, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(0.61,0.59, 0.0);
    glVertex3f(1.02,0.59, 0.0);
    glVertex3f(0.61,0.59, -0.01);
    glVertex3f(1.02,0.59, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.02,0.22, 0.0);
    glVertex3f(0.61,0.22, 0.0);
    glVertex3f(1.02,0.22, -0.01);
    glVertex3f(0.61,0.22, -0.01);
    glEnd();


    //belakang
    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.02,0.59, 0.0);
    glVertex3f(1.43,0.59, 0.0);
    glVertex3f(1.43,0.22, 0.0);
    glVertex3f(1.02,0.22, 0.0);
    glEnd();

    //depan
    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.02,0.59, -0.01);
    glVertex3f(1.43,0.59, -0.01);
    glVertex3f(1.43,0.22, -0.01);
    glVertex3f(1.02,0.22, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.02,0.59, 0.0);
    glVertex3f(1.02,0.59, -0.01);
    glVertex3f(1.02,0.22, -0.01);
    glVertex3f(1.02,0.22, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.43,0.59, 0.0);
    glVertex3f(1.43,0.59, -0.01);
    glVertex3f(1.43,0.22, -0.01);
    glVertex3f(1.43,0.22, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.02,0.59, 0.0);
    glVertex3f(1.43,0.59, 0.0);
    glVertex3f(1.02,0.59, -0.01);
    glVertex3f(1.43,0.59, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.43,0.22, 0.0);
    glVertex3f(1.02,0.22, 0.0);
    glVertex3f(1.43,0.22, -0.01);
    glVertex3f(1.02,0.22, -0.01);
    glEnd();


    //belakang
    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.43,0.59, 0.0);
    glVertex3f(1.85,0.59, 0.0);
    glVertex3f(1.85,0.195, 0.0);
    glVertex3f(1.43,0.195, 0.0);
    glEnd();

    //depan
    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.43,0.59, -0.01);
    glVertex3f(1.85,0.59, -0.01);
    glVertex3f(1.85,0.195, -0.01);
    glVertex3f(1.43,0.195, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.43,0.59, 0.0);
    glVertex3f(1.43,0.59, -0.01);
    glVertex3f(1.43,0.195, -0.01);
    glVertex3f(1.43,0.195, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.85,0.59, 0.0);
    glVertex3f(1.85,0.59, -0.01);
    glVertex3f(1.85,0.195, -0.01);
    glVertex3f(1.85,0.195, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.43,0.59, 0.0);
    glVertex3f(1.85,0.59, 0.0);
    glVertex3f(1.43,0.59, -0.01);
    glVertex3f(1.85,0.59, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.85,0.195, 0.0);
    glVertex3f(1.43,0.195, 0.0);
    glVertex3f(1.85,0.195, -0.01);
    glVertex3f(1.43,0.195, -0.01);
    glEnd();



    //baris 5

    //belakang
    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.85,0.17, 0.0);
    glVertex3f(-1.44,0.17, 0.0);
    glVertex3f(-1.44,-0.225, 0.0);
    glVertex3f(-1.85,-0.225, 0.0);
    glEnd();

    //depan
    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.85,0.17, -0.01);
    glVertex3f(-1.44,0.17, -0.01);
    glVertex3f(-1.44,-0.225, -0.01);
    glVertex3f(-1.85,-0.225, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.85,0.17, 0.0);
    glVertex3f(-1.85,0.17, -0.01);
    glVertex3f(-1.85,-0.225, -0.01);
    glVertex3f(-1.85,-0.225, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.44,0.17, 0.0);
    glVertex3f(-1.44,0.17, -0.01);
    glVertex3f(-1.44,-0.225, -0.01);
    glVertex3f(-1.44,-0.225, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.85,0.17, 0.0);
    glVertex3f(-1.44,0.17, 0.0);
    glVertex3f(-1.85,0.17, -0.01);
    glVertex3f(-1.44,0.17, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.44,-0.225, 0.0);
    glVertex3f(-1.85,-0.225, 0.0);
    glVertex3f(-1.44,-0.225, -0.01);
    glVertex3f(-1.85,-0.225, -0.01);
    glEnd();


    //belakang
    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.44,0.17, 0.0);
    glVertex3f(-1.03,0.17, 0.0);
    glVertex3f(-1.03,-0.2, 0.0);
    glVertex3f(-1.44,-0.2, 0.0);
    glEnd();

    //depan
    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.44,0.17, -0.01);
    glVertex3f(-1.03,0.17, -0.01);
    glVertex3f(-1.03,-0.2, -0.01);
    glVertex3f(-1.44,-0.2, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.44,0.17, 0.0);
    glVertex3f(-1.44,0.17, -0.01);
    glVertex3f(-1.44,-0.2, -0.01);
    glVertex3f(-1.44,-0.2, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.03,0.17, 0.0);
    glVertex3f(-1.03,0.17, -0.01);
    glVertex3f(-1.03,-0.2, -0.01);
    glVertex3f(-1.03,-0.2, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.44,0.17, 0.0);
    glVertex3f(-1.03,0.17, 0.0);
    glVertex3f(-1.44,0.17, -0.01);
    glVertex3f(-1.03,0.17, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.03,-0.2, 0.0);
    glVertex3f(-1.44,-0.2, 0.0);
    glVertex3f(-1.03,-0.2, -0.01);
    glVertex3f(-1.44,-0.2, -0.01);
    glEnd();



    //belakang
    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.03,0.17, 0.0);
    glVertex3f(-0.62,0.17, 0.0);
    glVertex3f(-0.62,-0.2, 0.0);
    glVertex3f(-1.03,-0.2, 0.0);
    glEnd();

    //depan
    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.03,0.17, -0.01);
    glVertex3f(-0.62,0.17, -0.01);
    glVertex3f(-0.62,-0.2, -0.01);
    glVertex3f(-1.03,-0.2, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.03,0.17, 0.0);
    glVertex3f(-1.03,0.17, -0.01);
    glVertex3f(-1.03,-0.2, -0.01);
    glVertex3f(-1.03,-0.2, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-0.62,0.17, 0.0);
    glVertex3f(-0.62,0.17, -0.01);
    glVertex3f(-0.62,-0.2, -0.01);
    glVertex3f(-0.62,-0.2, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.03,0.17, 0.0);
    glVertex3f(-0.62,0.17, 0.0);
    glVertex3f(-1.03,0.17, -0.01);
    glVertex3f(-0.62,0.17, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-0.62,-0.2, 0.0);
    glVertex3f(-1.03,-0.2, 0.0);
    glVertex3f(-0.62,-0.2, -0.01);
    glVertex3f(-1.03,-0.2, -0.01);
    glEnd();


    //belakang
    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-0.62,0.17, 0.0);
    glVertex3f(-0.21,0.17, 0.0);
    glVertex3f(-0.21,-0.2, 0.0);
    glVertex3f(-0.62,-0.2, 0.0);
    glEnd();

    //depan
    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-0.62,0.17, -0.01);
    glVertex3f(-0.21,0.17, -0.01);
    glVertex3f(-0.21,-0.2, -0.01);
    glVertex3f(-0.62,-0.2, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-0.62,0.17, 0.0);
    glVertex3f(-0.62,0.17, -0.01);
    glVertex3f(-0.62,-0.2, -0.01);
    glVertex3f(-0.62,-0.2, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-0.21,0.17, 0.0);
    glVertex3f(-0.21,0.17, -0.01);
    glVertex3f(-0.21,-0.2, -0.01);
    glVertex3f(-0.21,-0.2, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-0.62,0.17, 0.0);
    glVertex3f(-0.21,0.17, 0.0);
    glVertex3f(-0.62,0.17, -0.01);
    glVertex3f(-0.21,0.17, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-0.21,-0.2, 0.0);
    glVertex3f(-0.62,-0.2, 0.0);
    glVertex3f(-0.21,-0.2, -0.01);
    glVertex3f(-0.62,-0.2, -0.01);
    glEnd();


    //belakang
    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-0.21,0.17, 0.0);
    glVertex3f(0.2,0.17, 0.0);
    glVertex3f(0.2,-0.2, 0.0);
    glVertex3f(-0.21,-0.2, 0.0);
    glEnd();

    //depan
    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-0.21,0.17, -0.01);
    glVertex3f(0.2,0.17, -0.01);
    glVertex3f(0.2,-0.2, -0.01);
    glVertex3f(-0.21,-0.2, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-0.21,0.17, 0.0);
    glVertex3f(-0.21,0.17, -0.01);
    glVertex3f(-0.21,-0.2, -0.01);
    glVertex3f(-0.21,-0.2, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(0.2,0.17, 0.0);
    glVertex3f(0.2,0.17, -0.01);
    glVertex3f(0.2,-0.2, -0.01);
    glVertex3f(0.2,-0.2, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-0.21,0.17, 0.0);
    glVertex3f(0.2,0.17, 0.0);
    glVertex3f(-0.21,0.17, -0.01);
    glVertex3f(0.2,0.17, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(0.2,-0.2, 0.0);
    glVertex3f(-0.21,-0.2, 0.0);
    glVertex3f(0.2,-0.2, -0.01);
    glVertex3f(-0.21,-0.2, -0.01);
    glEnd();



    //belakang
    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(0.2,0.17, 0.0);
    glVertex3f(0.61,0.17, 0.0);
    glVertex3f(0.61,-0.2, 0.0);
    glVertex3f(0.2,-0.2, 0.0);
    glEnd();

    //depan
    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(0.2,0.17, -0.01);
    glVertex3f(0.61,0.17, -0.01);
    glVertex3f(0.61,-0.2, -0.01);
    glVertex3f(0.2,-0.2, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(0.2,0.17, 0.0);
    glVertex3f(0.2,0.17, -0.01);
    glVertex3f(0.2,-0.2, -0.01);
    glVertex3f(0.2,-0.2, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(0.61,0.17, 0.0);
    glVertex3f(0.61,0.17, -0.01);
    glVertex3f(0.61,-0.2, -0.01);
    glVertex3f(0.61,-0.2, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(0.2,0.17, 0.0);
    glVertex3f(0.61,0.17, 0.0);
    glVertex3f(0.2,0.17, -0.01);
    glVertex3f(0.61,0.17, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(0.61,-0.2, 0.0);
    glVertex3f(0.2,-0.2, 0.0);
    glVertex3f(0.61,-0.2, -0.01);
    glVertex3f(0.2,-0.2, -0.01);
    glEnd();


    //belakang
    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(0.61,0.17, 0.0);
    glVertex3f(1.02,0.17, 0.0);
    glVertex3f(1.02,-0.2, 0.0);
    glVertex3f(0.61,-0.2, 0.0);
    glEnd();

    //depan
    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(0.61,0.17, -0.01);
    glVertex3f(1.02,0.17, -0.01);
    glVertex3f(1.02,-0.2, -0.01);
    glVertex3f(0.61,-0.2, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(0.61,0.17, 0.0);
    glVertex3f(0.61,0.17, -0.01);
    glVertex3f(0.61,-0.2, -0.01);
    glVertex3f(0.61,-0.2, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.02,0.17, 0.0);
    glVertex3f(1.02,0.17, -0.01);
    glVertex3f(1.02,-0.2, -0.01);
    glVertex3f(1.02,-0.2, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(0.61,0.17, 0.0);
    glVertex3f(1.02,0.17, 0.0);
    glVertex3f(0.61,0.17, -0.01);
    glVertex3f(1.02,0.17, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.02,-0.2, 0.0);
    glVertex3f(0.61,-0.2, 0.0);
    glVertex3f(1.02,-0.2, -0.01);
    glVertex3f(0.61,-0.2, -0.01);
    glEnd();



    //belakang
    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.02,0.17, 0.0);
    glVertex3f(1.43,0.17, 0.0);
    glVertex3f(1.43,-0.2, 0.0);
    glVertex3f(1.02,-0.2, 0.0);
    glEnd();

    //depan
    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.02,0.17, -0.01);
    glVertex3f(1.43,0.17, -0.01);
    glVertex3f(1.43,-0.2, -0.01);
    glVertex3f(1.02,-0.2, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.02,0.17, 0.0);
    glVertex3f(1.02,0.17, -0.01);
    glVertex3f(1.02,-0.2, -0.01);
    glVertex3f(1.02,-0.2, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.43,0.17, 0.0);
    glVertex3f(1.43,0.17, -0.01);
    glVertex3f(1.43,-0.2, -0.01);
    glVertex3f(1.43,-0.2, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.02,0.17, 0.0);
    glVertex3f(1.43,0.17, 0.0);
    glVertex3f(1.02,0.17, -0.01);
    glVertex3f(1.43,0.17, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.43,-0.2, 0.0);
    glVertex3f(1.02,-0.2, 0.0);
    glVertex3f(1.43,-0.2, -0.01);
    glVertex3f(1.02,-0.2, -0.01);
    glEnd();


    //belakang
    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.43,0.195, 0.0);
    glVertex3f(1.85,0.195, 0.0);
    glVertex3f(1.85,-0.2, 0.0);
    glVertex3f(1.43,-0.2, 0.0);
    glEnd();

    //depan
    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.43,0.195, -0.01);
    glVertex3f(1.85,0.195, -0.01);
    glVertex3f(1.85,-0.2, -0.01);
    glVertex3f(1.43,-0.2, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.43,0.195, 0.0);
    glVertex3f(1.43,0.195, -0.01);
    glVertex3f(1.43,-0.2, -0.01);
    glVertex3f(1.43,-0.2, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.85,0.195, 0.0);
    glVertex3f(1.85,0.195, -0.01);
    glVertex3f(1.85,-0.2, -0.01);
    glVertex3f(1.85,-0.2, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.43,0.195, 0.0);
    glVertex3f(1.85,0.195, 0.0);
    glVertex3f(1.43,0.195, -0.01);
    glVertex3f(1.85,0.195, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.85,-0.2, 0.0);
    glVertex3f(1.43,-0.2, 0.0);
    glVertex3f(1.85,-0.2, -0.01);
    glVertex3f(1.43,-0.2, -0.01);
    glEnd();


    //baris 4

    //belakang
    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.85,-0.225, 0.0);
    glVertex3f(-1.44,-0.225, 0.0);
    glVertex3f(-1.44,-0.62, 0.0);
    glVertex3f(-1.85,-0.62, 0.0);
    glEnd();

    //depan
    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.85,-0.225, -0.01);
    glVertex3f(-1.44,-0.225, -0.01);
    glVertex3f(-1.44,-0.62, -0.01);
    glVertex3f(-1.85,-0.62, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.85,-0.225, 0.0);
    glVertex3f(-1.85,-0.225, -0.01);
    glVertex3f(-1.85,-0.62, -0.01);
    glVertex3f(-1.85,-0.62, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.44,-0.225, 0.0);
    glVertex3f(-1.44,-0.225, -0.01);
    glVertex3f(-1.44,-0.62, -0.01);
    glVertex3f(-1.44,-0.62, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.85,-0.225, 0.0);
    glVertex3f(-1.44,-0.225, 0.0);
    glVertex3f(-1.85,-0.225, -0.01);
    glVertex3f(-1.44,-0.225, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.44,-0.62, 0.0);
    glVertex3f(-1.85,-0.62, 0.0);
    glVertex3f(-1.44,-0.62, -0.01);
    glVertex3f(-1.85,-0.62, -0.01);
    glEnd();


    //belakang
    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.44,-0.25, 0.0);
    glVertex3f(-1.03,-0.25, 0.0);
    glVertex3f(-1.03,-0.62, 0.0);
    glVertex3f(-1.44,-0.62, 0.0);
    glEnd();

    //depan
    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.44,-0.25, -0.01);
    glVertex3f(-1.03,-0.25, -0.01);
    glVertex3f(-1.03,-0.62, -0.01);
    glVertex3f(-1.44,-0.62, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.44,-0.25, 0.0);
    glVertex3f(-1.44,-0.25, -0.01);
    glVertex3f(-1.44,-0.62, -0.01);
    glVertex3f(-1.44,-0.62, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.03,-0.25, 0.0);
    glVertex3f(-1.03,-0.25, -0.01);
    glVertex3f(-1.03,-0.62, -0.01);
    glVertex3f(-1.03,-0.62, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.44,-0.25, 0.0);
    glVertex3f(-1.03,-0.25, 0.0);
    glVertex3f(-1.44,-0.25, -0.01);
    glVertex3f(-1.03,-0.25, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.03,-0.62, 0.0);
    glVertex3f(-1.44,-0.62, 0.0);
    glVertex3f(-1.03,-0.62, -0.01);
    glVertex3f(-1.44,-0.62, -0.01);
    glEnd();


    //belakang
    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.03,-0.25, 0.0);
    glVertex3f(-0.62,-0.25, 0.0);
    glVertex3f(-0.62,-0.62, 0.0);
    glVertex3f(-1.03,-0.62, 0.0);
    glEnd();

    //depan
    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.03,-0.25, -0.01);
    glVertex3f(-0.62,-0.25, -0.01);
    glVertex3f(-0.62,-0.62, -0.01);
    glVertex3f(-1.03,-0.62, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.03,-0.25, 0.0);
    glVertex3f(-1.03,-0.25, -0.01);
    glVertex3f(-1.03,-0.62, -0.01);
    glVertex3f(-1.03,-0.62, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-0.62,-0.25, 0.0);
    glVertex3f(-0.62,-0.25, -0.01);
    glVertex3f(-0.62,-0.62, -0.01);
     glVertex3f(-0.62,-0.62, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.03,-0.25, 0.0);
    glVertex3f(-0.62,-0.25, 0.0);
    glVertex3f(-1.03,-0.25, -0.01);
    glVertex3f(-0.62,-0.25, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-0.62,-0.62, 0.0);
    glVertex3f(-1.03,-0.62, 0.0);
    glVertex3f(-0.62,-0.62, -0.01);
    glVertex3f(-1.03,-0.62, -0.01);
    glEnd();



    //belakang
    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-0.62,-0.25, 0.0);
    glVertex3f(-0.21,-0.25, 0.0);
    glVertex3f(-0.21,-0.62, 0.0);
    glVertex3f(-0.62,-0.62, 0.0);
    glEnd();

    //depan
    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-0.62,-0.25, -0.01);
    glVertex3f(-0.21,-0.25, -0.01);
    glVertex3f(-0.21,-0.62, -0.01);
    glVertex3f(-0.62,-0.62, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-0.62,-0.25, 0.0);
    glVertex3f(-0.62,-0.25, -0.01);
    glVertex3f(-0.62,-0.62, -0.01);
    glVertex3f(-0.62,-0.62, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-0.21,-0.25, 0.0);
    glVertex3f(-0.21,-0.25, -0.01);
    glVertex3f(-0.21,-0.62, -0.01);
    glVertex3f(-0.21,-0.62, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-0.62,-0.25, 0.0);
    glVertex3f(-0.21,-0.25, 0.0);
    glVertex3f(-0.62,-0.25, -0.01);
    glVertex3f(-0.21,-0.25, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-0.21,-0.62, 0.0);
    glVertex3f(-0.62,-0.62, 0.0);
    glVertex3f(-0.21,-0.62, -0.01);
    glVertex3f(-0.62,-0.62, -0.01);
    glEnd();



    //belakang
    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-0.21,-0.25, 0.0);
    glVertex3f(0.2,-0.25, 0.0);
    glVertex3f(0.2,-0.62, 0.0);
    glVertex3f(-0.21,-0.62, 0.0);
    glEnd();

    //depan
    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-0.21,-0.25, -0.01);
    glVertex3f(0.2,-0.25, -0.01);
    glVertex3f(0.2,-0.62, -0.01);
    glVertex3f(-0.21,-0.62, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-0.21,-0.25, 0.0);
    glVertex3f(-0.21,-0.25, -0.01);
    glVertex3f(-0.21,-0.62, -0.01);
    glVertex3f(-0.21,-0.62, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(0.2,-0.25, 0.0);
    glVertex3f(0.2,-0.25, -0.01);
    glVertex3f(0.2,-0.62, -0.01);
    glVertex3f(0.2,-0.62, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-0.21,-0.25, 0.0);
    glVertex3f(0.2,-0.25, 0.0);
    glVertex3f(-0.21,-0.25, -0.01);
    glVertex3f(0.2,-0.25, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(0.2,-0.62, 0.0);
    glVertex3f(-0.21,-0.62, 0.0);
    glVertex3f(0.2,-0.62, -0.01);
    glVertex3f(-0.21,-0.62, -0.01);
    glEnd();



    //belakang
    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(0.2,-0.25, 0.0);
    glVertex3f(0.61,-0.25, 0.0);
    glVertex3f(0.61,-0.62, 0.0);
    glVertex3f(0.2,-0.62, 0.0);
    glEnd();

    //depan
    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(0.2,-0.25, -0.01);
    glVertex3f(0.61,-0.25, -0.01);
    glVertex3f(0.61,-0.62, -0.01);
    glVertex3f(0.2,-0.62, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(0.2,-0.25, 0.0);
    glVertex3f(0.2,-0.25, -0.01);
    glVertex3f(0.2,-0.62, -0.01);
    glVertex3f(0.2,-0.62, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(0.61,-0.25, 0.0);
    glVertex3f(0.61,-0.25, -0.01);
    glVertex3f(0.61,-0.62, -0.01);
    glVertex3f(0.61,-0.62, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(0.2,-0.25, 0.0);
    glVertex3f(0.61,-0.25, 0.0);
    glVertex3f(0.2,-0.25, -0.01);
    glVertex3f(0.61,-0.25, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(0.61,-0.62, 0.0);
    glVertex3f(0.2,-0.62, 0.0);
    glVertex3f(0.61,-0.62, -0.01);
    glVertex3f(0.2,-0.62, -0.01);
    glEnd();


    //belakang
    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(0.61,-0.25, 0.0);
    glVertex3f(1.02,-0.25, 0.0);
    glVertex3f(1.02,-0.62, 0.0);
    glVertex3f(0.61,-0.62, 0.0);
    glEnd();

    //depan
    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(0.61,-0.25, -0.01);
    glVertex3f(1.02,-0.25, -0.01);
    glVertex3f(1.02,-0.62, -0.01);
    glVertex3f(0.61,-0.62, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(0.61,-0.25, 0.0);
    glVertex3f(0.61,-0.25, -0.01);
    glVertex3f(0.61,-0.62, -0.01);
    glVertex3f(0.61,-0.62, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.02,-0.25, 0.0);
    glVertex3f(1.02,-0.25, -0.01);
    glVertex3f(1.02,-0.62, -0.01);
    glVertex3f(1.02,-0.62, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(0.61,-0.25, 0.0);
    glVertex3f(1.02,-0.25, 0.0);
    glVertex3f(0.61,-0.25, -0.01);
    glVertex3f(1.02,-0.25, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.02,-0.62, 0.0);
    glVertex3f(0.61,-0.62, 0.0);
    glVertex3f(1.02,-0.62, -0.01);
    glVertex3f(0.61,-0.62, -0.01);
    glEnd();



    //belakang
    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.02,-0.25, 0.0);
    glVertex3f(1.43,-0.25, 0.0);
    glVertex3f(1.43,-0.62, 0.0);
    glVertex3f(1.02,-0.62, 0.0);
    glEnd();

    //depan
    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.02,-0.25, -0.01);
    glVertex3f(1.43,-0.25, -0.01);
    glVertex3f(1.43,-0.62, -0.01);
    glVertex3f(1.02,-0.62, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.02,-0.25, 0.0);
    glVertex3f(1.02,-0.25, -0.01);
    glVertex3f(1.02,-0.62, -0.01);
    glVertex3f(1.02,-0.62, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.43,-0.25, 0.0);
    glVertex3f(1.43,-0.25, -0.01);
    glVertex3f(1.43,-0.62, -0.01);
    glVertex3f(1.43,-0.62, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.02,-0.25, 0.0);
    glVertex3f(1.43,-0.25, 0.0);
    glVertex3f(1.02,-0.25, -0.01);
    glVertex3f(1.43,-0.25, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.43,-0.62, 0.0);
    glVertex3f(1.02,-0.62, 0.0);
    glVertex3f(1.43,-0.62, -0.01);
    glVertex3f(1.02,-0.62, -0.01);
    glEnd();


    //belakang
    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.43,-0.25, 0.0);
    glVertex3f(1.85,-0.25, 0.0);
    glVertex3f(1.85,-0.645, 0.0);
    glVertex3f(1.43,-0.645, 0.0);
    glEnd();

    //depan
    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.43,-0.25, -0.01);
    glVertex3f(1.85,-0.25, -0.01);
    glVertex3f(1.85,-0.645, -0.01);
    glVertex3f(1.43,-0.645, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.43,-0.25, 0.0);
    glVertex3f(1.43,-0.25, -0.01);
    glVertex3f(1.43,-0.645, -0.01);
    glVertex3f(1.43,-0.645, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.85,-0.25, 0.0);
    glVertex3f(1.85,-0.25, -0.01);
    glVertex3f(1.85,-0.645, -0.01);
    glVertex3f(1.85,-0.645, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.43,-0.25, 0.0);
    glVertex3f(1.85,-0.25, 0.0);
    glVertex3f(1.43,-0.25, -0.01);
    glVertex3f(1.85,-0.25, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.85,-0.645, 0.0);
    glVertex3f(1.43,-0.645, 0.0);
    glVertex3f(1.85,-0.645, -0.01);
    glVertex3f(1.43,-0.645, -0.01);
    glEnd();



    //baris 3

    //belakang
    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.85,-0.67, 0.0);
    glVertex3f(-1.44,-0.67, 0.0);
    glVertex3f(-1.44,-1.065, 0.0);
    glVertex3f(-1.85,-1.065, 0.0);
    glEnd();

    //depan
    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.85,-0.67, -0.01);
    glVertex3f(-1.44,-0.67, -0.01);
    glVertex3f(-1.44,-1.065, -0.01);
    glVertex3f(-1.85,-1.065, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.85,-0.67, 0.0);
    glVertex3f(-1.85,-0.67, -0.01);
    glVertex3f(-1.85,-1.065, -0.01);
    glVertex3f(-1.85,-1.065, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.44,-0.67, 0.0);
    glVertex3f(-1.44,-0.67, -0.01);
    glVertex3f(-1.44,-1.065, -0.01);
    glVertex3f(-1.44,-1.065, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.85,-0.67, 0.0);
    glVertex3f(-1.44,-0.67, 0.0);
    glVertex3f(-1.85,-0.67, -0.01);
    glVertex3f(-1.44,-0.67, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.44,-1.065, 0.0);
    glVertex3f(-1.85,-1.065, 0.0);
    glVertex3f(-1.44,-1.065, -0.01);
    glVertex3f(-1.85,-1.065, -0.01);
    glEnd();


    //belakang
    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.44,-0.67, 0.0);
    glVertex3f(-1.03,-0.67, 0.0);
    glVertex3f(-1.03,-1.04, 0.0);
    glVertex3f(-1.44,-1.04, 0.0);
    glEnd();

    //depan
    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.44,-0.67, -0.01);
    glVertex3f(-1.03,-0.67, -0.01);
    glVertex3f(-1.03,-1.04, -0.01);
    glVertex3f(-1.44,-1.04, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.44,-0.67, 0.0);
    glVertex3f(-1.44,-0.67, -0.01);
    glVertex3f(-1.44,-1.04, -0.01);
    glVertex3f(-1.44,-1.04, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.03,-0.67, 0.0);
    glVertex3f(-1.03,-0.67, -0.01);
    glVertex3f(-1.03,-1.04, -0.01);
    glVertex3f(-1.03,-1.04, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.44,-0.67, 0.0);
    glVertex3f(-1.03,-0.67, 0.0);
    glVertex3f(-1.44,-0.67, -0.01);
    glVertex3f(-1.03,-0.67, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.03,-1.04, 0.0);
    glVertex3f(-1.44,-1.04, 0.0);
    glVertex3f(-1.03,-1.04, -0.01);
    glVertex3f(-1.44,-1.04, -0.01);
    glEnd();



    //belakang
    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.03,-0.67, 0.0);
    glVertex3f(-0.62,-0.67, 0.0);
    glVertex3f(-0.62,-1.04, 0.0);
    glVertex3f(-1.03,-1.04, 0.0);
    glEnd();

    //depan
    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.03,-0.67, -0.01);
    glVertex3f(-0.62,-0.67, -0.01);
    glVertex3f(-0.62,-1.04, -0.01);
    glVertex3f(-1.03,-1.04, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.03,-0.67, 0.0);
    glVertex3f(-1.03,-0.67, -0.01);
    glVertex3f(-1.03,-1.04, -0.01);
    glVertex3f(-1.03,-1.04, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-0.62,-0.67, 0.0);
    glVertex3f(-0.62,-0.67, -0.01);
    glVertex3f(-0.62,-1.04, -0.01);
    glVertex3f(-0.62,-1.04, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.03,-0.67, 0.0);
    glVertex3f(-0.62,-0.67, 0.0);
    glVertex3f(-1.03,-0.67, -0.01);
    glVertex3f(-0.62,-0.67, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-0.62,-1.04, 0.0);
    glVertex3f(-1.03,-1.04, 0.0);
    glVertex3f(-0.62,-1.04, -0.01);
    glVertex3f(-1.03,-1.04, -0.01);
    glEnd();


    //belakang
    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-0.62,-0.67, 0.0);
    glVertex3f(-0.21,-0.67, 0.0);
    glVertex3f(-0.21,-1.04, 0.0);
    glVertex3f(-0.62,-1.04, 0.0);
    glEnd();

    //depan
    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-0.62,-0.67, -0.01);
    glVertex3f(-0.21,-0.67, -0.01);
    glVertex3f(-0.21,-1.04, -0.01);
    glVertex3f(-0.62,-1.04, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-0.62,-0.67, 0.0);
    glVertex3f(-0.62,-0.67, -0.01);
    glVertex3f(-0.62,-1.04, -0.01);
    glVertex3f(-0.62,-1.04, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-0.21,-0.67, 0.0);
    glVertex3f(-0.21,-0.67, -0.01);
    glVertex3f(-0.21,-1.04, -0.01);
    glVertex3f(-0.21,-1.04, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-0.62,-0.67, 0.0);
    glVertex3f(-0.21,-0.67, 0.0);
    glVertex3f(-0.62,-0.67, -0.01);
    glVertex3f(-0.21,-0.67, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-0.21,-1.04, 0.0);
    glVertex3f(-0.62,-1.04, 0.0);
    glVertex3f(-0.21,-1.04, -0.01);
    glVertex3f(-0.62,-1.04, -0.01);
    glEnd();


    //belakang
    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-0.21,-0.67, 0.0);
    glVertex3f(0.2,-0.67, 0.0);
    glVertex3f(0.2,-1.04, 0.0);
    glVertex3f(-0.21,-1.04, 0.0);
    glEnd();

    //depan
    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-0.21,-0.67, -0.01);
    glVertex3f(0.2,-0.67, -0.01);
    glVertex3f(0.2,-1.04, -0.01);
    glVertex3f(-0.21,-1.04, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-0.21,-0.67, 0.0);
    glVertex3f(-0.21,-0.67, -0.01);
    glVertex3f(-0.21,-1.04, -0.01);
    glVertex3f(-0.21,-1.04, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(0.2,-0.67, 0.0);
    glVertex3f(0.2,-0.67, -0.01);
    glVertex3f(0.2,-1.04, -0.01);
    glVertex3f(0.2,-1.04, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-0.21,-0.67, 0.0);
    glVertex3f(0.2,-0.67, 0.0);
    glVertex3f(0.2,-1.04, -0.01);
    glVertex3f(-0.21,-1.04, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(0.2,-1.04, 0.0);
    glVertex3f(-0.21,-1.04, 0.0);
    glVertex3f(0.2,-1.04, -0.01);
    glVertex3f(-0.21,-1.04, -0.01);
    glEnd();


    //belakang
    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(0.2,-0.67, 0.0);
    glVertex3f(0.61,-0.67, 0.0);
    glVertex3f(0.61,-1.04, 0.0);
    glVertex3f(0.2,-1.04, 0.0);
    glEnd();

    //depan
    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(0.2,-0.67, -0.01);
    glVertex3f(0.61,-0.67, -0.01);
    glVertex3f(0.61,-1.04, -0.01);
    glVertex3f(0.2,-1.04, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(0.2,-0.67, 0.0);
    glVertex3f(0.2,-0.67, -0.01);
    glVertex3f(0.2,-1.04, -0.01);
    glVertex3f(0.2,-1.04, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(0.61,-0.67, 0.0);
    glVertex3f(0.61,-0.67, -0.01);
    glVertex3f(0.61,-1.04, -0.01);
    glVertex3f(0.61,-1.04, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(0.2,-0.67, 0.0);
    glVertex3f(0.61,-0.67, 0.0);
    glVertex3f(0.2,-0.67, -0.01);
    glVertex3f(0.61,-0.67, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(0.61,-1.04, 0.0);
    glVertex3f(0.2,-1.04, 0.0);
    glVertex3f(0.61,-1.04, -0.01);
    glVertex3f(0.2,-1.04, -0.01);
    glEnd();



    //belakang
    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(0.61,-0.67, 0.0);
    glVertex3f(1.02,-0.67, 0.0);
    glVertex3f(1.02,-1.04, 0.0);
    glVertex3f(0.61,-1.04, 0.0);
    glEnd();

    //depan
    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(0.61,-0.67, -0.01);
    glVertex3f(1.02,-0.67, -0.01);
    glVertex3f(1.02,-1.04, -0.01);
    glVertex3f(0.61,-1.04, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(0.61,-0.67, 0.0);
    glVertex3f(0.61,-0.67, -0.01);
    glVertex3f(0.61,-1.04, -0.01);
    glVertex3f(0.61,-1.04, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.02,-0.67, 0.0);
    glVertex3f(1.02,-0.67, -0.01);
    glVertex3f(1.02,-1.04, -0.01);
    glVertex3f(1.02,-1.04, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(0.61,-0.67, 0.0);
    glVertex3f(1.02,-0.67, 0.0);
    glVertex3f(0.61,-0.67, -0.01);
    glVertex3f(1.02,-0.67, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.02,-1.04, 0.0);
    glVertex3f(0.61,-1.04, 0.0);
    glVertex3f(1.02,-1.04, -0.01);
    glVertex3f(0.61,-1.04, -0.01);
    glEnd();


    //belakang
    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.02,-0.67, 0.0);
    glVertex3f(1.43,-0.67, 0.0);
    glVertex3f(1.43,-1.04, 0.0);
    glVertex3f(1.02,-1.04, 0.0);
    glEnd();

    //depan
    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.02,-0.67, -0.01);
    glVertex3f(1.43,-0.67, -0.01);
    glVertex3f(1.43,-1.04, -0.01);
    glVertex3f(1.02,-1.04, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.02,-0.67, 0.0);
    glVertex3f(1.02,-0.67, -0.01);
    glVertex3f(1.02,-1.04, -0.01);
    glVertex3f(1.02,-1.04, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.43,-0.67, 0.0);
    glVertex3f(1.43,-0.67, -0.01);
    glVertex3f(1.43,-1.04, -0.01);
    glVertex3f(1.43,-1.04, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.02,-0.67, 0.0);
    glVertex3f(1.43,-0.67, 0.0);
    glVertex3f(1.02,-0.67, -0.01);
    glVertex3f(1.43,-0.67, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.43,-1.04, 0.0);
    glVertex3f(1.02,-1.04, 0.0);
    glVertex3f(1.43,-1.04, -0.01);
    glVertex3f(1.02,-1.04, -0.01);
    glEnd();



    //belakang
    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.43,-0.645, 0.0);
    glVertex3f(1.85,-0.645, 0.0);
    glVertex3f(1.85,-1.04, 0.0);
    glVertex3f(1.43,-1.04, 0.0);
    glEnd();

    //depan
    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.43,-0.645, -0.01);
    glVertex3f(1.85,-0.645, -0.01);
    glVertex3f(1.85,-1.04, -0.01);
    glVertex3f(1.43,-1.04, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.43,-0.645, 0.0);
    glVertex3f(1.43,-0.645, -0.01);
    glVertex3f(1.43,-1.04, -0.01);
    glVertex3f(1.43,-1.04, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.85,-0.645, 0.0);
    glVertex3f(1.85,-0.645, -0.01);
    glVertex3f(1.85,-1.04, -0.01);
    glVertex3f(1.85,-1.04, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.43,-0.645, 0.0);
    glVertex3f(1.85,-0.645, 0.0);
    glVertex3f(1.43,-0.645, -0.01);
    glVertex3f(1.85,-0.645, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.85,-1.04, 0.0);
    glVertex3f(1.43,-1.04, 0.0);
    glVertex3f(1.85,-1.04, -0.01);
    glVertex3f(1.43,-1.04, -0.01);
    glEnd();


    //baris 2

    //belakang
    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.85,-1.065, 0.0);
    glVertex3f(-1.44,-1.065, 0.0);
    glVertex3f(-1.44,-1.46, 0.0);
    glVertex3f(-1.85,-1.46, 0.0);
    glEnd();

    //depan
    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.85,-1.065, -0.01);
    glVertex3f(-1.44,-1.065, -0.01);
    glVertex3f(-1.44,-1.46, -0.01);
    glVertex3f(-1.85,-1.46, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.85,-1.065, 0.0);
    glVertex3f(-1.85,-1.065, -0.01);
    glVertex3f(-1.85,-1.46, -0.01);
    glVertex3f(-1.85,-1.46, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.44,-1.065, 0.0);
    glVertex3f(-1.44,-1.065, -0.01);
    glVertex3f(-1.44,-1.46, -0.01);
    glVertex3f(-1.44,-1.46, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.85,-1.065, 0.0);
    glVertex3f(-1.44,-1.065, 0.0);
    glVertex3f(-1.85,-1.065, -0.01);
    glVertex3f(-1.44,-1.065, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.44,-1.46, 0.0);
    glVertex3f(-1.85,-1.46, 0.0);
    glVertex3f(-1.44,-1.46, -0.01);
    glVertex3f(-1.85,-1.46, -0.01);
    glEnd();



    //belakang
    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.44,-1.09, 0.0);
    glVertex3f(-1.03,-1.09, 0.0);
    glVertex3f(-1.03,-1.46, 0.0);
    glVertex3f(-1.44,-1.46, 0.0);
    glEnd();

    //depan
    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.44,-1.09, -0.01);
    glVertex3f(-1.03,-1.09, -0.01);
    glVertex3f(-1.03,-1.46, -0.01);
    glVertex3f(-1.44,-1.46, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.44,-1.09, 0.0);
    glVertex3f(-1.44,-1.09, -0.01);
    glVertex3f(-1.44,-1.46, -0.01);
    glVertex3f(-1.44,-1.46, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.03,-1.09, 0.0);
    glVertex3f(-1.03,-1.09, -0.01);
    glVertex3f(-1.03,-1.46, -0.01);
    glVertex3f(-1.03,-1.46, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.44,-1.09, 0.0);
    glVertex3f(-1.03,-1.09, 0.0);
    glVertex3f(-1.44,-1.09, -0.01);
    glVertex3f(-1.03,-1.09, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.03,-1.46, 0.0);
    glVertex3f(-1.44,-1.46, 0.0);
    glVertex3f(-1.03,-1.46, -0.01);
    glVertex3f(-1.44,-1.46, -0.01);
    glEnd();



    //belakang
    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.03,-1.09, 0.0);
    glVertex3f(-0.62,-1.09, 0.0);
    glVertex3f(-0.62,-1.46, 0.0);
    glVertex3f(-1.03,-1.46, 0.0);
    glEnd();

    //depan
    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.03,-1.09, -0.01);
    glVertex3f(-0.62,-1.09, -0.01);
    glVertex3f(-0.62,-1.46, -0.01);
    glVertex3f(-1.03,-1.46, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.03,-1.09, 0.0);
    glVertex3f(-1.03,-1.09, -0.01);
    glVertex3f(-1.03,-1.46, -0.01);
    glVertex3f(-1.03,-1.46, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-0.62,-1.09, 0.0);
    glVertex3f(-0.62,-1.09, -0.01);
    glVertex3f(-0.62,-1.46, -0.01);
    glVertex3f(-0.62,-1.46, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.03,-1.09, 0.0);
    glVertex3f(-0.62,-1.09, 0.0);
    glVertex3f(-1.03,-1.09, -0.01);
    glVertex3f(-0.62,-1.09, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-0.62,-1.46, 0.0);
    glVertex3f(-1.03,-1.46, 0.0);
    glVertex3f(-0.62,-1.46, -0.01);
    glVertex3f(-1.03,-1.46, -0.01);
    glEnd();



    //belakang
    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-0.62,-1.09, 0.0);
    glVertex3f(-0.21,-1.09, 0.0);
    glVertex3f(-0.21,-1.46, 0.0);
    glVertex3f(-0.62,-1.46, 0.0);
    glEnd();

    //depan
    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-0.62,-1.09, -0.01);
    glVertex3f(-0.21,-1.09, -0.01);
    glVertex3f(-0.21,-1.46, -0.01);
    glVertex3f(-0.62,-1.46, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-0.62,-1.09, 0.0);
    glVertex3f(-0.62,-1.09, -0.01);
    glVertex3f(-0.62,-1.46, -0.01);
    glVertex3f(-0.62,-1.46, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-0.21,-1.09, 0.0);
    glVertex3f(-0.21,-1.09, -0.01);
    glVertex3f(-0.21,-1.46, -0.01);
    glVertex3f(-0.21,-1.46, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-0.62,-1.09, 0.0);
    glVertex3f(-0.21,-1.09, 0.0);
    glVertex3f(-0.62,-1.09, -0.01);
    glVertex3f(-0.21,-1.09, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-0.21,-1.46, 0.0);
    glVertex3f(-0.62,-1.46, 0.0);
    glVertex3f(-0.21,-1.46, -0.01);
    glVertex3f(-0.62,-1.46, -0.01);
    glEnd();


    //belakang
    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-0.21,-1.09, 0.0);
    glVertex3f(0.2,-1.09, 0.0);
    glVertex3f(0.2,-1.46, 0.0);
    glVertex3f(-0.21,-1.46, 0.0);
    glEnd();

    //depan
    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-0.21,-1.09, -0.01);
    glVertex3f(0.2,-1.09, -0.01);
    glVertex3f(0.2,-1.46, -0.01);
    glVertex3f(-0.21,-1.46, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-0.21,-1.09, 0.0);
    glVertex3f(-0.21,-1.09, -0.01);
    glVertex3f(-0.21,-1.46, -0.01);
    glVertex3f(-0.21,-1.46, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(0.2,-1.09, 0.0);
    glVertex3f(0.2,-1.09, -0.01);
    glVertex3f(0.2,-1.46, -0.01);
    glVertex3f(0.2,-1.46, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-0.21,-1.09, 0.0);
    glVertex3f(0.2,-1.09, 0.0);
    glVertex3f(-0.21,-1.09, -0.01);
    glVertex3f(0.2,-1.09, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(0.2,-1.46, 0.0);
    glVertex3f(-0.21,-1.46, 0.0);
    glVertex3f(0.2,-1.46, -0.01);
    glVertex3f(-0.21,-1.46, -0.01);
    glEnd();



    //belakang
    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(0.2,-1.09, 0.0);
    glVertex3f(0.61,-1.09, 0.0);
    glVertex3f(0.61,-1.46, 0.0);
    glVertex3f(0.2,-1.46, 0.0);
    glEnd();

    //depan
    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(0.2,-1.09, -0.01);
    glVertex3f(0.61,-1.09, -0.01);
    glVertex3f(0.61,-1.46, -0.01);
    glVertex3f(0.2,-1.46, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(0.2,-1.09, 0.0);
    glVertex3f(0.2,-1.09, -0.01);
    glVertex3f(0.2,-1.46, -0.01);
    glVertex3f(0.2,-1.46, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(0.61,-1.09, 0.0);
    glVertex3f(0.61,-1.09, -0.01);
    glVertex3f(0.61,-1.46, -0.01);
    glVertex3f(0.61,-1.46, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(0.2,-1.09, 0.0);
    glVertex3f(0.61,-1.09, 0.0);
    glVertex3f(0.2,-1.09, -0.01);
    glVertex3f(0.61,-1.09, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(0.61,-1.46, 0.0);
    glVertex3f(0.2,-1.46, 0.0);
    glVertex3f(0.61,-1.46, -0.01);
    glVertex3f(0.2,-1.46, -0.01);
    glEnd();



    //belakang
    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(0.61,-1.09, 0.0);
    glVertex3f(1.02,-1.09, 0.0);
    glVertex3f(1.02,-1.46, 0.0);
    glVertex3f(0.61,-1.46, 0.0);
    glEnd();

    //depan
    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(0.61,-1.09, -0.01);
    glVertex3f(1.02,-1.09, -0.01);
    glVertex3f(1.02,-1.46, -0.01);
    glVertex3f(0.61,-1.46, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(0.61,-1.09, 0.0);
    glVertex3f(0.61,-1.09, -0.01);
    glVertex3f(0.61,-1.46, -0.01);
    glVertex3f(0.61,-1.46, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.02,-1.09, 0.0);
    glVertex3f(1.02,-1.09, -0.01);
    glVertex3f(1.02,-1.46, -0.01);
    glVertex3f(1.02,-1.46, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(0.61,-1.09, 0.0);
    glVertex3f(1.02,-1.09, 0.0);
    glVertex3f(0.61,-1.09, -0.01);
    glVertex3f(1.02,-1.09, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.02,-1.46, 0.0);
    glVertex3f(0.61,-1.46, 0.0);
    glVertex3f(1.02,-1.46, -0.01);
    glVertex3f(0.61,-1.46, -0.01);
    glEnd();


    //belakang
    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.02,-1.09, 0.0);
    glVertex3f(1.43,-1.09, 0.0);
    glVertex3f(1.43,-1.46, 0.0);
    glVertex3f(1.02,-1.46, 0.0);
    glEnd();

    //depan
    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.02,-1.09, -0.01);
    glVertex3f(1.43,-1.09, -0.01);
    glVertex3f(1.43,-1.46, -0.01);
    glVertex3f(1.02,-1.46, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.02,-1.09, 0.0);
    glVertex3f(1.02,-1.09, -0.01);
    glVertex3f(1.02,-1.46, -0.01);
    glVertex3f(1.02,-1.46, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.43,-1.09, 0.0);
    glVertex3f(1.43,-1.09, -0.01);
    glVertex3f(1.43,-1.46, -0.01);
    glVertex3f(1.43,-1.46, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.02,-1.09, 0.0);
    glVertex3f(1.43,-1.09, 0.0);
    glVertex3f(1.02,-1.09, -0.01);
    glVertex3f(1.43,-1.09, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.43,-1.46, 0.0);
    glVertex3f(1.02,-1.46, 0.0);
    glVertex3f(1.43,-1.46, -0.01);
    glVertex3f(1.02,-1.46, -0.01);
    glEnd();


    //belakang
    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.43,-1.09, 0.0);
    glVertex3f(1.85,-1.09, 0.0);
    glVertex3f(1.85,-1.485, 0.0);
    glVertex3f(1.43,-1.485, 0.0);
    glEnd();

    //depan
    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.43,-1.09, -0.01);
    glVertex3f(1.85,-1.09, -0.01);
    glVertex3f(1.85,-1.485, -0.01);
    glVertex3f(1.43,-1.485, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.43,-1.09, 0.0);
    glVertex3f(1.43,-1.09, -0.01);
    glVertex3f(1.43,-1.485, -0.01);
    glVertex3f(1.43,-1.485, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.85,-1.09, 0.0);
    glVertex3f(1.85,-1.09, -0.01);
    glVertex3f(1.85,-1.485, -0.01);
    glVertex3f(1.85,-1.485, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.43,-1.09, 0.0);
    glVertex3f(1.85,-1.09, 0.0);
    glVertex3f(1.43,-1.09, -0.01);
    glVertex3f(1.85,-1.09, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.85,-1.485, 0.0);
    glVertex3f(1.43,-1.485, 0.0);
    glVertex3f(1.85,-1.485, -0.01);
    glVertex3f(1.43,-1.485, -0.01);
    glEnd();


    //baris 1

    //belakang
    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.85,-1.51, 0.0);
    glVertex3f(-1.44,-1.51, 0.0);
    glVertex3f(-1.44,-1.9, 0.0);
    glVertex3f(-1.85,-1.9, 0.0);
    glEnd();

    //depan
    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.85,-1.51, -0.01);
    glVertex3f(-1.44,-1.51, -0.01);
    glVertex3f(-1.44,-1.9, -0.01);
    glVertex3f(-1.85,-1.9, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.85,-1.51, 0.0);
    glVertex3f(-1.85,-1.51, -0.01);
    glVertex3f(-1.85,-1.9, -0.01);
    glVertex3f(-1.85,-1.9, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.44,-1.51, 0.0);
    glVertex3f(-1.44,-1.51, -0.01);
    glVertex3f(-1.44,-1.9, -0.01);
    glVertex3f(-1.44,-1.9, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.85,-1.51, 0.0);
    glVertex3f(-1.44,-1.51, 0.0);
    glVertex3f(-1.85,-1.51, -0.01);
    glVertex3f(-1.44,-1.51, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.44,-1.9, 0.0);
    glVertex3f(-1.85,-1.9, 0.0);
    glVertex3f(-1.44,-1.9, -0.01);
    glVertex3f(-1.85,-1.9, -0.01);
    glEnd();


    //belakang
    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.44,-1.51, 0.0);
    glVertex3f(-1.03,-1.51, 0.0);
    glVertex3f(-1.03,-1.9, 0.0);
    glVertex3f(-1.44,-1.9, 0.0);
    glEnd();

    //depan
    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.44,-1.51, -0.01);
    glVertex3f(-1.03,-1.51, -0.01);
    glVertex3f(-1.03,-1.9, -0.01);
    glVertex3f(-1.44,-1.9, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.44,-1.51, 0.0);
    glVertex3f(-1.44,-1.51, -0.01);
    glVertex3f(-1.44,-1.9, -0.01);
    glVertex3f(-1.44,-1.9, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.03,-1.51, 0.0);
    glVertex3f(-1.03,-1.51, -0.01);
    glVertex3f(-1.03,-1.9, -0.01);
    glVertex3f(-1.03,-1.9, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.44,-1.51, 0.0);
    glVertex3f(-1.03,-1.51, 0.0);
    glVertex3f(-1.44,-1.51, -0.01);
    glVertex3f(-1.03,-1.51, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.03,-1.9, 0.0);
    glVertex3f(-1.44,-1.9, 0.0);
    glVertex3f(-1.03,-1.9, -0.01);
    glVertex3f(-1.44,-1.9, -0.01);
    glEnd();



    //belakang
    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.03,-1.51, 0.0);
    glVertex3f(-0.62,-1.51, 0.0);
    glVertex3f(-0.62,-1.9, 0.0);
    glVertex3f(-1.03,-1.9, 0.0);
    glEnd();

    //depan
    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.03,-1.51, -0.01);
    glVertex3f(-0.62,-1.51, -0.01);
    glVertex3f(-0.62,-1.9, -0.01);
    glVertex3f(-1.03,-1.9, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.03,-1.51, 0.0);
    glVertex3f(-1.03,-1.51, -0.01);
    glVertex3f(-1.03,-1.9, -0.01);
    glVertex3f(-1.03,-1.9, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-0.62,-1.51, 0.0);
    glVertex3f(-0.62,-1.51, -0.01);
    glVertex3f(-0.62,-1.9, -0.01);
    glVertex3f(-0.62,-1.9, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.03,-1.51, 0.0);
    glVertex3f(-0.62,-1.51, 0.0);
    glVertex3f(-1.03,-1.51, -0.01);
    glVertex3f(-0.62,-1.51, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-1.03,-1.51, 0.0);
    glVertex3f(-0.62,-1.51, 0.0);
    glVertex3f(-0.62,-1.9, -0.01);
    glVertex3f(-1.03,-1.9, -0.01);
    glEnd();


    //belakang
    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-0.62,-1.51, 0.0);
    glVertex3f(-0.21,-1.51, 0.0);
    glVertex3f(-0.21,-1.9, 0.0);
    glVertex3f(-0.62,-1.9, 0.0);
    glEnd();

    //depan
    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-0.62,-1.51, -0.01);
    glVertex3f(-0.21,-1.51, -0.01);
    glVertex3f(-0.21,-1.9, -0.01);
    glVertex3f(-0.62,-1.9, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-0.62,-1.51, 0.0);
    glVertex3f(-0.62,-1.51, -0.01);
    glVertex3f(-0.62,-1.9, -0.01);
    glVertex3f(-0.62,-1.9, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-0.21,-1.51, 0.0);
    glVertex3f(-0.21,-1.51, -0.01);
    glVertex3f(-0.21,-1.9, -0.01);
    glVertex3f(-0.21,-1.9, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-0.62,-1.51, 0.0);
    glVertex3f(-0.21,-1.51, 0.0);
    glVertex3f(-0.62,-1.51, -0.01);
    glVertex3f(-0.21,-1.51, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-0.21,-1.9, 0.0);
    glVertex3f(-0.62,-1.9, 0.0);
    glVertex3f(-0.21,-1.9, -0.01);
    glVertex3f(-0.62,-1.9, -0.01);
    glEnd();


    //belakang
    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-0.21,-1.51, 0.0);
    glVertex3f(0.2,-1.51, 0.0);
    glVertex3f(0.2,-1.9, 0.0);
    glVertex3f(-0.21,-1.9, 0.0);
    glEnd();

    //depan
    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-0.21,-1.51, -0.01);
    glVertex3f(0.2,-1.51, -0.01);
    glVertex3f(0.2,-1.9, -0.01);
    glVertex3f(-0.21,-1.9, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-0.21,-1.51, 0.0);
    glVertex3f(-0.21,-1.51, -0.01);
    glVertex3f(-0.21,-1.9, -0.01);
    glVertex3f(-0.21,-1.9, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(0.2,-1.51, 0.0);
    glVertex3f(0.2,-1.51, -0.01);
    glVertex3f(0.2,-1.9, -0.01);
    glVertex3f(0.2,-1.9, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-0.21,-1.51, 0.0);
    glVertex3f(0.2,-1.51, 0.0);
    glVertex3f(-0.21,-1.51, -0.01);
    glVertex3f(0.2,-1.51, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(0.2,-1.9, 0.0);
    glVertex3f(-0.21,-1.9, 0.0);
    glVertex3f(0.2,-1.9, -0.01);
    glVertex3f(-0.21,-1.9, -0.01);
    glEnd();



    //belakang
    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(0.2,-1.51, 0.0);
    glVertex3f(0.61,-1.51, 0.0);
    glVertex3f(0.61,-1.9, 0.0);
    glVertex3f(0.2,-1.9, 0.0);
    glEnd();

    //depan
    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(0.2,-1.51, -0.01);
    glVertex3f(0.61,-1.51, -0.01);
    glVertex3f(0.61,-1.9, -0.01);
    glVertex3f(0.2,-1.9, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(0.2,-1.51, 0.0);
    glVertex3f(0.2,-1.51, -0.01);
    glVertex3f(0.2,-1.9, -0.01);
    glVertex3f(0.2,-1.9, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(0.61,-1.51, 0.0);
    glVertex3f(0.61,-1.51, -0.01);
    glVertex3f(0.61,-1.9, -0.01);
    glVertex3f(0.61,-1.9, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(0.2,-1.51, 0.0);
    glVertex3f(0.61,-1.51, 0.0);
    glVertex3f(0.2,-1.51, -0.01);
    glVertex3f(0.61,-1.51, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(0.61,-1.9, 0.0);
    glVertex3f(0.2,-1.9, 0.0);
    glVertex3f(0.61,-1.9, -0.01);
    glVertex3f(0.2,-1.9, -0.01);
    glEnd();



    //belakang
    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(0.61,-1.51, 0.0);
    glVertex3f(1.02,-1.51, 0.0);
    glVertex3f(1.02,-1.9, 0.0);
    glVertex3f(0.61,-1.9, 0.0);
    glEnd();

    //depan
    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(0.61,-1.51, -0.01);
    glVertex3f(1.02,-1.51, -0.01);
    glVertex3f(1.02,-1.9, -0.01);
    glVertex3f(0.61,-1.9, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(0.61,-1.51, 0.0);
    glVertex3f(0.61,-1.51, -0.01);
    glVertex3f(0.61,-1.9, -0.01);
    glVertex3f(0.61,-1.9, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.02,-1.51, 0.0);
    glVertex3f(1.02,-1.51, -0.01);
    glVertex3f(1.02,-1.9, -0.01);
    glVertex3f(1.02,-1.9, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(0.61,-1.51, 0.0);
    glVertex3f(1.02,-1.51, 0.0);
    glVertex3f(0.61,-1.51, -0.01);
    glVertex3f(1.02,-1.51, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.02,-1.9, 0.0);
    glVertex3f(0.61,-1.9, 0.0);
    glVertex3f(1.02,-1.9, -0.01);
    glVertex3f(0.61,-1.9, -0.01);
    glEnd();



    //belakang
    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.02,-1.51, 0.0);
    glVertex3f(1.43,-1.51, 0.0);
    glVertex3f(1.43,-1.9, 0.0);
    glVertex3f(1.02,-1.9, 0.0);
    glEnd();

    //depan
    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.02,-1.51, -0.01);
    glVertex3f(1.43,-1.51, -0.01);
    glVertex3f(1.43,-1.9, -0.01);
    glVertex3f(1.02,-1.9, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.02,-1.51, 0.0);
    glVertex3f(1.02,-1.51, -0.01);
    glVertex3f(1.02,-1.9, -0.01);
    glVertex3f(1.02,-1.9, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.43,-1.51, 0.0);
    glVertex3f(1.43,-1.51, -0.01);
    glVertex3f(1.43,-1.9, -0.01);
    glVertex3f(1.43,-1.9, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.02,-1.51, 0.0);
    glVertex3f(1.43,-1.51, 0.0);
    glVertex3f(1.02,-1.51, -0.01);
    glVertex3f(1.43,-1.51, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.43,-1.9, 0.0);
    glVertex3f(1.02,-1.9, 0.0);
    glVertex3f(1.43,-1.9, -0.01);
    glVertex3f(1.02,-1.9, -0.01);
    glEnd();


    //belakang
    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.43,-1.485, 0.0);
    glVertex3f(1.85,-1.485, 0.0);
    glVertex3f(1.85,-1.9, 0.0);
    glVertex3f(1.43,-1.9, 0.0);
    glEnd();

    //depan
    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.43,-1.485, -0.01);
    glVertex3f(1.85,-1.485, -0.01);
    glVertex3f(1.85,-1.9, -0.01);
    glVertex3f(1.43,-1.9, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.43,-1.485, 0.0);
    glVertex3f(1.43,-1.485, -0.01);
    glVertex3f(1.43,-1.9, -0.01);
    glVertex3f(1.43,-1.9, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.85,-1.485, 0.0);
    glVertex3f(1.85,-1.485, -0.01);
    glVertex3f(1.85,-1.9, -0.01);
    glVertex3f(1.85,-1.9, 0.0);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.43,-1.485, 0.0);
    glVertex3f(1.85,-1.485, 0.0);
    glVertex3f(1.43,-1.485, -0.01);
    glVertex3f(1.85,-1.485, -0.01);
    glEnd();

    glColor4f(0.0, 0.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(1.85,-1.9, 0.0);
    glVertex3f(1.43,-1.9, 0.0);
    glVertex3f(1.85,-1.9, -0.01);
    glVertex3f(1.43,-1.9, -0.01);
    glEnd();



    glFlush();
}

void display2D(){
    glClear(GL_COLOR_BUFFER_BIT);
    glPointSize(4);
    glDisable(GL_DEPTH_TEST);

    float color1[] = {0.0, 0.0, 0.0};
    float color2[] = {0.0, 0.0, 1.0};
    float color3[] = {0.5, 0.5, 0.5};
    float color4[] = {1.0, 0.0, 0.0};
    float color5[] = {0.0, 1.0, 0.0};
    float color6[] = {0.5, 0.0, 0.5};
    float color7[] = {1.0, 0.647, 0.0};
    float color8[] = {0.647, 0.164, 0.164};


    glBegin(GL_POLYGON);
    glColor3fv(color5);
    glVertex2f(2,2);
    glVertex2f(-2,2);
    glVertex2f(-2,-2);
    glVertex2f(2,-2);
    glEnd();

    //pager kiri
    glBegin(GL_POLYGON);
    glColor3fv(color3);
    glVertex2f(-1.9,1.9);
    glVertex2f(-1.85,1.9);
    glVertex2f(-1.85,-1.95);
    glVertex2f(-1.9,-1.95);
    glEnd();

    //pager kanan
    glBegin(GL_POLYGON);
    glColor3fv(color3);
    glVertex2f(1.9,1.9);
    glVertex2f(1.85,1.9);
    glVertex2f(1.85,-1.95);
    glVertex2f(1.9,-1.95);
    glEnd();

    //pager atas baris 9
    glBegin(GL_POLYGON);
    glColor3fv(color3);
    glVertex2f(-1.9,1.9);
    glVertex2f(1.9,1.9);
    glVertex2f(1.9,1.85);
    glVertex2f(-1.9,1.85);
    glEnd();

    //pager atas baris 8 atau pager bawah bais 9
    glBegin(GL_POLYGON);
    glColor3fv(color3);
    glVertex2f(-1.44,1.48);
    glVertex2f(1.9,1.48);
    glVertex2f(1.9,1.43);
    glVertex2f(-1.44,1.43);
    glEnd();

    //pager atas baris 7 atau pager bawah garis 8
    glBegin(GL_POLYGON);
    glColor3fv(color3);
    glVertex2f(-1.9,1.06);
    glVertex2f(1.44,1.06);
    glVertex2f(1.44,1.01);
    glVertex2f(-1.9,1.01);
    glEnd();

    //pager atas baris 6 atau pager bawah baris 7
    glBegin(GL_POLYGON);
    glColor3fv(color3);
    glVertex2f(-1.44,0.64);
    glVertex2f(1.9,0.64);
    glVertex2f(1.9,0.59);
    glVertex2f(-1.44,0.59);
    glEnd();

    //pager atas baris 5 atau pager bawah baris 6
    glBegin(GL_POLYGON);
    glColor3fv(color3);
    glVertex2f(-1.9,0.22);
    glVertex2f(1.44,0.22);
    glVertex2f(1.44,0.17);
    glVertex2f(-1.9,0.17);
    glEnd();

    //pager atas baris 4 atau pager bawah baris 5
    glBegin(GL_POLYGON);
    glColor3fv(color3);
    glVertex2f(-1.44,-0.2);
    glVertex2f(1.9,-0.2);
    glVertex2f(1.9,-0.25);
    glVertex2f(-1.44,-0.25);
    glEnd();

    //pager atas baris 3 atau pager bawah baris 4
    glBegin(GL_POLYGON);
    glColor3fv(color3);
    glVertex2f(-1.9,-0.62);
    glVertex2f(1.44,-0.62);
    glVertex2f(1.44,-0.67);
    glVertex2f(-1.9,-0.67);
    glEnd();

    //pager atas baris 2 atau pager bawah baris 3
    glBegin(GL_POLYGON);
    glColor3fv(color3);
    glVertex2f(-1.44,-1.04);
    glVertex2f(1.9,-1.04);
    glVertex2f(1.9,-1.09);
    glVertex2f(-1.44,-1.09);
    glEnd();

    //pager atas baris 1 atau pager bawah baris 2
    glBegin(GL_POLYGON);
    glColor3fv(color3);
    glVertex2f(-1.9,-1.46);
    glVertex2f(1.44,-1.46);
    glVertex2f(1.44,-1.51);
    glVertex2f(-1.9,-1.51);
    glEnd();

    //pager bawah baris 1
    glBegin(GL_POLYGON);
    glColor3fv(color3);
    glVertex2f(-1.9,-1.95);
    glVertex2f(1.9,-1.95);
    glVertex2f(1.9,-1.9);
    glVertex2f(-1.9,-1.9);
    glEnd();

    //baris 9
    glBegin(GL_POLYGON);
    glColor3fv(color1);
    glVertex2f(-1.85,1.85);
    glVertex2f(-1.44,1.85);
    glVertex2f(-1.44,1.455);
    glVertex2f(-1.85,1.455);
    glEnd();

    glColor3fv(color2);
    glBegin(GL_POLYGON);
    glVertex2f(-1.44,1.85);
    glVertex2f(-1.03,1.85);
    glVertex2f(-1.03,1.48);
    glVertex2f(-1.44,1.48);
    glEnd();

    glColor3fv(color1);
    glBegin(GL_POLYGON);
    glVertex2f(-1.03,1.85);
    glVertex2f(-0.62,1.85);
    glVertex2f(-0.62,1.48);
    glVertex2f(-1.03,1.48);
    glEnd();

    glColor3fv(color2);
    glBegin(GL_POLYGON);
    glVertex2f(-0.62,1.85);
    glVertex2f(-0.21,1.85);
    glVertex2f(-0.21,1.48);
    glVertex2f(-0.62,1.48);
    glEnd();

    //angka 6

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(-0.34,1.78);
    glVertex2f(-0.28,1.78);
    glVertex2f(-0.28,1.76);
    glVertex2f(-0.34,1.76);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(-0.34,1.78);
    glVertex2f(-0.32,1.78);
    glVertex2f(-0.32,1.67);
    glVertex2f(-0.34,1.67);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(-0.34,1.73);
    glVertex2f(-0.28,1.73);
    glVertex2f(-0.28,1.71);
    glVertex2f(-0.34,1.71);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(-0.28,1.73);
    glVertex2f(-0.3,1.73);
    glVertex2f(-0.3,1.67);
    glVertex2f(-0.28,1.67);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(-0.34,1.69);
    glVertex2f(-0.28,1.69);
    glVertex2f(-0.28,1.67);
    glVertex2f(-0.34,1.67);
    glEnd();

    //akhir 6

    glColor3fv(color1);
    glBegin(GL_POLYGON);
    glVertex2f(-0.21,1.85);
    glVertex2f(0.2,1.85);
    glVertex2f(0.2,1.48);
    glVertex2f(-0.21,1.48);
    glEnd();

    glColor3fv(color2);
    glBegin(GL_POLYGON);
    glVertex2f(0.2,1.85);
    glVertex2f(0.61,1.85);
    glVertex2f(0.61,1.48);
    glVertex2f(0.2,1.48);
    glEnd();

    //angka 8

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.48,1.78);
    glVertex2f(0.54,1.78);
    glVertex2f(0.54,1.76);
    glVertex2f(0.48,1.76);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.48,1.78);
    glVertex2f(0.5,1.78);
    glVertex2f(0.5,1.67);
    glVertex2f(0.48,1.67);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.48,1.73);
    glVertex2f(0.54,1.73);
    glVertex2f(0.54,1.71);
    glVertex2f(0.48,1.71);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.54,1.78);
    glVertex2f(0.52,1.78);
    glVertex2f(0.52,1.67);
    glVertex2f(0.54,1.67);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.48,1.69);
    glVertex2f(0.54,1.69);
    glVertex2f(0.54,1.67);
    glVertex2f(0.48,1.67);
    glEnd();

    //akhir 8

    glColor3fv(color1);
    glBegin(GL_POLYGON);
    glVertex2f(0.61,1.85);
    glVertex2f(1.02,1.85);
    glVertex2f(1.02,1.48);
    glVertex2f(0.61,1.48);
    glEnd();

    glColor3fv(color2);
    glBegin(GL_POLYGON);
    glVertex2f(1.02,1.85);
    glVertex2f(1.43,1.85);
    glVertex2f(1.43,1.48);
    glVertex2f(1.02,1.48);
    glEnd();

    //angka 8

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(1.3,1.78);
    glVertex2f(1.36,1.78);
    glVertex2f(1.36,1.76);
    glVertex2f(1.3,1.76);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(1.3,1.78);
    glVertex2f(1.32,1.78);
    glVertex2f(1.32,1.67);
    glVertex2f(1.3,1.67);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(1.3,1.73);
    glVertex2f(1.36,1.73);
    glVertex2f(1.36,1.71);
    glVertex2f(1.3,1.71);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(1.36,1.78);
    glVertex2f(1.34,1.78);
    glVertex2f(1.34,1.67);
    glVertex2f(1.36,1.67);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(1.3,1.69);
    glVertex2f(1.36,1.69);
    glVertex2f(1.36,1.67);
    glVertex2f(1.3,1.67);
    glEnd();

    //akhir 8

    glColor3fv(color1);
    glBegin(GL_POLYGON);
    glVertex2f(1.43,1.85);
    glVertex2f(1.85,1.85);
    glVertex2f(1.85,1.48);
    glVertex2f(1.43,1.48);
    glEnd();

    //angka 8

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(1.72,1.78);
    glVertex2f(1.78,1.78);
    glVertex2f(1.78,1.76);
    glVertex2f(1.72,1.76);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(1.72,1.78);
    glVertex2f(1.74,1.78);
    glVertex2f(1.74,1.67);
    glVertex2f(1.72,1.67);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(1.72,1.73);
    glVertex2f(1.78,1.73);
    glVertex2f(1.78,1.71);
    glVertex2f(1.72,1.71);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(1.78,1.78);
    glVertex2f(1.76,1.78);
    glVertex2f(1.76,1.67);
    glVertex2f(1.78,1.67);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(1.72,1.69);
    glVertex2f(1.78,1.69);
    glVertex2f(1.78,1.67);
    glVertex2f(1.72,1.67);
    glEnd();

    //akhir 8


    //baris 8
    glBegin(GL_POLYGON);
    glColor3fv(color2);
    glVertex2f(-1.85,1.455);
    glVertex2f(-1.44,1.455);
    glVertex2f(-1.44,1.06);
    glVertex2f(-1.85,1.06);
    glEnd();

    //angka 2
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(-1.57,1.385);
    glVertex2f(-1.51,1.385);
    glVertex2f(-1.51,1.365);
    glVertex2f(-1.57,1.365);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(-1.53,1.365);
    glVertex2f(-1.51,1.365);
    glVertex2f(-1.51,1.315);
    glVertex2f(-1.53,1.315);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(-1.56,1.335);
    glVertex2f(-1.51,1.335);
    glVertex2f(-1.51,1.315);
    glVertex2f(-1.56,1.315);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(-1.57,1.335);
    glVertex2f(-1.55,1.335);
    glVertex2f(-1.55,1.275);
    glVertex2f(-1.57,1.275);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(-1.56,1.295);
    glVertex2f(-1.51,1.295);
    glVertex2f(-1.51,1.275);
    glVertex2f(-1.56,1.275);
    glEnd();

    //akhir 2

    glColor3fv(color1);
    glBegin(GL_POLYGON);
    glVertex2f(-1.44,1.43);
    glVertex2f(-1.03,1.43);
    glVertex2f(-1.03,1.06);
    glVertex2f(-1.44,1.06);
    glEnd();

    glColor3fv(color2);
    glBegin(GL_POLYGON);
    glVertex2f(-1.03,1.43);
    glVertex2f(-0.62,1.43);
    glVertex2f(-0.62,1.06);
    glVertex2f(-1.03,1.06);
    glEnd();

    glColor3fv(color1);
    glBegin(GL_POLYGON);
    glVertex2f(-0.62,1.43);
    glVertex2f(-0.21,1.43);
    glVertex2f(-0.21,1.06);
    glVertex2f(-0.62,1.06);
    glEnd();

    //angka 6

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(-0.34,1.36);
    glVertex2f(-0.28,1.36);
    glVertex2f(-0.28,1.34);
    glVertex2f(-0.34,1.34);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(-0.34,1.36);
    glVertex2f(-0.32,1.36);
    glVertex2f(-0.32,1.25);
    glVertex2f(-0.34,1.25);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(-0.34,1.31);
    glVertex2f(-0.28,1.31);
    glVertex2f(-0.28,1.29);
    glVertex2f(-0.34,1.29);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(-0.28,1.31);
    glVertex2f(-0.3,1.31);
    glVertex2f(-0.3,1.25);
    glVertex2f(-0.28,1.25);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(-0.34,1.27);
    glVertex2f(-0.28,1.27);
    glVertex2f(-0.28,1.25);
    glVertex2f(-0.34,1.25);
    glEnd();

    //akhir 6

    glColor3fv(color2);
    glBegin(GL_POLYGON);
    glVertex2f(-0.21,1.43);
    glVertex2f(0.2,1.43);
    glVertex2f(0.2,1.06);
    glVertex2f(-0.21,1.06);
    glEnd();

    //angka 68

    //angka 8

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.07,1.36);
    glVertex2f(0.13,1.36);
    glVertex2f(0.13,1.34);
    glVertex2f(0.07,1.34);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.07,1.36);
    glVertex2f(0.09,1.36);
    glVertex2f(0.09,1.25);
    glVertex2f(0.07,1.25);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.07,1.31);
    glVertex2f(0.13,1.31);
    glVertex2f(0.13,1.29);
    glVertex2f(0.07,1.29);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.13,1.36);
    glVertex2f(0.11,1.36);
    glVertex2f(0.11,1.25);
    glVertex2f(0.13,1.25);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.07,1.27);
    glVertex2f(0.13,1.27);
    glVertex2f(0.13,1.25);
    glVertex2f(0.07,1.25);
    glEnd();

    //akhir 8

    //angka 6

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(-0.03,1.36);
    glVertex2f(0.03,1.36);
    glVertex2f(0.03,1.34);
    glVertex2f(-0.03,1.34);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(-0.03,1.36);
    glVertex2f(-0.01,1.36);
    glVertex2f(-0.01,1.25);
    glVertex2f(-0.03,1.25);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(-0.03,1.31);
    glVertex2f(0.03,1.31);
    glVertex2f(0.03,1.29);
    glVertex2f(-0.03,1.29);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.03,1.31);
    glVertex2f(0.01,1.31);
    glVertex2f(0.01,1.25);
    glVertex2f(0.03,1.25);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(-0.03,1.27);
    glVertex2f(0.03,1.27);
    glVertex2f(0.03,1.25);
    glVertex2f(-0.03,1.25);
    glEnd();

    //akhir 6

    //akhir 68

    glColor3fv(color1);
    glBegin(GL_POLYGON);
    glVertex2f(0.2,1.43);
    glVertex2f(0.61,1.43);
    glVertex2f(0.61,1.06);
    glVertex2f(0.2,1.06);
    glEnd();

    //angka 6

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.48,1.34);
    glVertex2f(0.54,1.34);
    glVertex2f(0.54,1.32);
    glVertex2f(0.48,1.32);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.48,1.34);
    glVertex2f(0.5,1.34);
    glVertex2f(0.5,1.23);
    glVertex2f(0.48,1.23);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.48,1.29);
    glVertex2f(0.54,1.29);
    glVertex2f(0.54,1.27);
    glVertex2f(0.48,1.27);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.54,1.29);
    glVertex2f(0.52,1.29);
    glVertex2f(0.52,1.23);
    glVertex2f(0.54,1.23);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.48,1.25);
    glVertex2f(0.54,1.25);
    glVertex2f(0.54,1.23);
    glVertex2f(0.48,1.23);
    glEnd();

    //akhir 6

    glColor3fv(color2);
    glBegin(GL_POLYGON);
    glVertex2f(0.61,1.43);
    glVertex2f(1.02,1.43);
    glVertex2f(1.02,1.06);
    glVertex2f(0.61,1.06);
    glEnd();

    //angka 66

    //angka 6

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.89,1.34);
    glVertex2f(0.95,1.34);
    glVertex2f(0.95,1.32);
    glVertex2f(0.89,1.32);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.89,1.34);
    glVertex2f(0.87,1.34);
    glVertex2f(0.87,1.23);
    glVertex2f(0.89,1.23);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.89,1.29);
    glVertex2f(0.95,1.29);
    glVertex2f(0.95,1.27);
    glVertex2f(0.89,1.27);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.95,1.29);
    glVertex2f(0.93,1.29);
    glVertex2f(0.93,1.23);
    glVertex2f(0.95,1.23);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.89,1.25);
    glVertex2f(0.95,1.25);
    glVertex2f(0.95,1.23);
    glVertex2f(0.89,1.23);
    glEnd();

    //akhir 6

    //angka 6

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.79,1.34);
    glVertex2f(0.85,1.34);
    glVertex2f(0.85,1.32);
    glVertex2f(0.79,1.32);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.79,1.34);
    glVertex2f(0.81,1.34);
    glVertex2f(0.81,1.23);
    glVertex2f(0.79,1.23);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.79,1.29);
    glVertex2f(0.85,1.29);
    glVertex2f(0.85,1.27);
    glVertex2f(0.79,1.27);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.85,1.29);
    glVertex2f(0.83,1.29);
    glVertex2f(0.83,1.23);
    glVertex2f(0.85,1.23);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.79,1.25);
    glVertex2f(0.85,1.25);
    glVertex2f(0.85,1.23);
    glVertex2f(0.79,1.23);
    glEnd();

    //akhir 6

    //akhir 66

    glColor3fv(color1);
    glBegin(GL_POLYGON);
    glVertex2f(1.02,1.43);
    glVertex2f(1.43,1.43);
    glVertex2f(1.43,1.06);
    glVertex2f(1.02,1.06);
    glEnd();

   //angka 6

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(1.3,1.36);
    glVertex2f(1.36,1.36);
    glVertex2f(1.36,1.34);
    glVertex2f(1.3,1.34);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(1.3,1.36);
    glVertex2f(1.32,1.36);
    glVertex2f(1.32,1.23);
    glVertex2f(1.3,1.23);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(1.3,1.31);
    glVertex2f(1.36,1.31);
    glVertex2f(1.36,1.29);
    glVertex2f(1.3,1.29);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(1.36,1.31);
    glVertex2f(1.34,1.31);
    glVertex2f(1.34,1.23);
    glVertex2f(1.36,1.23);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(1.3,1.25);
    glVertex2f(1.36,1.25);
    glVertex2f(1.36,1.23);
    glVertex2f(1.3,1.23);
    glEnd();

    //akhir 6

    glColor3fv(color2);
    glBegin(GL_POLYGON);
    glVertex2f(1.43,1.43);
    glVertex2f(1.85,1.43);
    glVertex2f(1.85,1.035);
    glVertex2f(1.43,1.035);
    glEnd();

    //angka 6

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(1.72,1.36);
    glVertex2f(1.78,1.36);
    glVertex2f(1.78,1.34);
    glVertex2f(1.72,1.34);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(1.72,1.36);
    glVertex2f(1.74,1.36);
    glVertex2f(1.74,1.23);
    glVertex2f(1.72,1.23);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(1.72,1.31);
    glVertex2f(1.78,1.31);
    glVertex2f(1.78,1.29);
    glVertex2f(1.72,1.29);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(1.78,1.31);
    glVertex2f(1.76,1.31);
    glVertex2f(1.76,1.23);
    glVertex2f(1.78,1.23);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(1.72,1.25);
    glVertex2f(1.78,1.25);
    glVertex2f(1.78,1.23);
    glVertex2f(1.72,1.23);
    glEnd();

    //akhir 6

    //baris 7
    glBegin(GL_POLYGON);
    glColor3fv(color1);
    glVertex2f(-1.85,1.01);
    glVertex2f(-1.44,1.01);
    glVertex2f(-1.44,0.615);
    glVertex2f(-1.85,0.615);
    glEnd();

    glColor3fv(color2);
    glBegin(GL_POLYGON);
    glVertex2f(-1.44,1.01);
    glVertex2f(-1.03,1.01);
    glVertex2f(-1.03,0.64);
    glVertex2f(-1.44,0.64);
    glEnd();

    //angka 6

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(-1.16,0.94);
    glVertex2f(-1.1,0.94);
    glVertex2f(-1.1,0.92);
    glVertex2f(-1.16,0.92);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(-1.16,0.94);
    glVertex2f(-1.14,0.94);
    glVertex2f(-1.14,0.83);
    glVertex2f(-1.16,0.83);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(-1.16,0.89);
    glVertex2f(-1.1,0.89);
    glVertex2f(-1.1,0.87);
    glVertex2f(-1.16,0.87);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(-1.1,0.89);
    glVertex2f(-1.12,0.89);
    glVertex2f(-1.12,0.83);
    glVertex2f(-1.1,0.83);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(-1.16,0.85);
    glVertex2f(-1.1,0.85);
    glVertex2f(-1.1,0.83);
    glVertex2f(-1.16,0.83);
    glEnd();

    //akhir 6

    glColor3fv(color1);
    glBegin(GL_POLYGON);
    glVertex2f(-1.03,1.01);
    glVertex2f(-0.62,1.01);
    glVertex2f(-0.62,0.64);
    glVertex2f(-1.03,0.64);
    glEnd();

    glColor3fv(color2);
    glBegin(GL_POLYGON);
    glVertex2f(-0.62,1.01);
    glVertex2f(-0.21,1.01);
    glVertex2f(-0.21,0.64);
    glVertex2f(-0.62,0.64);
    glEnd();

    //angka 8

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(-0.34,0.94);
    glVertex2f(-0.28,0.94);
    glVertex2f(-0.28,0.92);
    glVertex2f(-0.34,0.92);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(-0.34,0.94);
    glVertex2f(-0.32,0.94);
    glVertex2f(-0.32,0.83);
    glVertex2f(-0.34,0.83);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(-0.34,0.89);
    glVertex2f(-0.28,0.89);
    glVertex2f(-0.28,0.87);
    glVertex2f(-0.34,0.87);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(-0.28,0.94);
    glVertex2f(-0.3,0.94);
    glVertex2f(-0.3,0.83);
    glVertex2f(-0.28,0.83);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(-0.34,0.85);
    glVertex2f(-0.28,0.85);
    glVertex2f(-0.28,0.83);
    glVertex2f(-0.34,0.83);
    glEnd();

    //akhir 8

    glColor3fv(color1);
    glBegin(GL_POLYGON);
    glVertex2f(-0.21,1.01);
    glVertex2f(0.2,1.01);
    glVertex2f(0.2,0.64);
    glVertex2f(-0.21,0.64);
    glEnd();

    glColor3fv(color2);
    glBegin(GL_POLYGON);
    glVertex2f(0.2,1.01);
    glVertex2f(0.61,1.01);
    glVertex2f(0.61,0.64);
    glVertex2f(0.2,0.64);
    glEnd();

    //angka 6

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.48,0.94);
    glVertex2f(0.54,0.94);
    glVertex2f(0.54,0.92);
    glVertex2f(0.48,0.92);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.48,0.94);
    glVertex2f(0.5,0.94);
    glVertex2f(0.5,0.83);
    glVertex2f(0.48,0.83);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.48,0.89);
    glVertex2f(0.54,0.89);
    glVertex2f(0.54,0.87);
    glVertex2f(0.48,0.87);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.54,0.89);
    glVertex2f(0.52,0.89);
    glVertex2f(0.52,0.83);
    glVertex2f(0.54,0.83);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.48,0.85);
    glVertex2f(0.54,0.85);
    glVertex2f(0.54,0.83);
    glVertex2f(0.48,0.83);
    glEnd();

    //akhir 6

    glColor3fv(color1);
    glBegin(GL_POLYGON);
    glVertex2f(0.61,1.01);
    glVertex2f(1.02,1.01);
    glVertex2f(1.02,0.64);
    glVertex2f(0.61,0.64);
    glEnd();

    //angka 6

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.89,0.94);
    glVertex2f(0.95,0.94);
    glVertex2f(0.95,0.92);
    glVertex2f(0.89,0.92);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.89,0.94);
    glVertex2f(0.87,0.94);
    glVertex2f(0.87,0.83);
    glVertex2f(0.89,0.83);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.89,0.89);
    glVertex2f(0.95,0.89);
    glVertex2f(0.95,0.87);
    glVertex2f(0.89,0.87);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.95,0.89);
    glVertex2f(0.93,0.89);
    glVertex2f(0.93,0.83);
    glVertex2f(0.95,0.83);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.89,0.85);
    glVertex2f(0.95,0.85);
    glVertex2f(0.95,0.83);
    glVertex2f(0.89,0.83);
    glEnd();

    //akhir 6

    glColor3fv(color2);
    glBegin(GL_POLYGON);
    glVertex2f(1.02,1.01);
    glVertex2f(1.43,1.01);
    glVertex2f(1.43,0.64);
    glVertex2f(1.02,0.64);
    glEnd();

    //angka 62

    //angka 2
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(1.3,0.94);
    glVertex2f(1.36,0.94);
    glVertex2f(1.36,0.92);
    glVertex2f(1.3,0.92);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(1.34,0.92);
    glVertex2f(1.36,0.92);
    glVertex2f(1.36,0.87);
    glVertex2f(1.34,0.87);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(1.3,0.89);
    glVertex2f(1.36,0.89);
    glVertex2f(1.36,0.87);
    glVertex2f(1.3,0.87);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(1.3,0.89);
    glVertex2f(1.32,0.89);
    glVertex2f(1.32,0.83);
    glVertex2f(1.3,0.83);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(1.3,0.85);
    glVertex2f(1.36,0.85);
    glVertex2f(1.36,0.83);
    glVertex2f(1.3,0.83);
    glEnd();

    //akhir 2

    //angka 6

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(1.22,0.94);
    glVertex2f(1.28,0.94);
    glVertex2f(1.28,0.92);
    glVertex2f(1.22,0.92);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(1.22,0.94);
    glVertex2f(1.24,0.94);
    glVertex2f(1.24,0.83);
    glVertex2f(1.22,0.83);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(1.22,0.89);
    glVertex2f(1.28,0.89);
    glVertex2f(1.28,0.87);
    glVertex2f(1.22,0.87);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(1.28,0.89);
    glVertex2f(1.26,0.89);
    glVertex2f(1.26,0.83);
    glVertex2f(1.28,0.83);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(1.22,0.85);
    glVertex2f(1.28,0.85);
    glVertex2f(1.28,0.83);
    glVertex2f(1.22,0.83);
    glEnd();

    //akhir 6


    //akhir 62

    glColor3fv(color1);
    glBegin(GL_POLYGON);
    glVertex2f(1.43,1.035);
    glVertex2f(1.85,1.035);
    glVertex2f(1.85,0.64);
    glVertex2f(1.43,0.64);
    glEnd();

    //angka 6

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(1.72,0.94);
    glVertex2f(1.78,0.94);
    glVertex2f(1.78,0.92);
    glVertex2f(1.72,0.92);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(1.72,0.94);
    glVertex2f(1.74,0.94);
    glVertex2f(1.74,0.83);
    glVertex2f(1.72,0.83);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(1.72,0.89);
    glVertex2f(1.78,0.89);
    glVertex2f(1.78,0.87);
    glVertex2f(1.72,0.87);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(1.78,0.89);
    glVertex2f(1.76,0.89);
    glVertex2f(1.76,0.83);
    glVertex2f(1.78,0.83);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(1.72,0.85);
    glVertex2f(1.78,0.85);
    glVertex2f(1.78,0.83);
    glVertex2f(1.72,0.83);
    glEnd();

    //akhir 6

    //baris 6
    glBegin(GL_POLYGON);
    glColor3fv(color2);
    glVertex2f(-1.85,0.615);
    glVertex2f(-1.44,0.615);
    glVertex2f(-1.44,0.22);
    glVertex2f(-1.85,0.22);
    glEnd();

    glColor3fv(color1);
    glBegin(GL_POLYGON);
    glVertex2f(-1.44,0.59);
    glVertex2f(-1.03,0.59);
    glVertex2f(-1.03,0.22);
    glVertex2f(-1.44,0.22);
    glEnd();

    glColor3fv(color2);
    glBegin(GL_POLYGON);
    glVertex2f(-1.03,0.59);
    glVertex2f(-0.62,0.59);
    glVertex2f(-0.62,0.22);
    glVertex2f(-1.03,0.22);
    glEnd();

    //angka 2
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(-0.75,0.52);
    glVertex2f(-0.69,0.52);
    glVertex2f(-0.69,0.5);
    glVertex2f(-0.75,0.5);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(-0.71,0.5);
    glVertex2f(-0.69,0.5);
    glVertex2f(-0.69,0.45);
    glVertex2f(-0.71,0.45);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(-0.74,0.47);
    glVertex2f(-0.69,0.47);
    glVertex2f(-0.69,0.45);
    glVertex2f(-0.74,0.45);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(-0.75,0.47);
    glVertex2f(-0.73,0.47);
    glVertex2f(-0.73,0.41);
    glVertex2f(-0.75,0.41);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(-0.74,0.43);
    glVertex2f(-0.69,0.43);
    glVertex2f(-0.69,0.41);
    glVertex2f(-0.74,0.41);
    glEnd();

    //akhir 2

    glColor3fv(color1);
    glBegin(GL_POLYGON);
    glVertex2f(-0.62,0.59);
    glVertex2f(-0.21,0.59);
    glVertex2f(-0.21,0.22);
    glVertex2f(-0.62,0.22);
    glEnd();

    glColor3fv(color2);
    glBegin(GL_POLYGON);
    glVertex2f(-0.21,0.59);
    glVertex2f(0.2,0.59);
    glVertex2f(0.2,0.22);
    glVertex2f(-0.21,0.22);
    glEnd();

    glColor3fv(color1);
    glBegin(GL_POLYGON);
    glVertex2f(0.2,0.59);
    glVertex2f(0.61,0.59);
    glVertex2f(0.61,0.22);
    glVertex2f(0.2,0.22);
    glEnd();

    glColor3fv(color2);
    glBegin(GL_POLYGON);
    glVertex2f(0.61,0.59);
    glVertex2f(1.02,0.59);
    glVertex2f(1.02,0.22);
    glVertex2f(0.61,0.22);
    glEnd();

    //angka 8

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.89,0.52);
    glVertex2f(0.95,0.52);
    glVertex2f(0.95,0.5);
    glVertex2f(0.89,0.5);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.89,0.52);
    glVertex2f(0.91,0.52);
    glVertex2f(0.91,0.41);
    glVertex2f(0.89,0.41);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.89,0.47);
    glVertex2f(0.95,0.47);
    glVertex2f(0.95,0.45);
    glVertex2f(0.89,0.45);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.95,0.52);
    glVertex2f(0.93,0.52);
    glVertex2f(0.93,0.41);
    glVertex2f(0.95,0.41);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.89,0.43);
    glVertex2f(0.95,0.43);
    glVertex2f(0.95,0.41);
    glVertex2f(0.89,0.41);
    glEnd();

    //akhir 8

    glColor3fv(color1);
    glBegin(GL_POLYGON);
    glVertex2f(1.02,0.59);
    glVertex2f(1.43,0.59);
    glVertex2f(1.43,0.22);
    glVertex2f(1.02,0.22);
    glEnd();

    glColor3fv(color2);
    glBegin(GL_POLYGON);
    glVertex2f(1.43,0.59);
    glVertex2f(1.85,0.59);
    glVertex2f(1.85,0.195);
    glVertex2f(1.43,0.195);
    glEnd();

    //angka 6

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(1.72,0.52);
    glVertex2f(1.78,0.52);
    glVertex2f(1.78,0.5);
    glVertex2f(1.72,0.5);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(1.72,0.52);
    glVertex2f(1.74,0.52);
    glVertex2f(1.74,0.41);
    glVertex2f(1.72,0.41);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(1.72,0.47);
    glVertex2f(1.78,0.47);
    glVertex2f(1.78,0.45);
    glVertex2f(1.72,0.45);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(1.78,0.47);
    glVertex2f(1.76,0.47);
    glVertex2f(1.76,0.41);
    glVertex2f(1.78,0.41);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(1.72,0.43);
    glVertex2f(1.78,0.43);
    glVertex2f(1.78,0.41);
    glVertex2f(1.72,0.41);
    glEnd();

    //akhir 6

    //baris 5
    glBegin(GL_POLYGON);
    glColor3fv(color1);
    glVertex2f(-1.85,0.17);
    glVertex2f(-1.44,0.17);
    glVertex2f(-1.44,-0.225);
    glVertex2f(-1.85,-0.225);
    glEnd();

    glColor3fv(color2);
    glBegin(GL_POLYGON);
    glVertex2f(-1.44,0.17);
    glVertex2f(-1.03,0.17);
    glVertex2f(-1.03,-0.2);
    glVertex2f(-1.44,-0.2);
    glEnd();

    //angka 8

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(-1.16,0.1);
    glVertex2f(-1.10,0.1);
    glVertex2f(-1.10,0.08);
    glVertex2f(-1.16,0.08);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(-1.16,0.1);
    glVertex2f(-1.14,0.1);
    glVertex2f(-1.14,-0.01);
    glVertex2f(-1.16,-0.01);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(-1.16,0.05);
    glVertex2f(-1.10,0.05);
    glVertex2f(-1.10,0.03);
    glVertex2f(-1.16,0.03);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(-1.10,0.1);
    glVertex2f(-1.12,0.1);
    glVertex2f(-1.12,-0.01);
    glVertex2f(-1.10,-0.01);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(-1.16,0.01);
    glVertex2f(-1.10,0.01);
    glVertex2f(-1.10,-0.01);
    glVertex2f(-1.16,-0.01);
    glEnd();

    //akhir 8

    glColor3fv(color1);
    glBegin(GL_POLYGON);
    glVertex2f(-1.03,0.17);
    glVertex2f(-0.62,0.17);
    glVertex2f(-0.62,-0.2);
    glVertex2f(-1.03,-0.2);
    glEnd();

    glColor3fv(color2);
    glBegin(GL_POLYGON);
    glVertex2f(-0.62,0.17);
    glVertex2f(-0.21,0.17);
    glVertex2f(-0.21,-0.2);
    glVertex2f(-0.62,-0.2);
    glEnd();

    glColor3fv(color1);
    glBegin(GL_POLYGON);
    glVertex2f(-0.21,0.17);
    glVertex2f(0.2,0.17);
    glVertex2f(0.2,-0.2);
    glVertex2f(-0.21,-0.2);
    glEnd();

    glColor3fv(color2);
    glBegin(GL_POLYGON);
    glVertex2f(0.2,0.17);
    glVertex2f(0.61,0.17);
    glVertex2f(0.61,-0.2);
    glVertex2f(0.2,-0.2);
    glEnd();

    //angka 2

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.48,0.10);
    glVertex2f(0.54,0.10);
    glVertex2f(0.54,0.12);
    glVertex2f(0.48,0.12);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.52,0.12);
    glVertex2f(0.54,0.12);
    glVertex2f(0.54,0.07);
    glVertex2f(0.52,0.07);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.48,0.05);
    glVertex2f(0.54,0.05);
    glVertex2f(0.54,0.07);
    glVertex2f(0.48,0.07);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.48,0.05);
    glVertex2f(0.5,0.05);
    glVertex2f(0.5,0.03);
    glVertex2f(0.48,0.03);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.48,0.01);
    glVertex2f(0.54,0.01);
    glVertex2f(0.54,0.03);
    glVertex2f(0.48,0.03);
    glEnd();

    //akhir 2

    glColor3fv(color1);
    glBegin(GL_POLYGON);
    glVertex2f(0.61,0.17);
    glVertex2f(1.02,0.17);
    glVertex2f(1.02,-0.2);
    glVertex2f(0.61,-0.2);
    glEnd();

    glColor3fv(color2);
    glBegin(GL_POLYGON);
    glVertex2f(1.02,0.17);
    glVertex2f(1.43,0.17);
    glVertex2f(1.43,-0.2);
    glVertex2f(1.02,-0.2);
    glEnd();

    glColor3fv(color1);
    glBegin(GL_POLYGON);
    glVertex2f(1.43,0.195);
    glVertex2f(1.85,0.195);
    glVertex2f(1.85,-0.2);
    glVertex2f(1.43,-0.2);
    glEnd();

    //baris 4
    glBegin(GL_POLYGON);
    glColor3fv(color2);
    glVertex2f(-1.85,-0.225);
    glVertex2f(-1.44,-0.225);
    glVertex2f(-1.44,-0.62);
    glVertex2f(-1.85,-0.62);
    glEnd();

    //angka 6

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(-1.57,-0.295);
    glVertex2f(-1.51,-0.295);
    glVertex2f(-1.51,-0.315);
    glVertex2f(-1.57,-0.315);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(-1.57,-0.295);
    glVertex2f(-1.59,-0.295);
    glVertex2f(-1.59,-0.405);
    glVertex2f(-1.57,-0.405);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(-1.57,-0.345);
    glVertex2f(-1.51,-0.345);
    glVertex2f(-1.51,-0.365);
    glVertex2f(-1.57,-0.365);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(-1.51,-0.345);
    glVertex2f(-1.53,-0.345);
    glVertex2f(-1.53,-0.405);
    glVertex2f(-1.51,-0.405);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(-1.57,-0.385);
    glVertex2f(-1.51,-0.385);
    glVertex2f(-1.51,-0.405);
    glVertex2f(-1.57,-0.405);
    glEnd();

    //akhir 6

    glColor3fv(color1);
    glBegin(GL_POLYGON);
    glVertex2f(-1.44,-0.25);
    glVertex2f(-1.03,-0.25);
    glVertex2f(-1.03,-0.62);
    glVertex2f(-1.44,-0.62);
    glEnd();

    glColor3fv(color2);
    glBegin(GL_POLYGON);
    glVertex2f(-1.03,-0.25);
    glVertex2f(-0.62,-0.25);
    glVertex2f(-0.62,-0.62);
    glVertex2f(-1.03,-0.62);
    glEnd();

    glColor3fv(color1);
    glBegin(GL_POLYGON);
    glVertex2f(-0.62,-0.25);
    glVertex2f(-0.21,-0.25);
    glVertex2f(-0.21,-0.62);
    glVertex2f(-0.62,-0.62);
    glEnd();

    glColor3fv(color2);
    glBegin(GL_POLYGON);
    glVertex2f(-0.21,-0.25);
    glVertex2f(0.2,-0.25);
    glVertex2f(0.2,-0.62);
    glVertex2f(-0.21,-0.62);
    glEnd();

    //angka 2
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.07,-0.32);
    glVertex2f(0.13,-0.32);
    glVertex2f(0.13,-0.34);
    glVertex2f(0.07,-0.34);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.11,-0.34);
    glVertex2f(0.13,-0.34);
    glVertex2f(0.13,-0.39);
    glVertex2f(0.11,-0.39);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.07,-0.37);
    glVertex2f(0.13,-0.37);
    glVertex2f(0.13,-0.39);
    glVertex2f(0.07,-0.39);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.07,-0.37);
    glVertex2f(0.09,-0.37);
    glVertex2f(0.09,-0.43);
    glVertex2f(0.07,-0.43);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.07,-0.41);
    glVertex2f(0.13,-0.41);
    glVertex2f(0.13,-0.43);
    glVertex2f(0.07,-0.43);
    glEnd();

    //akhir 2

    glColor3fv(color1);
    glBegin(GL_POLYGON);
    glVertex2f(0.2,-0.25);
    glVertex2f(0.61,-0.25);
    glVertex2f(0.61,-0.62);
    glVertex2f(0.2,-0.62);
    glEnd();

    glColor3fv(color2);
    glBegin(GL_POLYGON);
    glVertex2f(0.61,-0.25);
    glVertex2f(1.02,-0.25);
    glVertex2f(1.02,-0.62);
    glVertex2f(0.61,-0.62);
    glEnd();

    glColor3fv(color1);
    glBegin(GL_POLYGON);
    glVertex2f(1.02,-0.25);
    glVertex2f(1.43,-0.25);
    glVertex2f(1.43,-0.62);
    glVertex2f(1.02,-0.62);
    glEnd();

    //angka 2
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(1.3,-0.32);
    glVertex2f(1.36,-0.32);
    glVertex2f(1.36,-0.34);
    glVertex2f(1.3,-0.34);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(1.34,-0.34);
    glVertex2f(1.36,-0.34);
    glVertex2f(1.36,-0.39);
    glVertex2f(1.34,-0.39);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(1.3,-0.37);
    glVertex2f(1.36,-0.37);
    glVertex2f(1.36,-0.39);
    glVertex2f(1.3,-0.39);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(1.3,-0.37);
    glVertex2f(1.32,-0.37);
    glVertex2f(1.32,-0.43);
    glVertex2f(1.3,-0.43);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(1.3,-0.41);
    glVertex2f(1.36,-0.41);
    glVertex2f(1.36,-0.43);
    glVertex2f(1.3,-0.43);
    glEnd();

    //akhir 2

    glColor3fv(color2);
    glBegin(GL_POLYGON);
    glVertex2f(1.43,-0.25);
    glVertex2f(1.85,-0.25);
    glVertex2f(1.85,-0.645);
    glVertex2f(1.43,-0.645);
    glEnd();

    //angka 28

    //angka 8

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(1.72,-0.32);
    glVertex2f(1.78,-0.32);
    glVertex2f(1.78,-0.34);
    glVertex2f(1.72,-0.34);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(1.72,-0.32);
    glVertex2f(1.74,-0.32);
    glVertex2f(1.74,-0.43);
    glVertex2f(1.72,-0.43);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(1.72,-0.37);
    glVertex2f(1.78,-0.37);
    glVertex2f(1.78,-0.39);
    glVertex2f(1.72,-0.39);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(1.78,-0.32);
    glVertex2f(1.76,-0.32);
    glVertex2f(1.76,-0.43);
    glVertex2f(1.78,-0.43);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(1.72,-0.41);
    glVertex2f(1.78,-0.41);
    glVertex2f(1.78,-0.43);
    glVertex2f(1.72,-0.43);
    glEnd();

    //akhir 8

    //angka 2
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(1.65,-0.32);
    glVertex2f(1.71,-0.32);
    glVertex2f(1.71,-0.34);
    glVertex2f(1.65,-0.34);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(1.69,-0.34);
    glVertex2f(1.71,-0.34);
    glVertex2f(1.71,-0.39);
    glVertex2f(1.69,-0.39);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(1.65,-0.37);
    glVertex2f(1.71,-0.37);
    glVertex2f(1.71,-0.39);
    glVertex2f(1.65,-0.39);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(1.65,-0.37);
    glVertex2f(1.67,-0.37);
    glVertex2f(1.67,-0.43);
    glVertex2f(1.65,-0.43);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(1.65,-0.41);
    glVertex2f(1.71,-0.41);
    glVertex2f(1.71,-0.43);
    glVertex2f(1.65,-0.43);
    glEnd();

    //akhir 2

    //akhir 28

    //baris 3
    glBegin(GL_POLYGON);
    glColor3fv(color1);
    glVertex2f(-1.85,-0.67);
    glVertex2f(-1.44,-0.67);
    glVertex2f(-1.44,-1.065);
    glVertex2f(-1.85,-1.065);
    glEnd();

    glColor3fv(color2);
    glBegin(GL_POLYGON);
    glVertex2f(-1.44,-0.67);
    glVertex2f(-1.03,-0.67);
    glVertex2f(-1.03,-1.04);
    glVertex2f(-1.44,-1.04);
    glEnd();

    //angka 2
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(-1.16,-0.74);
    glVertex2f(-1.1,-0.74);
    glVertex2f(-1.1,-0.76);
    glVertex2f(-1.16,-0.76);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(-1.12,-0.76);
    glVertex2f(-1.1,-0.76);
    glVertex2f(-1.1,-0.81);
    glVertex2f(-1.12,-0.81);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(-1.15,-0.79);
    glVertex2f(-1.1,-0.79);
    glVertex2f(-1.1,-0.81);
    glVertex2f(-1.15,-0.81);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(-1.16,-0.79);
    glVertex2f(-1.14,-0.79);
    glVertex2f(-1.14,-0.85);
    glVertex2f(-1.16,-0.85);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(-1.15,-0.83);
    glVertex2f(-1.1,-0.83);
    glVertex2f(-1.1,-0.85);
    glVertex2f(-1.15,-0.85);
    glEnd();

    //akhir 2

    glColor3fv(color1);
    glBegin(GL_POLYGON);
    glVertex2f(-1.03,-0.67);
    glVertex2f(-0.62,-0.67);
    glVertex2f(-0.62,-1.04);
    glVertex2f(-1.03,-1.04);
    glEnd();

    //angka 2
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(-0.75,-0.74);
    glVertex2f(-0.69,-0.74);
    glVertex2f(-0.69,-0.76);
    glVertex2f(-0.75,-0.76);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(-0.71,-0.76);
    glVertex2f(-0.69,-0.76);
    glVertex2f(-0.69,-0.81);
    glVertex2f(-0.71,-0.81);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(-0.74,-0.79);
    glVertex2f(-0.69,-0.79);
    glVertex2f(-0.69,-0.81);
    glVertex2f(-0.74,-0.81);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(-0.75,-0.79);
    glVertex2f(-0.73,-0.79);
    glVertex2f(-0.73,-0.85);
    glVertex2f(-0.75,-0.85);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(-0.74,-0.83);
    glVertex2f(-0.69,-0.83);
    glVertex2f(-0.69,-0.85);
    glVertex2f(-0.74,-0.85);
    glEnd();

    //akhir 2

    glColor3fv(color2);
    glBegin(GL_POLYGON);
    glVertex2f(-0.62,-0.67);
    glVertex2f(-0.21,-0.67);
    glVertex2f(-0.21,-1.04);
    glVertex2f(-0.62,-1.04);
    glEnd();

    //angka 22

    //angka 2
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(-0.34,-0.74);
    glVertex2f(-0.28,-0.74);
    glVertex2f(-0.28,-0.76);
    glVertex2f(-0.34,-0.76);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(-0.3,-0.76);
    glVertex2f(-0.28,-0.76);
    glVertex2f(-0.28,-0.81);
    glVertex2f(-0.3,-0.81);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(-0.33,-0.79);
    glVertex2f(-0.28,-0.79);
    glVertex2f(-0.28,-0.81);
    glVertex2f(-0.33,-0.81);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(-0.34,-0.79);
    glVertex2f(-0.32,-0.79);
    glVertex2f(-0.32,-0.85);
    glVertex2f(-0.34,-0.85);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(-0.33,-0.83);
    glVertex2f(-0.28,-0.83);
    glVertex2f(-0.28,-0.85);
    glVertex2f(-0.33,-0.85);
    glEnd();

    //akhir 2

    //angka 2
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(-0.42,-0.74);
    glVertex2f(-0.36,-0.74);
    glVertex2f(-0.36,-0.76);
    glVertex2f(-0.42,-0.76);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(-0.38,-0.76);
    glVertex2f(-0.36,-0.76);
    glVertex2f(-0.36,-0.81);
    glVertex2f(-0.38,-0.81);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(-0.41,-0.79);
    glVertex2f(-0.36,-0.79);
    glVertex2f(-0.36,-0.81);
    glVertex2f(-0.41,-0.81);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(-0.42,-0.79);
    glVertex2f(-0.4,-0.79);
    glVertex2f(-0.4,-0.85);
    glVertex2f(-0.42,-0.85);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(-0.41,-0.83);
    glVertex2f(-0.36,-0.83);
    glVertex2f(-0.36,-0.85);
    glVertex2f(-0.41,-0.85);
    glEnd();

    //akhir 2

    //akhir 22

    glColor3fv(color1);
    glBegin(GL_POLYGON);
    glVertex2f(-0.21,-0.67);
    glVertex2f(0.2,-0.67);
    glVertex2f(0.2,-1.04);
    glVertex2f(-0.21,-1.04);
    glEnd();

    //angka 2
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.07,-0.74);
    glVertex2f(0.13,-0.74);
    glVertex2f(0.13,-0.76);
    glVertex2f(0.07,-0.76);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.11,-0.76);
    glVertex2f(0.13,-0.76);
    glVertex2f(0.13,-0.81);
    glVertex2f(0.11,-0.81);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.07,-0.79);
    glVertex2f(0.13,-0.79);
    glVertex2f(0.13,-0.81);
    glVertex2f(0.07,-0.81);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.07,-0.79);
    glVertex2f(0.09,-0.79);
    glVertex2f(0.09,-0.85);
    glVertex2f(0.07,-0.85);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.07,-0.83);
    glVertex2f(0.13,-0.83);
    glVertex2f(0.13,-0.85);
    glVertex2f(0.07,-0.85);
    glEnd();

    //akhir 2

    glColor3fv(color2);
    glBegin(GL_POLYGON);
    glVertex2f(0.2,-0.67);
    glVertex2f(0.61,-0.67);
    glVertex2f(0.61,-1.04);
    glVertex2f(0.2,-1.04);
    glEnd();

    //angka 2
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.48,-0.74);
    glVertex2f(0.54,-0.74);
    glVertex2f(0.54,-0.76);
    glVertex2f(0.48,-0.76);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.52,-0.76);
    glVertex2f(0.54,-0.76);
    glVertex2f(0.54,-0.81);
    glVertex2f(0.52,-0.81);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.48,-0.79);
    glVertex2f(0.54,-0.79);
    glVertex2f(0.54,-0.81);
    glVertex2f(0.48,-0.81);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.48,-0.79);
    glVertex2f(0.5,-0.79);
    glVertex2f(0.5,-0.85);
    glVertex2f(0.48,-0.85);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.48,-0.83);
    glVertex2f(0.54,-0.83);
    glVertex2f(0.54,-0.85);
    glVertex2f(0.48,-0.85);
    glEnd();

    //akhir 2

    glColor3fv(color1);
    glBegin(GL_POLYGON);
    glVertex2f(0.61,-0.67);
    glVertex2f(1.02,-0.67);
    glVertex2f(1.02,-1.04);
    glVertex2f(0.61,-1.04);
    glEnd();

    //angka 2
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.89,-0.74);
    glVertex2f(0.95,-0.74);
    glVertex2f(0.95,-0.76);
    glVertex2f(0.89,-0.76);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.93,-0.76);
    glVertex2f(0.95,-0.76);
    glVertex2f(0.95,-0.81);
    glVertex2f(0.93,-0.81);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.89,-0.79);
    glVertex2f(0.95,-0.79);
    glVertex2f(0.95,-0.81);
    glVertex2f(0.89,-0.81);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.89,-0.79);
    glVertex2f(0.91,-0.79);
    glVertex2f(0.91,-0.85);
    glVertex2f(0.89,-0.85);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.89,-0.83);
    glVertex2f(0.95,-0.83);
    glVertex2f(0.95,-0.85);
    glVertex2f(0.89,-0.85);
    glEnd();

    //akhir 2

    glColor3fv(color2);
    glBegin(GL_POLYGON);
    glVertex2f(1.02,-0.67);
    glVertex2f(1.43,-0.67);
    glVertex2f(1.43,-1.04);
    glVertex2f(1.02,-1.04);
    glEnd();

    //angka 26

    //angka 6

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(1.30,-0.74);
    glVertex2f(1.36,-0.74);
    glVertex2f(1.36,-0.76);
    glVertex2f(1.30,-0.76);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(1.30,-0.74);
    glVertex2f(1.32,-0.74);
    glVertex2f(1.32,-0.85);
    glVertex2f(1.30,-0.85);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(1.30,-0.79);
    glVertex2f(1.36,-0.79);
    glVertex2f(1.36,-0.81);
    glVertex2f(1.30,-0.81);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(1.36,-0.79);
    glVertex2f(1.34,-0.79);
    glVertex2f(1.34,-0.85);
    glVertex2f(1.36,-0.85);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(1.30,-0.83);
    glVertex2f(1.36,-0.83);
    glVertex2f(1.36,-0.85);
    glVertex2f(1.30,-0.85);
    glEnd();

    //akhir 6

    //angka 2
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(1.22,-0.74);
    glVertex2f(1.28,-0.74);
    glVertex2f(1.28,-0.76);
    glVertex2f(1.22,-0.76);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(1.26,-0.76);
    glVertex2f(1.28,-0.76);
    glVertex2f(1.28,-0.81);
    glVertex2f(1.26,-0.81);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(1.22,-0.79);
    glVertex2f(1.28,-0.79);
    glVertex2f(1.28,-0.81);
    glVertex2f(1.22,-0.81);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(1.22,-0.79);
    glVertex2f(1.24,-0.79);
    glVertex2f(1.24,-0.85);
    glVertex2f(1.22,-0.85);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(1.22,-0.83);
    glVertex2f(1.28,-0.83);
    glVertex2f(1.28,-0.85);
    glVertex2f(1.22,-0.85);
    glEnd();

    //akhir 2

    //akhir 26

    glColor3fv(color1);
    glBegin(GL_POLYGON);
    glVertex2f(1.43,-0.645);
    glVertex2f(1.85,-0.645);
    glVertex2f(1.85,-1.04);
    glVertex2f(1.43,-1.04);
    glEnd();

    //angka 2
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(1.72,-0.74);
    glVertex2f(1.78,-0.74);
    glVertex2f(1.78,-0.76);
    glVertex2f(1.72,-0.76);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(1.76,-0.76);
    glVertex2f(1.78,-0.76);
    glVertex2f(1.78,-0.81);
    glVertex2f(1.76,-0.81);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(1.72,-0.79);
    glVertex2f(1.78,-0.79);
    glVertex2f(1.78,-0.81);
    glVertex2f(1.72,-0.81);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(1.72,-0.79);
    glVertex2f(1.74,-0.79);
    glVertex2f(1.74,-0.85);
    glVertex2f(1.72,-0.85);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(1.72,-0.83);
    glVertex2f(1.78,-0.83);
    glVertex2f(1.78,-0.85);
    glVertex2f(1.72,-0.85);
    glEnd();

    //akhir 2

    //baris 2
    glBegin(GL_POLYGON);
    glColor3fv(color2);
    glVertex2f(-1.85,-1.065);
    glVertex2f(-1.44,-1.065);
    glVertex2f(-1.44,-1.46);
    glVertex2f(-1.85,-1.46);
    glEnd();

    //angka 8

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(-1.58,-1.135);
    glVertex2f(-1.52,-1.135);
    glVertex2f(-1.52,-1.155);
    glVertex2f(-1.58,-1.155);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(-1.58,-1.135);
    glVertex2f(-1.56,-1.135);
    glVertex2f(-1.56,-1.245);
    glVertex2f(-1.58,-1.245);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(-1.58,-1.185);
    glVertex2f(-1.52,-1.185);
    glVertex2f(-1.52,-1.205);
    glVertex2f(-1.58,-1.205);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(-1.52,-1.135);
    glVertex2f(-1.54,-1.135);
    glVertex2f(-1.54,-1.245);
    glVertex2f(-1.52,-1.245);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(-1.58,-1.225);
    glVertex2f(-1.52,-1.225);
    glVertex2f(-1.52,-1.245);
    glVertex2f(-1.58,-1.245);
    glEnd();

    //akhir 8

    glColor3fv(color1);
    glBegin(GL_POLYGON);
    glVertex2f(-1.44,-1.09);
    glVertex2f(-1.03,-1.09);
    glVertex2f(-1.03,-1.46);
    glVertex2f(-1.44,-1.46);
    glEnd();

    glColor3fv(color2);
    glBegin(GL_POLYGON);
    glVertex2f(-1.03,-1.09);
    glVertex2f(-0.62,-1.09);
    glVertex2f(-0.62,-1.46);
    glVertex2f(-1.03,-1.46);
    glEnd();

    //angka 6

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(-0.75,-1.16);
    glVertex2f(-0.69,-1.16);
    glVertex2f(-0.69,-1.18);
    glVertex2f(-0.75,-1.18);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(-0.75,-1.16);
    glVertex2f(-0.73,-1.16);
    glVertex2f(-0.73,-1.27);
    glVertex2f(-0.75,-1.27);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(-0.75,-1.21);
    glVertex2f(-0.69,-1.21);
    glVertex2f(-0.69,-1.23);
    glVertex2f(-0.75,-1.23);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(-0.69,-1.21);
    glVertex2f(-0.71,-1.21);
    glVertex2f(-0.71,-1.27);
    glVertex2f(-0.69,-1.27);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(-0.75,-1.25);
    glVertex2f(-0.69,-1.25);
    glVertex2f(-0.69,-1.27);
    glVertex2f(-0.75,-1.27);
    glEnd();

    //akhir 6

    glColor3fv(color1);
    glBegin(GL_POLYGON);
    glVertex2f(-0.62,-1.09);
    glVertex2f(-0.21,-1.09);
    glVertex2f(-0.21,-1.46);
    glVertex2f(-0.62,-1.46);
    glEnd();

    glColor3fv(color2);
    glBegin(GL_POLYGON);
    glVertex2f(-0.21,-1.09);
    glVertex2f(0.2,-1.09);
    glVertex2f(0.2,-1.46);
    glVertex2f(-0.21,-1.46);
    glEnd();

    glColor3fv(color1);
    glBegin(GL_POLYGON);
    glVertex2f(0.2,-1.09);
    glVertex2f(0.61,-1.09);
    glVertex2f(0.61,-1.46);
    glVertex2f(0.2,-1.46);
    glEnd();

    glColor3fv(color2);
    glBegin(GL_POLYGON);
    glVertex2f(0.61,-1.09);
    glVertex2f(1.02,-1.09);
    glVertex2f(1.02,-1.46);
    glVertex2f(0.61,-1.46);
    glEnd();

    //angka 2
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.89,-1.16);
    glVertex2f(0.95,-1.16);
    glVertex2f(0.95,-1.18);
    glVertex2f(0.89,-1.18);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.93,-1.18);
    glVertex2f(0.95,-1.18);
    glVertex2f(0.95,-1.23);
    glVertex2f(0.93,-1.23);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.9,-1.2);
    glVertex2f(0.95,-1.2);
    glVertex2f(0.95,-1.23);
    glVertex2f(0.9,-1.23);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.89,-1.2);
    glVertex2f(0.91,-1.2);
    glVertex2f(0.91,-1.26);
    glVertex2f(0.89,-1.26);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.89,-1.25);
    glVertex2f(0.95,-1.25);
    glVertex2f(0.95,-1.27);
    glVertex2f(0.89,-1.27);
    glEnd();

    //akhir 2

    glColor3fv(color1);
    glBegin(GL_POLYGON);
    glVertex2f(1.02,-1.09);
    glVertex2f(1.43,-1.09);
    glVertex2f(1.43,-1.46);
    glVertex2f(1.02,-1.46);
    glEnd();

    glColor3fv(color2);
    glBegin(GL_POLYGON);
    glVertex2f(1.43,-1.09);
    glVertex2f(1.85,-1.09);
    glVertex2f(1.85,-1.485);
    glVertex2f(1.43,-1.485);
    glEnd();

    //baris 1

    glBegin(GL_POLYGON);
    glColor3fv(color1);
    glVertex2f(-1.85,-1.51);
    glVertex2f(-1.44,-1.51);
    glVertex2f(-1.44,-1.9);
    glVertex2f(-1.85,-1.9);
    glEnd();

    glColor3fv(color2);
    glBegin(GL_POLYGON);
    glVertex2f(-1.44,-1.51);
    glVertex2f(-1.03,-1.51);
    glVertex2f(-1.03,-1.9);
    glVertex2f(-1.44,-1.9);
    glEnd();

    //angka 2
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(-1.16,-1.58);
    glVertex2f(-1.1,-1.58);
    glVertex2f(-1.1,-1.6);
    glVertex2f(-1.16,-1.6);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(-1.12,-1.6);
    glVertex2f(-1.1,-1.6);
    glVertex2f(-1.1,-1.65);
    glVertex2f(-1.12,-1.65);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(-1.15,-1.63);
    glVertex2f(-1.1,-1.63);
    glVertex2f(-1.1,-1.65);
    glVertex2f(-1.15,-1.65);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(-1.16,-1.63);
    glVertex2f(-1.14,-1.63);
    glVertex2f(-1.14,-1.69);
    glVertex2f(-1.16,-1.69);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(-1.15,-1.67);
    glVertex2f(-1.1,-1.67);
    glVertex2f(-1.1,-1.69);
    glVertex2f(-1.15,-1.69);
    glEnd();

    //akhir 2



    glColor3fv(color1);
    glBegin(GL_POLYGON);
    glVertex2f(-1.03,-1.51);
    glVertex2f(-0.62,-1.51);
    glVertex2f(-0.62,-1.9);
    glVertex2f(-1.03,-1.9);
    glEnd();

    glColor3fv(color2);
    glBegin(GL_POLYGON);
    glVertex2f(-0.62,-1.51);
    glVertex2f(-0.21,-1.51);
    glVertex2f(-0.21,-1.9);
    glVertex2f(-0.62,-1.9);
    glEnd();

    glColor3fv(color1);
    glBegin(GL_POLYGON);
    glVertex2f(-0.21,-1.51);
    glVertex2f(0.2,-1.51);
    glVertex2f(0.2,-1.9);
    glVertex2f(-0.21,-1.9);
    glEnd();

    glColor3fv(color2);
    glBegin(GL_POLYGON);
    glVertex2f(0.2,-1.51);
    glVertex2f(0.61,-1.51);
    glVertex2f(0.61,-1.9);
    glVertex2f(0.2,-1.9);
    glEnd();

    //angka 6

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.48,-1.58);
    glVertex2f(0.54,-1.58);
    glVertex2f(0.54,-1.6);
    glVertex2f(0.48,-1.6);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.48,-1.58);
    glVertex2f(0.50,-1.58);
    glVertex2f(0.50,-1.69);
    glVertex2f(0.48,-1.69);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.48,-1.63);
    glVertex2f(0.54,-1.63);
    glVertex2f(0.54,-1.65);
    glVertex2f(0.48,-1.65);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.54,-1.63);
    glVertex2f(0.52,-1.63);
    glVertex2f(0.52,-1.69);
    glVertex2f(0.54,-1.69);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.48,-1.67);
    glVertex2f(0.54,-1.67);
    glVertex2f(0.54,-1.69);
    glVertex2f(0.48,-1.69);
    glEnd();

    //akhir 6

    glColor3fv(color1);
    glBegin(GL_POLYGON);
    glVertex2f(0.61,-1.51);
    glVertex2f(1.02,-1.51);
    glVertex2f(1.02,-1.9);
    glVertex2f(0.61,-1.9);
    glEnd();


    glColor3fv(color2);
    glBegin(GL_POLYGON);
    glVertex2f(1.02,-1.51);
    glVertex2f(1.43,-1.51);
    glVertex2f(1.43,-1.9);
    glVertex2f(1.02,-1.9);
    glEnd();

    //angka 8

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(1.3,-1.58);
    glVertex2f(1.36,-1.58);
    glVertex2f(1.36,-1.6);
    glVertex2f(1.3,-1.6);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(1.3,-1.58);
    glVertex2f(1.32,-1.58);
    glVertex2f(1.32,-1.69);
    glVertex2f(1.3,-1.69);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(1.3,-1.63);
    glVertex2f(1.36,-1.63);
    glVertex2f(1.36,-1.65);
    glVertex2f(1.3,-1.65);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(1.36,-1.58);
    glVertex2f(1.34,-1.58);
    glVertex2f(1.34,-1.69);
    glVertex2f(1.36,-1.69);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(1.3,-1.67);
    glVertex2f(1.36,-1.67);
    glVertex2f(1.36,-1.69);
    glVertex2f(1.3,-1.69);
    glEnd();

    //akhir 8

    glColor3fv(color1);
    glBegin(GL_POLYGON);
    glVertex2f(1.43,-1.485);
    glVertex2f(1.85,-1.485);
    glVertex2f(1.85,-1.9);
    glVertex2f(1.43,-1.9);
    glEnd();



    //ladder 11 to 44 kiri belakang
    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex2f(1.10,0.12);
    glVertex2f(1.15,0.12);
    glVertex2f(1.15,-1.41);
    glVertex2f(1.10,-1.41);
    glEnd();

    //ladder 11 to 44 kanan
    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex2f(1.30,0.12);
    glVertex2f(1.35,0.12);
    glVertex2f(1.35,-1.41);
    glVertex2f(1.30,-1.41);
    glEnd();

    //anak tangga 11 to 44
    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex2f(1.15,-0.03);
    glVertex2f(1.30,-0.03);
    glVertex2f(1.30,-0.08);
    glVertex2f(1.15,-0.08);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex2f(1.15,-0.18);
    glVertex2f(1.30,-0.18);
    glVertex2f(1.30,-0.23);
    glVertex2f(1.15,-0.23);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex2f(1.15,-0.33);
    glVertex2f(1.30,-0.33);
    glVertex2f(1.30,-0.38);
    glVertex2f(1.15,-0.38);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex2f(1.15,-0.48);
    glVertex2f(1.30,-0.48);
    glVertex2f(1.30,-0.53);
    glVertex2f(1.15,-0.53);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex2f(1.15,-0.63);
    glVertex2f(1.30,-0.63);
    glVertex2f(1.30,-0.68);
    glVertex2f(1.15,-0.68);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex2f(1.15,-0.78);
    glVertex2f(1.30,-0.78);
    glVertex2f(1.30,-0.83);
    glVertex2f(1.15,-0.83);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex2f(1.15,-0.93);
    glVertex2f(1.30,-0.93);
    glVertex2f(1.30,-0.98);
    glVertex2f(1.15,-0.98);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex2f(1.15,-1.08);
    glVertex2f(1.30,-1.08);
    glVertex2f(1.30,-1.13);
    glVertex2f(1.15,-1.13);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex2f(1.15,-1.23);
    glVertex2f(1.30,-1.23);
    glVertex2f(1.30,-1.28);
    glVertex2f(1.15,-1.28);
    glEnd();

    //ladder 19 to 22 atas
    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex2f(-1.80,-0.935);
    glVertex2f(-0.26,-0.935);
    glVertex2f(-0.26,-0.985);
    glVertex2f(-1.80,-0.985);
    glEnd();

    //ladder 19 to 22 bawah
    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex2f(-1.80,-0.735);
    glVertex2f(-0.26,-0.735);
    glVertex2f(-0.26,-0.785);
    glVertex2f(-1.80,-0.785);
    glEnd();

    //anak tangga 19 to 22
    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex2f(-1.65,-0.935);
    glVertex2f(-1.6,-0.935);
    glVertex2f(-1.6,-0.735);
    glVertex2f(-1.65,-0.735);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex2f(-1.5,-0.935);
    glVertex2f(-1.45,-0.935);
    glVertex2f(-1.45,-0.735);
    glVertex2f(-1.5,-0.735);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex2f(-1.35,-0.935);
    glVertex2f(-1.3,-0.935);
    glVertex2f(-1.3,-0.735);
    glVertex2f(-1.35,-0.735);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex2f(-1.2,-0.935);
    glVertex2f(-1.15,-0.935);
    glVertex2f(-1.15,-0.735);
    glVertex2f(-1.2,-0.735);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex2f(-1.05,-0.935);
    glVertex2f(-1.0,-0.935);
    glVertex2f(-1.0,-0.735);
    glVertex2f(-1.05,-0.735);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex2f(-0.9,-0.935);
    glVertex2f(-0.85,-0.935);
    glVertex2f(-0.85,-0.735);
    glVertex2f(-0.9,-0.735);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex2f(-0.75,-0.935);
    glVertex2f(-0.7,-0.935);
    glVertex2f(-0.7,-0.735);
    glVertex2f(-0.75,-0.735);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex2f(-0.6,-0.935);
    glVertex2f(-0.55,-0.935);
    glVertex2f(-0.55,-0.735);
    glVertex2f(-0.6,-0.735);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex2f(-0.45,-0.935);
    glVertex2f(-0.4,-0.935);
    glVertex2f(-0.4,-0.735);
    glVertex2f(-0.45,-0.735);
    glEnd();

    //ladder 53 to 77 kanan
    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex2f(-1.14,0.37);
    glVertex2f(0.14,1.65);
    glVertex2f(0.19,1.60);
    glVertex2f(-1.09,0.32);
    glEnd();

    //ladder 53 to 77 kiri
    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex2f(-1.35,0.57);
    glVertex2f(-0.07,1.85);
    glVertex2f(-0.02,1.8);
    glVertex2f(-1.3,0.52);
    glEnd();

    //anak tangga 53 to 77
    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex2f(-1.2,0.72);
    glVertex2f(-1.15,0.77);
    glVertex2f(-0.9,0.52);
    glVertex2f(-0.95,0.47);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex2f(-1.05,0.87);
    glVertex2f(-1.0,0.92);
    glVertex2f(-0.75,0.67);
    glVertex2f(-0.8,0.62);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex2f(-0.9,1.02);
    glVertex2f(-0.85,1.07);
    glVertex2f(-0.6,0.82);
    glVertex2f(-0.65,0.77);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex2f(-0.75,1.17);
    glVertex2f(-0.7,1.22);
    glVertex2f(-0.45,0.97);
    glVertex2f(-0.5,0.92);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex2f(-0.6,1.32);
    glVertex2f(-0.55,1.37);
    glVertex2f(-0.3,1.12);
    glVertex2f(-0.35,1.07);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex2f(-0.45,1.47);
    glVertex2f(-0.4,1.52);
    glVertex2f(-0.15,1.27);
    glVertex2f(-0.2,1.22);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3fv(color4);
    glVertex2f(-0.3,1.62);
    glVertex2f(-0.25,1.67);
    glVertex2f(-0.0,1.42);
    glVertex2f(-0.05,1.37);
    glEnd();

    //snake 16 to 7
    //segmen 1
    glBegin(GL_POLYGON);
    glColor3fv(color6);
    glVertex2f(-0.81,-1.2);
    glVertex2f(-0.14,-1.41);
    glVertex2f(-0.14,-1.44);
    glVertex2f(-0.81,-1.23);
    glEnd();

    //segmen 2
    glBegin(GL_POLYGON);
    glColor3fv(color6);
    glVertex2f(-0.14,-1.41);
    glVertex2f(0.34,-1.27);
    glVertex2f(0.3,-1.24);
    glVertex2f(-0.14,-1.44);
    glEnd();

    //segmen 3
    glBegin(GL_POLYGON);
    glColor3fv(color6);
    glVertex2f(0.3,-1.24);
    glVertex2f(0.82,-1.72);
    glVertex2f(0.86,-1.7);
    glVertex2f(0.34,-1.26);
    glEnd();

    //ular 48 to 33
    //segmen 1
    glBegin(GL_POLYGON);
    glColor3fv(color6);
    glVertex2f(0.81,0.37);
    glVertex2f(0.4,0.22);
    glVertex2f(0.44,0.20);
    glVertex2f(0.84,0.35);
    glEnd();

    //segmen 2
    glBegin(GL_POLYGON);
    glColor3fv(color6);
    glVertex2f(0.4,0.22);
    glVertex2f(0.52,-0.13);
    glVertex2f(0.55,-0.17);
    glVertex2f(0.44,0.20);
    glEnd();

    //segmen 3
    glBegin(GL_POLYGON);
    glColor3fv(color6);
    glVertex2f(0.52,-0.13);
    glVertex2f(0.0,-0.43);
    glVertex2f(0.0,-0.46);
    glVertex2f(0.55,-0.17);
    glEnd();

    //ular 74 to 60
    //segmen 1
    glBegin(GL_POLYGON);
    glColor3fv(color6);
    glVertex2f(-1.27,1.57);
    glVertex2f(-0.38,1.3);
    glVertex2f(-0.4,1.32);
    glVertex2f(-1.23,1.6);
    glEnd();

    //segmen 2
    glBegin(GL_POLYGON);
    glColor3fv(color6);
    glVertex2f(-0.38,1.3);
    glVertex2f(0.34,1.36);
    glVertex2f(0.32,1.39);
    glVertex2f(-0.4,1.32);
    glEnd();

    //segmen 3
    glBegin(GL_POLYGON);
    glColor3fv(color6);
    glVertex2f(0.34,1.39);
    glVertex2f(0.41,0.82);
    glVertex2f(0.44,0.85);
    glVertex2f(0.32,1.36);
    glEnd();

    //player1
    glBegin(GL_POLYGON);
    glColor3fv(color7);
    glVertex2f(nilai_x1_p1 ,-1.56 + y_play_p1);
    glVertex2f(nilai_x2_p1 ,-1.56 + y_play_p1);
    glVertex2f(nilai_x2_p1 ,-1.66 + y_play_p1);
    glVertex2f(nilai_x1_p1 ,-1.66 + y_play_p1);
    glEnd();

    //player2
    glBegin(GL_POLYGON);
    glColor3fv(color8);
    glVertex2f(nilai_x1_p2 ,-1.71 + y_play_p2);
    glVertex2f(nilai_x2_p2 ,-1.81 + y_play_p2);
    glVertex2f(nilai_x3_p2 ,-1.81 + y_play_p2);
    glEnd();


    //observer
    glColor3f(1.0, 0.753, 0.796);
    glBegin(GL_POLYGON);
    glVertex3f(x1_observer, y1_observer, -0.1);
    glVertex3f(x2_observer, y1_observer, -0.1);
    glVertex3f(x2_observer, y2_observer, -0.1);
    glVertex3f(x1_observer, y2_observer, -0.1);
    glEnd();

    glColor3f(1.0, 0.753, 0.796);
    glBegin(GL_POLYGON);
    glVertex3f(x1_observer, y1_observer, -0.2);
    glVertex3f(x2_observer, y1_observer, -0.2);
    glVertex3f(x2_observer, y2_observer, -0.2);
    glVertex3f(x1_observer, y2_observer, -0.2);
    glEnd();

    glColor3f(1.0, 0.753, 0.796);
    glBegin(GL_POLYGON);
    glVertex3f(x1_observer, y1_observer, -0.1);
    glVertex3f(x1_observer, y1_observer, -0.2);
    glVertex3f(x1_observer, y2_observer, -0.2);
    glVertex3f(x1_observer, y2_observer, -0.1);
    glEnd();

    glColor3f(1.0, 0.753, 0.796);
    glBegin(GL_POLYGON);
    glVertex3f(x2_observer, y1_observer, -0.1);
    glVertex3f(x2_observer, y1_observer, -0.2);
    glVertex3f(x2_observer, y2_observer, -0.2);
    glVertex3f(x2_observer, y2_observer, -0.1);
    glEnd();

    glColor3f(1.0, 0.753, 0.796);
    glBegin(GL_POLYGON);
    glVertex3f(x1_observer, y1_observer, -0.1);
    glVertex3f(x2_observer, y1_observer, -0.1);
    glVertex3f(x1_observer, y1_observer, -0.2);
    glVertex3f(x2_observer, y1_observer, -0.2);
    glEnd();

    glColor3f(1.0, 0.753, 0.796);
    glBegin(GL_POLYGON);
    glVertex3f(x2_observer, y2_observer, -0.1);
    glVertex3f(x1_observer, y2_observer, -0.1);
    glVertex3f(x2_observer, y2_observer, -0.2);
    glVertex3f(x1_observer, y2_observer, -0.2);
    glEnd();



    glFlush();

}

void display(){
    if(dimensi3){
        display3D();
    }else{
        display2D();
    }
}


void input (unsigned char key, int x, int y){
    if (key == 'v' || key == 'V'){
        dimensi3 = !dimensi3;
        if(dimensi3){
            glLoadIdentity();
            display3D();
        }else{
            glLoadIdentity();
            display2D();
        }
    }
    if(dimensi3){
        if(key == 'k' || key == 'K'){
            krotated -= 1;
        }
        else if(key == 'i' || key == 'I'){
            irotated += 1;
        }
        else if(key == 'j' || key == 'J'){
            jrotated -= 1;
        }
        else if(key == 'l' || key == 'L'){
            lrotated += 1;
        }
    }

    if(key == 'w' || key == 'W'){
        if(y1_observer >= 1.83 || y2_observer >= 1.83){
            y1_observer += 0.0;
            y2_observer += 0.0;
        }else{
            y1_observer += 0.05;
            y2_observer += 0.05;
        }
    }else if(key == 's' || key == 'S'){
        if(y1_observer <= -1.89 || y2_observer <= -1.89){
            y1_observer -= 0.0;
            y2_observer -= 0.0;
        }else{
            y1_observer -= 0.05;
            y2_observer -= 0.05;
        }
    }else if(key == 'a' || key == 'A'){
        if(x1_observer <= -1.84 || x2_observer <= -1.84){
            x1_observer -= 0.0;
            x2_observer -= 0.0;
        }else{
            x1_observer -= 0.05;
            x2_observer -= 0.05;
        }
    }else if(key == 'd' || key == 'D'){
        if(x1_observer >= 1.84 || x2_observer >= 1.84){
            x1_observer += 0.0;
            x2_observer += 0.0;
        }else{
            x1_observer += 0.05;
            x2_observer += 0.05;
        }
    }

    glutPostRedisplay(); // Request display update
    bool replay;
    if (key == ' ') {
        if(play && (temp_p1_future < 81 && temp_p2_future < 81)) {
            replay = true;
            int dadu;
            while(replay){
                dadu = rand() % 7;
                if(dadu != 0){
                    replay = false;
                }
            }
            temp_p1_future += dadu;
            cout<<"Giliran Player 1"<<endl;
            cout << "Player 1 mendapatkan: " << dadu << endl;
            if(x_play1){
                if(temp_p1_future >= 81){
                    int temp = 81 - temp_p1_future;
                    if (temp == 0){
                        temp_p1_future = temp_p1_future;
                    }else{
                        temp_p1_future = temp_p1_future + temp;
                    }
                }
                for(int i = temp_p1_past; i < temp_p1_future; i++){
                    if(i%9 == 0){
                        y_play_p1 += 0.42;
                        x_play1 = false;
                    }else if(x_play1 == false){
                        nilai_x1_p1 -= 0.41;
                        nilai_x2_p1 -= 0.41;
                    }
                    else{
                        nilai_x1_p1 += 0.41;
                        nilai_x2_p1 += 0.41;
                    }
                }
                temp_p1_past = temp_p1_future;
                play = false;
            }else{
                for(int i = temp_p1_past; i < temp_p1_future; i++){
                    if(i%9 == 0){
                        y_play_p1 += 0.42;
                        x_play1 = true;        if(temp_p1_future >= 81){
            temp_p1_future = 81;
            temp_p1_past = 81;
            cout<<"Player 1 win"<<endl;

        }
                    }else if(x_play1 == true){
                        nilai_x1_p1 += 0.41;
                        nilai_x2_p1 += 0.41;
                    }
                    else{
                        nilai_x1_p1 -= 0.41;
                        nilai_x2_p1 -= 0.41;
                    }
                }
                temp_p1_past = temp_p1_future;
                play = false;
            }

            if(temp_p1_future == 16 || temp_p1_future == 48 || temp_p1_future == 74){
                cout<<"Player 1 terkena ular!"<<endl;
            }else if(temp_p1_future == 11 || temp_p1_future == 19 || temp_p1_future == 53){
                cout<<"Player 1 menaiki tangga!"<<endl;
            }

            //tangga 11 ke 44
            if(temp_p1_future == 11){
                temp_p1_future = 44;
                temp_p1_past = 44;
                y_play_p1 += 0.42 * 3;
                x_play1 = true;
            }
            //tangga 19 ke 22
            else if(temp_p1_future == 19){
                temp_p1_future = 22;
                temp_p1_past = 22;
                nilai_x1_p1 += 0.41*3;
                nilai_x2_p1 += 0.41*3;
                x_play1 = true;
            }
            //tangga 53 ke 77
            else if(temp_p1_future == 53){
                temp_p1_future = 77;
                temp_p1_past = 77;
                y_play_p1 += 0.42 * 3;
                nilai_x1_p1 += 0.41 * 3;
                nilai_x2_p1 += 0.41 * 3;
                x_play1 = true;
            }
            //snake 16 ke 7
            else if(temp_p1_future == 16){
                temp_p1_future = 7;
                temp_p1_past = 7;
                y_play_p1 -= 0.42;
                nilai_x1_p1 += 0.41 * 4;
                nilai_x2_p1 += 0.41 * 4;
                x_play1 = true;
            }
            //snake 48 ke 32
            else if(temp_p1_future == 48){
                temp_p1_future = 32;
                temp_p1_past = 32;
                y_play_p1 -= 0.42 * 2;
                nilai_x1_p1 -= 0.41 * 2;
                nilai_x2_p1 -= 0.41 * 2;
                x_play1 = false;
            }
            //snake 74 ke 60
            else if(temp_p1_future == 74){
                temp_p1_future = 60;
                temp_p1_past = 60;
                y_play_p1 -= 0.42 * 2;
                nilai_x1_p1 += 0.41 * 4;
                nilai_x2_p1 += 0.41 * 4;
                x_play1 = true;
            }

            cout<<"Saat ini player 1 berada : "<<temp_p1_future<<endl<<endl;

            if(temp_p1_future >= 81){
                temp_p1_future = 81;
                temp_p1_past = 81;
                cout<<"Player 1 win"<<endl;

            }
        }else if(!play && (temp_p2_future < 81 && temp_p1_future < 81)) {
            replay = true;
            int dadu;
            while(replay){
                dadu = rand() % 7;
                if(dadu != 0){
                    replay = false;
                }
            }
            temp_p2_future += dadu;
            cout<<"Giliran Player 2"<<endl;
            cout << "Player 2 mendapatkan: " << dadu << endl;
            if(x_play2){
                if(temp_p2_future >= 81){
                    int temp = 81 - temp_p2_future;
                    if (temp == 0){
                        temp_p2_future = temp_p2_future;
                    }else{
                        temp_p2_future = temp_p2_future + temp;
                    }
                }
                for(int i = temp_p2_past; i < temp_p2_future; i++){
                    if(i%9 == 0){
                        y_play_p2 += 0.42;
                        x_play2 = false;
                    }else if(x_play2 == false){
                        nilai_x1_p2 -= 0.41;
                        nilai_x2_p2 -= 0.41;
                        nilai_x3_p2 -= 0.41;
                    }
                    else{
                        nilai_x1_p2 += 0.41;
                        nilai_x2_p2 += 0.41;
                        nilai_x3_p2 += 0.41;
                    }
                }
                temp_p2_past = temp_p2_future;
                play = true;
            }else{
                for(int i = temp_p2_past; i < temp_p2_future; i++){
                    if(i%9 == 0){
                        y_play_p2 += 0.42;
                        x_play2 = true;
                    }else if(x_play2 == true){
                        nilai_x1_p2 += 0.41;
                        nilai_x2_p2 += 0.41;
                        nilai_x3_p2 += 0.41;
                    }
                    else{
                        nilai_x1_p2 -= 0.41;
                        nilai_x2_p2 -= 0.41;
                        nilai_x3_p2 -= 0.41;
                    }
                }
                temp_p2_past = temp_p2_future;
                play = true;
            }

            if(temp_p2_future == 16 || temp_p2_future == 48 || temp_p2_future == 74){
                cout<<"Player 2 terkena ular!"<<endl;
            }else if(temp_p2_future == 11 || temp_p2_future == 19 || temp_p2_future == 53){
                cout<<"Player 2 menaiki tangga!"<<endl;
            }

            //tangga 11 ke 44
            if(temp_p2_future == 11){
                temp_p2_future = 44;
                temp_p2_past = 44;
                y_play_p2 += 0.42 * 3;
                x_play2 = true;
            }
            //tangga 19 ke 22
            else if(temp_p2_future == 19){
                temp_p2_future = 22;
                temp_p2_past = 22;
                nilai_x1_p2 += 0.41*3;
                nilai_x2_p2 += 0.41*3;
                nilai_x3_p2 += 0.41*3;
                x_play2 = true;
            }
            //tangga 53 ke 77
            else if(temp_p2_future == 53){
                temp_p2_future = 77;
                temp_p2_past = 77;
                y_play_p2 += 0.42 * 3;
                nilai_x1_p2 += 0.41 * 3;
                nilai_x2_p2 += 0.41 * 3;
                nilai_x3_p2 += 0.41 * 3;
                x_play2 = true;
            }
            //snake 16 ke 7
            else if(temp_p2_future == 16){
                temp_p2_future = 7;
                temp_p2_past = 7;
                y_play_p2 -= 0.42;
                nilai_x1_p2 += 0.41 * 4;
                nilai_x2_p2 += 0.41 * 4;
                nilai_x3_p2 += 0.41 * 4;
                x_play2 = true;
            }
            //snake 48 ke 32
            else if(temp_p2_future == 48){
                temp_p2_future = 32;
                temp_p2_past = 32;
                y_play_p2 -= 0.42 * 2;
                nilai_x1_p2 -= 0.41*2;
                nilai_x2_p2 -= 0.41*2;
                nilai_x3_p2 -= 0.41*2;
                x_play2 = false;
            }
            //snake 74 ke 60
            else if(temp_p2_future == 74){
                temp_p2_future = 60;
                temp_p2_past = 60;
                y_play_p2 -= 0.42 * 2;
                nilai_x1_p2 += 0.41*4;
                nilai_x2_p2 += 0.41*4;
                nilai_x3_p2 += 0.41*4;
                x_play2 = true;
            }

            cout<<"Saat ini player 2 berada : "<<temp_p2_future<<endl<<endl;
            if(temp_p2_future >= 81){
                temp_p2_future = 81;
                temp_p2_past = 81;
                cout<<"Player 2 win"<<endl;
            }

        }

    }

    display();
}

void myinit(){
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    //glutOrtho2d(-2.0,2.0,-2.0,2.0);

    glOrtho(-2,2,-2,2, 4, -4);
    glMatrixMode(GL_MODELVIEW);
    glClearColor(1.0,1.0,1.0,1.0);
    glColor3f(0.0,0.0,1.0);
    glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

}

int main(int argc, char* argv[]){
	glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(500,500);
	//glutInitWindowPosition(100,100);
	glutCreateWindow("UTS Demo");
	glutDisplayFunc(display);
    glutKeyboardFunc(input);
	myinit();
	cout<<"Click Spasi Untuk Memulai!"<<endl;
	cout<<"Keterangan!"<<endl;
	cout<<"Player 1 : Kotak"<<endl;
	cout<<"Player 2 : Segitiga"<<endl;
	cout<<endl;
	glutMainLoop();

	return 0;
}



#ifndef RECEPTOR_H
#define RECEPTOR_H

#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <vector>
#include <math.h>

const double DT = 0.01;
const int TEND = 200;
const double t= 0.0;

const int NUM = pow(2,2);
const int Threads = 128;

const double TAU = 3.0;
// time constant of neuron (ms)

const double TH0 = 1.0;
const double a = 5.0;
const double b = 1.0;


const double INP = 9.0;
const double V0 = -70.0;// (mV)
const double TH = -55.0;// (mV)
const double STD_N = 2.0;//standard deviation of threshold (mV)

const double THup = 0.2; // if fire, sum THup to TH (mV)

const double g_c=1;
const double g_leak=0.18;
const double V_na=40;
const double V_k=-88.5;
const double kappa=0.4;
const double V_l=-70;

const double g_na_d= 5;
const double g_dr_d= 15;
const double g_na_s= 55;
const double g_dr_s= 20;

const double k_n_s=3;
const double k_m_inf_s=3;
const double k_m_inf_d=5;
const double k_h_d=-5;
const double k_n_d=5;
const double k_p_d=-6;

const double tau_n_s=0.39;
const double tau_h_d=1;
const double tau_n_d=0.9;
const double tau_p_d=5;

const double V12_d=-40;
const double V12_s=-40;
const double V12_h_d=-52;
const double V12_n_d=-40;
const double V12_p_d=-65;

const double I0recep=9.0;
const double I0lif=15.0;

const int FT=500;
const int sq = sqrt(NUM);
const double sigma = NUM/4;

const int size_d = sizeof(double)*NUM;

class Simulation{
public:
    void sim();
};
#endif

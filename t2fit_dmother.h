#include "tempo2.h"

double t2FitFunc_dmx(pulsar *psr, int ipsr ,double x ,int ipos ,param_label label,int k);

double t2FitFunc_dmsinusoids(pulsar *psr, int ipsr ,double x ,int ipos ,param_label label,int k);
double t2FitFunc_fd(pulsar *psr, int ipsr ,double x ,int ipos ,param_label label,int k);
double t2FitFunc_fddc(pulsar *psr, int ipsr ,double x ,int ipos ,param_label label,int k);


double t2FitFunc_ne_sw(pulsar *psr, int ipsr ,double x ,int ipos ,param_label label,int k);
void t2UpdateFunc_ne_sw(pulsar *psr, int ipsr ,param_label label,int k, double val, double error);



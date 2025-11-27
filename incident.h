#ifndef INCIDENT_H
#define INCIDENT_H

#define MAX_INCIDENTS 100

struct Incident
{
int id;
char type[50];
int severity;
char assigned_to[50];
char status[20];
int age_hours;
};


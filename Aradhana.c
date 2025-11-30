#include <stdio.h>
#include <string.h>
#include "incident.h"

// Update ages of all incidents
void updateAges() {
    int h;
    printf("Add how many hours? ");
    scanf("%d", &h);

    for (int i = 0; i < count; i++) {
        list[i].age_hours += h;
    }

    printf("Ages updated.\n");
}

// Auto-escalate if age > 48
void autoEscalate() {
    for (int i = 0; i < count; i++) {
        if (list[i].age_hours > 48 &&
           (strcmp(list[i].status, "open") == 0 ||
            strcmp(list[i].status, "in-progress") == 0))
        {
            strcpy(list[i].status, "escalated");
        }
    }

    printf("Escalation complete.\n");
}

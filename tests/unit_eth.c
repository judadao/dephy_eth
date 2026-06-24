#include <stdio.h>
#include <string.h>

#include "dephy_eth/eth.h"

int main(void)
{
    dephy_eth_settings_t settings;
    char ip[DEPHY_ETH_HOST_MAX];

    memset(&settings, 0, sizeof(settings));
    snprintf(settings.device_ip, sizeof(settings.device_ip), "192.168.10.20");
    snprintf(settings.service_ip, sizeof(settings.service_ip), "192.168.10.21");

    if (dephy_eth_start(&settings, ip, sizeof(ip)) != 0) {
        return 1;
    }
    if (strcmp(ip, "192.168.10.20") != 0) {
        fprintf(stderr, "unexpected ip: %s\n", ip);
        return 1;
    }
    printf("dephy_eth smoke passed\n");
    return 0;
}

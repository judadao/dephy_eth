#ifndef DEPHY_ETH_ETH_H
#define DEPHY_ETH_ETH_H

#include <stddef.h>
#include <stdint.h>

#ifndef DEPHY_ETH_HOST_MAX
#define DEPHY_ETH_HOST_MAX 64
#endif

typedef struct {
    char device_ip[DEPHY_ETH_HOST_MAX];
    char gateway[DEPHY_ETH_HOST_MAX];
    char netmask[DEPHY_ETH_HOST_MAX];
    char dns[DEPHY_ETH_HOST_MAX];
    uint8_t dhcp_enabled;
} dephy_eth_settings_t;

int dephy_eth_start(const dephy_eth_settings_t *settings,
                    char *ip_addr,
                    size_t ip_addr_cap);

#endif /* DEPHY_ETH_ETH_H */


# dephy_eth

Reusable Ethernet startup helper for Dephy Zephyr products.

The module brings up the first Zephyr Ethernet interface, optionally starts
DHCP, and falls back to a static IPv4 address when DHCP times out.

## API

Include `dephy_eth/eth.h` and call:

```c
dephy_eth_settings_t settings = {
    .device_ip = "192.168.127.4",
    .gateway = "192.168.127.5",
    .netmask = "255.255.0.0",
    .dhcp_enabled = 1,
};
char ip[DEPHY_ETH_HOST_MAX];
dephy_eth_start(&settings, ip, sizeof(ip));
```

On POSIX, this is a lightweight shim for Linux tests.


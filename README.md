# dephy_eth

Reusable Ethernet startup helper for Dephy Zephyr products.

The module brings up the first Zephyr Ethernet interface, optionally starts
DHCP, and falls back to a static IPv4 address when DHCP times out.
Products can also request a secondary service IPv4 address on the same
Ethernet interface for local services such as an MQTT broker.

## API

Include `dephy_eth/eth.h` and call:

```c
dephy_eth_settings_t settings = {
    .device_ip = "192.168.127.4",
    .service_ip = "192.168.127.15",
    .gateway = "192.168.127.5",
    .netmask = "255.255.0.0",
    .dhcp_enabled = 1,
};
char ip[DEPHY_ETH_HOST_MAX];
dephy_eth_start(&settings, ip, sizeof(ip));
```

On POSIX, this is a lightweight shim for Linux tests.

## Systematic Regression Testing

From the workspace root, run the shared pytest regression module:

```sh
../dephy_testkit/.venv/bin/python -m pytest ../dephy_testkit/tests/regression --module dephy_eth
../dephy_testkit/.venv/bin/python -m pytest ../dephy_testkit/tests/regression --module dephy_eth --profile integration
```

The local repo test remains:

```sh
make -f Makefile.linux test
```

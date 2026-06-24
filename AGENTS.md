# Repository Guidelines

## Project Structure

Public APIs live in `include/dephy_eth/`, portable implementation lives in
`src/`, Zephyr module metadata lives in `zephyr/`, Linux tests live in `tests/`,
and helper scripts live in `scripts/`.

## Development Model

Keep Ethernet startup behavior reusable and product-agnostic. Product-specific
network policy belongs in product repositories.

## Commands

- `make -f Makefile.linux`: build the Linux test binary.
- `make -f Makefile.linux test`: run the Linux unit test.
- `scripts/test_eth.sh`: run the module test script.

## Style

Use C11, four-space indentation, snake_case symbols, and small public APIs.

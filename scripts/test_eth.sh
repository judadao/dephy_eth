#!/bin/sh
set -eu

ROOT_DIR=$(CDPATH= cd -- "$(dirname -- "$0")/.." && pwd)
make -C "$ROOT_DIR" -f Makefile.linux test

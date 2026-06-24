if(CONFIG_DEPHY_ETH)
  zephyr_library_named(dephy_eth)
  zephyr_library_sources(../src/eth.c)
  zephyr_library_include_directories(../include)
  zephyr_include_directories(../include)
endif()


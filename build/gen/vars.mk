APP=lib_mos
APP_BIN_LIBS=
APP_CFLAGS=-DMGOS_HAVE_BT_COMMON=1 -DMGOS_HAVE_MONGOOSE=1 -DMGOS_HAVE_PWM=1 -DMGOS_HAVE_WIFI=1 -DMGOS_WIFI_ENABLE_AP_STA=1 -DMG_ENABLE_DNS=1 -DMG_ENABLE_DNS_SERVER=1 -DMG_ENABLE_MQTT=1 -DMG_ENABLE_SNTP=1
APP_CONF_SCHEMA=/home/shivesh/Desktop/mansaa/area51/lib_mos/build/gen/mos_conf_schema.yml
APP_CXXFLAGS=-DMGOS_HAVE_BT_COMMON=1 -DMGOS_HAVE_MONGOOSE=1 -DMGOS_HAVE_PWM=1 -DMGOS_HAVE_WIFI=1 -DMGOS_WIFI_ENABLE_AP_STA=1 -DMG_ENABLE_DNS=1 -DMG_ENABLE_DNS_SERVER=1 -DMG_ENABLE_MQTT=1 -DMG_ENABLE_SNTP=1
APP_FS_FILES=
APP_INCLUDES=/home/shivesh/Desktop/mansaa/area51/lib_mos/deps/mongoose/include /home/shivesh/Desktop/mansaa/area51/lib_mos/deps/bt-common/include /home/shivesh/Desktop/mansaa/area51/lib_mos/deps/bt-common/include/esp32 /home/shivesh/Desktop/mansaa/area51/lib_mos/deps/pwm/include /home/shivesh/Desktop/mansaa/area51/lib_mos/deps/wifi/include /home/shivesh/Desktop/mansaa/area51/lib_mos/deps/wifi/esp32/include
APP_SOURCES=/home/shivesh/Desktop/mansaa/area51/lib_mos/src/lib_mos.c
APP_VERSION=1.0
BUILD_DIR=/home/shivesh/Desktop/mansaa/area51/lib_mos/build/objs
ESP_IDF_EXTRA_COMPONENTS= bt
ESP_IDF_SDKCONFIG_OPTS= CONFIG_BT_ENABLED=y CONFIG_BLUEDROID_ENABLED=y CONFIG_BTC_TASK_STACK_SIZE=6144 CONFIG_BLUEDROID_MEM_DEBUG= CONFIG_CLASSIC_BT_ENABLED= CONFIG_BT_DRAM_RELEASE=y CONFIG_GATTS_ENABLE=y CONFIG_GATTC_ENABLE=y CONFIG_BLE_SMP_ENABLE=y CONFIG_BT_STACK_NO_LOG= CONFIG_BT_ACL_CONNECTIONS=4 CONFIG_BTDM_CONTROLLER_RUN_CPU=0 CONFIG_SMP_ENABLE=y CONFIG_BT_RESERVE_DRAM=0x10000 
FFI_SYMBOLS=
FS_STAGING_DIR=/home/shivesh/Desktop/mansaa/area51/lib_mos/build/fs
FW_DIR=/home/shivesh/Desktop/mansaa/area51/lib_mos/build/fw
GEN_DIR=/home/shivesh/Desktop/mansaa/area51/lib_mos/build/gen
MANIFEST_FINAL=/home/shivesh/Desktop/mansaa/area51/lib_mos/build/gen/mos_final.yml
MGOS_HAVE_BT_COMMON=1
MGOS_HAVE_MONGOOSE=1
MGOS_HAVE_PWM=1
MGOS_HAVE_WIFI=1
MGOS_PATH=/mongoose-os
MGOS_WIFI_ENABLE_AP_STA=1
PLATFORM=esp32
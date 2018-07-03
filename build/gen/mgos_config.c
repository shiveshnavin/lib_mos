/* Generated file - do not edit. */

#include <stddef.h>
#include "mgos_config.h"

const struct mgos_conf_entry mgos_config_schema_[55] = {
  {.type = CONF_TYPE_OBJECT, .key = "", .num_desc = 54},
  {.type = CONF_TYPE_OBJECT, .key = "device", .num_desc = 2},
  {.type = CONF_TYPE_STRING, .key = "id", .offset = offsetof(struct mgos_config, device.id)},
  {.type = CONF_TYPE_STRING, .key = "password", .offset = offsetof(struct mgos_config, device.password)},
  {.type = CONF_TYPE_OBJECT, .key = "debug", .num_desc = 10},
  {.type = CONF_TYPE_STRING, .key = "udp_log_addr", .offset = offsetof(struct mgos_config, debug.udp_log_addr)},
  {.type = CONF_TYPE_INT, .key = "level", .offset = offsetof(struct mgos_config, debug.level)},
  {.type = CONF_TYPE_STRING, .key = "filter", .offset = offsetof(struct mgos_config, debug.filter)},
  {.type = CONF_TYPE_INT, .key = "stdout_uart", .offset = offsetof(struct mgos_config, debug.stdout_uart)},
  {.type = CONF_TYPE_INT, .key = "stderr_uart", .offset = offsetof(struct mgos_config, debug.stderr_uart)},
  {.type = CONF_TYPE_INT, .key = "factory_reset_gpio", .offset = offsetof(struct mgos_config, debug.factory_reset_gpio)},
  {.type = CONF_TYPE_STRING, .key = "mg_mgr_hexdump_file", .offset = offsetof(struct mgos_config, debug.mg_mgr_hexdump_file)},
  {.type = CONF_TYPE_INT, .key = "mbedtls_level", .offset = offsetof(struct mgos_config, debug.mbedtls_level)},
  {.type = CONF_TYPE_STRING, .key = "stdout_topic", .offset = offsetof(struct mgos_config, debug.stdout_topic)},
  {.type = CONF_TYPE_STRING, .key = "stderr_topic", .offset = offsetof(struct mgos_config, debug.stderr_topic)},
  {.type = CONF_TYPE_OBJECT, .key = "sys", .num_desc = 9},
  {.type = CONF_TYPE_OBJECT, .key = "mount", .num_desc = 5},
  {.type = CONF_TYPE_STRING, .key = "path", .offset = offsetof(struct mgos_config, sys.mount.path)},
  {.type = CONF_TYPE_STRING, .key = "dev_type", .offset = offsetof(struct mgos_config, sys.mount.dev_type)},
  {.type = CONF_TYPE_STRING, .key = "dev_opts", .offset = offsetof(struct mgos_config, sys.mount.dev_opts)},
  {.type = CONF_TYPE_STRING, .key = "fs_type", .offset = offsetof(struct mgos_config, sys.mount.fs_type)},
  {.type = CONF_TYPE_STRING, .key = "fs_opts", .offset = offsetof(struct mgos_config, sys.mount.fs_opts)},
  {.type = CONF_TYPE_STRING, .key = "tz_spec", .offset = offsetof(struct mgos_config, sys.tz_spec)},
  {.type = CONF_TYPE_INT, .key = "wdt_timeout", .offset = offsetof(struct mgos_config, sys.wdt_timeout)},
  {.type = CONF_TYPE_STRING, .key = "pref_ota_lib", .offset = offsetof(struct mgos_config, sys.pref_ota_lib)},
  {.type = CONF_TYPE_STRING, .key = "conf_acl", .offset = offsetof(struct mgos_config, conf_acl)},
  {.type = CONF_TYPE_OBJECT, .key = "mqtt", .num_desc = 19},
  {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, mqtt.enable)},
  {.type = CONF_TYPE_STRING, .key = "server", .offset = offsetof(struct mgos_config, mqtt.server)},
  {.type = CONF_TYPE_STRING, .key = "client_id", .offset = offsetof(struct mgos_config, mqtt.client_id)},
  {.type = CONF_TYPE_STRING, .key = "user", .offset = offsetof(struct mgos_config, mqtt.user)},
  {.type = CONF_TYPE_STRING, .key = "pass", .offset = offsetof(struct mgos_config, mqtt.pass)},
  {.type = CONF_TYPE_DOUBLE, .key = "reconnect_timeout_min", .offset = offsetof(struct mgos_config, mqtt.reconnect_timeout_min)},
  {.type = CONF_TYPE_DOUBLE, .key = "reconnect_timeout_max", .offset = offsetof(struct mgos_config, mqtt.reconnect_timeout_max)},
  {.type = CONF_TYPE_STRING, .key = "ssl_cert", .offset = offsetof(struct mgos_config, mqtt.ssl_cert)},
  {.type = CONF_TYPE_STRING, .key = "ssl_key", .offset = offsetof(struct mgos_config, mqtt.ssl_key)},
  {.type = CONF_TYPE_STRING, .key = "ssl_ca_cert", .offset = offsetof(struct mgos_config, mqtt.ssl_ca_cert)},
  {.type = CONF_TYPE_STRING, .key = "ssl_cipher_suites", .offset = offsetof(struct mgos_config, mqtt.ssl_cipher_suites)},
  {.type = CONF_TYPE_STRING, .key = "ssl_psk_identity", .offset = offsetof(struct mgos_config, mqtt.ssl_psk_identity)},
  {.type = CONF_TYPE_STRING, .key = "ssl_psk_key", .offset = offsetof(struct mgos_config, mqtt.ssl_psk_key)},
  {.type = CONF_TYPE_BOOL, .key = "clean_session", .offset = offsetof(struct mgos_config, mqtt.clean_session)},
  {.type = CONF_TYPE_INT, .key = "keep_alive", .offset = offsetof(struct mgos_config, mqtt.keep_alive)},
  {.type = CONF_TYPE_STRING, .key = "will_topic", .offset = offsetof(struct mgos_config, mqtt.will_topic)},
  {.type = CONF_TYPE_STRING, .key = "will_message", .offset = offsetof(struct mgos_config, mqtt.will_message)},
  {.type = CONF_TYPE_INT, .key = "max_qos", .offset = offsetof(struct mgos_config, mqtt.max_qos)},
  {.type = CONF_TYPE_INT, .key = "recv_mbuf_limit", .offset = offsetof(struct mgos_config, mqtt.recv_mbuf_limit)},
  {.type = CONF_TYPE_OBJECT, .key = "shadow", .num_desc = 2},
  {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, shadow.enable)},
  {.type = CONF_TYPE_STRING, .key = "lib", .offset = offsetof(struct mgos_config, shadow.lib)},
  {.type = CONF_TYPE_OBJECT, .key = "aws", .num_desc = 5},
  {.type = CONF_TYPE_STRING, .key = "thing_name", .offset = offsetof(struct mgos_config, aws.thing_name)},
  {.type = CONF_TYPE_OBJECT, .key = "greengrass", .num_desc = 3},
  {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, aws.greengrass.enable)},
  {.type = CONF_TYPE_INT, .key = "reconnect_timeout_min", .offset = offsetof(struct mgos_config, aws.greengrass.reconnect_timeout_min)},
  {.type = CONF_TYPE_INT, .key = "reconnect_timeout_max", .offset = offsetof(struct mgos_config, aws.greengrass.reconnect_timeout_max)},
};

const struct mgos_conf_entry *mgos_config_schema() {
  return mgos_config_schema_;
}

/* Global instance */
struct mgos_config mgos_sys_config;

/* Getters {{{ */
const struct mgos_config_device *mgos_config_get_device(struct mgos_config *cfg) {
  return &cfg->device;
}
const char *mgos_config_get_device_id(struct mgos_config *cfg) {
  return cfg->device.id;
}
const char *mgos_config_get_device_password(struct mgos_config *cfg) {
  return cfg->device.password;
}
const struct mgos_config_debug *mgos_config_get_debug(struct mgos_config *cfg) {
  return &cfg->debug;
}
const char *mgos_config_get_debug_udp_log_addr(struct mgos_config *cfg) {
  return cfg->debug.udp_log_addr;
}
int         mgos_config_get_debug_level(struct mgos_config *cfg) {
  return cfg->debug.level;
}
const char *mgos_config_get_debug_filter(struct mgos_config *cfg) {
  return cfg->debug.filter;
}
int         mgos_config_get_debug_stdout_uart(struct mgos_config *cfg) {
  return cfg->debug.stdout_uart;
}
int         mgos_config_get_debug_stderr_uart(struct mgos_config *cfg) {
  return cfg->debug.stderr_uart;
}
int         mgos_config_get_debug_factory_reset_gpio(struct mgos_config *cfg) {
  return cfg->debug.factory_reset_gpio;
}
const char *mgos_config_get_debug_mg_mgr_hexdump_file(struct mgos_config *cfg) {
  return cfg->debug.mg_mgr_hexdump_file;
}
int         mgos_config_get_debug_mbedtls_level(struct mgos_config *cfg) {
  return cfg->debug.mbedtls_level;
}
const char *mgos_config_get_debug_stdout_topic(struct mgos_config *cfg) {
  return cfg->debug.stdout_topic;
}
const char *mgos_config_get_debug_stderr_topic(struct mgos_config *cfg) {
  return cfg->debug.stderr_topic;
}
const struct mgos_config_sys *mgos_config_get_sys(struct mgos_config *cfg) {
  return &cfg->sys;
}
const struct mgos_config_sys_mount *mgos_config_get_sys_mount(struct mgos_config *cfg) {
  return &cfg->sys.mount;
}
const char *mgos_config_get_sys_mount_path(struct mgos_config *cfg) {
  return cfg->sys.mount.path;
}
const char *mgos_config_get_sys_mount_dev_type(struct mgos_config *cfg) {
  return cfg->sys.mount.dev_type;
}
const char *mgos_config_get_sys_mount_dev_opts(struct mgos_config *cfg) {
  return cfg->sys.mount.dev_opts;
}
const char *mgos_config_get_sys_mount_fs_type(struct mgos_config *cfg) {
  return cfg->sys.mount.fs_type;
}
const char *mgos_config_get_sys_mount_fs_opts(struct mgos_config *cfg) {
  return cfg->sys.mount.fs_opts;
}
const char *mgos_config_get_sys_tz_spec(struct mgos_config *cfg) {
  return cfg->sys.tz_spec;
}
int         mgos_config_get_sys_wdt_timeout(struct mgos_config *cfg) {
  return cfg->sys.wdt_timeout;
}
const char *mgos_config_get_sys_pref_ota_lib(struct mgos_config *cfg) {
  return cfg->sys.pref_ota_lib;
}
const char *mgos_config_get_conf_acl(struct mgos_config *cfg) {
  return cfg->conf_acl;
}
const struct mgos_config_mqtt *mgos_config_get_mqtt(struct mgos_config *cfg) {
  return &cfg->mqtt;
}
int         mgos_config_get_mqtt_enable(struct mgos_config *cfg) {
  return cfg->mqtt.enable;
}
const char *mgos_config_get_mqtt_server(struct mgos_config *cfg) {
  return cfg->mqtt.server;
}
const char *mgos_config_get_mqtt_client_id(struct mgos_config *cfg) {
  return cfg->mqtt.client_id;
}
const char *mgos_config_get_mqtt_user(struct mgos_config *cfg) {
  return cfg->mqtt.user;
}
const char *mgos_config_get_mqtt_pass(struct mgos_config *cfg) {
  return cfg->mqtt.pass;
}
double      mgos_config_get_mqtt_reconnect_timeout_min(struct mgos_config *cfg) {
  return cfg->mqtt.reconnect_timeout_min;
}
double      mgos_config_get_mqtt_reconnect_timeout_max(struct mgos_config *cfg) {
  return cfg->mqtt.reconnect_timeout_max;
}
const char *mgos_config_get_mqtt_ssl_cert(struct mgos_config *cfg) {
  return cfg->mqtt.ssl_cert;
}
const char *mgos_config_get_mqtt_ssl_key(struct mgos_config *cfg) {
  return cfg->mqtt.ssl_key;
}
const char *mgos_config_get_mqtt_ssl_ca_cert(struct mgos_config *cfg) {
  return cfg->mqtt.ssl_ca_cert;
}
const char *mgos_config_get_mqtt_ssl_cipher_suites(struct mgos_config *cfg) {
  return cfg->mqtt.ssl_cipher_suites;
}
const char *mgos_config_get_mqtt_ssl_psk_identity(struct mgos_config *cfg) {
  return cfg->mqtt.ssl_psk_identity;
}
const char *mgos_config_get_mqtt_ssl_psk_key(struct mgos_config *cfg) {
  return cfg->mqtt.ssl_psk_key;
}
int         mgos_config_get_mqtt_clean_session(struct mgos_config *cfg) {
  return cfg->mqtt.clean_session;
}
int         mgos_config_get_mqtt_keep_alive(struct mgos_config *cfg) {
  return cfg->mqtt.keep_alive;
}
const char *mgos_config_get_mqtt_will_topic(struct mgos_config *cfg) {
  return cfg->mqtt.will_topic;
}
const char *mgos_config_get_mqtt_will_message(struct mgos_config *cfg) {
  return cfg->mqtt.will_message;
}
int         mgos_config_get_mqtt_max_qos(struct mgos_config *cfg) {
  return cfg->mqtt.max_qos;
}
int         mgos_config_get_mqtt_recv_mbuf_limit(struct mgos_config *cfg) {
  return cfg->mqtt.recv_mbuf_limit;
}
const struct mgos_config_shadow *mgos_config_get_shadow(struct mgos_config *cfg) {
  return &cfg->shadow;
}
int         mgos_config_get_shadow_enable(struct mgos_config *cfg) {
  return cfg->shadow.enable;
}
const char *mgos_config_get_shadow_lib(struct mgos_config *cfg) {
  return cfg->shadow.lib;
}
const struct mgos_config_aws *mgos_config_get_aws(struct mgos_config *cfg) {
  return &cfg->aws;
}
const char *mgos_config_get_aws_thing_name(struct mgos_config *cfg) {
  return cfg->aws.thing_name;
}
const struct mgos_config_aws_greengrass *mgos_config_get_aws_greengrass(struct mgos_config *cfg) {
  return &cfg->aws.greengrass;
}
int         mgos_config_get_aws_greengrass_enable(struct mgos_config *cfg) {
  return cfg->aws.greengrass.enable;
}
int         mgos_config_get_aws_greengrass_reconnect_timeout_min(struct mgos_config *cfg) {
  return cfg->aws.greengrass.reconnect_timeout_min;
}
int         mgos_config_get_aws_greengrass_reconnect_timeout_max(struct mgos_config *cfg) {
  return cfg->aws.greengrass.reconnect_timeout_max;
}
/* }}} */

/* Setters {{{ */
void mgos_config_set_device_id(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->device.id, val);
}
void mgos_config_set_device_password(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->device.password, val);
}
void mgos_config_set_debug_udp_log_addr(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->debug.udp_log_addr, val);
}
void mgos_config_set_debug_level(struct mgos_config *cfg, int         val) {
  cfg->debug.level = val;
}
void mgos_config_set_debug_filter(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->debug.filter, val);
}
void mgos_config_set_debug_stdout_uart(struct mgos_config *cfg, int         val) {
  cfg->debug.stdout_uart = val;
}
void mgos_config_set_debug_stderr_uart(struct mgos_config *cfg, int         val) {
  cfg->debug.stderr_uart = val;
}
void mgos_config_set_debug_factory_reset_gpio(struct mgos_config *cfg, int         val) {
  cfg->debug.factory_reset_gpio = val;
}
void mgos_config_set_debug_mg_mgr_hexdump_file(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->debug.mg_mgr_hexdump_file, val);
}
void mgos_config_set_debug_mbedtls_level(struct mgos_config *cfg, int         val) {
  cfg->debug.mbedtls_level = val;
}
void mgos_config_set_debug_stdout_topic(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->debug.stdout_topic, val);
}
void mgos_config_set_debug_stderr_topic(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->debug.stderr_topic, val);
}
void mgos_config_set_sys_mount_path(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->sys.mount.path, val);
}
void mgos_config_set_sys_mount_dev_type(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->sys.mount.dev_type, val);
}
void mgos_config_set_sys_mount_dev_opts(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->sys.mount.dev_opts, val);
}
void mgos_config_set_sys_mount_fs_type(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->sys.mount.fs_type, val);
}
void mgos_config_set_sys_mount_fs_opts(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->sys.mount.fs_opts, val);
}
void mgos_config_set_sys_tz_spec(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->sys.tz_spec, val);
}
void mgos_config_set_sys_wdt_timeout(struct mgos_config *cfg, int         val) {
  cfg->sys.wdt_timeout = val;
}
void mgos_config_set_sys_pref_ota_lib(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->sys.pref_ota_lib, val);
}
void mgos_config_set_conf_acl(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->conf_acl, val);
}
void mgos_config_set_mqtt_enable(struct mgos_config *cfg, int         val) {
  cfg->mqtt.enable = val;
}
void mgos_config_set_mqtt_server(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->mqtt.server, val);
}
void mgos_config_set_mqtt_client_id(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->mqtt.client_id, val);
}
void mgos_config_set_mqtt_user(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->mqtt.user, val);
}
void mgos_config_set_mqtt_pass(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->mqtt.pass, val);
}
void mgos_config_set_mqtt_reconnect_timeout_min(struct mgos_config *cfg, double      val) {
  cfg->mqtt.reconnect_timeout_min = val;
}
void mgos_config_set_mqtt_reconnect_timeout_max(struct mgos_config *cfg, double      val) {
  cfg->mqtt.reconnect_timeout_max = val;
}
void mgos_config_set_mqtt_ssl_cert(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->mqtt.ssl_cert, val);
}
void mgos_config_set_mqtt_ssl_key(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->mqtt.ssl_key, val);
}
void mgos_config_set_mqtt_ssl_ca_cert(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->mqtt.ssl_ca_cert, val);
}
void mgos_config_set_mqtt_ssl_cipher_suites(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->mqtt.ssl_cipher_suites, val);
}
void mgos_config_set_mqtt_ssl_psk_identity(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->mqtt.ssl_psk_identity, val);
}
void mgos_config_set_mqtt_ssl_psk_key(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->mqtt.ssl_psk_key, val);
}
void mgos_config_set_mqtt_clean_session(struct mgos_config *cfg, int         val) {
  cfg->mqtt.clean_session = val;
}
void mgos_config_set_mqtt_keep_alive(struct mgos_config *cfg, int         val) {
  cfg->mqtt.keep_alive = val;
}
void mgos_config_set_mqtt_will_topic(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->mqtt.will_topic, val);
}
void mgos_config_set_mqtt_will_message(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->mqtt.will_message, val);
}
void mgos_config_set_mqtt_max_qos(struct mgos_config *cfg, int         val) {
  cfg->mqtt.max_qos = val;
}
void mgos_config_set_mqtt_recv_mbuf_limit(struct mgos_config *cfg, int         val) {
  cfg->mqtt.recv_mbuf_limit = val;
}
void mgos_config_set_shadow_enable(struct mgos_config *cfg, int         val) {
  cfg->shadow.enable = val;
}
void mgos_config_set_shadow_lib(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->shadow.lib, val);
}
void mgos_config_set_aws_thing_name(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->aws.thing_name, val);
}
void mgos_config_set_aws_greengrass_enable(struct mgos_config *cfg, int         val) {
  cfg->aws.greengrass.enable = val;
}
void mgos_config_set_aws_greengrass_reconnect_timeout_min(struct mgos_config *cfg, int         val) {
  cfg->aws.greengrass.reconnect_timeout_min = val;
}
void mgos_config_set_aws_greengrass_reconnect_timeout_max(struct mgos_config *cfg, int         val) {
  cfg->aws.greengrass.reconnect_timeout_max = val;
}
/* }}} */

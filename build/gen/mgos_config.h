/*
 * Generated file - do not edit.
 * Command: /mongoose-os/fw/tools/gen_sys_config.py --c_name=mgos_config --c_global_name=mgos_sys_config --dest_dir=/fwbuild-volumes/2.3/apps/lib_mos/esp32/build_contexts/build_ctx_050890222/build/gen/ /mongoose-os/fw/src/mgos_debug_udp_config.yaml /mongoose-os/fw/src/mgos_sys_config.yaml /mongoose-os/fw/platforms/esp32/src/esp32_sys_config.yaml /fwbuild-volumes/2.3/apps/lib_mos/esp32/build_contexts/build_ctx_050890222/build/gen/mos_conf_schema.yml
 */

#ifndef MGOS_CONFIG_H_
#define MGOS_CONFIG_H_

#include "mgos_config_util.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

struct mgos_config_device {
  char *id;
  char *password;
};

struct mgos_config_debug {
  char *udp_log_addr;
  int level;
  char *filter;
  int stdout_uart;
  int stderr_uart;
  int factory_reset_gpio;
  char *mg_mgr_hexdump_file;
  int mbedtls_level;
  char *stdout_topic;
  char *stderr_topic;
};

struct mgos_config_sys_mount {
  char *path;
  char *dev_type;
  char *dev_opts;
  char *fs_type;
  char *fs_opts;
};

struct mgos_config_sys {
  struct mgos_config_sys_mount mount;
  char *tz_spec;
  int wdt_timeout;
  char *pref_ota_lib;
};

struct mgos_config_mqtt {
  int enable;
  char *server;
  char *client_id;
  char *user;
  char *pass;
  double reconnect_timeout_min;
  double reconnect_timeout_max;
  char *ssl_cert;
  char *ssl_key;
  char *ssl_ca_cert;
  char *ssl_cipher_suites;
  char *ssl_psk_identity;
  char *ssl_psk_key;
  int clean_session;
  int keep_alive;
  char *will_topic;
  char *will_message;
  int max_qos;
  int recv_mbuf_limit;
};

struct mgos_config_shadow {
  int enable;
  char *lib;
};

struct mgos_config_aws_greengrass {
  int enable;
  int reconnect_timeout_min;
  int reconnect_timeout_max;
};

struct mgos_config_aws {
  char *thing_name;
  struct mgos_config_aws_greengrass greengrass;
};

struct mgos_config {
  struct mgos_config_device device;
  struct mgos_config_debug debug;
  struct mgos_config_sys sys;
  char *conf_acl;
  struct mgos_config_mqtt mqtt;
  struct mgos_config_shadow shadow;
  struct mgos_config_aws aws;
};


const struct mgos_conf_entry *mgos_config_schema();

/* Parametrized accessor prototypes {{{ */
const struct mgos_config_device *mgos_config_get_device(struct mgos_config *cfg);
const char *mgos_config_get_device_id(struct mgos_config *cfg);
const char *mgos_config_get_device_password(struct mgos_config *cfg);
const struct mgos_config_debug *mgos_config_get_debug(struct mgos_config *cfg);
const char *mgos_config_get_debug_udp_log_addr(struct mgos_config *cfg);
int         mgos_config_get_debug_level(struct mgos_config *cfg);
const char *mgos_config_get_debug_filter(struct mgos_config *cfg);
int         mgos_config_get_debug_stdout_uart(struct mgos_config *cfg);
int         mgos_config_get_debug_stderr_uart(struct mgos_config *cfg);
int         mgos_config_get_debug_factory_reset_gpio(struct mgos_config *cfg);
const char *mgos_config_get_debug_mg_mgr_hexdump_file(struct mgos_config *cfg);
int         mgos_config_get_debug_mbedtls_level(struct mgos_config *cfg);
const char *mgos_config_get_debug_stdout_topic(struct mgos_config *cfg);
const char *mgos_config_get_debug_stderr_topic(struct mgos_config *cfg);
const struct mgos_config_sys *mgos_config_get_sys(struct mgos_config *cfg);
const struct mgos_config_sys_mount *mgos_config_get_sys_mount(struct mgos_config *cfg);
const char *mgos_config_get_sys_mount_path(struct mgos_config *cfg);
const char *mgos_config_get_sys_mount_dev_type(struct mgos_config *cfg);
const char *mgos_config_get_sys_mount_dev_opts(struct mgos_config *cfg);
const char *mgos_config_get_sys_mount_fs_type(struct mgos_config *cfg);
const char *mgos_config_get_sys_mount_fs_opts(struct mgos_config *cfg);
const char *mgos_config_get_sys_tz_spec(struct mgos_config *cfg);
int         mgos_config_get_sys_wdt_timeout(struct mgos_config *cfg);
const char *mgos_config_get_sys_pref_ota_lib(struct mgos_config *cfg);
const char *mgos_config_get_conf_acl(struct mgos_config *cfg);
const struct mgos_config_mqtt *mgos_config_get_mqtt(struct mgos_config *cfg);
int         mgos_config_get_mqtt_enable(struct mgos_config *cfg);
const char *mgos_config_get_mqtt_server(struct mgos_config *cfg);
const char *mgos_config_get_mqtt_client_id(struct mgos_config *cfg);
const char *mgos_config_get_mqtt_user(struct mgos_config *cfg);
const char *mgos_config_get_mqtt_pass(struct mgos_config *cfg);
double      mgos_config_get_mqtt_reconnect_timeout_min(struct mgos_config *cfg);
double      mgos_config_get_mqtt_reconnect_timeout_max(struct mgos_config *cfg);
const char *mgos_config_get_mqtt_ssl_cert(struct mgos_config *cfg);
const char *mgos_config_get_mqtt_ssl_key(struct mgos_config *cfg);
const char *mgos_config_get_mqtt_ssl_ca_cert(struct mgos_config *cfg);
const char *mgos_config_get_mqtt_ssl_cipher_suites(struct mgos_config *cfg);
const char *mgos_config_get_mqtt_ssl_psk_identity(struct mgos_config *cfg);
const char *mgos_config_get_mqtt_ssl_psk_key(struct mgos_config *cfg);
int         mgos_config_get_mqtt_clean_session(struct mgos_config *cfg);
int         mgos_config_get_mqtt_keep_alive(struct mgos_config *cfg);
const char *mgos_config_get_mqtt_will_topic(struct mgos_config *cfg);
const char *mgos_config_get_mqtt_will_message(struct mgos_config *cfg);
int         mgos_config_get_mqtt_max_qos(struct mgos_config *cfg);
int         mgos_config_get_mqtt_recv_mbuf_limit(struct mgos_config *cfg);
const struct mgos_config_shadow *mgos_config_get_shadow(struct mgos_config *cfg);
int         mgos_config_get_shadow_enable(struct mgos_config *cfg);
const char *mgos_config_get_shadow_lib(struct mgos_config *cfg);
const struct mgos_config_aws *mgos_config_get_aws(struct mgos_config *cfg);
const char *mgos_config_get_aws_thing_name(struct mgos_config *cfg);
const struct mgos_config_aws_greengrass *mgos_config_get_aws_greengrass(struct mgos_config *cfg);
int         mgos_config_get_aws_greengrass_enable(struct mgos_config *cfg);
int         mgos_config_get_aws_greengrass_reconnect_timeout_min(struct mgos_config *cfg);
int         mgos_config_get_aws_greengrass_reconnect_timeout_max(struct mgos_config *cfg);

void mgos_config_set_device_id(struct mgos_config *cfg, const char *val);
void mgos_config_set_device_password(struct mgos_config *cfg, const char *val);
void mgos_config_set_debug_udp_log_addr(struct mgos_config *cfg, const char *val);
void mgos_config_set_debug_level(struct mgos_config *cfg, int         val);
void mgos_config_set_debug_filter(struct mgos_config *cfg, const char *val);
void mgos_config_set_debug_stdout_uart(struct mgos_config *cfg, int         val);
void mgos_config_set_debug_stderr_uart(struct mgos_config *cfg, int         val);
void mgos_config_set_debug_factory_reset_gpio(struct mgos_config *cfg, int         val);
void mgos_config_set_debug_mg_mgr_hexdump_file(struct mgos_config *cfg, const char *val);
void mgos_config_set_debug_mbedtls_level(struct mgos_config *cfg, int         val);
void mgos_config_set_debug_stdout_topic(struct mgos_config *cfg, const char *val);
void mgos_config_set_debug_stderr_topic(struct mgos_config *cfg, const char *val);
void mgos_config_set_sys_mount_path(struct mgos_config *cfg, const char *val);
void mgos_config_set_sys_mount_dev_type(struct mgos_config *cfg, const char *val);
void mgos_config_set_sys_mount_dev_opts(struct mgos_config *cfg, const char *val);
void mgos_config_set_sys_mount_fs_type(struct mgos_config *cfg, const char *val);
void mgos_config_set_sys_mount_fs_opts(struct mgos_config *cfg, const char *val);
void mgos_config_set_sys_tz_spec(struct mgos_config *cfg, const char *val);
void mgos_config_set_sys_wdt_timeout(struct mgos_config *cfg, int         val);
void mgos_config_set_sys_pref_ota_lib(struct mgos_config *cfg, const char *val);
void mgos_config_set_conf_acl(struct mgos_config *cfg, const char *val);
void mgos_config_set_mqtt_enable(struct mgos_config *cfg, int         val);
void mgos_config_set_mqtt_server(struct mgos_config *cfg, const char *val);
void mgos_config_set_mqtt_client_id(struct mgos_config *cfg, const char *val);
void mgos_config_set_mqtt_user(struct mgos_config *cfg, const char *val);
void mgos_config_set_mqtt_pass(struct mgos_config *cfg, const char *val);
void mgos_config_set_mqtt_reconnect_timeout_min(struct mgos_config *cfg, double      val);
void mgos_config_set_mqtt_reconnect_timeout_max(struct mgos_config *cfg, double      val);
void mgos_config_set_mqtt_ssl_cert(struct mgos_config *cfg, const char *val);
void mgos_config_set_mqtt_ssl_key(struct mgos_config *cfg, const char *val);
void mgos_config_set_mqtt_ssl_ca_cert(struct mgos_config *cfg, const char *val);
void mgos_config_set_mqtt_ssl_cipher_suites(struct mgos_config *cfg, const char *val);
void mgos_config_set_mqtt_ssl_psk_identity(struct mgos_config *cfg, const char *val);
void mgos_config_set_mqtt_ssl_psk_key(struct mgos_config *cfg, const char *val);
void mgos_config_set_mqtt_clean_session(struct mgos_config *cfg, int         val);
void mgos_config_set_mqtt_keep_alive(struct mgos_config *cfg, int         val);
void mgos_config_set_mqtt_will_topic(struct mgos_config *cfg, const char *val);
void mgos_config_set_mqtt_will_message(struct mgos_config *cfg, const char *val);
void mgos_config_set_mqtt_max_qos(struct mgos_config *cfg, int         val);
void mgos_config_set_mqtt_recv_mbuf_limit(struct mgos_config *cfg, int         val);
void mgos_config_set_shadow_enable(struct mgos_config *cfg, int         val);
void mgos_config_set_shadow_lib(struct mgos_config *cfg, const char *val);
void mgos_config_set_aws_thing_name(struct mgos_config *cfg, const char *val);
void mgos_config_set_aws_greengrass_enable(struct mgos_config *cfg, int         val);
void mgos_config_set_aws_greengrass_reconnect_timeout_min(struct mgos_config *cfg, int         val);
void mgos_config_set_aws_greengrass_reconnect_timeout_max(struct mgos_config *cfg, int         val);
/* }}} */

extern struct mgos_config mgos_sys_config;

static inline bool mgos_sys_config_get(const struct mg_str key, struct mg_str *value) { return mgos_config_get(key, value, &mgos_sys_config, mgos_config_schema()); }
static inline bool mgos_sys_config_set(const struct mg_str key, const struct mg_str value, bool free_strings) { return mgos_config_set(key, value, &mgos_sys_config, mgos_config_schema(), free_strings); }

static inline const struct mgos_config_device *mgos_sys_config_get_device(void) { return mgos_config_get_device(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_device_id(void) { return mgos_config_get_device_id(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_device_password(void) { return mgos_config_get_device_password(&mgos_sys_config); }
static inline const struct mgos_config_debug *mgos_sys_config_get_debug(void) { return mgos_config_get_debug(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_debug_udp_log_addr(void) { return mgos_config_get_debug_udp_log_addr(&mgos_sys_config); }
static inline int         mgos_sys_config_get_debug_level(void) { return mgos_config_get_debug_level(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_debug_filter(void) { return mgos_config_get_debug_filter(&mgos_sys_config); }
static inline int         mgos_sys_config_get_debug_stdout_uart(void) { return mgos_config_get_debug_stdout_uart(&mgos_sys_config); }
static inline int         mgos_sys_config_get_debug_stderr_uart(void) { return mgos_config_get_debug_stderr_uart(&mgos_sys_config); }
static inline int         mgos_sys_config_get_debug_factory_reset_gpio(void) { return mgos_config_get_debug_factory_reset_gpio(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_debug_mg_mgr_hexdump_file(void) { return mgos_config_get_debug_mg_mgr_hexdump_file(&mgos_sys_config); }
static inline int         mgos_sys_config_get_debug_mbedtls_level(void) { return mgos_config_get_debug_mbedtls_level(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_debug_stdout_topic(void) { return mgos_config_get_debug_stdout_topic(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_debug_stderr_topic(void) { return mgos_config_get_debug_stderr_topic(&mgos_sys_config); }
static inline const struct mgos_config_sys *mgos_sys_config_get_sys(void) { return mgos_config_get_sys(&mgos_sys_config); }
static inline const struct mgos_config_sys_mount *mgos_sys_config_get_sys_mount(void) { return mgos_config_get_sys_mount(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_sys_mount_path(void) { return mgos_config_get_sys_mount_path(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_sys_mount_dev_type(void) { return mgos_config_get_sys_mount_dev_type(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_sys_mount_dev_opts(void) { return mgos_config_get_sys_mount_dev_opts(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_sys_mount_fs_type(void) { return mgos_config_get_sys_mount_fs_type(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_sys_mount_fs_opts(void) { return mgos_config_get_sys_mount_fs_opts(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_sys_tz_spec(void) { return mgos_config_get_sys_tz_spec(&mgos_sys_config); }
static inline int         mgos_sys_config_get_sys_wdt_timeout(void) { return mgos_config_get_sys_wdt_timeout(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_sys_pref_ota_lib(void) { return mgos_config_get_sys_pref_ota_lib(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_conf_acl(void) { return mgos_config_get_conf_acl(&mgos_sys_config); }
static inline const struct mgos_config_mqtt *mgos_sys_config_get_mqtt(void) { return mgos_config_get_mqtt(&mgos_sys_config); }
static inline int         mgos_sys_config_get_mqtt_enable(void) { return mgos_config_get_mqtt_enable(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_mqtt_server(void) { return mgos_config_get_mqtt_server(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_mqtt_client_id(void) { return mgos_config_get_mqtt_client_id(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_mqtt_user(void) { return mgos_config_get_mqtt_user(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_mqtt_pass(void) { return mgos_config_get_mqtt_pass(&mgos_sys_config); }
static inline double      mgos_sys_config_get_mqtt_reconnect_timeout_min(void) { return mgos_config_get_mqtt_reconnect_timeout_min(&mgos_sys_config); }
static inline double      mgos_sys_config_get_mqtt_reconnect_timeout_max(void) { return mgos_config_get_mqtt_reconnect_timeout_max(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_mqtt_ssl_cert(void) { return mgos_config_get_mqtt_ssl_cert(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_mqtt_ssl_key(void) { return mgos_config_get_mqtt_ssl_key(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_mqtt_ssl_ca_cert(void) { return mgos_config_get_mqtt_ssl_ca_cert(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_mqtt_ssl_cipher_suites(void) { return mgos_config_get_mqtt_ssl_cipher_suites(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_mqtt_ssl_psk_identity(void) { return mgos_config_get_mqtt_ssl_psk_identity(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_mqtt_ssl_psk_key(void) { return mgos_config_get_mqtt_ssl_psk_key(&mgos_sys_config); }
static inline int         mgos_sys_config_get_mqtt_clean_session(void) { return mgos_config_get_mqtt_clean_session(&mgos_sys_config); }
static inline int         mgos_sys_config_get_mqtt_keep_alive(void) { return mgos_config_get_mqtt_keep_alive(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_mqtt_will_topic(void) { return mgos_config_get_mqtt_will_topic(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_mqtt_will_message(void) { return mgos_config_get_mqtt_will_message(&mgos_sys_config); }
static inline int         mgos_sys_config_get_mqtt_max_qos(void) { return mgos_config_get_mqtt_max_qos(&mgos_sys_config); }
static inline int         mgos_sys_config_get_mqtt_recv_mbuf_limit(void) { return mgos_config_get_mqtt_recv_mbuf_limit(&mgos_sys_config); }
static inline const struct mgos_config_shadow *mgos_sys_config_get_shadow(void) { return mgos_config_get_shadow(&mgos_sys_config); }
static inline int         mgos_sys_config_get_shadow_enable(void) { return mgos_config_get_shadow_enable(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_shadow_lib(void) { return mgos_config_get_shadow_lib(&mgos_sys_config); }
static inline const struct mgos_config_aws *mgos_sys_config_get_aws(void) { return mgos_config_get_aws(&mgos_sys_config); }
static inline const char *mgos_sys_config_get_aws_thing_name(void) { return mgos_config_get_aws_thing_name(&mgos_sys_config); }
static inline const struct mgos_config_aws_greengrass *mgos_sys_config_get_aws_greengrass(void) { return mgos_config_get_aws_greengrass(&mgos_sys_config); }
static inline int         mgos_sys_config_get_aws_greengrass_enable(void) { return mgos_config_get_aws_greengrass_enable(&mgos_sys_config); }
static inline int         mgos_sys_config_get_aws_greengrass_reconnect_timeout_min(void) { return mgos_config_get_aws_greengrass_reconnect_timeout_min(&mgos_sys_config); }
static inline int         mgos_sys_config_get_aws_greengrass_reconnect_timeout_max(void) { return mgos_config_get_aws_greengrass_reconnect_timeout_max(&mgos_sys_config); }

static inline void mgos_sys_config_set_device_id(const char *val) { mgos_config_set_device_id(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_device_password(const char *val) { mgos_config_set_device_password(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_debug_udp_log_addr(const char *val) { mgos_config_set_debug_udp_log_addr(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_debug_level(int         val) { mgos_config_set_debug_level(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_debug_filter(const char *val) { mgos_config_set_debug_filter(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_debug_stdout_uart(int         val) { mgos_config_set_debug_stdout_uart(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_debug_stderr_uart(int         val) { mgos_config_set_debug_stderr_uart(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_debug_factory_reset_gpio(int         val) { mgos_config_set_debug_factory_reset_gpio(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_debug_mg_mgr_hexdump_file(const char *val) { mgos_config_set_debug_mg_mgr_hexdump_file(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_debug_mbedtls_level(int         val) { mgos_config_set_debug_mbedtls_level(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_debug_stdout_topic(const char *val) { mgos_config_set_debug_stdout_topic(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_debug_stderr_topic(const char *val) { mgos_config_set_debug_stderr_topic(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_sys_mount_path(const char *val) { mgos_config_set_sys_mount_path(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_sys_mount_dev_type(const char *val) { mgos_config_set_sys_mount_dev_type(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_sys_mount_dev_opts(const char *val) { mgos_config_set_sys_mount_dev_opts(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_sys_mount_fs_type(const char *val) { mgos_config_set_sys_mount_fs_type(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_sys_mount_fs_opts(const char *val) { mgos_config_set_sys_mount_fs_opts(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_sys_tz_spec(const char *val) { mgos_config_set_sys_tz_spec(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_sys_wdt_timeout(int         val) { mgos_config_set_sys_wdt_timeout(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_sys_pref_ota_lib(const char *val) { mgos_config_set_sys_pref_ota_lib(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_conf_acl(const char *val) { mgos_config_set_conf_acl(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_mqtt_enable(int         val) { mgos_config_set_mqtt_enable(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_mqtt_server(const char *val) { mgos_config_set_mqtt_server(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_mqtt_client_id(const char *val) { mgos_config_set_mqtt_client_id(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_mqtt_user(const char *val) { mgos_config_set_mqtt_user(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_mqtt_pass(const char *val) { mgos_config_set_mqtt_pass(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_mqtt_reconnect_timeout_min(double      val) { mgos_config_set_mqtt_reconnect_timeout_min(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_mqtt_reconnect_timeout_max(double      val) { mgos_config_set_mqtt_reconnect_timeout_max(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_mqtt_ssl_cert(const char *val) { mgos_config_set_mqtt_ssl_cert(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_mqtt_ssl_key(const char *val) { mgos_config_set_mqtt_ssl_key(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_mqtt_ssl_ca_cert(const char *val) { mgos_config_set_mqtt_ssl_ca_cert(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_mqtt_ssl_cipher_suites(const char *val) { mgos_config_set_mqtt_ssl_cipher_suites(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_mqtt_ssl_psk_identity(const char *val) { mgos_config_set_mqtt_ssl_psk_identity(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_mqtt_ssl_psk_key(const char *val) { mgos_config_set_mqtt_ssl_psk_key(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_mqtt_clean_session(int         val) { mgos_config_set_mqtt_clean_session(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_mqtt_keep_alive(int         val) { mgos_config_set_mqtt_keep_alive(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_mqtt_will_topic(const char *val) { mgos_config_set_mqtt_will_topic(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_mqtt_will_message(const char *val) { mgos_config_set_mqtt_will_message(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_mqtt_max_qos(int         val) { mgos_config_set_mqtt_max_qos(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_mqtt_recv_mbuf_limit(int         val) { mgos_config_set_mqtt_recv_mbuf_limit(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_shadow_enable(int         val) { mgos_config_set_shadow_enable(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_shadow_lib(const char *val) { mgos_config_set_shadow_lib(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_aws_thing_name(const char *val) { mgos_config_set_aws_thing_name(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_aws_greengrass_enable(int         val) { mgos_config_set_aws_greengrass_enable(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_aws_greengrass_reconnect_timeout_min(int         val) { mgos_config_set_aws_greengrass_reconnect_timeout_min(&mgos_sys_config, val); }
static inline void mgos_sys_config_set_aws_greengrass_reconnect_timeout_max(int         val) { mgos_config_set_aws_greengrass_reconnect_timeout_max(&mgos_sys_config, val); }


#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* MGOS_CONFIG_H_ */

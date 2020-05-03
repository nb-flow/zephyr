#ifdef CONFIG_MODEM_QUECTEL_BC68_WITHOUT_NETWORKING
#include <net/socket.h>
int connect(int sock, const struct sockaddr *addr, socklen_t addrlen);
ssize_t recv(int sock, void *buf, size_t max_len, int flags);
int socket(int family, int type, int proto);
ssize_t send(int sock, const void *buf, size_t len, int flags);
int init_modem();
#endif  // CONFIG_MODEM_QUECTEL_BC68_WITHOUT_NETWORKING

uint32_t modem_get_cellid();
int8_t modem_get_csq();
uint8_t modem_is_registered();
uint16_t modem_get_battery_voltage_mv(void);
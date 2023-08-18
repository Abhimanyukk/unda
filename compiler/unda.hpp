#ifndef __UNDA_HPP__
#define __UNDA_HPP__

#define LOG_HEAD std::cout << "[UNDALANG] "

#define LOGE(err) LOG_HEAD << "ERROR -> " << err << std::endl
#define LOGI(info) LOG_HEAD << "INFO -> " << info << std::endl
#define LOGW LOG_HEAD << "WARNING -> "

#endif

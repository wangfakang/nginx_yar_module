/**
 * Yar - Concurrent RPC Server for PHP, C etc
 *
 * Copyright (C) 2012-2012 Xinchen Hui <laruence at gmail dot com>
 *
 *    Licensed under the Apache License, Version 2.0 (the "License");
 *    you may not use this file except in compliance with the License.
 *    You may obtain a copy of the License at
 *
 *        http://www.apache.org/licenses/LICENSE-2.0
 *
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the License is distributed on an "AS IS" BASIS,
 *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *    See the License for the specific language governing permissions and
 *    limitations under the License.
 */

#ifndef YAR_LOG_H
#define YAR_LOG_H

#define alog(type, ...) yar_log_ex(type, __VA_ARGS__)

typedef enum _yar_logger_opt {
	YAR_LOGGER_HOSTNAME
} yar_logger_opt;

void yar_log_ex(int type, const char *fmt, ...);
int yar_logger_init(const char *path, int mask);
int yar_logger_setopt(yar_logger_opt opt, void *value);
void yar_logger_destroy();

#endif

/*
 * Local variables:
 * tab-width: 4
 * c-basic-offset: 4
 * End:
 * vim600: noet sw=4 ts=4 fdm=marker
 * vim<600: sw=4 ts=4
 */

/*
 * httpd_parser.h
 *
 *  Created on: Aug 1, 2020
 *      Author: joshy
 */

#ifndef LIB_WUI_HTTP_HTTPD_PARSER_H_
#define LIB_WUI_HTTP_HTTPD_PARSER_H_
#include "stdint.h"

/*!*************************************************************************************************
* \brief Parses JSON requests from HTTP Server (local webpage) and sends commands in WUI thread
*
* \param [in] json - Unparsed JSON data structure
*
* \param [in] len - Unparsed JSON data structure length
*
* \retval 1 if successful, 0 if error occured
***************************************************************************************************/
uint32_t httpd_json_parser(char *json, uint32_t len);

#endif /* LIB_WUI_HTTP_HTTPD_PARSER_H_ */

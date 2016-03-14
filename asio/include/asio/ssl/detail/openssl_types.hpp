//
// ssl/detail/openssl_types.hpp
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//
// Copyright (c) 2003-2015 Christopher M. Kohlhoff (chris at kohlhoff dot com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//

#ifndef ASIO_SSL_DETAIL_OPENSSL_TYPES_HPP
#define ASIO_SSL_DETAIL_OPENSSL_TYPES_HPP

#if defined(_MSC_VER) && (_MSC_VER >= 1200)
# pragma once
#endif // defined(_MSC_VER) && (_MSC_VER >= 1200)

#include "asio/detail/config.hpp"
#include <openssl/conf.h>
#if defined(ASIO_WINDOWS)
#include "asio/detail/socket_types.hpp"
#endif // defined(ASIO_WINDOWS)
#include <openssl/ssl.h>
#if !defined(OPENSSL_NO_ENGINE)
# include <openssl/engine.h>
#endif // !defined(OPENSSL_NO_ENGINE)
#include <openssl/err.h>
#include <openssl/x509v3.h>
#if !defined(ASIO_WINDOWS)
#include "asio/detail/socket_types.hpp"
#endif // !defined(ASIO_WINDOWS)

#endif // ASIO_SSL_DETAIL_OPENSSL_TYPES_HPP

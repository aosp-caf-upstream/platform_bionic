/*
 * Copyright (C) 2017 The Android Open Source Project
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
 * OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */

#include <errno.h>

#include "header_checks.h"

static void errno_h() {
  int error = errno;

  MACRO(E2BIG);
  MACRO(EACCES);
  MACRO(EADDRINUSE);
  MACRO(EADDRNOTAVAIL);
  MACRO(EAFNOSUPPORT);
  MACRO(EAGAIN);
  MACRO(EALREADY);
  MACRO(EBADF);
  MACRO(EBADMSG);
  MACRO(EBUSY);
  MACRO(ECANCELED);
  MACRO(ECHILD);
  MACRO(ECONNABORTED);
  MACRO(ECONNRESET);
  MACRO(EDEADLK);
  MACRO(EDESTADDRREQ);
  MACRO(EDOM);
  MACRO(EDQUOT);
  MACRO(EEXIST);
  MACRO(EFAULT);
  MACRO(EFBIG);
  MACRO(EHOSTUNREACH);
  MACRO(EIDRM);
  MACRO(EILSEQ);
  MACRO(EINPROGRESS);
  MACRO(EINTR);
  MACRO(EINVAL);
  MACRO(EIO);
  MACRO(EISCONN);
  MACRO(EISDIR);
  MACRO(ELOOP);
  MACRO(EMFILE);
  MACRO(EMLINK);
  MACRO(EMSGSIZE);
  MACRO(EMULTIHOP);
  MACRO(ENAMETOOLONG);
  MACRO(ENETDOWN);
  MACRO(ENETRESET);
  MACRO(ENETUNREACH);
  MACRO(ENFILE);
  MACRO(ENOBUFS);
  MACRO(ENODATA);
  MACRO(ENODEV);
  MACRO(ENOENT);
  MACRO(ENOEXEC);
  MACRO(ENOLCK);
  MACRO(ENOLINK);
  MACRO(ENOMEM);
  MACRO(ENOMSG);
  MACRO(ENOPROTOOPT);
  MACRO(ENOSPC);
  MACRO(ENOSR);
  MACRO(ENOSTR);
  MACRO(ENOSYS);
  MACRO(ENOTCONN);
  MACRO(ENOTDIR);
  MACRO(ENOTEMPTY);
  MACRO(ENOTRECOVERABLE);
  MACRO(ENOTSOCK);
  MACRO(ENOTSUP);
  MACRO(ENOTTY);
  MACRO(ENXIO);
  MACRO(EOPNOTSUPP);
  MACRO(EOVERFLOW);
  MACRO(EOWNERDEAD);
  MACRO(EPERM);
  MACRO(EPIPE);
  MACRO(EPROTO);
  MACRO(EPROTONOSUPPORT);
  MACRO(EPROTOTYPE);
  MACRO(ERANGE);
  MACRO(EROFS);
  MACRO(ESPIPE);
  MACRO(ESRCH);
  MACRO(ESTALE);
  MACRO(ETIME);
  MACRO(ETIMEDOUT);
  MACRO(ETXTBSY);
  MACRO(EWOULDBLOCK);
  MACRO(EXDEV);
}

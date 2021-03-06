cmake_minimum_required(VERSION 3.17)
project(pure_ftpd_master C)

set(CMAKE_C_STANDARD 11)

include_directories(puredb/src)
include_directories(src)

add_executable(pure_ftpd_master
        puredb/src/example_read.c
        puredb/src/example_write.c
        puredb/src/puredb_p.h
        puredb/src/puredb_read.c
        puredb/src/puredb_read.h
        puredb/src/puredb_write.c
        puredb/src/puredb_write.h
        puredb/src/regression.c
        src/alt_arc4random.c
        src/alt_arc4random.h
        src/altlog.c
        src/altlog.h
        src/bonjour.c
        src/bonjour.h
        src/bsd-getopt_long.c
        src/bsd-getopt_long.h
        src/bsd-glob.c
        src/bsd-glob.h
        src/bsd-realpath.c
        src/bsd-realpath.h
        src/caps.c
        src/caps.h
        src/caps_p.h
        src/crypto.c
        src/crypto.h
        src/daemons.c
        src/diraliases.c
        src/diraliases.h
        src/dynamic.c
        src/dynamic.h
        src/fakechroot.c
        src/fakechroot.h
        src/fakesnprintf.c
        src/fakesnprintf.h
        src/ftp_parser.c
        src/ftpd.c
        src/ftpd.h
        src/ftpd_p.h
        src/ftpwho-read.c
        src/ftpwho-read.h
        src/ftpwho-update.c
        src/ftpwho-update.h
        src/ftpwho-update_p.h
        src/getloadavg.c
        src/getloadavg.h
        src/globals.h
        src/ipstack.c
        src/ipstack.h
        src/log_extauth.c
        src/log_extauth.h
        src/log_extauth_p.h
        src/log_ldap.c
        src/log_ldap.h
        src/log_ldap_p.h
        src/log_mysql.c
        src/log_mysql.h
        src/log_mysql_p.h
        src/log_pam.c
        src/log_pam.h
        src/log_pgsql.c
        src/log_pgsql.h
        src/log_pgsql_p.h
        src/log_puredb.c
        src/log_puredb.h
        src/log_unix.c
        src/log_unix.h
        src/ls.c
        src/ls_p.h
        src/main.c
        src/messages.h
        src/messages_cs_cz.h
        src/messages_da.h
        src/messages_de.h
        src/messages_en.h
        src/messages_es.h
        src/messages_fr.h
        src/messages_fr_funny.h
        src/messages_hu.h
        src/messages_it.h
        src/messages_kr.h
        src/messages_nl.h
        src/messages_no.h
        src/messages_pl.h
        src/messages_pt_br.h
        src/messages_ro.h
        src/messages_ru.h
        src/messages_sk.h
        src/messages_sq.h
        src/messages_sv.h
        src/messages_tr.h
        src/messages_zh_cn.h
        src/messages_zh_tw.h
        src/mysnprintf.c
        src/mysnprintf.h
        src/parser.c
        src/parser.h
        src/parser_p.h
        src/privsep.c
        src/privsep.h
        src/privsep_p.h
        src/ptracetest.c
        src/pure-authd.c
        src/pure-authd_p.h
        src/pure-certd.c
        src/pure-certd_p.h
        src/pure-ftpwho.c
        src/pure-mrtginfo.c
        src/pure-pw.c
        src/pure-pw.h
        src/pure-pwconvert.c
        src/pure-quotacheck.c
        src/pure-statsdecode.c
        src/pure-uploadscript.c
        src/pure-uploadscript_p.h
        src/quotas.c
        src/quotas.h
        src/safe_rw.c
        src/safe_rw.h
        src/simpleconf.c
        src/simpleconf.h
        src/simpleconf_ftpd.h
        src/syslognames.h
        src/tls.c
        src/tls.h
        src/tls_extcert.c
        src/tls_extcert.h
        src/tls_extcert_p.h
        src/upload-pipe.c
        src/upload-pipe.h
        src/utils.c
        src/utils.h)

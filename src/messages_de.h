#define MSG_TLS_CIPHER_FAILED "TLS: Fehlerhafte TLSCipherSuite definiert '%s'"
#define MSG_TIMEOUT "Zeitüberschreitung"
#define MSG_CAPABILITIES "Berechtigungen (CAPABILITES) konnten nicht gewechselt werden."
#define MSG_CLIENT_CLOSED_CNX "Die Gegenstelle hat die Verbindung geschlossen."
#define MSG_CLIENT_READ_ERR "Lesefehler von Gegenstelle."
#define MSG_CANT_OPEN_CNX "Verbindung kann nicht geöffnet werden."
#define MSG_CANT_CREATE_DATA_SOCKET "Datenverbindung kann nicht aufgebaut werden."
#define MSG_DEBUG_CLIENT_IS "Addresse der Gegenstelle: "
#define MSG_SYNTAX_ERROR_IP "Syntaxfehler in IP-Addresse."
#define MSG_PORT_SUCCESSFUL "PORT-Befehl erfolgreich."
#define MSG_ONLY_IPV4V6 "Es werden nur IPv4 und IPv6 unterstützt (1,2)."
#define MSG_ONLY_IPV4 "Es wird nur IPv4 unterstützt (1)."
#define MSG_TIMEOUT_PARSER "Zeitüberschreitung."
#define MSG_LINE_TOO_LONG "Die Zeile ist zu lang."
#define MSG_LOG_OVERFLOW "Die Gegenstelle hat versucht den Kommandozeilenbuffer zu überfluten."
#define MSG_GOODBYE "Tschüss. Verbindungen: Upload %llu und Download %llu kbytes."
#define MSG_DEBUG_COMMAND "Befehl"
#define MSG_IS_YOUR_CURRENT_LOCATION "ist das aktuelle Verzeichnis."
#define MSG_NOT_LOGGED_IN "Sie sind nicht angemeldet."
#define MSG_AUTH_UNIMPLEMENTED "Sicherheitserweiterung nicht implementiert."
#define MSG_NO_FILE_NAME "Kein Dateiname."
#define MSG_NO_DIRECTORY_NAME "Kein Verzeichnisname."
#define MSG_NO_RESTART_POINT "Keine Neustart-Position."
#define MSG_ABOR_SUCCESS "Erfolgreich abgebrochen."
#define MSG_MISSING_ARG "Fehlendes Argument."
#define MSG_GARBAGE_FOUND "Nicht identifizierbarer Wert gefunden"
#define MSG_VALUE_TOO_LARGE "Wert ist zu groß."
#define MSG_IDLE_TIME "Leerlaufzeit auf %lu Sekunden gesetzt."
#define MSG_SITE_HELP "Die folgenden SITE-Befehle werden unterstützt"
#define MSG_BAD_CHMOD "Ungültige Rechte."
#define MSG_UNKNOWN_EXTENSION "ist eine unbekannte Erweiterung."
#define MSG_XDBG_OK "XDBG-Befehl erfolgreich, Debug-Level ist jetzt %d."
#define MSG_UNKNOWN_COMMAND "Unbekannter Befehl."
#define MSG_TIMEOUT_NOOP "Zeitüberschreitung (keine Aktion seit %lu Sekunden)."
#define MSG_TIMEOUT_DATA "Zeitüberschreitung (keine neuen Daten seit %lu Sekunden)."
#define MSG_SLEEPING "......"
#define MSG_ALREADY_LOGGED "Sie sind bereits angemeldet."
#define MSG_ANY_PASSWORD "Jedes Passwort wird akzeptiert."
#define MSG_ANONYMOUS_LOGGED "Anonymer Benutzer angemeldet."
#define MSG_ANONYMOUS_LOGGED_VIRTUAL "Anonymer Benutzer im virtuellen FTP eingeloggt."
#define MSG_USER_OK "Benutzer %s gefunden. Passwort erforderlich."
#define MSG_CANT_DO_TWICE "Aktion kann nicht durchgeführt werden."
#define MSG_UNABLE_SECURE_ANON "Sicheres anonymes FTP konnte nicht bereitgestellt werden."
#define MSG_BANDWIDTH_RESTRICTED "Die Bandbreite ist limitiert."
#define MSG_NO_PASSWORD_NEEDED "Wozu ein Passwort?"
#define MSG_NOTRUST "Kann ich Ihnen vertrauen?"
#define MSG_WHOAREYOU "Wer sind Sie?"
#define MSG_AUTH_FAILED "Authentifizierung fehlgeschlagen."
#define MSG_AUTH_TOOMANY "Zu viele Authentifizierungsfehler."
#define MSG_NO_HOMEDIR "Home-Verzeichnis nicht erreichbar - Abbruch."
#define MSG_NO_HOMEDIR2 "%s existiert nicht oder ist nicht erreichbar."
#define MSG_START_SLASH "Starte in /."
#define MSG_USER_GROUP_ACCESS "Benutzer %s hat Gruppenzugang zu"
#define MSG_FXP_SUPPORT "Dieser Server unterstützt FXP."
#define MSG_RATIO "Sie müssen ein %u:%u (UL/DL) - Verhältnis akzeptieren."
#define MSG_CHROOT_FAILED "Konnte kein sicheres chroot()-Gefängnis einrichten."
#define MSG_CURRENT_DIR_IS "Aktuelles Verzeichnis ist %s."
#define MSG_CURRENT_RESTRICTED_DIR_IS "Aktuelles beschränktes Verzeichnis ist %s."
#define MSG_IS_NOW_LOGGED_IN "%s ist jetzt eingeloggt."
#define MSG_CANT_CHANGE_DIR "Verzeichnis %s nicht erreichbar"
#define MSG_PATH_TOO_LONG "Pfad ist zu lang."
#define MSG_CANT_PASV "PASV ist nicht geeignet für IPv6. Nehmen Sie EPSV."
#define MSG_CANT_PASSIVE "Kann keine passive Verbindung herstellen."
#define MSG_PORTS_BUSY "Alle reservierten TCP-Ports sind belegt."
#define MSG_GETSOCKNAME_DATA "Kann den lokalen Daten-Socket nicht identifizieren."
#define MSG_GETPEERNAME "Kann den lokalen Socket nicht identifizieren."
#define MSG_INVALID_IP "Ungültige Adresse."
#define MSG_NO_EPSV "Bitte benutzen Sie einen IPv6-konformen Klienten mit EPSV-Unterstützung."
#define MSG_BAD_PORT "Ich verbinde nicht zu Ports kleiner als 1024."
#define MSG_NO_FXP "Ich werde keine Verbindung mit %s herstellen (nur zu %s)."
#define MSG_FXP "FXP-Transfer: von %s nach %s."
#define MSG_NO_DATA_CONN "Keine Datenverbindung."
#define MSG_ACCEPT_FAILED "Die Verbindung wird nicht akzeptiert."
#define MSG_ACCEPT_SUCCESS "Verbindung akzeptiert."
#define MSG_CNX_PORT_FAILED "Kann keine Datenverbindung zu Port %d aufbauen."
#define MSG_CNX_PORT "Verbinde mit Port %d."
#define MSG_ANON_CANT_MKD "Anonyme Benutzer dürfen keine Verzeichnisse anlegen."
#define MSG_ANON_CANT_RMD "Anonyme Benutzer dürfen keine Verzeichnisse löschen."
#define MSG_ANON_CANT_RENAME "Anonyme Benutzer dürfen keine Dateien verschieben oder umbenennen."
#define MSG_ANON_CANT_CHANGE_PERMS "Anonyme Benutzer dürfen die Rechte nicht veränderen."
#define MSG_GLOB_NO_MEMORY "Nicht genug Speicher beim Vervollständigen von %s."
#define MSG_PROBABLY_DENIED "(Das bedeutet eventuell \"Erlaubnis verweigert\")."
#define MSG_GLOB_READ_ERROR "Lesefehler beim Vervollständigen von %s."
#define MSG_GLOB_NO_MATCH "Kein Erfolg für %s in %s."
#define MSG_CHMOD_FAILED "Zugriffsrechte von %s konnten nicht verändert werden."
#define MSG_CHMOD_SUCCESS "Zugriffsrechte von %s geändert."
#define MSG_CHMOD_TOTAL_FAILURE "Die Rechte konnten nicht gesetzt werden."
#define MSG_ANON_CANT_DELETE "Anonyme Benutzer dürfen keine Dateien löschen."
#define MSG_ANON_CANT_OVERWRITE "Anonyme Benutzer dürfen keine existierenden Dateien überschreiben."
#define MSG_DELE_FAILED "Konnte %s nicht löschen."
#define MSG_DELE_SUCCESS "%s%s%s%s gelöscht."
#define MSG_DELE_TOTAL_FAILURE "Keine Datei gelöscht."
#define MSG_LOAD_TOO_HIGH \
    "Zum Zeitpunkt der Verbindung war die Last %3.2f. Wir erlauben keinen Download\n" \
    "durch anonyme Benutzer, wenn die Last so hoch ist. Uploads sind immer erlaubt."
#define MSG_OPEN_FAILURE "Kann %s nicht öffnen"
#define MSG_OPEN_FAILURE2 "Kann diese Datei nicht öffnen."
#define MSG_STAT_FAILURE "Kann Dateigröße nicht ermitteln."
#define MSG_STAT_FAILURE2 "Kann die Existenz der Datei nicht überprüfen."
#define MSG_REST_TOO_LARGE_FOR_FILE "Neustart-Position %lld ist zu groß für Dateigröße %lld."
#define MSG_REST_RESET "Neustart-Position auf 0 zurückgesetzt."
#define MSG_NOT_REGULAR_FILE "Ich kann nur reguläre Dateien empfangen."
#define MSG_NOT_MODERATED \
    "Diese Datei wurde von einem anonmyen Benutzer hochgeladen. Sie wurde noch\n" \
    "nicht durch die Administratoren zum Download freigegeben."
#define MSG_RATIO_DENIAL \
    "Sorry, aber das Upload/Download-Verhältnis ist %u:%u .\n" \
    "Bis jetzt haben Sie %llu Kb hochgeladen und %llu Kb heruntergeladen.\n" \
    "Bitte laden Sie mehr hoch und probieren Sie es später noch einmal."
#define MSG_NO_MORE_TO_DOWNLOAD "Nichts mehr übrig zum Herunterladen."
#define MSG_WINNER "Der Computer ist Ihr Freund. Trauen Sie ihrem Computer."
#define MSG_KBYTES_LEFT "noch %.1f kbytes."
#define MSG_ABORTED "Transfer abgebrochen."
#define MSG_DATA_WRITE_FAILED "Fehler während des Schreibvorgangs zur Datenverbindung."
#define MSG_DATA_READ_FAILED "Fehler während des Lesevorgangs von der Datenverbindung."
#define MSG_MMAP_FAILED "Kann die Datei nicht im Speicher halten."
#define MSG_WRITE_FAILED "Fehler beim Abspeichern als Datei."
#define MSG_TRANSFER_RATE_M "%.3f s (hier gemessen), %.2f Mbytes pro Sekunde."
#define MSG_TRANSFER_RATE_K "%.3f s (hier gemessen), %.2f Kbytes pro Sekunde."
#define MSG_TRANSFER_RATE_B "%.3f s (hier gemessen), %.2f bytes pro Sekunde."
#define MSG_SPACE_FREE_M "%.1f Mbytes freier Festplattenplatz."
#define MSG_SPACE_FREE_K "%f Kbytes freier Festplattenplatz."
#define MSG_DOWNLOADED "heruntergeladen."
#define MSG_REST_NOT_NUMERIC "REST benötigt einen numerischen Parameter."
#define MSG_REST_ASCII_STRICT "Antwort-Markierung muss im ASCII-Modus 0 sein."
#define MSG_REST_ASCII_WORKAROUND "Neustart bei %lld. Aber im ASCII-Modus."
#define MSG_REST_SUCCESS "Neustart bei %lld."
#define MSG_SANITY_DIRECTORY_FAILURE "Unzulässiger Verzeichnisname."
#define MSG_SANITY_FILE_FAILURE "Verbotener Dateiname: %s."
#define MSG_MKD_FAILURE "Kann Verzeichnis nicht erstellen."
#define MSG_MKD_SUCCESS "Das Verzeichnis wurde erfolgreich angelegt."
#define MSG_RMD_FAILURE "Kann Verzeichnis nicht entfernen."
#define MSG_RMD_SUCCESS "Das Verzeichnis wurde erfolgreich entfernt."
#define MSG_TIMESTAMP_FAILURE "Kann keinen Zeitstempel erzeugen."
#define MSG_MODE_ERROR "Nur ASCII- und Binärmodus werden unterstützt."
#define MSG_CREATE_FAILURE "Kann die Datei nicht erstellen."
#define MSG_ABRT_ONLY "ABRT ist das einzig gültige Kommando während des Hochladens."
#define MSG_UPLOAD_PARTIAL "teilweise hochgeladen."
#define MSG_REMOVED "entfernt."
#define MSG_UPLOADED "hochgeladen."
#define MSG_GMTIME_FAILURE "Konnte lokale Zeit nicht ermitteln."
#define MSG_TYPE_8BIT_FAILURE "Es werden nur 8-bit Bytes unterstützt."
#define MSG_TYPE_UNKNOWN "Unbekannter TYPE."
#define MSG_TYPE_SUCCESS "TYPE ist jetzt"
#define MSG_STRU_FAILURE "Es wird nur F(ile) unterstützt."
#define MSG_MODE_FAILURE "Bitte den S(tream)-Modus benutzen."
#define MSG_RENAME_ABORT "Breche vorheriges Umbenennen ab."
#define MSG_RENAME_RNFR_SUCCESS "RNFR akzeptiert - Datei existiert, bereit für neuen Namen."
#define MSG_FILE_DOESNT_EXIST "Sorry, die Datei existiert nicht."
#define MSG_RENAME_ALREADY_THERE "Umbenennen fehlgeschlagen - Zieldatei existiert bereits."
#define MSG_RENAME_NORNFR "Keine Quelldatei zum Umbenennen angegeben (Brauche RNFR vor RNTO)."
#define MSG_RENAME_FAILURE "Fehler beim Umbenennen/Verschieben."
#define MSG_RENAME_SUCCESS "Datei erfolgreich umbenannt oder verschoben."
#define MSG_NO_SUPERSERVER "Bitte lassen Sie pure-ftpd von einem super-server (tcpserver, xinetd, ...) starten."
#define MSG_NO_FTP_ACCOUNT "Kann das 'ftp' - Benutzerkonto nicht finden."
#define MSG_CONF_ERR "Konfigurationsfehler."
#define MSG_NO_VIRTUAL_FILE "Datei für virtuelle Benutzer fehlt."
#define MSG_ILLEGAL_THROTTLING "Ungültiger Wert für die Bandbreitenbegrenzung."
#define MSG_ILLEGAL_TRUSTED_GID "Ungültige Gruppen-Id für chroot()-Gefängnis."
#define MSG_ILLEGAL_USER_LIMIT "Ungültige Benutzergrenze."
#define MSG_ILLEGAL_FACILITY "Name der facility unbekannt."
#define MSG_ILLEGAL_CONFIG_FILE_LDAP "Ungültige LDAP-Konfigurationsdatei."
#define MSG_ILLEGAL_LOAD_LIMIT "Ungültige Lastgrenze."
#define MSG_ILLEGAL_PORTS_RANGE "Ungültiger Portbereich."
#define MSG_ILLEGAL_LS_LIMITS "Ungültige Beschränkungen für 'ls'."
#define MSG_ILLEGAL_FORCE_PASSIVE "Die erzwungene IP-Adresse für passive Verbindungen ist ungültig."
#define MSG_ILLEGAL_RATIO "Ungültige Upload/Download-Beschränkung."
#define MSG_ILLEGAL_UID_LIMIT "Ungültige uid-Beschränkung."
#define MSG_ILLEGAL_OPTION "Unbekannte Laufzeitoption."
#define MSG_LDAP_MISSING_BASE "Fehlendes LDAP-BaseDN in der LDAP-Konfigurationsdatei."
#define MSG_LDAP_WRONG_PARMS "Falsche LDAP-Parameter."
#define MSG_NEW_CONNECTION "Neue Verbindung von %s."
#define MSG_WELCOME_TO "Herzlich willkommen auf"
#define MSG_MAX_USERS "%lu Benutzer (maximal) sind schon eingeloggt, sorry."
#define MSG_NB_USERS "Sie sind Benutzer %u von %u erlaubten."
#define MSG_WELCOME_TIME "Lokale Zeit: %02d:%02d. Serverport: %u."
#define MSG_ANONYMOUS_FTP_ONLY "Nur anonymes FTP erlaubt."
#define MSG_RATIOS_EVERYONE "Es besteht eine Upload/Download-Beschränkung:"
#define MSG_RATIOS_ANONYMOUS "Anonyme Benutzer unterliegen einer Upload/Download-Beschränkung:"
#define MSG_RATIOS_RULE "um %u Mb herunterzuladen, müssen %u Mb hochgeladen werden."
#define MSG_INFO_IDLE_M "Sie werden nach %lu Minuten Inaktivität getrennt."
#define MSG_INFO_IDLE_S "Sie werden nach %lu Sekunden Inaktivität getrennt."
#define MSG_CANT_READ_FILE "konnte [%s] nicht lesen."
#define MSG_LS_TRUNCATED "Anzeige auf %u Einträge beschränkt."
#define MSG_LS_SUCCESS "%u Einträge gesamt."
#define MSG_LOGOUT "Logout."
#define MSG_AUTH_FAILED_LOG "Authentifizierung fehlgeschlagen für Benutzer [%s]."
#define MSG_ILLEGAL_UMASK "Ungültige umask."
#define MSG_STANDALONE_FAILED "Kann keinen autarken Server starten"
#define MSG_NO_ANONYMOUS_LOGIN "Dies ist ein privates System - keine anonyme Anmeldung möglich."
#define MSG_ANONYMOUS_ANY_PASSWORD "jedes Passwort ist zulässig."
#define MSG_MAX_USERS_IP "Zuviele Verbindungen (%lu) von dieser IP-Adresse."
#define MSG_ACTIVE_DISABLED "Aktives FTP ist auf diesem Server verboten."
#define MSG_TRANSFER_SUCCESSFUL "Datei erfolgreich übertragen."
#define MSG_NO_DISK_SPACE "Festplatte voll - bitte später erneut probieren."
#define MSG_OUT_OF_MEMORY "Nicht genug Arbeitsspeicher."
#define MSG_ILLEGAL_TRUSTED_IP "Ungültige vertraute IP-Adresse."
#define MSG_NO_ASCII_RESUME "Wiederaufnahme im ASCII-Modus ist unsicher, bitte löschen Sie die Datei zuerst."
#define MSG_UNKNOWN_ALTLOG "Unbekanntes Format für Logdatei."
#define MSG_ACCOUNT_DISABLED "Einloggen als [%s] nicht möglich: Konto deaktiviert."
#define MSG_SQL_WRONG_PARMS "Falsche SQL-Parameter."
#define MSG_ILLEGAL_CONFIG_FILE_SQL "Ungültige SQL-Konfigurationsdatei."
#define MSG_SQL_MISSING_SERVER "Kein SQL-Server in Konfigurationsdatei angegeben."
#define MSG_SQL_DOWN "Der SQL-Server ist nicht erreichbar."
#define MSG_ILLEGAL_QUOTA "Quota ungültig."
#define MSG_QUOTA_FILES "%llu Dateien benutzt (%d%%) - erlaubt: %llu Dateien."
#define MSG_QUOTA_SIZE "%llu Kilobyte benutzt (%d%%) - erlaubt: %llu Kb."
#define MSG_QUOTA_EXCEEDED "Quota überschritten: [%s] wird nicht gespeichert."
#define MSG_AUTH_UNKNOWN "Unbekannte Authentifizierungsmethode."
#define MSG_PDB_BROKEN "Konnte indizierte puredb-Datei nicht lesen (oder altes Format gefunden) - Versuche pure-pw mkdb"
#define MSG_ALIASES_ALIAS "%s ist ein Alias für %s."
#define MSG_ALIASES_UNKNOWN "Unbekannter Alias %s."
#define MSG_ALIASES_BROKEN_FILE "Beschädigte Aliasdatei"
#define MSG_ALIASES_LIST "Folgende Aliase stehen zur Verfügung:"
#define MSG_PERUSER_MAX "Mehr als %lu Verbindungen vom selben Benutzer sind nicht erlaubt."
#define MSG_IPV6_OK "Auf diesem Server sind auch IPv6-Verbindungen willkommen."
#define MSG_TLS_INFO "TLS: %s Verschlüsselung mit %s, %d bit Schlüssellänge"
#define MSG_TLS_WEAK "TLS: Verschlüsselung zu schwach"
#define MSG_TLS_NEEDED "Dieser Server akzeptiert keine unverschlüsselten Verbindungen.\n" \
    "Bitte nutzen Sie eine TLS-Verschlüsselung zur Verbindung."
#define MSG_ILLEGAL_CHARSET "Ungültiger Zeichensatz"
#define MSG_TLS_NO_CTX "TLS: Verschlüsselungskontext nicht gefunden. Tschüss."
#define MSG_PROT_OK "Datensicherungslevel ist \"%s\""
#define MSG_PROT_PRIVATE_NEEDED "Datenverbindung kann mit diesen PROT Einstellungen nicht aufgebaut werden."
#define MSG_PROT_UNKNOWN_LEVEL "Datensicherungslevel \"%s\" unbekannt. Nutze \"%s\" stattdessen."
#define MSG_PROT_BEFORE_PBSZ "Vor einem PROT-Befehl muss ein PBSZ-Befehl erfolgt sein."
#define MSG_WARN_LDAP_USERPASS_EMPTY "Der LDAP-Server hat kein 'userPassword'-Attribut zurückgeliefert - überprüfe die LDAP-Zugriffsrechte."
#define MSG_LDAP_INVALID_AUTH_METHOD "Ungültiger Wert für LDAPAuthMethod in der Konfigurationsdatei gefunden - nur 'bind' oder 'password' sind erlaubt."
#define MSG_INVALID_ARGUMENT "Ungültiger Wert: \"%s\""
#define MSG_READY_TO_PROCEED "Bereit fortzufahren"
#define MSG_ASCII_MODE_UNSUPPORTED "Übertragungen im ASCII-Modus werden nicht unterstützt."
#define MSG_ASCII_MODE_WARNING "Warnung: Der Klient nutzt den ASCII-Modus. Es wird angenommen, dass es sich um einfache Text Dateien handelt."
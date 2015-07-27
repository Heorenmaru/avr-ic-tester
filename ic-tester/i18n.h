/*
 * i18n.h
 *
 * Created: 18.07.2015 22:54:53
 *  Author: Trol
 */ 


#ifndef I18N_H_
#define I18N_H_

#define DEFSTR(name, string)						const char name[] PROGMEM = string;

DEFSTR(STR_UNKNOWN_OR_FAILED, "Unknown");
DEFSTR(STR_APPNAME, "IC-TESTER");
DEFSTR(STR_VERSION, "Version 0.01");
DEFSTR(STR_AUTODETECT, "Detect & Test");
DEFSTR(STR_CUSTOM_TEST, "Custom test");
DEFSTR(STR_MEM_TEST, "Memory test");
DEFSTR(STR_ABOUT, "About");



#endif /* I18N_H_ */
#import <Cordova/CDV.h>

@interface BEMDataCollection: CDVPlugin

- (void) launchInit:(CDVInvokedUrlCommand*)command;
- (void) getConfig:(CDVInvokedUrlCommand*)command;
- (void) getState:(CDVInvokedUrlCommand*)command;
- (void) forceTripStart:(CDVInvokedUrlCommand *)command;
- (void) forceTripEnd:(CDVInvokedUrlCommand *)command;
- (void) forceRemotePush:(CDVInvokedUrlCommand *)command;

@end
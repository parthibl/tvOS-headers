//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayerUI/NSObject-Protocol.h>

@class IKAppDocument, NSDictionary, NSString, NSURL;
@protocol IKAppDataStoring;

@protocol IKApplication <NSObject>
- (id <IKAppDataStoring>)vendorStorage;
- (id <IKAppDataStoring>)localStorage;
- (NSString *)vendorIdentifier;
- (NSString *)appIdentifier;
- (NSURL *)appJSURL;
- (_Bool)shouldIgnoreJSValidation;

@optional
- (IKAppDocument *)activeDocument;
- (NSDictionary *)appLaunchParams;
- (_Bool)appIsTrusted;
@end

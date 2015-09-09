//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SplashBoard/BSXPCCoding-Protocol.h>
#import <SplashBoard/NSCopying-Protocol.h>

@class FBSDisplay, NSString;

@interface XBLaunchStateRequest : NSObject <BSXPCCoding, NSCopying>
{
    _Bool _isMainScene;
    FBSDisplay *_display;
    NSString *_sceneID;
    long long _interfaceOrientation;
    unsigned long long _statusBarState;
    NSString *_urlSchemeName;
    NSString *_launchInterfaceIdentifier;
    struct CGSize _referenceSize;
    struct CGSize _naturalSize;
}

@property(copy, nonatomic) NSString *launchInterfaceIdentifier; // @synthesize launchInterfaceIdentifier=_launchInterfaceIdentifier;
@property(copy, nonatomic) NSString *urlSchemeName; // @synthesize urlSchemeName=_urlSchemeName;
@property(nonatomic) unsigned long long statusBarState; // @synthesize statusBarState=_statusBarState;
@property(nonatomic) long long interfaceOrientation; // @synthesize interfaceOrientation=_interfaceOrientation;
@property(nonatomic) struct CGSize naturalSize; // @synthesize naturalSize=_naturalSize;
@property(nonatomic) struct CGSize referenceSize; // @synthesize referenceSize=_referenceSize;
@property(nonatomic) _Bool isMainScene; // @synthesize isMainScene=_isMainScene;
@property(copy, nonatomic) NSString *sceneID; // @synthesize sceneID=_sceneID;
@property(retain, nonatomic) FBSDisplay *display; // @synthesize display=_display;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

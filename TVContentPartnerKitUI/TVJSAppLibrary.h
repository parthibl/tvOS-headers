//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ITMLKit/IKJSObject.h>

#import <TVContentPartnerKitUI/LSApplicationWorkspaceObserverProtocol-Protocol.h>
#import <TVContentPartnerKitUI/TVJSAppLibrary-Protocol.h>

@class NSArray, NSString;

@interface TVJSAppLibrary : IKJSObject <LSApplicationWorkspaceObserverProtocol, TVJSAppLibrary>
{
    _Bool _needsUpdateAppInfo;
    NSArray *_installedAppInfo;
}

@property(copy, nonatomic) NSArray *installedAppInfo; // @synthesize installedAppInfo=_installedAppInfo;
- (void).cxx_destruct;
- (void)applicationsDidUninstall:(id)arg1;
- (void)applicationsDidInstall:(id)arg1;
- (void)_notifyJSAppInfoDidChange;
- (void)_setNeedsUpdateAppInfo;
- (void)_updateInstalledAppInfo;
- (void)dealloc;
- (id)initWithAppContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariShared/WBSURLCompletionSessionProtocol-Protocol.h>

@class WBSHistoryService;

@interface WBSHistoryURLCompletionSession : NSObject <WBSURLCompletionSessionProtocol>
{
    WBSHistoryService *_historyService;
}

- (void).cxx_destruct;
- (void)getBestMatchesForTypedString:(id)arg1 limit:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithHistoryService:(id)arg1;

@end

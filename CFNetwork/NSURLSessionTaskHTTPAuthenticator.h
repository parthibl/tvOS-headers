//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <CFNetwork/NSCopying-Protocol.h>

@class NSSet;

__attribute__((visibility("hidden")))
@interface NSURLSessionTaskHTTPAuthenticator : NSObject <NSCopying>
{
    NSSet *_statusCodes;
}

+ (id)sessionTaskHTTPAuthenticatorWithContext:(id)arg1 statusCodes:(id)arg2;
@property(copy) NSSet *statusCodes; // @synthesize statusCodes=_statusCodes;
- (void)getAuthenticationHeadersForTask:(id)arg1 task:(id)arg2 response:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)dealloc;
- (id)initWithStatusCodes:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

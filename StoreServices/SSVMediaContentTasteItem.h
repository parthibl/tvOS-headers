//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreServices/NSCopying-Protocol.h>
#import <StoreServices/NSMutableCopying-Protocol.h>
#import <StoreServices/NSSecureCoding-Protocol.h>
#import <StoreServices/SSXPCCoding-Protocol.h>

@class NSString;

@interface SSVMediaContentTasteItem : NSObject <SSXPCCoding, NSCopying, NSMutableCopying, NSSecureCoding>
{
    unsigned long long _contentType;
    NSString *_playlistGlobalID;
    long long _storeAdamID;
    unsigned long long _tasteType;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) unsigned long long tasteType; // @synthesize tasteType=_tasteType;
@property(readonly, nonatomic) long long storeAdamID; // @synthesize storeAdamID=_storeAdamID;
@property(readonly, copy, nonatomic) NSString *playlistGlobalID; // @synthesize playlistGlobalID=_playlistGlobalID;
@property(readonly, nonatomic) unsigned long long contentType; // @synthesize contentType=_contentType;
- (void).cxx_destruct;
- (id)_copyWithMediaContentTasteItemClass:(Class)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CacheDelete/NSSecureCoding-Protocol.h>

@class NSMutableDictionary;

@interface CacheDeleteRecentInfo : NSObject <NSSecureCoding>
{
    NSMutableDictionary *_volumes;
}

+ (id)cacheDeleteRecentInfo:(id)arg1;
+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSMutableDictionary *volumes; // @synthesize volumes=_volumes;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (int)validate:(double)arg1 threshold:(id)arg2;
- (id)initWithVolumes:(id)arg1;

@end

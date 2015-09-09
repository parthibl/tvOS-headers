//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface GEOResourceInfo : NSObject
{
    NSString *_name;
    long long _type;
    NSString *_checksum;
    NSArray *_equivalentResources;
    _Bool _allowResumingPartialDownload;
}

@property(nonatomic, getter=_allowResumingPartialDownload, setter=_setAllowResumingPartialDownload:) _Bool allowResumingPartialDownload; // @synthesize allowResumingPartialDownload=_allowResumingPartialDownload;
@property(copy, nonatomic) NSArray *equivalentResources; // @synthesize equivalentResources=_equivalentResources;
@property(readonly, nonatomic) NSString *checksum; // @synthesize checksum=_checksum;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (id)description;
- (void)dealloc;
- (id)initWithName:(id)arg1 type:(long long)arg2 checksum:(id)arg3;

@end

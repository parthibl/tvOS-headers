//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@class NSNumber, NSString;

@interface _HDProvenanceKey : NSObject <NSCopying>
{
    unsigned long long _hash;
    long long _syncProvenance;
    NSString *_originDevice;
    NSString *_originBuild;
    NSString *_localDevice;
    NSString *_localBuild;
    NSNumber *_sourceID;
    NSNumber *_deviceID;
    NSString *_sourceVersion;
}

+ (id)provenanceKeyWithSyncProvenance:(long long)arg1 originDevice:(id)arg2 originBuild:(id)arg3 localDevice:(id)arg4 localBuild:(id)arg5 sourceID:(id)arg6 deviceID:(id)arg7 sourceVersion:(id)arg8;
+ (id)provenanceKeyForProvenance:(id)arg1 localDevice:(id)arg2 localBuild:(id)arg3;
@property(readonly, copy, nonatomic) NSString *sourceVersion; // @synthesize sourceVersion=_sourceVersion;
@property(readonly, nonatomic) NSNumber *deviceID; // @synthesize deviceID=_deviceID;
@property(readonly, nonatomic) NSNumber *sourceID; // @synthesize sourceID=_sourceID;
@property(readonly, copy, nonatomic) NSString *localBuild; // @synthesize localBuild=_localBuild;
@property(readonly, copy, nonatomic) NSString *localDevice; // @synthesize localDevice=_localDevice;
@property(readonly, copy, nonatomic) NSString *originBuild; // @synthesize originBuild=_originBuild;
@property(readonly, copy, nonatomic) NSString *originDevice; // @synthesize originDevice=_originDevice;
@property(readonly, nonatomic) long long syncProvenance; // @synthesize syncProvenance=_syncProvenance;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLatLng, NSString;

@interface GEOTransitAppLaunchDetails : PBCodable <NSCopying>
{
    double _timestamp;
    NSString *_destinationAppId;
    GEOLatLng *_destinationLoc;
    GEOLatLng *_sourceLoc;
    CDStruct_b5306035 _has;
}

@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) GEOLatLng *destinationLoc; // @synthesize destinationLoc=_destinationLoc;
@property(retain, nonatomic) GEOLatLng *sourceLoc; // @synthesize sourceLoc=_sourceLoc;
@property(retain, nonatomic) NSString *destinationAppId; // @synthesize destinationAppId=_destinationAppId;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasTimestamp;
@property(readonly, nonatomic) _Bool hasDestinationLoc;
@property(readonly, nonatomic) _Bool hasSourceLoc;
@property(readonly, nonatomic) _Bool hasDestinationAppId;
- (void)dealloc;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GeoServices/NSObject-Protocol.h>

@class NSData;

@protocol GEONavigationServerObserverXPCInterface <NSObject>
- (void)routeSummaryUpdatedWithGuidanceStateData:(NSData *)arg1;
- (void)routeSummaryUpdatedWithTransitSummaryData:(NSData *)arg1;
- (void)routeSummaryUpdatedWithNavigationRouteSummaryData:(NSData *)arg1;
@end

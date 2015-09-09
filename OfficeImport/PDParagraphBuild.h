//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfficeImport/PDBuild.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface PDParagraphBuild : PDBuild
{
    NSMutableArray *mTimeNodeDataList;
    double mAutoAdvanceTime;
    _Bool mIsReversedParagraphOrder;
    int mBuildLevel;
    int mType;
}

- (_Bool)isEqual:(id)arg1;
- (void)setType:(int)arg1;
- (int)type;
- (void)setBuildLevel:(int)arg1;
- (int)buildLevel;
- (void)setIsReversedParagraphOrder:(_Bool)arg1;
- (_Bool)isReversedParagraphOrder;
- (void)setAutoAdvanceTime:(double)arg1;
- (double)autoAdvanceTime;
- (id)timeNodeDataList;
- (id)addTimeNodeData;
- (id)timeNodeDataAtIndex:(unsigned long long)arg1;
- (unsigned long long)timeNodeDataListCount;
- (void)dealloc;
- (id)init;

@end

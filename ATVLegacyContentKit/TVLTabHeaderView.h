//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ATVLegacyContentKit/TVLMenuHeaderView.h>

@class NSArray, _TVLSegmentedControl;

@interface TVLTabHeaderView : TVLMenuHeaderView
{
    _TVLSegmentedControl *_segmentedControl;
}

@property(retain, nonatomic) _TVLSegmentedControl *segmentedControl; // @synthesize segmentedControl=_segmentedControl;
- (void).cxx_destruct;
@property(nonatomic) long long selectedIndex;
@property(copy, nonatomic) NSArray *tabTitles;
- (void)layoutSubviews;
- (id)initWithHeaderElement:(id)arg1;

@end

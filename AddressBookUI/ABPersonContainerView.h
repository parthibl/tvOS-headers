//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <AddressBookUI/ABPersonTabsLayoutManager-Protocol.h>

@class ABPersonOverlayingContainerView, ABPersonTableView, ABPersonTableViewDataSource, NSString, UIImageView, UIScrollView, UISegmentedControl;
@protocol ABPersonTabsScrollView;

@interface ABPersonContainerView : UIView <ABPersonTabsLayoutManager>
{
    UISegmentedControl *_contentSwitchingTabs;
    _Bool _hidesContentSwitchingTabs;
    UIView *_nonScrollableHeaderView;
    ABPersonTableView *_tableView;
    ABPersonTableViewDataSource *_dataSource;
    ABPersonOverlayingContainerView *_overlayingContainerView;
    UIImageView *_contentSwitchingTabsPocketShadow;
    UIImageView *_contentSwitchingTabsBorder;
}

@property(nonatomic) _Bool hidesContentSwitchingTabs; // @synthesize hidesContentSwitchingTabs=_hidesContentSwitchingTabs;
@property(retain, nonatomic) UIImageView *contentSwitchingTabsBorder; // @synthesize contentSwitchingTabsBorder=_contentSwitchingTabsBorder;
@property(retain, nonatomic) UIImageView *contentSwitchingTabsPocketShadow; // @synthesize contentSwitchingTabsPocketShadow=_contentSwitchingTabsPocketShadow;
@property(retain, nonatomic) UISegmentedControl *contentSwitchingTabs; // @synthesize contentSwitchingTabs=_contentSwitchingTabs;
@property(retain, nonatomic) ABPersonOverlayingContainerView *overlayingContainerView; // @synthesize overlayingContainerView=_overlayingContainerView;
@property(nonatomic) ABPersonTableViewDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) ABPersonTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIView *nonScrollableHeaderView; // @synthesize nonScrollableHeaderView=_nonScrollableHeaderView;
- (void)layoutSubviews;
- (void)restoreTabsPosition:(id)arg1;
- (id)prepareToRestoreTabsPosition;
- (void)didChangeContentOffset:(struct CGPoint)arg1 inScrollView:(id)arg2;
- (void)repositionContentSwitchingTabs;
- (void)moveContentSwitchingTabsAboveView:(id)arg1 inScrollView:(id)arg2;
- (double)heightForHeaderAndContentSwitchingTabs;
- (double)heightNeededForContentSwitchingTabs;
- (void)setFrame:(struct CGRect)arg1;
@property(readonly, nonatomic) UIScrollView<ABPersonTabsScrollView> *currentScrollView;
- (id)viewContainingHeaderView;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

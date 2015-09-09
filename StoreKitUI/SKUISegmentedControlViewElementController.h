//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKitUI/SKUIFlexibleSegmentedControlDelegate-Protocol.h>
#import <StoreKitUI/SKUIMenuPopoverDelegate-Protocol.h>
#import <StoreKitUI/SKUIMenuViewControllerDelegate-Protocol.h>

@class NSString, SKUIClientContext, SKUIFlexibleSegmentedControl, SKUIMenuPopoverController, SKUIMenuViewController, SKUISegmentedControlViewElement, UIBarButtonItem, UIView, UIViewController;

@interface SKUISegmentedControlViewElementController : NSObject <SKUIFlexibleSegmentedControlDelegate, SKUIMenuPopoverDelegate, SKUIMenuViewControllerDelegate>
{
    SKUIClientContext *_clientContext;
    long long _defaultMaximumNumberOfVisibleItems;
    double _desiredSegmentWidth;
    UIBarButtonItem *_menuSheetCancelButtonItem;
    SKUIMenuViewController *_menuSheetViewController;
    UIViewController *_parentViewController;
    SKUIMenuPopoverController *_popoverMenuViewController;
    SKUIFlexibleSegmentedControl *_segmentedControl;
    SKUISegmentedControlViewElement *_viewElement;
}

@property(nonatomic) __weak UIViewController *parentViewController; // @synthesize parentViewController=_parentViewController;
@property(readonly, nonatomic) SKUISegmentedControlViewElement *viewElement; // @synthesize viewElement=_viewElement;
@property(nonatomic) double desiredSegmentWidth; // @synthesize desiredSegmentWidth=_desiredSegmentWidth;
@property(nonatomic) long long defaultMaximumNumberOfVisibleItems; // @synthesize defaultMaximumNumberOfVisibleItems=_defaultMaximumNumberOfVisibleItems;
@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
- (void).cxx_destruct;
- (void)_showPopoverMoreListWithTitles:(id)arg1;
- (void)_showMoreListSheetWithTitles:(id)arg1 selectedIndex:(long long)arg2;
- (id)_segmentedControl;
- (void)_reloadPropertiesForSegmentedControl:(id)arg1;
- (void)_destroyPopoverController;
- (void)_destroyMenuSheetViewController;
- (void)_connectToSegmentedControl:(id)arg1;
- (void)_cancelMenuAction:(id)arg1;
- (void)menuViewController:(id)arg1 didSelectItemAtIndex:(long long)arg2;
- (void)menuPopover:(id)arg1 willRepositionToRect:(inout struct CGRect *)arg2 inView:(inout id *)arg3;
- (void)menuPopover:(id)arg1 didSelectMenuItemAtIndex:(long long)arg2;
- (void)menuPopoverDidCancel:(id)arg1;
- (void)segmentedControl:(id)arg1 showMoreListWithTitles:(id)arg2;
- (void)segmentedControl:(id)arg1 didSelectSegmentIndex:(long long)arg2;
@property(readonly, nonatomic) UIView *segmentedControlView;
- (void)reloadAfterDocumentUpdate;
- (void)dealloc;
- (id)initWithViewElement:(id)arg1 segmentedControl:(id)arg2;
- (id)initWithViewElement:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

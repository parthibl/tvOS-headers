//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DataDetectorsUI/DDAction.h>

@class UINavigationController;

__attribute__((visibility("hidden")))
@interface DDFlightAction : DDAction
{
    UINavigationController *_navigationController;
}

- (id)viewController;
- (void)closePressed;
- (int)interactionType;
- (id)localizedName;
- (void)prepareViewControllerForActionController:(id)arg1;
- (id)initWithURL:(id)arg1 result:(struct __DDResult *)arg2 context:(id)arg3;
- (void)adaptForPresentationInPopover:(_Bool)arg1;
- (void)dealloc;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIViewController;

__attribute__((visibility("hidden")))
@interface _TVSearchResultCell : UICollectionViewCell
{
    UIViewController *_viewController;
    CDUnknownBlockType _didFocusBlock;
}

@property(copy, nonatomic) CDUnknownBlockType didFocusBlock; // @synthesize didFocusBlock=_didFocusBlock;
@property(retain, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
- (void).cxx_destruct;
- (void)didUpdateFocusFromView:(id)arg1;
- (id)preferredFocusedView;
- (_Bool)canBecomeFocused;
- (void)prepareForReuse;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton;

@interface PKPaymentSetupCardDetailsFooterView : UIView
{
    long long _context;
    UIButton *_manualEntryButton;
    UIButton *_setupLaterButton;
}

@property(retain, nonatomic) UIButton *setupLaterButton; // @synthesize setupLaterButton=_setupLaterButton;
@property(retain, nonatomic) UIButton *manualEntryButton; // @synthesize manualEntryButton=_manualEntryButton;
@property(nonatomic) long long context; // @synthesize context=_context;
- (_Bool)isBuddyiPad;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 context:(long long)arg2;

@end

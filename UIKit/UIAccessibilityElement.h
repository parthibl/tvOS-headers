//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/UIAccessibilityIdentification-Protocol.h>

@class NSString;

@interface UIAccessibilityElement : NSObject <UIAccessibilityIdentification>
{
    NSString *accessibilityIdentifier;
    id _accessibilityContainer;
}

@property(nonatomic) id accessibilityContainer; // @synthesize accessibilityContainer=_accessibilityContainer;
@property(copy, nonatomic) NSString *accessibilityIdentifier; // @synthesize accessibilityIdentifier;
@property(nonatomic) unsigned long long accessibilityTraits;
@property(nonatomic) struct CGRect accessibilityFrame;
@property(retain, nonatomic) NSString *accessibilityValue;
@property(retain, nonatomic) NSString *accessibilityHint;
@property(retain, nonatomic) NSString *accessibilityLabel;
@property(nonatomic) _Bool isAccessibilityElement;
- (id)initWithAccessibilityContainer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

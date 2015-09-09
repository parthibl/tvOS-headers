//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSNumber, NSString;
@protocol SAAceSerializable;

@interface SAUISayIt : SABaseClientBoundCommand
{
}

+ (id)sayItWithDictionary:(id)arg1 context:(id)arg2;
+ (id)sayIt;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSString *message;
@property(copy, nonatomic) NSNumber *listenAfterSpeaking;
@property(retain, nonatomic) id <SAAceSerializable> context;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

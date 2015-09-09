//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, SSProtocolConditionalContext;

@interface SSProtocolConditionalEvaluator : NSObject
{
    SSProtocolConditionalContext *_context;
    NSDictionary *_dictionary;
}

+ (void)setDefaultConditionalContext:(id)arg1;
+ (id)defaultConditionalContext;
- (int)_logicalOperatorForString:(id)arg1;
- (id)_dictionaryByEvaluatingWithForcedValue:(long long)arg1;
- (id)_dictionaryByEvaluatingDictionary:(id)arg1 withForcedValue:(long long)arg2;
- (id)_dictionaryByEvaluatingChildrenOfDictionary:(id)arg1 withForcedValue:(long long)arg2;
- (_Bool)_checkConditions:(id)arg1 withOperator:(id)arg2;
- (id)_arrayByEvaluatingChildrenOfArray:(id)arg1 withForcedValue:(long long)arg2;
- (id)dictionaryByRemovingConditions;
- (id)dictionaryByEvaluatingConditions;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1 conditionalContext:(id)arg2;
- (id)initWithDictionary:(id)arg1;
- (id)init;

@end

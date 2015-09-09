//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTInstrumentsUtilities/NSCoding-Protocol.h>
#import <DVTInstrumentsUtilities/NSMutableCopying-Protocol.h>
#import <DVTInstrumentsUtilities/XRIntKeyedDictionaryImmutable-Protocol.h>

@class NSString;
@protocol NSObject><NSMutableCopying;

@interface XRIntKeyedDictionary : NSObject <XRIntKeyedDictionaryImmutable, NSCoding, NSMutableCopying>
{
    struct unordered_map<unsigned long long, id, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, id>>> _hash_map;
    id <NSObject><NSMutableCopying> _prototype;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)count;
- (void)enumerateObjectsAndIntegerKeys:(CDUnknownBlockType)arg1;
- (id)allObjects;
- (void)removeAllObjects;
- (void)removeObjectForIntegerKey:(unsigned long long)arg1;
- (void)setObject:(id)arg1 forIntegerKey:(unsigned long long)arg2;
- (void)setObject:(id)arg1 forIntergerKey:(unsigned long long)arg2;
- (void)setPrototypeObject:(id)arg1;
- (id)objectForIntegerKey:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (id)objectForIntegerKey:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithIntKeyedDictionary:(id)arg1 copyObjects:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface EXSheet : NSObject
{
}

+ (void)readDelayedSheeWithLocation:(id)arg1 sheetXmlType:(id)arg2 state:(id)arg3;
+ (void)readFrom:(struct _xmlNode *)arg1 state:(id)arg2;
+ (void)readAllDrawablesWithState:(id)arg1;
+ (void)readLegacyDrawablesWithState:(id)arg1;
+ (void)readDrawablesWithState:(id)arg1;
+ (void)readSheetProperties:(struct _xmlNode *)arg1 state:(id)arg2;
+ (Class)exSheetClassFromXmlSheetType:(id)arg1 location:(id)arg2;
+ (void)readCommonSheetElementsFrom:(struct _xmlTextReader *)arg1 state:(id)arg2;

@end

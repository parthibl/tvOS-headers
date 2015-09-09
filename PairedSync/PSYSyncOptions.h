//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PairedSync/NSSecureCoding-Protocol.h>

@class NSUUID, PSYTestInput;

@interface PSYSyncOptions : NSObject <NSSecureCoding>
{
    _Bool _dryRun;
    _Bool _terminateDuringDryRun;
    NSUUID *_transactionID;
    PSYTestInput *_testInput;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) PSYTestInput *testInput; // @synthesize testInput=_testInput;
@property(nonatomic) _Bool terminateDuringDryRun; // @synthesize terminateDuringDryRun=_terminateDuringDryRun;
@property(nonatomic) _Bool dryRun; // @synthesize dryRun=_dryRun;
@property(copy, nonatomic) NSUUID *transactionID; // @synthesize transactionID=_transactionID;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

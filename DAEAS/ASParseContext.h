//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class ASTrafficLogger, NSFileHandle, NSMutableArray, NSString;

@interface ASParseContext : NSObject
{
    _Bool _moreDataExpected;
    _Bool _keepPreviousData;
    _Bool _lastLookedAtBufferHadStringEndPrefix;
    int _streamingState;
    int _codePage;
    int _dataGeneration;
    unsigned int _lastFoundBufferWithoutLineEnding;
    unsigned int _numTokensInBuffersWithoutLineEndings;
    long long _curOffset;
    NSString *_parseErrorReason;
    long long _expectedTotalBytesCount;
    long long _currentBytesReceivedCount;
    NSMutableArray *_dataBuffers;
    unsigned long long _offsetIntoFirstData;
    NSMutableArray *_bypassedDataBuffers;
    NSFileHandle *_logFileHandle;
    NSString *_logFilePath;
    ASTrafficLogger *_trafficLogger;
}

@property(retain, nonatomic) ASTrafficLogger *trafficLogger; // @synthesize trafficLogger=_trafficLogger;
@property(retain, nonatomic) NSString *logFilePath; // @synthesize logFilePath=_logFilePath;
@property(retain, nonatomic) NSFileHandle *logFileHandle; // @synthesize logFileHandle=_logFileHandle;
@property(retain, nonatomic) NSMutableArray *bypassedDataBuffers; // @synthesize bypassedDataBuffers=_bypassedDataBuffers;
@property(nonatomic) _Bool lastLookedAtBufferHadStringEndPrefix; // @synthesize lastLookedAtBufferHadStringEndPrefix=_lastLookedAtBufferHadStringEndPrefix;
@property(nonatomic) unsigned int numTokensInBuffersWithoutLineEndings; // @synthesize numTokensInBuffersWithoutLineEndings=_numTokensInBuffersWithoutLineEndings;
@property(nonatomic) unsigned int lastFoundBufferWithoutLineEnding; // @synthesize lastFoundBufferWithoutLineEnding=_lastFoundBufferWithoutLineEnding;
@property(nonatomic) unsigned long long offsetIntoFirstData; // @synthesize offsetIntoFirstData=_offsetIntoFirstData;
@property(retain, nonatomic) NSMutableArray *dataBuffers; // @synthesize dataBuffers=_dataBuffers;
@property(nonatomic) _Bool keepPreviousData; // @synthesize keepPreviousData=_keepPreviousData;
@property(nonatomic) long long currentBytesReceivedCount; // @synthesize currentBytesReceivedCount=_currentBytesReceivedCount;
@property(nonatomic) long long expectedTotalBytesCount; // @synthesize expectedTotalBytesCount=_expectedTotalBytesCount;
@property(nonatomic) int dataGeneration; // @synthesize dataGeneration=_dataGeneration;
@property(nonatomic) _Bool moreDataExpected; // @synthesize moreDataExpected=_moreDataExpected;
@property(retain, nonatomic) NSString *parseErrorReason; // @synthesize parseErrorReason=_parseErrorReason;
@property(nonatomic) int codePage; // @synthesize codePage=_codePage;
@property(nonatomic) long long curOffset; // @synthesize curOffset=_curOffset;
@property(nonatomic) int streamingState; // @synthesize streamingState=_streamingState;
- (void).cxx_destruct;
- (void)invalidateBuffers;
- (void)flushLogs;
- (int)numTokensStreamableForNextStringSizeOfTerminator:(int *)arg1;
- (int)numTokensForNextOpaqueData;
- (int)_numTokensForNextOpaqueDataCheckNumTokens:(_Bool)arg1;
- (int)numTokensForNextString;
- (unsigned char)nextByte;
- (unsigned char)byteAtOffsetFromCurrentByte:(unsigned int)arg1;
- (unsigned char)currentByte;
- (void)addData:(id)arg1;
- (void)resetToZeroOffset;
- (_Bool)advanceOffsetByAmount:(unsigned int)arg1;
- (_Bool)advanceOffsetByAmount:(unsigned int)arg1 retainLastToken:(_Bool)arg2;
- (char *)bufferForLength:(unsigned int)arg1 shouldFree:(_Bool *)arg2;
- (id)bufferWithAllData;
- (long long)goodSizeForBuffer;
- (int)numberOfBytesUntilStringEnd:(char *)arg1 searchStringLength:(int)arg2 acceptingBufferBits:(_Bool)arg3;
- (_Bool)hasNumberOfTokensRemaining:(unsigned int)arg1;
- (void)dealloc;
- (void)setShouldLog:(_Bool)arg1;
- (id)init;

@end

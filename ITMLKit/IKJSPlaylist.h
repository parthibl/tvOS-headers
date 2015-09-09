//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ITMLKit/IKJSObject.h>

#import <ITMLKit/IKJSPlaylist-Protocol.h>

@class IKAppPlaylistBridge;

@interface IKJSPlaylist : IKJSObject <IKJSPlaylist>
{
    IKAppPlaylistBridge *_bridge;
}

@property(readonly, nonatomic) IKAppPlaylistBridge *bridge; // @synthesize bridge=_bridge;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long length;
- (id)item:(long long)arg1;
- (id)pop;
- (void)push:(id)arg1;
- (id)splice:(long long)arg1:(long long)arg2:(id)arg3;
- (id)init;

@end

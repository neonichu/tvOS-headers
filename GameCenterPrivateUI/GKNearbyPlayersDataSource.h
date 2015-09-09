//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameCenterPrivateUI/GKBasicCollectionViewDataSource.h>

@class NSMutableArray;
@protocol GKNearbyBrowserDelegate;

@interface GKNearbyPlayersDataSource : GKBasicCollectionViewDataSource
{
    _Bool _browsingForNearbyPlayers;
    id <GKNearbyBrowserDelegate> _nearbyDelegate;
    NSMutableArray *_nearbyPlayers;
}

@property(retain, nonatomic) NSMutableArray *nearbyPlayers; // @synthesize nearbyPlayers=_nearbyPlayers;
@property(nonatomic) id <GKNearbyBrowserDelegate> nearbyDelegate; // @synthesize nearbyDelegate=_nearbyDelegate;
@property(nonatomic) _Bool browsingForNearbyPlayers; // @synthesize browsingForNearbyPlayers=_browsingForNearbyPlayers;
- (id)sectionTitle;
- (void)refreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2 updateNotifier:(id)arg3;
- (void)removeAllPlayers;
- (void)setNearbyPlayer:(id)arg1 reachable:(_Bool)arg2;
- (void)didUpdateModel;
- (void)dealloc;
- (id)init;

@end


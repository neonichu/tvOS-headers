//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString, TVSDataClientResultsController, TVSDataCollection, TVSImageProxy, UIImage;

@interface TVDataClientPlaylist : NSObject
{
    TVSDataCollection *_dataCollection;
    unsigned long long _type;
    TVSDataClientResultsController *_previewDataClientResultsController;
    NSMutableArray *_mutableChildPlaylists;
}

+ (CDUnknownBlockType)sortComparator;
@property(copy, nonatomic) NSMutableArray *mutableChildPlaylists; // @synthesize mutableChildPlaylists=_mutableChildPlaylists;
@property(retain, nonatomic) TVSDataClientResultsController *previewDataClientResultsController; // @synthesize previewDataClientResultsController=_previewDataClientResultsController;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) TVSDataCollection *dataCollection; // @synthesize dataCollection=_dataCollection;
- (void).cxx_destruct;
- (void)addChildPlaylist:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *childPlaylists;
@property(readonly, nonatomic) TVSImageProxy *imageProxy;
@property(readonly, nonatomic) UIImage *typeImage;
@property(readonly, copy, nonatomic) NSString *playlistItemCountString;
@property(readonly, nonatomic) unsigned long long playlistItemCount;
@property(readonly, copy, nonatomic) NSString *name;
@property(readonly, nonatomic) id parentIdentifier;
@property(readonly, nonatomic) id identifier;
- (id)initWithDataCollection:(id)arg1;
- (id)init;

@end


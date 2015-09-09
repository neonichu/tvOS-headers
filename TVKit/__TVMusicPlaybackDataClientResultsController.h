//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TVKit/__TVMusicDataClientResultsController.h>

@class NSString, TVSDataCollection;

@interface __TVMusicPlaybackDataClientResultsController : __TVMusicDataClientResultsController
{
    TVSDataCollection *_album;
    TVSDataCollection *_artistOrComposer;
    _Bool _isComposer;
    NSString *_genreName;
}

- (void).cxx_destruct;
- (id)queryForController:(id)arg1;
- (id)initWithComposer:(id)arg1 genre:(id)arg2;
- (id)initWithAlbum:(id)arg1 genre:(id)arg2;
- (id)initWithArtist:(id)arg1 genre:(id)arg2;

@end


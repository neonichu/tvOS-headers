//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TVKit/TVMusicTableViewController.h>

@class TVDataPreviewViewController, TVSDataCollection;

@interface TVMusicSongsTableViewController : TVMusicTableViewController
{
    _Bool _showArtistNames;
    _Bool _showShuffle;
    _Bool _showingShuffleSection;
    TVDataPreviewViewController *_shufflePreviewViewController;
    TVDataPreviewViewController *_artworkPreviewViewController;
    TVSDataCollection *_album;
    TVSDataCollection *_artist;
    TVSDataCollection *_composer;
}

@property(retain, nonatomic) TVSDataCollection *composer; // @synthesize composer=_composer;
@property(retain, nonatomic) TVSDataCollection *artist; // @synthesize artist=_artist;
@property(retain, nonatomic) TVSDataCollection *album; // @synthesize album=_album;
@property(retain, nonatomic) TVDataPreviewViewController *artworkPreviewViewController; // @synthesize artworkPreviewViewController=_artworkPreviewViewController;
@property(nonatomic) _Bool showingShuffleSection; // @synthesize showingShuffleSection=_showingShuffleSection;
@property(retain, nonatomic) TVDataPreviewViewController *shufflePreviewViewController; // @synthesize shufflePreviewViewController=_shufflePreviewViewController;
@property(nonatomic) _Bool showShuffle; // @synthesize showShuffle=_showShuffle;
@property(nonatomic) _Bool showArtistNames; // @synthesize showArtistNames=_showArtistNames;
- (void).cxx_destruct;
- (void)_startMusicPlaybackAtIndexPath:(id)arg1;
- (void)_configureShuffleSectionRowCell:(id)arg1 atRowIndex:(long long)arg2;
- (unsigned long long)_numberOfSongsSectionRows;
- (unsigned long long)_numberOfShuffleSectionRows;
- (void)_updateShuffleSectionIfNecessary;
- (void)_handlePlayPauseButton;
- (void)_delayedPreviewUpdate;
- (void)setResults:(id)arg1;
- (void)configureTableViewCellRowCell:(id)arg1 atRowIndex:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)initWithComposer:(id)arg1;
- (id)initWithArtist:(id)arg1;
- (id)initWithAlbum:(id)arg1;
- (id)initWithDataClient:(id)arg1;

@end


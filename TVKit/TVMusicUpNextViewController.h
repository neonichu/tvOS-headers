//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TVKit/TVMusicSongsTableViewController.h>

@class NSIndexPath, TVSPlayer;

@interface TVMusicUpNextViewController : TVMusicSongsTableViewController
{
    TVSPlayer *_player;
    _Bool _ignorePlaylistChanges;
    long long _selectedIndex;
    NSIndexPath *_currentFocusedIndexPath;
}

@property(copy, nonatomic) NSIndexPath *currentFocusedIndexPath; // @synthesize currentFocusedIndexPath=_currentFocusedIndexPath;
- (void).cxx_destruct;
- (id)_playlist;
- (void)_highlightCurrentIndex;
- (void)_setDataFromCurrentPlaylist;
- (void)_reloadDataFromCurrentPlaylist;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)indexPathForPreferredFocusedItemForTableView:(id)arg1;
- (void)tableView:(id)arg1 didFocusRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithPlayer:(id)arg1;
- (id)initWithDataClient:(id)arg1;

@end


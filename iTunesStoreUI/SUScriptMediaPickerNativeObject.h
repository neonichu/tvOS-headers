//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesStoreUI/SUScriptViewControllerNativeObject.h>

#import <iTunesStoreUI/MPMediaPickerControllerDelegate-Protocol.h>

@class NSString;

@interface SUScriptMediaPickerNativeObject : SUScriptViewControllerNativeObject <MPMediaPickerControllerDelegate>
{
}

- (void)mediaPickerDidCancel:(id)arg1;
- (void)mediaPicker:(id)arg1 didPickMediaItems:(id)arg2;
- (void)setupNativeObject;
- (void)destroyNativeObject;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class ALAssetsLibrary, NSHashTable, NSMutableDictionary, PLPhotoLibrary;

__attribute__((visibility("hidden")))
@interface ALAssetsLibraryPrivate : NSObject
{
    ALAssetsLibrary *_assetsLibrary;
    PLPhotoLibrary *_photoLibrary;
    NSHashTable *_assetGroupInternals;
    NSMutableDictionary *_groupURLSByAlbumOID;
    _Bool _isValid;
}

@property(nonatomic) _Bool isValid; // @synthesize isValid=_isValid;
@property(nonatomic) ALAssetsLibrary *assetsLibrary; // @synthesize assetsLibrary=_assetsLibrary;
- (void)dealloc;
- (void)registerAlbum:(struct NSObject *)arg1 assetGroupPrivate:(id)arg2;
- (void)photoLibraryDidChange:(id)arg1;
@property(readonly, retain, nonatomic) PLPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
- (id)initWithAssetsLibrary:(id)arg1;

@end


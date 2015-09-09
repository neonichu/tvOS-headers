//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class ASAccount, NSMutableDictionary;

@interface ASFolderHierarchy : NSObject
{
    ASAccount *_account;
    NSMutableDictionary *_folderCache;
    NSMutableDictionary *_folderByIdCache;
    id _delegate;
}

+ (void)cleanUpFilesForAccountWithId:(id)arg1;
+ (id)_folderCacheFilenameWithId:(id)arg1;
+ (id)_dataDirectoryPath;
- (void).cxx_destruct;
- (void)_restoreFromSavedFoldersThatExternalClientsCareAbout;
- (void)setFolderIdsThatExternalClientsCareAbout:(id)arg1;
- (id)folderIdsThatExternalClientsCareAboutForDataclasses:(long long)arg1;
- (id)folderIdsThatExternalClientsCareAbout;
- (void)setFolderCache:(id)arg1;
- (void)_setFolderCache:(id)arg1;
- (void)_pruneBadFolderIdsThatExternalClientsCareAbout;
- (void)blowAwayFolderCache;
- (void)_blowAwayFolderCacheWithoutSavingOldFolderPaths;
- (void)_identityMatchAndSetFoldersThatExternalClientsCareAbout:(id)arg1;
- (id)_pathForFolder:(id)arg1 usingCache:(id)arg2 foldersById:(id)arg3;
- (id)foldersUnderFolderWithID:(id)arg1;
- (void)_setFolderPathsFromCurrentCache;
- (void)_setSavedFolderPathsThatExternalClientsCareAbout:(id)arg1;
- (id)_savedFolderPathsThatExternalClientsCareAbout;
- (void)clearLocalCache;
- (id)foldersTag;
- (id)folders;
- (id)folderForID:(id)arg1;
- (id)folderCache;
- (id)_deviceIdInCache;
- (void)_setFolderByIdCacheFromCurrentCache;
- (id)_folderCacheFilename;
- (void)setDelegate:(id)arg1;
- (id)description;
- (id)initWithAccount:(id)arg1;

@end


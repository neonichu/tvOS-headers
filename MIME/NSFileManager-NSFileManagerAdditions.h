//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSFileManager.h>

@interface NSFileManager (NSFileManagerAdditions)
- (id)mf_valueForExtendedAttribute:(id)arg1 ofItemAtPath:(id)arg2 error:(id *)arg3;
- (_Bool)mf_setValue:(id)arg1 forExtendedAttribute:(id)arg2 ofItemAtPath:(id)arg3 error:(id *)arg4;
- (_Bool)mf_protectFileAtPath:(id)arg1 withClass:(int)arg2 error:(id *)arg3;
- (void)mf_deleteFilesInSortedArray:(id)arg1 matchingPrefix:(id)arg2 fromDirectory:(id)arg3;
- (id)mf_pathsAtDirectory:(id)arg1 beginningWithString:(id)arg2;
- (id)mf_fileModificationDateAtPath:(id)arg1 traverseLink:(_Bool)arg2;
- (_Bool)mf_canWriteToDirectoryAtPath:(id)arg1;
- (_Bool)mf_makeCompletePath:(id)arg1 mode:(int)arg2;
- (id)mf_makeUniqueFileInDirectory:(id)arg1;
@end


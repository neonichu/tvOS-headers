//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSFileManager.h>

@interface NSFileManager (CUTAdditions)
- (id)cutRandomTemporaryPathWithFileName:(id)arg1;
- (id)cutUniqueFilename:(id)arg1 atPath:(id)arg2 ofType:(id)arg3;
- (id)cutCreateUniqueDirectoryWithName:(id)arg1 atPath:(id)arg2 ofType:(id)arg3;
- (_Bool)_cutIsPathOnMissingVolume:(id)arg1;
@end


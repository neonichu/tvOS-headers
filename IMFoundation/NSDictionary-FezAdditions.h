//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSDictionary.h>

@interface NSDictionary (FezAdditions)
+ (id)dictionaryWithKeyArray:(id)arg1 defaultValue:(id)arg2;
+ (id)dictionaryWithArchiveData:(id)arg1;
+ (id)dictionaryWithArchiveData:(id)arg1 allowedClasses:(id)arg2;
+ (id)dictionaryWithPlistData:(id)arg1;
+ (id)_dictionaryWithData:(id)arg1 isPlist:(_Bool)arg2 allowedClasses:(id)arg3;
- (id)__imDeepCopy;
- (id)dictionaryFromChanges:(id)arg1;
- (id)archiveData;
- (id)plistData;
- (id)keysOfChangedEntriesComparedTo:(id)arg1;
- (_Bool)__imIsMutable;
@end


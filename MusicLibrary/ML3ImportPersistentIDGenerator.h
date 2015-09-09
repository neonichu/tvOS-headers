//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MusicLibrary/ML3PersistentIDGenerator.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface ML3ImportPersistentIDGenerator : ML3PersistentIDGenerator
{
    NSMutableDictionary *_pregeneratedIdMappings;
}

- (void).cxx_destruct;
- (void)removePersistentIDFromIdMapping:(long long)arg1;
- (long long)nextPersistentIDForImportItem:(shared_ptr_de333b55)arg1;
- (void)addIdMapping:(id)arg1 forProperty:(unsigned int)arg2;
- (id)initWithDatabaseConnection:(id)arg1;

@end


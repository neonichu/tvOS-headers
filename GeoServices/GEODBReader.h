//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface GEODBReader : NSObject
{
    _Bool _defunct;
    _Bool _closed;
    int _editionUpdating;
    NSObject<OS_dispatch_queue> *_readQueue;
    NSString *_path;
    struct sqlite3 *_db;
    struct sqlite3_stmt *_tileQuery;
    struct sqlite3_stmt *_versionQuery;
    CDStruct_e4886f83 *_expirationRecords;
    unsigned long long _expirationRecordCount;
}

- (void)setExpirationRecords:(CDStruct_e4886f83 *)arg1 count:(unsigned long long)arg2;
- (void)dataForKeys:(struct GEOTileKeyList *)arg1 asyncHandler:(CDUnknownBlockType)arg2;
- (void)dataForKey:(struct _GEOTileKey *)arg1 asyncHandler:(CDUnknownBlockType)arg2;
- (id)dataForKey:(struct _GEOTileKey *)arg1 isCurrent:(_Bool *)arg2 eTag:(id *)arg3;
- (id)_dataForKey:(struct _GEOTileKey)arg1 isCurrent:(_Bool *)arg2 eTag:(id *)arg3;
- (id)_dataForA:(unsigned int)arg1 andB:(unsigned int)arg2 andC:(unsigned int)arg3 andD:(unsigned int)arg4 isCurrent:(_Bool *)arg5 eTag:(id *)arg6;
@property _Bool closed;
- (void)_openDB;
- (void)_closeDB;
- (void)_editionUpdateEnd:(id)arg1;
- (void)_editionUpdateBegin:(id)arg1;
- (void)_deviceLocking;
- (void)_databaseReset:(id)arg1;
- (void)dealloc;
- (id)initWithPath:(id)arg1;

@end


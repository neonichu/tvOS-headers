//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SSSQLiteDatabase;

@interface SSKeyValueStoreDatabase : NSObject
{
    SSSQLiteDatabase *_database;
}

- (void)_dispatchBlockAsync:(CDUnknownBlockType)arg1;
- (void)readUsingSessionBlock:(CDUnknownBlockType)arg1;
- (void)readAsyncUsingSessionBlock:(CDUnknownBlockType)arg1;
- (void)modifyUsingTransactionBlock:(CDUnknownBlockType)arg1;
- (void)modifyAsyncUsingTransactionBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initReadOnly;
- (id)init;
- (id)_initReadOnly:(_Bool)arg1;

@end


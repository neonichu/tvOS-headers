//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ML3DatabaseConnection;

@interface ML3AccountCacheDatabase : NSObject
{
    ML3DatabaseConnection *_databaseConnection;
}

- (void).cxx_destruct;
- (_Bool)_clearCacheDatabase;
- (_Bool)_internalSetAppleID:(id)arg1 forDSID:(unsigned long long)arg2;
- (_Bool)_closeDatabase;
- (_Bool)_openDatabaseIsRetry:(_Bool)arg1;
- (_Bool)_openDatabase;
- (id)_databasePath;
- (id)appleIDForDSID:(unsigned long long)arg1;
- (_Bool)setAppleID:(id)arg1 forDSID:(unsigned long long)arg2;
- (id)init;

@end


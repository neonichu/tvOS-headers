//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DBMigrationResult : NSObject
{
    long long _errorCode;
    long long _dbVersion;
}

@property(nonatomic) long long dbVersion; // @synthesize dbVersion=_dbVersion;
@property(nonatomic) long long errorCode; // @synthesize errorCode=_errorCode;
- (id)initWithErrorCode:(long long)arg1 andDBVersion:(long long)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreServices/NSCopying-Protocol.h>

@interface SSSQLitePredicate : NSObject <NSCopying>
{
}

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)SQLJoinClausesForEntityClass:(Class)arg1;
- (id)SQLForEntityClass:(Class)arg1;
- (void)bindToStatement:(struct sqlite3_stmt *)arg1 bindingIndex:(inout int *)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end


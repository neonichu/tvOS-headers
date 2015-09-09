//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreServices/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSObject, NSSet, NSString;
@protocol OS_xpc_object;

@protocol SSSQLiteEntity <NSObject>
+ (NSString *)databasePropertyToSetClientProperty:(NSString *)arg1;
+ (NSString *)databasePropertyToGetClientProperty:(NSString *)arg1;
+ (NSMutableDictionary *)copyDatabaseDictionaryToSetClientDictionary:(NSDictionary *)arg1;
+ (NSString *)disambiguatedSQLForProperty:(NSString *)arg1;
+ (NSSet *)foreignDatabaseTablesToDelete;
+ (NSString *)foreignKeyColumnForTable:(NSString *)arg1;
+ (NSString *)foreignDatabaseTableForProperty:(NSString *)arg1;
+ (NSString *)foreignDatabaseColumnForProperty:(NSString *)arg1;
+ (NSString *)joinClauseForProperty:(NSString *)arg1;
+ (NSString *)databaseTable;
+ (id)databaseValueForProperty:(NSString *)arg1 clientValue:(id)arg2;
- (_Bool)deleteFromDatabase;
- (NSObject<OS_xpc_object> *)copyXPCEncodedValuesForClientProperties:(NSArray *)arg1;
- (NSDictionary *)copyValuesForClientProperties:(NSArray *)arg1;
- (_Bool)setValuesWithDictionary:(NSDictionary *)arg1;
- (_Bool)setValue:(id)arg1 forProperty:(NSString *)arg2;
- (void)getValues:(id *)arg1 forProperties:(const id *)arg2 count:(unsigned long long)arg3;
- (id)valueForProperty:(NSString *)arg1;
@end


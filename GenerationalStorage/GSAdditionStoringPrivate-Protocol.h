//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GenerationalStorage/GSAdditionStoring-Protocol.h>

@class GSAddition, NSDictionary, NSString;

@protocol GSAdditionStoringPrivate <GSAdditionStoring>
- (_Bool)mergeAdditionUserInfo:(GSAddition *)arg1 value:(NSDictionary *)arg2 error:(id *)arg3;
- (NSDictionary *)setAdditionNameSpace:(GSAddition *)arg1 value:(NSString *)arg2 error:(id *)arg3;
- (_Bool)setAdditionDisplayName:(GSAddition *)arg1 value:(NSString *)arg2 error:(id *)arg3;
- (_Bool)setAdditionOptions:(GSAddition *)arg1 value:(unsigned long long)arg2 error:(id *)arg3;
- (NSDictionary *)getAdditionDictionary:(GSAddition *)arg1 error:(id *)arg2;
@end


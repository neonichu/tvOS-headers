//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WebInspector/RWIProtocolJSONObject.h>

@interface RWIProtocolRuntimeTypeSet : RWIProtocolJSONObject
{
}

@property(nonatomic) _Bool isSymbol;
@property(nonatomic) _Bool isObject;
@property(nonatomic) _Bool isString;
@property(nonatomic) _Bool isNumber;
@property(nonatomic) _Bool isInteger;
@property(nonatomic) _Bool isBoolean;
@property(nonatomic) _Bool isNull;
@property(nonatomic) _Bool isUndefined;
@property(nonatomic) _Bool isFunction;
- (id)initWithIsFunction:(_Bool)arg1 isUndefined:(_Bool)arg2 isNull:(_Bool)arg3 isBoolean:(_Bool)arg4 isInteger:(_Bool)arg5 isNumber:(_Bool)arg6 isString:(_Bool)arg7 isObject:(_Bool)arg8 isSymbol:(_Bool)arg9;

@end


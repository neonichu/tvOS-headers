//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IKCSSDeclaration : NSObject
{
    _Bool _important;
    unsigned long long _type;
    NSString *_name;
    NSString *_aliasedName;
    NSString *_stringValue;
}

+ (id)typeString:(unsigned long long)arg1;
@property(readonly, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
@property _Bool important; // @synthesize important=_important;
@property(retain, nonatomic) NSString *aliasedName; // @synthesize aliasedName=_aliasedName;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)description;

@end

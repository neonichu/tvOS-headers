//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HelpKit/NSCopying-Protocol.h>

@class NSString, NSURL;

@interface HLPHelpItem : NSObject <NSCopying>
{
    HLPHelpItem *_parent;
    long long _level;
    NSURL *_iconURL;
    NSString *_name;
    NSString *_identifier;
}

@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSURL *iconURL; // @synthesize iconURL=_iconURL;
@property(nonatomic) long long level; // @synthesize level=_level;
@property(nonatomic) __weak HLPHelpItem *parent; // @synthesize parent=_parent;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)initWithDictionary:(id)arg1 helpBookURL:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end


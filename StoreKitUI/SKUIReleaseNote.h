//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface SKUIReleaseNote : NSObject
{
    NSString *_changeNotes;
    NSDate *_date;
    NSString *_versionString;
}

+ (id)dateFormatter;
@property(readonly, nonatomic) NSString *versionString; // @synthesize versionString=_versionString;
@property(readonly, nonatomic) NSDate *date; // @synthesize date=_date;
@property(readonly, nonatomic) NSString *changeNotes; // @synthesize changeNotes=_changeNotes;
- (void).cxx_destruct;
- (id)initWithReleaseNoteDictionary:(id)arg1 dateFormatter:(id)arg2;

@end


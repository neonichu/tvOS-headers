//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class OCFontSubfamily;

__attribute__((visibility("hidden")))
@interface OCFont : NSObject
{
    _Bool _bold;
    _Bool _italic;
    OCFontSubfamily *_subfamily;
}

+ (id)fontWithSubfamily:(id)arg1 bold:(_Bool)arg2 italic:(_Bool)arg3;
@property(nonatomic) _Bool italic; // @synthesize italic=_italic;
@property(nonatomic) _Bool bold; // @synthesize bold=_bold;
@property(readonly, nonatomic) OCFontSubfamily *subfamily; // @synthesize subfamily=_subfamily;
- (void)dealloc;
- (id)initWithSubfamily:(id)arg1 bold:(_Bool)arg2 italic:(_Bool)arg3;

@end


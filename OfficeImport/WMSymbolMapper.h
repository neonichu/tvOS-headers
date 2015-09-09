//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfficeImport/CMMapper.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WMSymbolMapper : CMMapper
{
    unsigned short mCharacter;
    NSString *mFontName;
}

+ (_Bool)isSymbolFontName:(id)arg1;
+ (unsigned short)mapCharacter:(unsigned short)arg1 withFontName:(id)arg2;
+ (unsigned short)mapZapfDingbatsCharacter:(unsigned short)arg1;
+ (unsigned short)mapWindingsCharacter:(unsigned short)arg1;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (id)initWithWDSymbol:(id)arg1 parent:(id)arg2;

@end


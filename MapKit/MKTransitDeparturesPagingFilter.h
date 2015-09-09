//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface MKTransitDeparturesPagingFilter : NSObject
{
    _Bool _limitNumCells;
    _Bool _limitNumLines;
    unsigned long long _maxNumCells;
    unsigned long long _numLinesFallbackThreshold;
    unsigned long long _numLinesFallbackValue;
}

+ (id)defaultFilterForSequences:(id)arg1;
@property(nonatomic) unsigned long long numLinesFallbackValue; // @synthesize numLinesFallbackValue=_numLinesFallbackValue;
@property(nonatomic) unsigned long long numLinesFallbackThreshold; // @synthesize numLinesFallbackThreshold=_numLinesFallbackThreshold;
@property(nonatomic) _Bool limitNumLines; // @synthesize limitNumLines=_limitNumLines;
@property(nonatomic) unsigned long long maxNumCells; // @synthesize maxNumCells=_maxNumCells;
@property(nonatomic) _Bool limitNumCells; // @synthesize limitNumCells=_limitNumCells;

@end


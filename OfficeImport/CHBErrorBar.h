//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CHBErrorBar : NSObject
{
}

+ (void)readFrom:(struct XlChartErrorBar *)arg1 toSeries:(id)arg2 state:(id)arg3;
+ (int)xlErrorBarSourceFrom:(int)arg1;
+ (int)xlErrorBarTypeFrom:(int)arg1 direction:(int)arg2;
+ (id)readErrorBarGraphicProperties:(const struct XlChartSeriesFormat *)arg1 forStyleIndex:(unsigned long long)arg2 state:(id)arg3;
+ (int)edErrorBarDirectionFrom:(int)arg1;
+ (int)edErrorBarTypeFrom:(int)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class GEOEquatorialCelestialBodyData, GEOHorizontalCelestialBodyData, GEOSolarEclipticCelestialBodyData, NSDate;

@interface GEOCelestialEphemeris : NSObject
{
    NSDate *_date;
    CDStruct_2c43369c _coordinate;
    long long _body;
    GEOSolarEclipticCelestialBodyData *_eclipticCoord;
    GEOEquatorialCelestialBodyData *_equatorialCoord;
    GEOHorizontalCelestialBodyData *_horizontalCoord;
    NSDate *_rise;
    NSDate *_transit;
    NSDate *_set;
    double _phaseAngle;
    double _illuminatedFraction;
    double _elongation;
    double _parallacticAngle;
}

@property(readonly, nonatomic) double parallacticAngle; // @synthesize parallacticAngle=_parallacticAngle;
@property(readonly, nonatomic) double illuminatedFraction; // @synthesize illuminatedFraction=_illuminatedFraction;
@property(readonly, nonatomic) double phaseAngle; // @synthesize phaseAngle=_phaseAngle;
@property(readonly, nonatomic) double elongation; // @synthesize elongation=_elongation;
@property(readonly, nonatomic) NSDate *set; // @synthesize set=_set;
@property(readonly, nonatomic) NSDate *transit; // @synthesize transit=_transit;
@property(readonly, nonatomic) NSDate *rise; // @synthesize rise=_rise;
- (struct CAARiseTransitSetDetails)_riseTransitSetForBody:(long long)arg1;
- (void)_getRightAscension:(double *)arg1 declination:(double *)arg2 forJulianDay:(double)arg3 forBody:(long long)arg4;
- (void)dealloc;
- (id)initWithLocation:(CDStruct_c3b9c2ee)arg1 date:(id)arg2 body:(long long)arg3;
@property(readonly, nonatomic) GEOHorizontalCelestialBodyData *horizontalCoord;
@property(readonly, nonatomic) GEOEquatorialCelestialBodyData *equatorialCoord;
@property(readonly, nonatomic) GEOSolarEclipticCelestialBodyData *eclipticCoord;

@end


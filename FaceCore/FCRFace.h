//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSData, NSDictionary;

@interface FCRFace : NSObject
{
    CDStruct_ac082cae face;
    CDStruct_ac082cae leftEye;
    CDStruct_ac082cae rightEye;
    CDStruct_ac082cae mouth;
    double faceSize;
    double faceAngle;
    long long trackID;
    unsigned long long trackDuration;
    NSData *faceprint;
    int faceType;
    NSDictionary *faceLandmarkPoints;
    NSDictionary *expressionFeatures;
    NSDictionary *additionalInfo;
}

@property(retain) NSDictionary *additionalInfo; // @synthesize additionalInfo;
@property long long trackID; // @synthesize trackID;
@property unsigned long long trackDuration; // @synthesize trackDuration;
@property CDStruct_ac082cae rightEye; // @synthesize rightEye;
@property CDStruct_ac082cae mouth; // @synthesize mouth;
@property CDStruct_ac082cae leftEye; // @synthesize leftEye;
@property(retain) NSData *faceprint; // @synthesize faceprint;
@property int faceType; // @synthesize faceType;
@property double faceSize; // @synthesize faceSize;
@property(retain) NSDictionary *faceLandmarkPoints; // @synthesize faceLandmarkPoints;
@property CDStruct_ac082cae face; // @synthesize face;
@property double faceAngle; // @synthesize faceAngle;
@property(retain) NSDictionary *expressionFeatures; // @synthesize expressionFeatures;
@property(readonly) _Bool hasMouthBounds;
@property(readonly) _Bool hasRightEyeBounds;
@property(readonly) _Bool hasLeftEyeBounds;
- (void)dealloc;

@end


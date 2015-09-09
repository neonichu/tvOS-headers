//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray;

@interface GEOPDFlyover : PBCodable <NSCopying>
{
    CDStruct_3d4e3f4a *_cameraPaths;
    unsigned long long _cameraPathsCount;
    unsigned long long _cameraPathsSpace;
    CDStruct_11cc3dfc *_labelFrames;
    unsigned long long _labelFramesCount;
    unsigned long long _labelFramesSpace;
    NSMutableArray *_labels;
    NSMutableArray *_notificationMessages;
    _Bool _useSplines;
    struct {
        unsigned int useSplines:1;
    } _has;
}

+ (id)flyoverForPlaceData:(id)arg1;
@property(retain, nonatomic) NSMutableArray *notificationMessages; // @synthesize notificationMessages=_notificationMessages;
@property(retain, nonatomic) NSMutableArray *labels; // @synthesize labels=_labels;
@property(nonatomic) _Bool useSplines; // @synthesize useSplines=_useSplines;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)notificationMessageAtIndex:(unsigned long long)arg1;
- (unsigned long long)notificationMessagesCount;
- (void)addNotificationMessage:(id)arg1;
- (void)clearNotificationMessages;
- (id)labelAtIndex:(unsigned long long)arg1;
- (unsigned long long)labelsCount;
- (void)addLabel:(id)arg1;
- (void)clearLabels;
- (void)setLabelFrames:(CDStruct_11cc3dfc *)arg1 count:(unsigned long long)arg2;
- (CDStruct_11cc3dfc)labelFrameAtIndex:(unsigned long long)arg1;
- (void)addLabelFrame:(CDStruct_11cc3dfc)arg1;
- (void)clearLabelFrames;
@property(readonly, nonatomic) CDStruct_11cc3dfc *labelFrames;
@property(readonly, nonatomic) unsigned long long labelFramesCount;
@property(nonatomic) _Bool hasUseSplines;
- (void)setCameraPaths:(CDStruct_3d4e3f4a *)arg1 count:(unsigned long long)arg2;
- (CDStruct_3d4e3f4a)cameraPathAtIndex:(unsigned long long)arg1;
- (void)addCameraPath:(CDStruct_3d4e3f4a)arg1;
- (void)clearCameraPaths;
@property(readonly, nonatomic) CDStruct_3d4e3f4a *cameraPaths;
@property(readonly, nonatomic) unsigned long long cameraPathsCount;
- (void)dealloc;
- (id)bestLocalizedAnnouncementMessage;
- (id)bestLocalizedLabelAtIndex:(unsigned long long)arg1;

@end


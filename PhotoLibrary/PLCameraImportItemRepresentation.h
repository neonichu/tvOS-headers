//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class ICCameraFile, NSDictionary, NSString;

@interface PLCameraImportItemRepresentation : NSObject
{
    ICCameraFile *_cameraFile;
    NSDictionary *_metadata;
    _Bool _canRequestMetadata;
    _Bool _canRequestThumbnail;
    NSString *_path;
    _Bool _inDatabase;
}

@property(nonatomic) _Bool inDatabase; // @synthesize inDatabase=_inDatabase;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(nonatomic) _Bool canRequestThumbnail; // @synthesize canRequestThumbnail=_canRequestThumbnail;
@property(nonatomic) _Bool canRequestMetadata; // @synthesize canRequestMetadata=_canRequestMetadata;
@property(retain, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(retain, nonatomic) ICCameraFile *cameraFile; // @synthesize cameraFile=_cameraFile;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (_Bool)isAudio;
- (_Bool)isMovie;
- (_Bool)isRaw;
- (_Bool)isJPEG;
- (id)fileExtension;
- (_Bool)isInDatabaseForce:(_Bool)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithCameraFile:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSDictionary, NSString;

@protocol TVPhotoSourceExtensionProtocol
- (void)fetchAssetsForCollectionWithIdentifier:(NSString *)arg1 options:(NSDictionary *)arg2 completion:(void (^)(NSArray *))arg3;
- (void)fetchCollectionsWithCompletion:(void (^)(NSArray *))arg1;
@end


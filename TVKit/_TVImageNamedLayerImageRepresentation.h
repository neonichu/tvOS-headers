//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TVKit/TVImageRepresentation.h>

@protocol UINamedLayerImage;

@interface _TVImageNamedLayerImageRepresentation : TVImageRepresentation
{
    id <UINamedLayerImage> _namedLayerImage;
}

- (void).cxx_destruct;
- (id)_originalImageCacheKey;
- (struct CGImage *)_originalImage;
- (id)initWithNamedLayerImage:(id)arg1;

@end


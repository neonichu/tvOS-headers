//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/NSCoding-Protocol.h>

__attribute__((visibility("hidden")))
@interface _UITextViewRestorableScrollPosition : NSObject <NSCoding>
{
    struct _NSRange _range;
    double _offsetInLine;
}

+ (id)restorableScrollPositionWithDictionary:(id)arg1;
+ (id)restorableScrollPositionWithRange:(struct _NSRange)arg1;
+ (id)restorableScrollPositionForStateRestoration:(id)arg1;
+ (id)restorableScrollPositionForTextView:(id)arg1;
- (id)debugDescription;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithTextViewForStateRestoration:(id)arg1;
- (id)initWithTextView:(id)arg1;
- (double)offsetWithinLine;
- (struct _NSRange)range;
- (id)dictionaryRepresentation;

@end


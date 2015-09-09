//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface CNiOSABConstantsMapping : NSObject
{
    NSDictionary *_mapping;
    id _defaultConstant;
}

+ (id)CNToABPersonShortNameFormatConstantsMapping;
+ (id)ABToCNContactShortNameFormatConstantsMapping;
+ (id)CNToABSourceTypeConstantsMapping;
+ (id)ABToCNContainerTypeConstantsMapping;
+ (id)CNToABLabelConstantsMapping;
+ (id)ABToCNLabelConstantsMapping;
+ (id)CNToABPersonSocialProfileConstantsMapping;
+ (id)ABToCNPersonSocialProfileConstantsMapping;
+ (id)CNToABPersonInstantMessageConstantsMapping;
+ (id)ABToCNPersonInstantMessageConstantsMapping;
+ (id)CNToABPersonAddressConstantsMapping;
+ (id)ABToCNPersonAddressConstantsMapping;
+ (id)CNToABPersonSortOrderingConstantsMapping;
+ (id)ABToCNContactSortOrderConstantsMapping;
+ (id)CNToABCompositeNameFormatConstantsMapping;
+ (id)ABtoCNContactDisplayNameOrderConstantsMapping;
+ (id)CNToABPersonKindConstantsMapping;
+ (id)ABToCNPersonKindConstantsMapping;
@property(retain, nonatomic) id defaultConstant; // @synthesize defaultConstant=_defaultConstant;
@property(retain, nonatomic) NSDictionary *mapping; // @synthesize mapping=_mapping;
- (id)mappedConstant:(id)arg1;
- (id)invertedMapping;
- (void)dealloc;
- (id)initWithMapping:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <GeoServices/GEOMapItemPrivate-Protocol.h>

@class GEOAddress, GEOFeatureStyleAttributes, GEOMapItemAttribution, GEOMapItemClientAttributes, GEOMapItemPhotosAttribution, GEOMapItemPlaceAttribution, GEOMapItemReviewsAttribution, GEOMapRegion, GEOPDBusinessClaim, GEOPDFlyover, GEOPDPlace, GEOPlace, NSArray, NSData, NSDate, NSDictionary, NSString, NSTimeZone, NSURL;
@protocol GEOMapItemTransitAttribution, GEOMapItemTransitInfo;

@interface GEOMapItemCoreRoutineEvent : NSObject <GEOMapItemPrivate>
{
    NSDictionary *_addressDictionary;
    GEOMapItemClientAttributes *_clientAttributes;
    GEOPlace *_place;
    NSString *_eventName;
    NSString *_eventTitle;
    NSDate *_eventDate;
    _Bool _eventIsAllDay;
    CDStruct_2c43369c _coordinate;
}

@property(readonly, nonatomic, getter=_businessClaim) GEOPDBusinessClaim *businessClaim;
@property(readonly, nonatomic, getter=_hasBusinessClaim) _Bool hasBusinessClaim;
- (id)_mapItemByStrippingOptionalData;
@property(readonly, nonatomic, getter=_photos) NSArray *photos;
@property(readonly, nonatomic, getter=_reviews) NSArray *reviews;
- (id)_asPlaceInfo;
@property(readonly, nonatomic, getter=_additionalPlaceInfos) NSArray *additionalPlaceInfos;
@property(readonly, nonatomic, getter=_customIconID) unsigned long long customIconID;
@property(readonly, nonatomic, getter=_styleAttributes) GEOFeatureStyleAttributes *styleAttributes;
@property(readonly, nonatomic, getter=_encyclopedicAttribution) GEOMapItemAttribution *encyclopedicAttribution;
@property(readonly, nonatomic, getter=_reviewsAttribution) GEOMapItemReviewsAttribution *reviewsAttribution;
@property(readonly, nonatomic, getter=_photosAttribution) GEOMapItemPhotosAttribution *photosAttribution;
@property(readonly, nonatomic, getter=_attribution) GEOMapItemPlaceAttribution *attribution;
- (int)_recommendedTransportType;
@property(readonly, nonatomic, getter=_poiSurveyURLString) NSString *poiSurveyURLString;
- (id)_calloutDisplayName;
- (id)_reviewLogoPathForScale:(double)arg1;
- (id)_reviewDisplayName;
- (_Bool)_showAddReview;
- (_Bool)_hasMoreReviewAttribution;
- (_Bool)_showReviewAttribution;
- (id)_photoLogoPathForScale:(double)arg1;
- (id)_photoDisplayName;
- (_Bool)_showAddPhoto;
- (_Bool)_hasMorePhotoAttribution;
- (_Bool)_showPhotoAttribution;
- (id)_infoLogoPathForScale:(double)arg1;
- (id)_infoDisplayName;
- (_Bool)_hasMoreInfoAttribution;
- (_Bool)_showInfoAttribution;
- (id)_urlForWritingAReview;
- (id)_urlForReview:(id)arg1;
- (id)_urlForPhotoWithUID:(id)arg1;
@property(readonly, copy, nonatomic, getter=_vendorID) NSString *vendorID;
@property(readonly, copy, nonatomic, getter=_providerURL) NSURL *providerURL;
@property(readonly, copy, nonatomic, getter=_webURL) NSURL *webURL;
@property(readonly, nonatomic, getter=_needsAttribution) _Bool needsAttribution;
@property(readonly, nonatomic, getter=_factoids) NSArray *factoids;
@property(readonly, nonatomic, getter=_hasPairOfFactoids) _Bool hasPairOfFactoids;
@property(readonly, nonatomic, getter=_textBlockText) NSString *textBlockText;
@property(readonly, nonatomic, getter=_textBlockTitle) NSString *textBlockTitle;
@property(readonly, nonatomic, getter=_hasTextBlock) _Bool hasTextBlock;
@property(readonly, nonatomic, getter=_openingHoursOptions) unsigned long long openingHoursOptions;
@property(readonly, nonatomic, getter=_operatingHours) NSArray *operatingHours;
@property(readonly, nonatomic, getter=_hasCurrentOperatingHours) _Bool hasCurrentOperatingHours;
@property(readonly, nonatomic, getter=_acceptsApplePay) _Bool acceptsApplePay;
@property(readonly, nonatomic, getter=_hasAcceptsApplePayAmenity) _Bool hasAcceptsApplePayAmenity;
@property(readonly, nonatomic, getter=_hasOperatingHours) _Bool hasOperatingHours;
@property(readonly, nonatomic, getter=_takesReservations) _Bool takesReservations;
@property(readonly, nonatomic, getter=_hasTakesReservationsAmenity) _Bool hasTakesReservationsAmenity;
@property(readonly, nonatomic, getter=_goodForKids) _Bool goodForKids;
@property(readonly, nonatomic, getter=_hasGoodForKidsAmenity) _Bool hasGoodForKidsAmenity;
@property(readonly, nonatomic, getter=_hasDelivery) _Bool hasDelivery;
@property(readonly, nonatomic, getter=_hasDeliveryAmenity) _Bool hasDeliveryAmenity;
@property(readonly, nonatomic, getter=_hasAnyAmenities) _Bool hasAnyAmenities;
- (_Bool)_hasLocalizedCategoryNamesForType:(unsigned int)arg1;
- (id)_localizedCategoryNamesForType:(unsigned int)arg1;
@property(readonly, nonatomic, getter=_disambiguationName) NSString *disambiguationName;
@property(readonly, nonatomic, getter=_telephone) NSString *telephone;
@property(readonly, nonatomic, getter=_hasTelephone) _Bool hasTelephone;
@property(readonly, nonatomic, getter=_resultSnippetDistanceDisplayThreshold) unsigned int resultSnippetDistanceDisplayThreshold;
@property(readonly, nonatomic, getter=_resultSnippetLocationString) NSString *resultSnippetLocationString;
@property(readonly, nonatomic, getter=_priceRange) unsigned int priceRange;
@property(readonly, nonatomic, getter=_hasPriceRange) _Bool hasPriceRange;
@property(readonly, nonatomic, getter=_normalizedUserRatingScore) float normalizedUserRatingScore;
@property(readonly, nonatomic, getter=_sampleSizeForUserRatingScore) unsigned int sampleSizeForUserRatingScore;
@property(readonly, nonatomic, getter=_hasUserRatingScore) _Bool hasUserRatingScore;
@property(readonly, nonatomic, getter=_businessURL) NSString *businessURL;
@property(readonly, nonatomic, getter=_areaInMeters) double areaInMeters;
@property(readonly, nonatomic, getter=_hasAreaInMeters) _Bool hasAreaInMeters;
@property(readonly, nonatomic, getter=_muid) unsigned long long muid;
@property(readonly, nonatomic, getter=_hasMUID) _Bool hasMUID;
@property(readonly, nonatomic, getter=_flyoverAnnouncementMessage) NSString *flyoverAnnouncementMessage;
@property(readonly, nonatomic, getter=_flyover) GEOPDFlyover *flyover;
@property(readonly, nonatomic, getter=_hasFlyover) _Bool hasFlyover;
@property(readonly, nonatomic, getter=_transitAttribution) id <GEOMapItemTransitAttribution> transitAttribution;
@property(readonly, nonatomic, getter=_transitInfo) id <GEOMapItemTransitInfo> transitInfo;
@property(readonly, nonatomic, getter=_hasTransit) _Bool hasTransit;
@property(readonly, nonatomic, getter=_resultProviderID) int resultProviderID;
@property(readonly, nonatomic, getter=_hasResultProviderID) _Bool hasResultProviderID;
@property(readonly, nonatomic, getter=_roadAccessPoints) NSArray *roadAccessPoints;
- (id)_arrivalMapRegionForTransportType:(int)arg1;
- (unsigned int)_travelDistanceForTransportType:(int)arg1;
- (unsigned int)_travelTimeForTransportType:(int)arg1;
- (_Bool)_hasTravelTimeForTransportType:(int)arg1;
- (id)_spokenAddressForLocale:(id)arg1;
@property(readonly, nonatomic, getter=_addressGeocodeAccuracy) int addressGeocodeAccuracy;
@property(readonly, nonatomic) GEOAddress *geoAddress;
@property(readonly, nonatomic, getter=_placeDataAsData) NSData *placeDataAsData;
@property(readonly, nonatomic, getter=_clientAttributes) GEOMapItemClientAttributes *clientAttributes;
@property(readonly, nonatomic, getter=_place) GEOPlace *place;
@property(readonly, nonatomic, getter=_placeType) int placeType;
@property(readonly, nonatomic, getter=_hasResolvablePartialInformation) _Bool hasResolvablePartialInformation;
@property(readonly, nonatomic, getter=_placeData) GEOPDPlace *placeData;
@property(readonly, nonatomic) _Bool isEventAllDay;
@property(readonly, nonatomic) NSDate *eventDate;
@property(readonly, nonatomic) NSString *eventName;
@property(readonly, nonatomic) _Bool contactIsMe;
@property(readonly, nonatomic) NSString *contactSpokenName;
@property(readonly, nonatomic) NSString *contactName;
@property(readonly, nonatomic) int contactAddressType;
@property(readonly, nonatomic) NSTimeZone *timezone;
@property(readonly, nonatomic) NSArray *areasOfInterest;
@property(readonly, nonatomic) NSDictionary *addressDictionary;
@property(readonly, nonatomic) GEOMapRegion *geoFenceMapRegion;
@property(readonly, nonatomic) GEOMapRegion *displayMapRegionOrNil;
@property(readonly, nonatomic) GEOMapRegion *displayMapRegion;
@property(readonly, nonatomic) CDStruct_c3b9c2ee centerCoordinate;
@property(readonly, nonatomic) CDStruct_c3b9c2ee coordinate;
@property(readonly, nonatomic) int referenceFrame;
@property(readonly, nonatomic, getter=isDisputed) _Bool disputed;
@property(readonly, nonatomic) NSData *encodedData;
- (id)spokenNameForLocale:(id)arg1;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic, getter=isValid) _Bool valid;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithAddressDictionary:(id)arg1 eventName:(id)arg2 eventTitle:(id)arg3 eventDate:(id)arg4 eventIsAllDay:(_Bool)arg5 coordinate:(CDStruct_c3b9c2ee)arg6 clientAttributes:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


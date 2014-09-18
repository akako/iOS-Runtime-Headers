/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOLatLng, GEOStructuredAddress, NSString;

@interface GEOWaypointID : PBCodable <NSCopying> {
    struct { 
        unsigned int muid : 1; 
        unsigned int resultProviderId : 1; 
    GEOStructuredAddress *_addressHint;
    } _has;
    GEOLatLng *_locationHint;
    unsigned long long _muid;
    NSString *_placeNameHint;
    unsigned long long _resultProviderId;
}

@property(retain) GEOStructuredAddress * addressHint;
@property(readonly) bool hasAddressHint;
@property(readonly) bool hasLocationHint;
@property bool hasMuid;
@property(readonly) bool hasPlaceNameHint;
@property bool hasResultProviderId;
@property(retain) GEOLatLng * locationHint;
@property unsigned long long muid;
@property(retain) NSString * placeNameHint;
@property unsigned long long resultProviderId;

- (id)addressHint;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAddressHint;
- (bool)hasLocationHint;
- (bool)hasMuid;
- (bool)hasPlaceNameHint;
- (bool)hasResultProviderId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)locationHint;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)muid;
- (id)placeNameHint;
- (bool)readFrom:(id)arg1;
- (unsigned long long)resultProviderId;
- (void)setAddressHint:(id)arg1;
- (void)setHasMuid:(bool)arg1;
- (void)setHasResultProviderId:(bool)arg1;
- (void)setLocationHint:(id)arg1;
- (void)setMuid:(unsigned long long)arg1;
- (void)setPlaceNameHint:(id)arg1;
- (void)setResultProviderId:(unsigned long long)arg1;
- (void)writeTo:(id)arg1;

@end
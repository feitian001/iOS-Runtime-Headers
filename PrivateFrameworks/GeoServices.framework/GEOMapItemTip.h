/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapItemTip : NSObject {
    GEOPDTip * _geoTip;
}

@property (nonatomic, readonly) NSString *bestImageURL;
@property (nonatomic, retain) GEOPDTip *geoTip;
@property (nonatomic, readonly) BOOL hasTipId;
@property (nonatomic, readonly) BOOL hasTipTime;
@property (nonatomic, readonly) NSString *localizedSnippet;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *tipId;
@property (nonatomic, readonly) double tipTime;

- (id)bestImageURL;
- (void)dealloc;
- (id)geoTip;
- (BOOL)hasTipId;
- (BOOL)hasTipTime;
- (id)initWithGEOPDTip:(id)arg1;
- (id)localizedSnippet;
- (id)name;
- (void)setGeoTip:(id)arg1;
- (id)tipId;
- (double)tipTime;

@end

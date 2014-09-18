/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPhotoLibraryImageSource : PLImageSource {
    int _imageFormat;
}

@property(readonly) int imageFormat;

- (id)description;
- (unsigned long long)hash;
- (int)imageFormat;
- (id)initWithImageFormat:(int)arg1;
- (bool)isEqual:(id)arg1;
- (id)newImageForAsset:(id)arg1 createMetadata:(id*)arg2;
- (unsigned short)sourceIdentifier;

@end
/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@class CIImage, CIVector, NSNumber;

@interface CITriangleKaleidoscope : CIFilter {
    NSNumber *inputDecay;
    CIImage *inputImage;
    CIVector *inputPoint;
    NSNumber *inputRotation;
    NSNumber *inputSize;
}

@property(copy) NSNumber * inputDecay;
@property(retain) CIImage * inputImage;
@property(copy) CIVector * inputPoint;
@property(copy) NSNumber * inputRotation;
@property(copy) NSNumber * inputSize;

+ (id)customAttributes;

- (id)_colorKernel;
- (id)_geomKernel;
- (id)inputDecay;
- (id)inputImage;
- (id)inputPoint;
- (id)inputRotation;
- (id)inputSize;
- (id)outputImage;
- (void)setDefaults;
- (void)setInputDecay:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputPoint:(id)arg1;
- (void)setInputRotation:(id)arg1;
- (void)setInputSize:(id)arg1;

@end
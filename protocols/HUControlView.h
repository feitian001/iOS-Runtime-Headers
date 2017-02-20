/* Generated by RuntimeBrowser.
 */

@protocol HUControlView <NSObject>

@required

+ (Class)valueClass;

- (<HUControlViewDelegate> *)delegate;
- (NSString *)identifier;
- (BOOL)isDisabled;
- (void)setDelegate:(id <HUControlViewDelegate>)arg1;
- (void)setDisabled:(BOOL)arg1;
- (void)setIdentifier:(NSString *)arg1;
- (void)setValue:(id)arg1;
- (id)value;

@optional

- (BOOL)canBeHighlighted;
- (void)setCanBeHighlighted:(BOOL)arg1;

@end
/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class UILabel, UITextView;

@interface CalendarNotesCell : UITableViewCell {
    UILabel *_placeholder;
    BOOL _showingPlaceholder;
    UITextView *_textView;
}

@property(retain) NSString *placeholder;
@property(copy) NSString *text;
@property(retain,readonly) UITextView *textView;

- (id)_placeholderLabel;
- (void)_updatePlaceholder;
- (BOOL)becomeFirstResponder;
- (void)dealloc;
- (id)initWithStyle:(NSInteger)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (id)placeholder;
- (void)setPlaceholder:(id)arg1;
- (void)setText:(id)arg1;
- (id)text;
- (void)textChanged:(id)arg1;
- (id)textView;

@end
#import "CHViewController.h"

@class NSArray, NSButton, NSComboBox, NSPopUpButton, NSView;

@interface MSExportSizeViewController : CHViewController
{
    NSPopUpButton *_formatPopup;
    NSButton *_removeSizeButton;
    NSView *_sizeView;
    NSView *_scaleView;
    NSArray *_exportSizes;
    NSComboBox *_scaleField;
}

+ (void)initialize;
@property(retain, nonatomic) NSComboBox *scaleField; // @synthesize scaleField=_scaleField;
@property(retain, nonatomic) NSArray *exportSizes; // @synthesize exportSizes=_exportSizes;
@property(retain, nonatomic) NSView *scaleView; // @synthesize scaleView=_scaleView;
@property(retain, nonatomic) NSView *sizeView; // @synthesize sizeView=_sizeView;
@property(retain, nonatomic) NSButton *removeSizeButton; // @synthesize removeSizeButton=_removeSizeButton;
@property(retain, nonatomic) NSPopUpButton *formatPopup; // @synthesize formatPopup=_formatPopup;
- (void).cxx_destruct;
- (double)sizeByRemovingSuffixes:(id)arg1;
- (void)applyScale:(double)arg1 toExportSize:(id)arg2 scaleType:(long long)arg3 normalSize:(struct CGSize)arg4;
- (void)findSizeOfLayer:(id)arg1 forScaleType:(long long)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)scaleFieldAction:(id)arg1;
- (void)formatPopupAction:(id)arg1;
- (void)removeExportSize:(id)arg1;
- (id)firstSize;
- (BOOL)exportSizeCanBeScaled;
- (void)prepare;

@end

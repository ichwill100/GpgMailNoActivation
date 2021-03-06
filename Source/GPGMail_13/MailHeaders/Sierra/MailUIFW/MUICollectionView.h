//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

#import "NSScrollViewDelegate.h"

@class MUICollectionHeightStorage, NSIndexSet, NSMutableArray, NSMutableIndexSet, NSMutableSet, NSString;

@interface MUICollectionView : NSView <NSScrollViewDelegate>
{
    NSMutableArray *_activeCellViews;	// 152 = 0x98
    NSMutableSet *_spareCellViews;	// 160 = 0xa0
    NSMutableIndexSet *_faultedIndexes;	// 168 = 0xa8
    NSMutableIndexSet *_lockedIndexes;	// 176 = 0xb0
    NSMutableIndexSet *_selectionIndexes;	// 184 = 0xb8
    BOOL _adjustHeightForPinning;	// 192 = 0xc0
    BOOL _adjustScrollForPinning;	// 193 = 0xc1
    BOOL _inScroll;	// 194 = 0xc2
    BOOL _emphasized;	// 195 = 0xc3
    id <MUICollectionViewDelegate> _delegate;	// 200 = 0xc8
    MUICollectionHeightStorage *_heightStorage;	// 208 = 0xd0
    unsigned long long _pinnedCellEdge;	// 216 = 0xd8
    unsigned long long _pinnedEdge;	// 224 = 0xe0
    double _pinnedHeightAdjustment;	// 232 = 0xe8
    unsigned long long _pinnedIndex;	// 240 = 0xf0
    double _pinnedOffset;	// 248 = 0xf8
    unsigned long long _focusedIndex;	// 256 = 0x100
    unsigned long long _initiallyPinnedIndex;	// 264 = 0x108
}

+ (id)keyPathsForValuesAffectingNumberOfCells;	// IMP=0x000000000000d991
+ (BOOL)requiresConstraintBasedLayout;	// IMP=0x000000000000d420
@property(nonatomic) unsigned long long initiallyPinnedIndex; // @synthesize initiallyPinnedIndex=_initiallyPinnedIndex;
@property(nonatomic) double pinnedOffset; // @synthesize pinnedOffset=_pinnedOffset;
@property(nonatomic) unsigned long long pinnedIndex; // @synthesize pinnedIndex=_pinnedIndex;
@property(nonatomic) double pinnedHeightAdjustment; // @synthesize pinnedHeightAdjustment=_pinnedHeightAdjustment;
@property(nonatomic) unsigned long long pinnedEdge; // @synthesize pinnedEdge=_pinnedEdge;
@property(nonatomic) unsigned long long pinnedCellEdge; // @synthesize pinnedCellEdge=_pinnedCellEdge;
@property(nonatomic) BOOL inScroll; // @synthesize inScroll=_inScroll;
@property(readonly, nonatomic) MUICollectionHeightStorage *heightStorage; // @synthesize heightStorage=_heightStorage;
@property(nonatomic) __weak id <MUICollectionViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL adjustScrollForPinning; // @synthesize adjustScrollForPinning=_adjustScrollForPinning;
@property(nonatomic) BOOL adjustHeightForPinning; // @synthesize adjustHeightForPinning=_adjustHeightForPinning;
- (void).cxx_destruct;	// IMP=0x0000000000014c3d
- (BOOL)_scrollToNextCell:(id)arg1 contiguously:(BOOL)arg2;	// IMP=0x00000000000146b5
- (BOOL)_scrollToPreviousCell:(id)arg1 contiguously:(BOOL)arg2;	// IMP=0x0000000000014130
- (void)scrollPageDown:(id)arg1;	// IMP=0x0000000000013fad
- (void)scrollPageUp:(id)arg1;	// IMP=0x0000000000013e1d
- (void)scrollToEndOfDocument:(id)arg1;	// IMP=0x0000000000013d3e
- (void)scrollToBeginningOfDocument:(id)arg1;	// IMP=0x0000000000013c3b
- (void)moveDown:(id)arg1;	// IMP=0x0000000000013c05
- (void)moveUp:(id)arg1;	// IMP=0x0000000000013bcf
- (void)moveLeft:(id)arg1;	// IMP=0x0000000000013bbb
- (void)moveRight:(id)arg1;	// IMP=0x0000000000013ba7
- (id)supplementalTargetForAction:(SEL)arg1 sender:(id)arg2;	// IMP=0x0000000000013b00
- (void)keyDown:(id)arg1;	// IMP=0x0000000000013965
- (BOOL)_hasFirstResponder;	// IMP=0x00000000000138bb
- (BOOL)performKeyEquivalent:(id)arg1;	// IMP=0x00000000000136fb
- (void)scrollToCellAtIndex:(unsigned long long)arg1 constrainScroll:(BOOL)arg2;	// IMP=0x0000000000013403
- (BOOL)scrollRectToVisible:(struct CGRect)arg1;	// IMP=0x00000000000132d5
- (void)scrollPoint:(struct CGPoint)arg1;	// IMP=0x0000000000013263
- (void)_scrollEdge:(unsigned long long)arg1 to:(CDUnknownBlockType)arg2;	// IMP=0x000000000001300c
- (id)enclosingScrollView;	// IMP=0x0000000000012f81
- (void)didEndScrollInScrollView:(id)arg1;	// IMP=0x0000000000012dc9
- (void)didScrollInScrollView:(id)arg1;	// IMP=0x0000000000012d48
- (void)didBeginScrollInScrollView:(id)arg1;	// IMP=0x0000000000012b94
- (void)_scrollViewDidScroll:(id)arg1;	// IMP=0x000000000001286a
- (void)_updateGeometryIfNeeded;	// IMP=0x00000000000125a5
- (void)_updateConstraintsForCellAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000011ebc
- (void)setFrameSize:(struct CGSize)arg1;	// IMP=0x0000000000011e34
- (void)setFrameOrigin:(struct CGPoint)arg1;	// IMP=0x0000000000011dac
- (void)layout;	// IMP=0x0000000000011ced
- (void)updateConstraints;	// IMP=0x0000000000011c1b
- (void)noteHeightOfCellAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000011a16
- (void)_updateSelectionIfNeeded;	// IMP=0x00000000000118e6
- (void)_updateEmphasisIfNeeded;	// IMP=0x00000000000117c4
- (void)deselectCellsAtIndexes:(id)arg1;	// IMP=0x000000000001170d
- (void)selectCellsAtIndexes:(id)arg1 byExtendingSelection:(BOOL)arg2;	// IMP=0x000000000001168a
- (void)mouseUp:(id)arg1;	// IMP=0x000000000001140e
- (struct CGRect)adjustScroll:(struct CGRect)arg1;	// IMP=0x0000000000011193
- (struct CGRect)_adjustRectForPinning:(struct CGRect)arg1;	// IMP=0x000000000001106c
- (void)_pinToCellAtIndex:(unsigned long long)arg1 cellEdge:(unsigned long long)arg2 edge:(unsigned long long)arg3 offset:(double)arg4;	// IMP=0x0000000000010e59
- (void)pinToCellAtIndex:(unsigned long long)arg1 cellEdge:(unsigned long long)arg2 edge:(unsigned long long)arg3;	// IMP=0x0000000000010bdf
- (void)_pinTo:(struct CGRect)arg1 edge:(unsigned long long)arg2;	// IMP=0x0000000000010a09
- (void)enumerateCellViewsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000109d8
- (void)enumerateCellViewsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000109a8
- (unsigned long long)indexForView:(id)arg1;	// IMP=0x00000000000108c6
- (unsigned long long)indexForResponder:(id)arg1;	// IMP=0x00000000000107e4
- (id)cellViewAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000010749
- (struct CGRect)rectForCellAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000104ef
- (struct _NSRange)rangeOfCellsInRect:(struct CGRect)arg1;	// IMP=0x0000000000010457
- (unsigned long long)_indexOfCellView:(id)arg1;	// IMP=0x00000000000103cc
- (void)prepareContentInRect:(struct CGRect)arg1;	// IMP=0x00000000000100ca
- (id)_claimUnusedCell;	// IMP=0x0000000000010058
- (id)reusableCellViewWithIdentifier:(id)arg1;	// IMP=0x000000000000fc57
- (void)_faultCellsAtIndexesInRange:(struct _NSRange)arg1;	// IMP=0x000000000000f6e6
- (void)unlockCellsAtIndexes:(id)arg1;	// IMP=0x000000000000f615
- (void)unlockCellsAtIndexesInRange:(struct _NSRange)arg1;	// IMP=0x000000000000f4f0
- (void)unlockCellAtIndex:(unsigned long long)arg1;	// IMP=0x000000000000f4d9
- (void)lockCellsAtIndexes:(id)arg1;	// IMP=0x000000000000f408
- (void)lockCellsAtIndexesInRange:(struct _NSRange)arg1;	// IMP=0x000000000000f2ab
- (void)lockCellAtIndex:(unsigned long long)arg1;	// IMP=0x000000000000f294
- (void)removeAllCells;	// IMP=0x000000000000f261
- (void)removeCellsAtIndexes:(id)arg1;	// IMP=0x000000000000f18b
- (void)removeCellsAtIndexesInRange:(struct _NSRange)arg1;	// IMP=0x000000000000ebb1
- (void)removeCellAtIndex:(unsigned long long)arg1;	// IMP=0x000000000000eb9a
- (void)moveCellAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;	// IMP=0x000000000000e7d6
- (void)insertCellsAtIndexes:(id)arg1;	// IMP=0x000000000000e705
- (void)insertCellsAtIndexesInRange:(struct _NSRange)arg1;	// IMP=0x000000000000e38f
- (void)insertCellAtIndex:(unsigned long long)arg1;	// IMP=0x000000000000e378
- (void)_updateCellIndexes;	// IMP=0x000000000000e30f
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000000e238
- (void)viewDidMoveToWindow;	// IMP=0x000000000000e138
- (void)viewWillMoveToWindow:(id)arg1;	// IMP=0x000000000000e036
- (void)viewDidMoveToSuperview;	// IMP=0x000000000000de89
- (void)viewWillMoveToSuperview:(id)arg1;	// IMP=0x000000000000dccf
@property(readonly, nonatomic) struct _NSRange visibleRange;
@property(copy, nonatomic) NSIndexSet *selectionIndexes;
@property(readonly, nonatomic) unsigned long long numberOfCells;
@property(readonly, nonatomic) unsigned long long firstResponderIndex;
@property(nonatomic) unsigned long long focusedIndex; // @synthesize focusedIndex=_focusedIndex;
@property(nonatomic) BOOL emphasized; // @synthesize emphasized=_emphasized;
@property(nonatomic) struct NSEdgeInsets margins;
@property(nonatomic) struct CGSize cellSpacing;
- (BOOL)isFlipped;	// IMP=0x000000000000d436
- (BOOL)acceptsFirstResponder;	// IMP=0x000000000000d42b
- (void)_muiCollectionViewCommonInit;	// IMP=0x000000000000d301
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000000d299
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000d254

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


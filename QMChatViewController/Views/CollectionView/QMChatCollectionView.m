//
//  QMChatCollectionView.m
//  QMChatViewController
//
//  Created by Injoit on 20.04.15.
//  Copyright © 2015 QuickBlox. All rights reserved.
//

#import "QMChatCollectionView.h"


@interface QMChatCollectionView()
@end

@implementation QMChatCollectionView

@dynamic dataSource;
@dynamic delegate;
@dynamic collectionViewLayout;

//MARK: - Initialization

- (instancetype)initWithFrame:(CGRect)frame collectionViewLayout:(UICollectionViewLayout *)layout {
    
    self = [super initWithFrame:frame collectionViewLayout:layout];
    if (self) {
        [self configureCollectionView];
    }
    
    return self;
}

- (void)awakeFromNib {
    
    [super awakeFromNib];
    [self configureCollectionView];
}

- (void)configureCollectionView {
    
    [self setTranslatesAutoresizingMaskIntoConstraints:NO];
    
    self.keyboardDismissMode = UIScrollViewKeyboardDismissModeInteractive;
    self.alwaysBounceVertical = YES;
    self.bounces = YES;
}

@end

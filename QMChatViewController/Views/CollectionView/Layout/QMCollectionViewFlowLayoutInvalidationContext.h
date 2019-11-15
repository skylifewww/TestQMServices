//
//  QMCollectionViewFlowLayoutInvalidationContext.h
//  QMChatViewController
//
//  Created by Injoit on 20.04.15.
//  Copyright © 2015 QuickBlox. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface QMCollectionViewFlowLayoutInvalidationContext : UICollectionViewFlowLayoutInvalidationContext

/**
 *  A boolean indicating whether to empty the messages layout information cache for items and views in the layout.
 *  The default value is `NO`.
 */
@property (nonatomic, assign) BOOL invalidateFlowLayoutMessagesCache;

/**
 *  Creates and returns a new `QMCollectionViewFlowLayoutInvalidationContext` object.
 *
 *  @discussion When you need to invalidate the `QMChatCollectionViewFlowLayout` object for your
 *  `QMChatViewController` subclass, you should use this method to instantiate a new invalidation
 *  context and pass this object to `invalidateLayoutWithContext:`.
 *
 *  @return An initialized invalidation context object if successful, otherwise `nil`.
 */
+ (instancetype)context;

@end

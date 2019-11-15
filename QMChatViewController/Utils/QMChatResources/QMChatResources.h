//
//  QMChatResources.h
//  QMChatViewController
//
//  Created by Injoit on 8/10/16.
//  Copyright © 2016 QuickBlox. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface QMChatResources : NSObject

+ (NSBundle *)resourceBundle;

+ (UIImage *)imageNamed:(NSString *)name;
+ (UINib *)nibWithNibName:(NSString *)name;

@end

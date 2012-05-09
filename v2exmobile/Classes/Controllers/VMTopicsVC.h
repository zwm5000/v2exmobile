//
//  VMTopicsVC.h
//  v2exmobile
//
//  Created by Xu Ke <tuoxie007@gmail.com> on 5/6/12.
//  Copyright (c) 2012 Xu Ke.
//  Released under the MIT Licenses.
//

#import <UIKit/UIKit.h>

@interface VMTopicsVC : UITableViewController

- (id)initWithTopics:(NSArray *)_topics withAvatar:(BOOL)withAvatar;

+ (CGFloat)cellPadding;

@end

//
//  TJKeyboardManager.h
//  OAK-Eye
//
//  Created by TJ on 2020/7/22.
//  Copyright © 2020 TJ. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface TJKeyboardManager : NSObject
- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;
- (id)copy NS_UNAVAILABLE; // 没有遵循协议可以不写
- (id)mutableCopy NS_UNAVAILABLE; // 没有遵循协议可以不写

+ (instancetype)sharedInstance;

@property (nonatomic, assign)float keyboardChangeHeight;
@property (nonatomic, strong)UIView * _Nullable keyboardSubView;

- (void)addKeyboardShowViewChange;
//获取当前展示的VC
- (UIViewController *)visibleViewController;

@end

NS_ASSUME_NONNULL_END

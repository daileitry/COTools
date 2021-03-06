//
//  COCommTool.h
//  COTools
//
//  Created by carlos on 13-9-20.
//  Copyright (c) 2013年 carlosk. All rights reserved.
//

#import "COBaseTool.h"
//单例
#undef	AS_SINGLETON
#define AS_SINGLETON( __class ) \
+ (__class *)sharedInstance;

#undef	DEF_SINGLETON
#define DEF_SINGLETON( __class ) \
+ (__class *)sharedInstance \
{ \
static dispatch_once_t once; \
static __class * __singleton__; \
dispatch_once( &once, ^{ __singleton__ = [[__class alloc] init]; } ); \
return __singleton__; \
}

@interface COCommTool : COBaseTool

//根据key存入value
+(void)saveValue:(id)value byKey:(NSString *)key;
//根据key获取value
+(id )valueByKey:(NSString *)key;

#pragma mark Bool 类型属性存储扩展
//根据key存入value
+(void)setBoolValue:(BOOL)value byKey:(NSString *)key;
//根据key获取value
+(BOOL)getBoolValue:(NSString *)key;

//注册键盘的监听
+ (void)registerForKeyboardNotificationsWithScrollView:(UIScrollView *)scrllView withInputViews:(NSArray *)inputViews1;
//获取当前设备所适配的laughimage
+(NSString *)getLauchImageForCurrentDevice;
@end

//
//  ReactNativePermissions.h
//  ReactNativePermissions
//
//  Created by Yonah Forst on 18/02/16.
//  Copyright © 2016 Yonah Forst. All rights reserved.
//

//#if __has_include("RCTBridgeModule.h")
//  #import "RCTBridgeModule.h"
//#else
//  #import <React/RCTBridgeModule.h>
//#endif

// See https://github.com/facebook/react-native/issues/15775#issuecomment-327082159

#import <React/RCTBridgeModule.h>

@interface ReactNativePermissions : NSObject <RCTBridgeModule>

@end

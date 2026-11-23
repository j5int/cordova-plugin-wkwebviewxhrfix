//
//  CDVWebViewEngine+FileXhrFix.h
//
//  Created by Ara Hovakimyan on 25/Aug/2020.
//
//

#if __has_include("../../../packages/cordova-ios/CordovaLib/Classes/Private/Plugins/CDVWebViewEngine/CDVWebViewEngine.h")
#define EXIST_CDVWEBVIEWENGINE
#import "../../../packages/cordova-ios/CordovaLib/Classes/Private/Plugins/CDVWebViewEngine/CDVWebViewEngine.h"

@interface CDVWebViewEngine (FileXhrFix)
@end
#endif

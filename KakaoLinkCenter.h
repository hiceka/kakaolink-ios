//
// Copyright 2011 Kakao Corp. All rights reserved.
// @author kakaolink@kakao.com
// @version 2.0
//

@interface KakaoLinkCenter : NSObject {
@private
}

/**
 * Returns whether the application can open kakaolink URLs.
 */
+ (BOOL)canOpenKakaoLink;

/**
 * Opens kakaolink with parameters.
 */
+ (BOOL)openKakaoLinkWithURL:(NSString *)referenceURLString
				  appVersion:(NSString *)appVersion
				 appBundleID:(NSString *)appBundleID
					 appName:(NSString *)appName
					 message:(NSString *)message;



/**
 * Opens kakaoApplink with parameters.
 */
+ (BOOL)openKakaoAppLinkWithMessage:(NSString *)message
								URL:(NSString *)referenceURLString
						appBundleID:(NSString *)appBundleID
						 appVersion:(NSString *)appVersion
							appName:(NSString *)appName
					  metaInfoArray:(NSArray *)metaInfoArray;

@end

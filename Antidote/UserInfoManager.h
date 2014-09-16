//
//  UserInfoManager.h
//  Antidote
//
//  Created by Dmitry Vorobyov on 19.07.14.
//  Copyright (c) 2014 dvor. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface UserInfoManager : NSObject

// array with ToxFriendRequest's NSDictionaries
@property (strong, nonatomic) NSArray *uPendingFriendRequests;

/**
 * Dictionary with:
 * keys - NSString *clientId
 * values - NSString *nickname
 */
@property (strong, nonatomic) NSDictionary *uNicknames;

@property (strong, nonatomic) NSNumber *uCurrentColorscheme;
@property (strong, nonatomic) NSNumber *uFriendsSort;

+ (instancetype)sharedInstance;

@end

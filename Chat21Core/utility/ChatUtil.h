//
//  ChatUtil.h
//  Soleto
//
//  Created by Andrea Sponziello on 02/12/14.
//
//

#import <Foundation/Foundation.h>

@class Firebase;
@class ChatNotificationView;
@class ChatUser;

@import Firebase;

@interface ChatUtil : NSObject

+(FIRDatabaseReference *)conversationRefForUser:(NSString *)userId conversationId:(NSString *)conversationId;
+(FIRDatabaseReference *)conversationMessagesRef:(NSString *)recipient_id;

// firebase paths
+(NSString *)conversationPathForUser:(NSString *)user_id conversationId:(NSString *)conversationId;
+(NSString *)conversationsPathForUserId:(NSString *)user_id;
+(NSString *)contactsPath;
+(NSString *)contactPathOfUser:(NSString *)userid;
+(NSString *)groupsPath;
+(NSString *)mainGroupsPath;

+(NSMutableDictionary *)groupMembersAsDictionary:(NSArray *)membersArray;
+(NSMutableArray *)groupMembersAsArray:(NSDictionary *)membersDictionary;
+(NSString *)groupMembersAsStringForUI:(NSDictionary *)membersDictionary;
+(NSString *)randomString:(NSInteger)length;

+(NSString *)groupImagesRelativePath;
+(NSString *)groupImageDownloadUrl;
+(NSString *)groupImageDeleteUrl;
+(NSString *)groupImageUrlById:(NSString *)imageID;
+(NSString *)imageIDFilename:(NSString *)imageID;
+(NSString *)userPath:(NSString *)userId;
+(NSString *)sanitizedNode:(NSString *)node_name;
+(NSString *)sanitizedUserId:(NSString *)userId;

@end
/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

@interface DMFInstalledPayload : NSObject <NSSecureCoding> {
    NSString * _displayName;
    NSString * _identifier;
    NSString * _organization;
    NSString * _payloadDescription;
    int  _payloadVersion;
    NSString * _type;
}

@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *organization;
@property (nonatomic, copy) NSString *payloadDescription;
@property (nonatomic) int payloadVersion;
@property (nonatomic, copy) NSString *type;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)organization;
- (id)payloadDescription;
- (int)payloadVersion;
- (void)setDisplayName:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setOrganization:(id)arg1;
- (void)setPayloadDescription:(id)arg1;
- (void)setPayloadVersion:(int)arg1;
- (void)setType:(id)arg1;
- (id)type;

@end

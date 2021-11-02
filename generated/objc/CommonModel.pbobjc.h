// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: common_model.proto

// This CPP symbol can be defined to use imports that match up to the framework
// imports needed when using CocoaPods.
#if !defined(GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS)
 #define GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS 0
#endif

#if GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS
 #import <Protobuf/GPBProtocolBuffers.h>
#else
 #import "GPBProtocolBuffers.h"
#endif

#if GOOGLE_PROTOBUF_OBJC_VERSION < 30004
#error This file was generated by a newer version of protoc which is incompatible with your Protocol Buffer library sources.
#endif
#if 30004 < GOOGLE_PROTOBUF_OBJC_MIN_SUPPORTED_VERSION
#error This file was generated by an older version of protoc which is incompatible with your Protocol Buffer library sources.
#endif

// @@protoc_insertion_point(imports)

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

CF_EXTERN_C_BEGIN

@class GPBStringValue;
@class GPBTimestamp;
@class IndexMapping;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - Enum CustomerNumberProvider

typedef GPB_ENUM(CustomerNumberProvider) {
  /**
   * Value used if any message's field encounters a value that is not defined
   * by this enum. The message will also have C functions to get/set the rawValue
   * of the field.
   **/
  CustomerNumberProvider_GPBUnrecognizedEnumeratorValue = kGPBUnrecognizedEnumeratorValue,
  CustomerNumberProvider_CustomerNumberProviderUnspecified = 0,
  CustomerNumberProvider_CustomerNumberProviderFacebook = 1,
  CustomerNumberProvider_CustomerNumberProviderCellular = 2,
  CustomerNumberProvider_CustomerNumberProviderTelegram = 3,
  CustomerNumberProvider_CustomerNumberProviderApp = 4,
  CustomerNumberProvider_CustomerNumberProviderEmail = 5,
};

GPBEnumDescriptor *CustomerNumberProvider_EnumDescriptor(void);

/**
 * Checks to see if the given value is defined by the enum or was not known at
 * the time this source was generated.
 **/
BOOL CustomerNumberProvider_IsValidValue(int32_t value);

#pragma mark - Enum ChannelNumberProvider

typedef GPB_ENUM(ChannelNumberProvider) {
  /**
   * Value used if any message's field encounters a value that is not defined
   * by this enum. The message will also have C functions to get/set the rawValue
   * of the field.
   **/
  ChannelNumberProvider_GPBUnrecognizedEnumeratorValue = kGPBUnrecognizedEnumeratorValue,
  ChannelNumberProvider_ChannelNumberProviderUnspecified = 0,
  ChannelNumberProvider_ChannelNumberProviderAt = 1,
  ChannelNumberProvider_ChannelNumberProviderTwilio = 2,
  ChannelNumberProvider_ChannelNumberProviderMailgun = 3,
  ChannelNumberProvider_ChannelNumberProviderFacebook = 4,
  ChannelNumberProvider_ChannelNumberProviderTelegram = 5,
};

GPBEnumDescriptor *ChannelNumberProvider_EnumDescriptor(void);

/**
 * Checks to see if the given value is defined by the enum or was not known at
 * the time this source was generated.
 **/
BOOL ChannelNumberProvider_IsValidValue(int32_t value);

#pragma mark - Enum MediaType

typedef GPB_ENUM(MediaType) {
  /**
   * Value used if any message's field encounters a value that is not defined
   * by this enum. The message will also have C functions to get/set the rawValue
   * of the field.
   **/
  MediaType_GPBUnrecognizedEnumeratorValue = kGPBUnrecognizedEnumeratorValue,
  MediaType_MediaTypeUnspecified = 0,
  MediaType_MediaTypeImage = 1,
  MediaType_MediaTypeAudio = 2,
  MediaType_MediaTypeVideo = 3,
  MediaType_MediaTypeDocument = 4,
  MediaType_MediaTypeVoice = 5,
  MediaType_MediaTypeSticker = 6,
  MediaType_MediaTypeContact = 7,
};

GPBEnumDescriptor *MediaType_EnumDescriptor(void);

/**
 * Checks to see if the given value is defined by the enum or was not known at
 * the time this source was generated.
 **/
BOOL MediaType_IsValidValue(int32_t value);

#pragma mark - Enum CustomerEventDirection

typedef GPB_ENUM(CustomerEventDirection) {
  /**
   * Value used if any message's field encounters a value that is not defined
   * by this enum. The message will also have C functions to get/set the rawValue
   * of the field.
   **/
  CustomerEventDirection_GPBUnrecognizedEnumeratorValue = kGPBUnrecognizedEnumeratorValue,
  CustomerEventDirection_CustomerEventDirectionUnspecified = 0,
  CustomerEventDirection_CustomerEventDirectionInbound = 1,
  CustomerEventDirection_CustomerEventDirectionOutbound = 2,
};

GPBEnumDescriptor *CustomerEventDirection_EnumDescriptor(void);

/**
 * Checks to see if the given value is defined by the enum or was not known at
 * the time this source was generated.
 **/
BOOL CustomerEventDirection_IsValidValue(int32_t value);

#pragma mark - Enum CustomerRequestOrigin

typedef GPB_ENUM(CustomerRequestOrigin) {
  /**
   * Value used if any message's field encounters a value that is not defined
   * by this enum. The message will also have C functions to get/set the rawValue
   * of the field.
   **/
  CustomerRequestOrigin_GPBUnrecognizedEnumeratorValue = kGPBUnrecognizedEnumeratorValue,
  CustomerRequestOrigin_CustomerRequestOriginUnspecified = 0,
  CustomerRequestOrigin_CustomerRequestOriginApiRequest = 1,
  CustomerRequestOrigin_CustomerRequestOriginCustomerTag = 2,
};

GPBEnumDescriptor *CustomerRequestOrigin_EnumDescriptor(void);

/**
 * Checks to see if the given value is defined by the enum or was not known at
 * the time this source was generated.
 **/
BOOL CustomerRequestOrigin_IsValidValue(int32_t value);

#pragma mark - CommonModelRoot

/**
 * Exposes the extension registry for this file.
 *
 * The base class provides:
 * @code
 *   + (GPBExtensionRegistry *)extensionRegistry;
 * @endcode
 * which is a @c GPBExtensionRegistry that includes all the extensions defined by
 * this file and all files that it depends on.
 **/
GPB_FINAL @interface CommonModelRoot : GPBRootObject
@end

#pragma mark - DataMapValue

typedef GPB_ENUM(DataMapValue_FieldNumber) {
  DataMapValue_FieldNumber_StringVal = 2,
  DataMapValue_FieldNumber_BytesVal = 3,
};

typedef GPB_ENUM(DataMapValue_Value_OneOfCase) {
  DataMapValue_Value_OneOfCase_GPBUnsetOneOfCase = 0,
  DataMapValue_Value_OneOfCase_StringVal = 2,
  DataMapValue_Value_OneOfCase_BytesVal = 3,
};

GPB_FINAL @interface DataMapValue : GPBMessage

@property(nonatomic, readonly) DataMapValue_Value_OneOfCase valueOneOfCase;

@property(nonatomic, readwrite, copy, null_resettable) NSString *stringVal;

@property(nonatomic, readwrite, copy, null_resettable) NSData *bytesVal;

@end

/**
 * Clears whatever value was set for the oneof 'value'.
 **/
void DataMapValue_ClearValueOneOfCase(DataMapValue *message);

#pragma mark - Cash

typedef GPB_ENUM(Cash_FieldNumber) {
  Cash_FieldNumber_CurrencyCode = 1,
  Cash_FieldNumber_Amount = 2,
};

GPB_FINAL @interface Cash : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *currencyCode;

@property(nonatomic, readwrite) double amount;

@end

#pragma mark - IndexMapping

typedef GPB_ENUM(IndexMapping_FieldNumber) {
  IndexMapping_FieldNumber_Key = 1,
  IndexMapping_FieldNumber_Value = 2,
};

GPB_FINAL @interface IndexMapping : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *key;

@property(nonatomic, readwrite, strong, null_resettable) GPBStringValue *value;
/** Test to see if @c value has been set. */
@property(nonatomic, readwrite) BOOL hasValue;

@end

#pragma mark - CustomerIndex

typedef GPB_ENUM(CustomerIndex_FieldNumber) {
  CustomerIndex_FieldNumber_Mapping = 1,
  CustomerIndex_FieldNumber_ExpiresAt = 2,
};

GPB_FINAL @interface CustomerIndex : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) IndexMapping *mapping;
/** Test to see if @c mapping has been set. */
@property(nonatomic, readwrite) BOOL hasMapping;

@property(nonatomic, readwrite, strong, null_resettable) GPBTimestamp *expiresAt;
/** Test to see if @c expiresAt has been set. */
@property(nonatomic, readwrite) BOOL hasExpiresAt;

@end

#pragma mark - AppConnectionProps

typedef GPB_ENUM(AppConnectionProps_FieldNumber) {
  AppConnectionProps_FieldNumber_ConnectionId = 1,
  AppConnectionProps_FieldNumber_ConnectionTime = 2,
  AppConnectionProps_FieldNumber_IpAddress = 3,
  AppConnectionProps_FieldNumber_SimplexMode = 4,
};

GPB_FINAL @interface AppConnectionProps : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *connectionId;

@property(nonatomic, readwrite, strong, null_resettable) GPBTimestamp *connectionTime;
/** Test to see if @c connectionTime has been set. */
@property(nonatomic, readwrite) BOOL hasConnectionTime;

@property(nonatomic, readwrite, strong, null_resettable) GPBStringValue *ipAddress;
/** Test to see if @c ipAddress has been set. */
@property(nonatomic, readwrite) BOOL hasIpAddress;

@property(nonatomic, readwrite) BOOL simplexMode;

@end

#pragma mark - CustomerNumber

typedef GPB_ENUM(CustomerNumber_FieldNumber) {
  CustomerNumber_FieldNumber_Provider = 1,
  CustomerNumber_FieldNumber_Number = 2,
  CustomerNumber_FieldNumber_Partition = 3,
};

GPB_FINAL @interface CustomerNumber : GPBMessage

@property(nonatomic, readwrite) CustomerNumberProvider provider;

@property(nonatomic, readwrite, copy, null_resettable) NSString *number;

@property(nonatomic, readwrite, strong, null_resettable) GPBStringValue *partition;
/** Test to see if @c partition has been set. */
@property(nonatomic, readwrite) BOOL hasPartition;

@end

/**
 * Fetches the raw value of a @c CustomerNumber's @c provider property, even
 * if the value was not defined by the enum at the time the code was generated.
 **/
int32_t CustomerNumber_Provider_RawValue(CustomerNumber *message);
/**
 * Sets the raw value of an @c CustomerNumber's @c provider property, allowing
 * it to be set to a value that was not defined by the enum at the time the code
 * was generated.
 **/
void SetCustomerNumber_Provider_RawValue(CustomerNumber *message, int32_t value);

NS_ASSUME_NONNULL_END

CF_EXTERN_C_END

#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)

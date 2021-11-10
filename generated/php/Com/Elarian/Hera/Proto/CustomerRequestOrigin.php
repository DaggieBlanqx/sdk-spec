<?php
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: common_model.proto

namespace Com\Elarian\Hera\Proto;

use UnexpectedValueException;

/**
 * Protobuf type <code>com.elarian.hera.proto.CustomerRequestOrigin</code>
 */
class CustomerRequestOrigin
{
    /**
     * Generated from protobuf enum <code>CUSTOMER_REQUEST_ORIGIN_UNSPECIFIED = 0;</code>
     */
    const CUSTOMER_REQUEST_ORIGIN_UNSPECIFIED = 0;
    /**
     * Generated from protobuf enum <code>CUSTOMER_REQUEST_ORIGIN_API_REQUEST = 1;</code>
     */
    const CUSTOMER_REQUEST_ORIGIN_API_REQUEST = 1;
    /**
     * Generated from protobuf enum <code>CUSTOMER_REQUEST_ORIGIN_CUSTOMER_TAG = 2;</code>
     */
    const CUSTOMER_REQUEST_ORIGIN_CUSTOMER_TAG = 2;
    /**
     * Generated from protobuf enum <code>CUSTOMER_REQUEST_ORIGIN_REPLAY = 3;</code>
     */
    const CUSTOMER_REQUEST_ORIGIN_REPLAY = 3;

    private static $valueToName = [
        self::CUSTOMER_REQUEST_ORIGIN_UNSPECIFIED => 'CUSTOMER_REQUEST_ORIGIN_UNSPECIFIED',
        self::CUSTOMER_REQUEST_ORIGIN_API_REQUEST => 'CUSTOMER_REQUEST_ORIGIN_API_REQUEST',
        self::CUSTOMER_REQUEST_ORIGIN_CUSTOMER_TAG => 'CUSTOMER_REQUEST_ORIGIN_CUSTOMER_TAG',
        self::CUSTOMER_REQUEST_ORIGIN_REPLAY => 'CUSTOMER_REQUEST_ORIGIN_REPLAY',
    ];

    public static function name($value)
    {
        if (!isset(self::$valueToName[$value])) {
            throw new UnexpectedValueException(sprintf(
                    'Enum %s has no name defined for value %s', __CLASS__, $value));
        }
        return self::$valueToName[$value];
    }


    public static function value($name)
    {
        $const = __CLASS__ . '::' . strtoupper($name);
        if (!defined($const)) {
            throw new UnexpectedValueException(sprintf(
                    'Enum %s has no value defined for name %s', __CLASS__, $name));
        }
        return constant($const);
    }
}


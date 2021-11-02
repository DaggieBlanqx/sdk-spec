<?php
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: messaging_model.proto

namespace Com\Elarian\Hera\Proto;

use Google\Protobuf\Internal\GPBType;
use Google\Protobuf\Internal\RepeatedField;
use Google\Protobuf\Internal\GPBUtil;

/**
 * Generated from protobuf message <code>com.elarian.hera.proto.OutboundMessage</code>
 */
class OutboundMessage extends \Google\Protobuf\Internal\Message
{
    /**
     * Generated from protobuf field <code>.com.elarian.hera.proto.OutboundMessageBody body = 1;</code>
     */
    protected $body = null;
    /**
     * Generated from protobuf field <code>repeated string labels = 2;</code>
     */
    private $labels;
    /**
     * Generated from protobuf field <code>.google.protobuf.StringValue provider_tag = 3;</code>
     */
    protected $provider_tag = null;
    /**
     * Generated from protobuf field <code>.google.protobuf.StringValue reply_token = 4;</code>
     */
    protected $reply_token = null;
    /**
     * Generated from protobuf field <code>.com.elarian.hera.proto.OutboundMessageReplyPrompt reply_prompt = 5;</code>
     */
    protected $reply_prompt = null;

    /**
     * Constructor.
     *
     * @param array $data {
     *     Optional. Data for populating the Message object.
     *
     *     @type \Com\Elarian\Hera\Proto\OutboundMessageBody $body
     *     @type string[]|\Google\Protobuf\Internal\RepeatedField $labels
     *     @type \Google\Protobuf\StringValue $provider_tag
     *     @type \Google\Protobuf\StringValue $reply_token
     *     @type \Com\Elarian\Hera\Proto\OutboundMessageReplyPrompt $reply_prompt
     * }
     */
    public function __construct($data = NULL) {
        \GPBMetadata\MessagingModel::initOnce();
        parent::__construct($data);
    }

    /**
     * Generated from protobuf field <code>.com.elarian.hera.proto.OutboundMessageBody body = 1;</code>
     * @return \Com\Elarian\Hera\Proto\OutboundMessageBody
     */
    public function getBody()
    {
        return isset($this->body) ? $this->body : null;
    }

    public function hasBody()
    {
        return isset($this->body);
    }

    public function clearBody()
    {
        unset($this->body);
    }

    /**
     * Generated from protobuf field <code>.com.elarian.hera.proto.OutboundMessageBody body = 1;</code>
     * @param \Com\Elarian\Hera\Proto\OutboundMessageBody $var
     * @return $this
     */
    public function setBody($var)
    {
        GPBUtil::checkMessage($var, \Com\Elarian\Hera\Proto\OutboundMessageBody::class);
        $this->body = $var;

        return $this;
    }

    /**
     * Generated from protobuf field <code>repeated string labels = 2;</code>
     * @return \Google\Protobuf\Internal\RepeatedField
     */
    public function getLabels()
    {
        return $this->labels;
    }

    /**
     * Generated from protobuf field <code>repeated string labels = 2;</code>
     * @param string[]|\Google\Protobuf\Internal\RepeatedField $var
     * @return $this
     */
    public function setLabels($var)
    {
        $arr = GPBUtil::checkRepeatedField($var, \Google\Protobuf\Internal\GPBType::STRING);
        $this->labels = $arr;

        return $this;
    }

    /**
     * Generated from protobuf field <code>.google.protobuf.StringValue provider_tag = 3;</code>
     * @return \Google\Protobuf\StringValue
     */
    public function getProviderTag()
    {
        return isset($this->provider_tag) ? $this->provider_tag : null;
    }

    public function hasProviderTag()
    {
        return isset($this->provider_tag);
    }

    public function clearProviderTag()
    {
        unset($this->provider_tag);
    }

    /**
     * Returns the unboxed value from <code>getProviderTag()</code>

     * Generated from protobuf field <code>.google.protobuf.StringValue provider_tag = 3;</code>
     * @return string|null
     */
    public function getProviderTagUnwrapped()
    {
        return $this->readWrapperValue("provider_tag");
    }

    /**
     * Generated from protobuf field <code>.google.protobuf.StringValue provider_tag = 3;</code>
     * @param \Google\Protobuf\StringValue $var
     * @return $this
     */
    public function setProviderTag($var)
    {
        GPBUtil::checkMessage($var, \Google\Protobuf\StringValue::class);
        $this->provider_tag = $var;

        return $this;
    }

    /**
     * Sets the field by wrapping a primitive type in a Google\Protobuf\StringValue object.

     * Generated from protobuf field <code>.google.protobuf.StringValue provider_tag = 3;</code>
     * @param string|null $var
     * @return $this
     */
    public function setProviderTagUnwrapped($var)
    {
        $this->writeWrapperValue("provider_tag", $var);
        return $this;}

    /**
     * Generated from protobuf field <code>.google.protobuf.StringValue reply_token = 4;</code>
     * @return \Google\Protobuf\StringValue
     */
    public function getReplyToken()
    {
        return isset($this->reply_token) ? $this->reply_token : null;
    }

    public function hasReplyToken()
    {
        return isset($this->reply_token);
    }

    public function clearReplyToken()
    {
        unset($this->reply_token);
    }

    /**
     * Returns the unboxed value from <code>getReplyToken()</code>

     * Generated from protobuf field <code>.google.protobuf.StringValue reply_token = 4;</code>
     * @return string|null
     */
    public function getReplyTokenUnwrapped()
    {
        return $this->readWrapperValue("reply_token");
    }

    /**
     * Generated from protobuf field <code>.google.protobuf.StringValue reply_token = 4;</code>
     * @param \Google\Protobuf\StringValue $var
     * @return $this
     */
    public function setReplyToken($var)
    {
        GPBUtil::checkMessage($var, \Google\Protobuf\StringValue::class);
        $this->reply_token = $var;

        return $this;
    }

    /**
     * Sets the field by wrapping a primitive type in a Google\Protobuf\StringValue object.

     * Generated from protobuf field <code>.google.protobuf.StringValue reply_token = 4;</code>
     * @param string|null $var
     * @return $this
     */
    public function setReplyTokenUnwrapped($var)
    {
        $this->writeWrapperValue("reply_token", $var);
        return $this;}

    /**
     * Generated from protobuf field <code>.com.elarian.hera.proto.OutboundMessageReplyPrompt reply_prompt = 5;</code>
     * @return \Com\Elarian\Hera\Proto\OutboundMessageReplyPrompt
     */
    public function getReplyPrompt()
    {
        return isset($this->reply_prompt) ? $this->reply_prompt : null;
    }

    public function hasReplyPrompt()
    {
        return isset($this->reply_prompt);
    }

    public function clearReplyPrompt()
    {
        unset($this->reply_prompt);
    }

    /**
     * Generated from protobuf field <code>.com.elarian.hera.proto.OutboundMessageReplyPrompt reply_prompt = 5;</code>
     * @param \Com\Elarian\Hera\Proto\OutboundMessageReplyPrompt $var
     * @return $this
     */
    public function setReplyPrompt($var)
    {
        GPBUtil::checkMessage($var, \Com\Elarian\Hera\Proto\OutboundMessageReplyPrompt::class);
        $this->reply_prompt = $var;

        return $this;
    }

}

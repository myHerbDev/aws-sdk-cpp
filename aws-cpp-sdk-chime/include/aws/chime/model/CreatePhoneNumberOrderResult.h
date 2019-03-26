﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/model/PhoneNumberOrder.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Chime
{
namespace Model
{
  class AWS_CHIME_API CreatePhoneNumberOrderResult
  {
  public:
    CreatePhoneNumberOrderResult();
    CreatePhoneNumberOrderResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreatePhoneNumberOrderResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The phone number order details.</p>
     */
    inline const PhoneNumberOrder& GetPhoneNumberOrder() const{ return m_phoneNumberOrder; }

    /**
     * <p>The phone number order details.</p>
     */
    inline void SetPhoneNumberOrder(const PhoneNumberOrder& value) { m_phoneNumberOrder = value; }

    /**
     * <p>The phone number order details.</p>
     */
    inline void SetPhoneNumberOrder(PhoneNumberOrder&& value) { m_phoneNumberOrder = std::move(value); }

    /**
     * <p>The phone number order details.</p>
     */
    inline CreatePhoneNumberOrderResult& WithPhoneNumberOrder(const PhoneNumberOrder& value) { SetPhoneNumberOrder(value); return *this;}

    /**
     * <p>The phone number order details.</p>
     */
    inline CreatePhoneNumberOrderResult& WithPhoneNumberOrder(PhoneNumberOrder&& value) { SetPhoneNumberOrder(std::move(value)); return *this;}

  private:

    PhoneNumberOrder m_phoneNumberOrder;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
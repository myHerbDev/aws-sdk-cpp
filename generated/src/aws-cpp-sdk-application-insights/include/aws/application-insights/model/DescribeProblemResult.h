﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-insights/ApplicationInsights_EXPORTS.h>
#include <aws/application-insights/model/Problem.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace ApplicationInsights
{
namespace Model
{
  class DescribeProblemResult
  {
  public:
    AWS_APPLICATIONINSIGHTS_API DescribeProblemResult();
    AWS_APPLICATIONINSIGHTS_API DescribeProblemResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPLICATIONINSIGHTS_API DescribeProblemResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the problem. </p>
     */
    inline const Problem& GetProblem() const{ return m_problem; }
    inline void SetProblem(const Problem& value) { m_problem = value; }
    inline void SetProblem(Problem&& value) { m_problem = std::move(value); }
    inline DescribeProblemResult& WithProblem(const Problem& value) { SetProblem(value); return *this;}
    inline DescribeProblemResult& WithProblem(Problem&& value) { SetProblem(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The SNS notification topic ARN of the problem. </p>
     */
    inline const Aws::String& GetSNSNotificationArn() const{ return m_sNSNotificationArn; }
    inline void SetSNSNotificationArn(const Aws::String& value) { m_sNSNotificationArn = value; }
    inline void SetSNSNotificationArn(Aws::String&& value) { m_sNSNotificationArn = std::move(value); }
    inline void SetSNSNotificationArn(const char* value) { m_sNSNotificationArn.assign(value); }
    inline DescribeProblemResult& WithSNSNotificationArn(const Aws::String& value) { SetSNSNotificationArn(value); return *this;}
    inline DescribeProblemResult& WithSNSNotificationArn(Aws::String&& value) { SetSNSNotificationArn(std::move(value)); return *this;}
    inline DescribeProblemResult& WithSNSNotificationArn(const char* value) { SetSNSNotificationArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeProblemResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeProblemResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeProblemResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Problem m_problem;

    Aws::String m_sNSNotificationArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ApplicationInsights
} // namespace Aws

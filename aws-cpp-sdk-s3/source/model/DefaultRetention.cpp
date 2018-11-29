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

#include <aws/s3/model/DefaultRetention.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace S3
{
namespace Model
{

DefaultRetention::DefaultRetention() : 
    m_mode(ObjectLockRetentionMode::NOT_SET),
    m_modeHasBeenSet(false),
    m_days(0),
    m_daysHasBeenSet(false),
    m_years(0),
    m_yearsHasBeenSet(false)
{
}

DefaultRetention::DefaultRetention(const XmlNode& xmlNode) : 
    m_mode(ObjectLockRetentionMode::NOT_SET),
    m_modeHasBeenSet(false),
    m_days(0),
    m_daysHasBeenSet(false),
    m_years(0),
    m_yearsHasBeenSet(false)
{
  *this = xmlNode;
}

DefaultRetention& DefaultRetention::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode modeNode = resultNode.FirstChild("Mode");
    if(!modeNode.IsNull())
    {
      m_mode = ObjectLockRetentionModeMapper::GetObjectLockRetentionModeForName(StringUtils::Trim(modeNode.GetText().c_str()).c_str());
      m_modeHasBeenSet = true;
    }
    XmlNode daysNode = resultNode.FirstChild("Days");
    if(!daysNode.IsNull())
    {
      m_days = StringUtils::ConvertToInt32(StringUtils::Trim(daysNode.GetText().c_str()).c_str());
      m_daysHasBeenSet = true;
    }
    XmlNode yearsNode = resultNode.FirstChild("Years");
    if(!yearsNode.IsNull())
    {
      m_years = StringUtils::ConvertToInt32(StringUtils::Trim(yearsNode.GetText().c_str()).c_str());
      m_yearsHasBeenSet = true;
    }
  }

  return *this;
}

void DefaultRetention::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_modeHasBeenSet)
  {
   XmlNode modeNode = parentNode.CreateChildElement("Mode");
   modeNode.SetText(ObjectLockRetentionModeMapper::GetNameForObjectLockRetentionMode(m_mode));
  }

  if(m_daysHasBeenSet)
  {
   XmlNode daysNode = parentNode.CreateChildElement("Days");
   ss << m_days;
   daysNode.SetText(ss.str());
   ss.str("");
  }

  if(m_yearsHasBeenSet)
  {
   XmlNode yearsNode = parentNode.CreateChildElement("Years");
   ss << m_years;
   yearsNode.SetText(ss.str());
   ss.str("");
  }

}

} // namespace Model
} // namespace S3
} // namespace Aws
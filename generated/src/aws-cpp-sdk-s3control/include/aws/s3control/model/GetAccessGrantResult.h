﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3control/model/Grantee.h>
#include <aws/s3control/model/Permission.h>
#include <aws/s3control/model/AccessGrantsLocationConfiguration.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace S3Control
{
namespace Model
{
  class GetAccessGrantResult
  {
  public:
    AWS_S3CONTROL_API GetAccessGrantResult();
    AWS_S3CONTROL_API GetAccessGrantResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_S3CONTROL_API GetAccessGrantResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The date and time when you created the access grant. </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline GetAccessGrantResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline GetAccessGrantResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the access grant. S3 Access Grants auto-generates this ID when you
     * create the access grant.</p>
     */
    inline const Aws::String& GetAccessGrantId() const{ return m_accessGrantId; }
    inline void SetAccessGrantId(const Aws::String& value) { m_accessGrantId = value; }
    inline void SetAccessGrantId(Aws::String&& value) { m_accessGrantId = std::move(value); }
    inline void SetAccessGrantId(const char* value) { m_accessGrantId.assign(value); }
    inline GetAccessGrantResult& WithAccessGrantId(const Aws::String& value) { SetAccessGrantId(value); return *this;}
    inline GetAccessGrantResult& WithAccessGrantId(Aws::String&& value) { SetAccessGrantId(std::move(value)); return *this;}
    inline GetAccessGrantResult& WithAccessGrantId(const char* value) { SetAccessGrantId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the access grant. </p>
     */
    inline const Aws::String& GetAccessGrantArn() const{ return m_accessGrantArn; }
    inline void SetAccessGrantArn(const Aws::String& value) { m_accessGrantArn = value; }
    inline void SetAccessGrantArn(Aws::String&& value) { m_accessGrantArn = std::move(value); }
    inline void SetAccessGrantArn(const char* value) { m_accessGrantArn.assign(value); }
    inline GetAccessGrantResult& WithAccessGrantArn(const Aws::String& value) { SetAccessGrantArn(value); return *this;}
    inline GetAccessGrantResult& WithAccessGrantArn(Aws::String&& value) { SetAccessGrantArn(std::move(value)); return *this;}
    inline GetAccessGrantResult& WithAccessGrantArn(const char* value) { SetAccessGrantArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user, group, or role to which you are granting access. You can grant
     * access to an IAM user or role. If you have added a corporate directory to Amazon
     * Web Services IAM Identity Center and associated this Identity Center instance
     * with the S3 Access Grants instance, the grantee can also be a corporate
     * directory user or group.</p>
     */
    inline const Grantee& GetGrantee() const{ return m_grantee; }
    inline void SetGrantee(const Grantee& value) { m_grantee = value; }
    inline void SetGrantee(Grantee&& value) { m_grantee = std::move(value); }
    inline GetAccessGrantResult& WithGrantee(const Grantee& value) { SetGrantee(value); return *this;}
    inline GetAccessGrantResult& WithGrantee(Grantee&& value) { SetGrantee(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of permission that was granted in the access grant. Can be one of
     * the following values:</p> <ul> <li> <p> <code>READ</code> – Grant read-only
     * access to the S3 data.</p> </li> <li> <p> <code>WRITE</code> – Grant write-only
     * access to the S3 data.</p> </li> <li> <p> <code>READWRITE</code> – Grant both
     * read and write access to the S3 data.</p> </li> </ul>
     */
    inline const Permission& GetPermission() const{ return m_permission; }
    inline void SetPermission(const Permission& value) { m_permission = value; }
    inline void SetPermission(Permission&& value) { m_permission = std::move(value); }
    inline GetAccessGrantResult& WithPermission(const Permission& value) { SetPermission(value); return *this;}
    inline GetAccessGrantResult& WithPermission(Permission&& value) { SetPermission(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the registered location to which you are granting access. S3 Access
     * Grants assigns this ID when you register the location. S3 Access Grants assigns
     * the ID <code>default</code> to the default location <code>s3://</code> and
     * assigns an auto-generated ID to other locations that you register. </p>
     */
    inline const Aws::String& GetAccessGrantsLocationId() const{ return m_accessGrantsLocationId; }
    inline void SetAccessGrantsLocationId(const Aws::String& value) { m_accessGrantsLocationId = value; }
    inline void SetAccessGrantsLocationId(Aws::String&& value) { m_accessGrantsLocationId = std::move(value); }
    inline void SetAccessGrantsLocationId(const char* value) { m_accessGrantsLocationId.assign(value); }
    inline GetAccessGrantResult& WithAccessGrantsLocationId(const Aws::String& value) { SetAccessGrantsLocationId(value); return *this;}
    inline GetAccessGrantResult& WithAccessGrantsLocationId(Aws::String&& value) { SetAccessGrantsLocationId(std::move(value)); return *this;}
    inline GetAccessGrantResult& WithAccessGrantsLocationId(const char* value) { SetAccessGrantsLocationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration options of the grant location. The grant location is the S3
     * path to the data to which you are granting access. </p>
     */
    inline const AccessGrantsLocationConfiguration& GetAccessGrantsLocationConfiguration() const{ return m_accessGrantsLocationConfiguration; }
    inline void SetAccessGrantsLocationConfiguration(const AccessGrantsLocationConfiguration& value) { m_accessGrantsLocationConfiguration = value; }
    inline void SetAccessGrantsLocationConfiguration(AccessGrantsLocationConfiguration&& value) { m_accessGrantsLocationConfiguration = std::move(value); }
    inline GetAccessGrantResult& WithAccessGrantsLocationConfiguration(const AccessGrantsLocationConfiguration& value) { SetAccessGrantsLocationConfiguration(value); return *this;}
    inline GetAccessGrantResult& WithAccessGrantsLocationConfiguration(AccessGrantsLocationConfiguration&& value) { SetAccessGrantsLocationConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The S3 path of the data to which you are granting access. It is the result of
     * appending the <code>Subprefix</code> to the location scope.</p>
     */
    inline const Aws::String& GetGrantScope() const{ return m_grantScope; }
    inline void SetGrantScope(const Aws::String& value) { m_grantScope = value; }
    inline void SetGrantScope(Aws::String&& value) { m_grantScope = std::move(value); }
    inline void SetGrantScope(const char* value) { m_grantScope.assign(value); }
    inline GetAccessGrantResult& WithGrantScope(const Aws::String& value) { SetGrantScope(value); return *this;}
    inline GetAccessGrantResult& WithGrantScope(Aws::String&& value) { SetGrantScope(std::move(value)); return *this;}
    inline GetAccessGrantResult& WithGrantScope(const char* value) { SetGrantScope(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon Web Services IAM Identity Center
     * application associated with your Identity Center instance. If the grant includes
     * an application ARN, the grantee can only access the S3 data through this
     * application. </p>
     */
    inline const Aws::String& GetApplicationArn() const{ return m_applicationArn; }
    inline void SetApplicationArn(const Aws::String& value) { m_applicationArn = value; }
    inline void SetApplicationArn(Aws::String&& value) { m_applicationArn = std::move(value); }
    inline void SetApplicationArn(const char* value) { m_applicationArn.assign(value); }
    inline GetAccessGrantResult& WithApplicationArn(const Aws::String& value) { SetApplicationArn(value); return *this;}
    inline GetAccessGrantResult& WithApplicationArn(Aws::String&& value) { SetApplicationArn(std::move(value)); return *this;}
    inline GetAccessGrantResult& WithApplicationArn(const char* value) { SetApplicationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * AWS Request Id value
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetAccessGrantResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetAccessGrantResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetAccessGrantResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}

    ///@{
    /**
     * x-amz-id-2 header value, also known as Host Id
     */
    inline const Aws::String& GetHostId() const{ return m_hostId; }
    inline void SetHostId(const Aws::String& value) { m_hostId = value; }
    inline void SetHostId(Aws::String&& value) { m_hostId = std::move(value); }
    inline void SetHostId(const char* value) { m_hostId.assign(value); }
    inline GetAccessGrantResult& WithHostId(const Aws::String& value) { SetHostId(value); return *this;}
    inline GetAccessGrantResult& WithHostId(Aws::String&& value) { SetHostId(std::move(value)); return *this;}
    inline GetAccessGrantResult& WithHostId(const char* value) { SetHostId(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_createdAt;

    Aws::String m_accessGrantId;

    Aws::String m_accessGrantArn;

    Grantee m_grantee;

    Permission m_permission;

    Aws::String m_accessGrantsLocationId;

    AccessGrantsLocationConfiguration m_accessGrantsLocationConfiguration;

    Aws::String m_grantScope;

    Aws::String m_applicationArn;

    Aws::String m_requestId;

    Aws::String m_hostId;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws

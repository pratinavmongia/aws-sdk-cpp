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
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace AppMesh
{
namespace Model
{

  /**
   * <p>An object that represents a virtual node returned by a list
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/VirtualNodeRef">AWS
   * API Reference</a></p>
   */
  class AWS_APPMESH_API VirtualNodeRef
  {
  public:
    VirtualNodeRef();
    VirtualNodeRef(Aws::Utils::Json::JsonView jsonValue);
    VirtualNodeRef& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The full Amazon Resource Name (ARN) for the virtual node.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The full Amazon Resource Name (ARN) for the virtual node.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The full Amazon Resource Name (ARN) for the virtual node.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The full Amazon Resource Name (ARN) for the virtual node.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The full Amazon Resource Name (ARN) for the virtual node.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The full Amazon Resource Name (ARN) for the virtual node.</p>
     */
    inline VirtualNodeRef& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The full Amazon Resource Name (ARN) for the virtual node.</p>
     */
    inline VirtualNodeRef& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The full Amazon Resource Name (ARN) for the virtual node.</p>
     */
    inline VirtualNodeRef& WithArn(const char* value) { SetArn(value); return *this;}


    
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    
    inline VirtualNodeRef& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    
    inline VirtualNodeRef& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }

    
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }

    
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = value; }

    
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::move(value); }

    
    inline VirtualNodeRef& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}

    
    inline VirtualNodeRef& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>The name of the service mesh that the virtual node resides in.</p>
     */
    inline const Aws::String& GetMeshName() const{ return m_meshName; }

    /**
     * <p>The name of the service mesh that the virtual node resides in.</p>
     */
    inline bool MeshNameHasBeenSet() const { return m_meshNameHasBeenSet; }

    /**
     * <p>The name of the service mesh that the virtual node resides in.</p>
     */
    inline void SetMeshName(const Aws::String& value) { m_meshNameHasBeenSet = true; m_meshName = value; }

    /**
     * <p>The name of the service mesh that the virtual node resides in.</p>
     */
    inline void SetMeshName(Aws::String&& value) { m_meshNameHasBeenSet = true; m_meshName = std::move(value); }

    /**
     * <p>The name of the service mesh that the virtual node resides in.</p>
     */
    inline void SetMeshName(const char* value) { m_meshNameHasBeenSet = true; m_meshName.assign(value); }

    /**
     * <p>The name of the service mesh that the virtual node resides in.</p>
     */
    inline VirtualNodeRef& WithMeshName(const Aws::String& value) { SetMeshName(value); return *this;}

    /**
     * <p>The name of the service mesh that the virtual node resides in.</p>
     */
    inline VirtualNodeRef& WithMeshName(Aws::String&& value) { SetMeshName(std::move(value)); return *this;}

    /**
     * <p>The name of the service mesh that the virtual node resides in.</p>
     */
    inline VirtualNodeRef& WithMeshName(const char* value) { SetMeshName(value); return *this;}


    /**
     * <p>The AWS IAM account ID of the service mesh owner. If the account ID is not
     * your own, then it's
               the ID of the account that shared the mesh
     * with your account. For more information about mesh sharing, see <a
     * href="https://docs.aws.amazon.com/app-mesh/latest/userguide/sharing.html">Working
     * with Shared Meshes</a>.</p>
     */
    inline const Aws::String& GetMeshOwner() const{ return m_meshOwner; }

    /**
     * <p>The AWS IAM account ID of the service mesh owner. If the account ID is not
     * your own, then it's
               the ID of the account that shared the mesh
     * with your account. For more information about mesh sharing, see <a
     * href="https://docs.aws.amazon.com/app-mesh/latest/userguide/sharing.html">Working
     * with Shared Meshes</a>.</p>
     */
    inline bool MeshOwnerHasBeenSet() const { return m_meshOwnerHasBeenSet; }

    /**
     * <p>The AWS IAM account ID of the service mesh owner. If the account ID is not
     * your own, then it's
               the ID of the account that shared the mesh
     * with your account. For more information about mesh sharing, see <a
     * href="https://docs.aws.amazon.com/app-mesh/latest/userguide/sharing.html">Working
     * with Shared Meshes</a>.</p>
     */
    inline void SetMeshOwner(const Aws::String& value) { m_meshOwnerHasBeenSet = true; m_meshOwner = value; }

    /**
     * <p>The AWS IAM account ID of the service mesh owner. If the account ID is not
     * your own, then it's
               the ID of the account that shared the mesh
     * with your account. For more information about mesh sharing, see <a
     * href="https://docs.aws.amazon.com/app-mesh/latest/userguide/sharing.html">Working
     * with Shared Meshes</a>.</p>
     */
    inline void SetMeshOwner(Aws::String&& value) { m_meshOwnerHasBeenSet = true; m_meshOwner = std::move(value); }

    /**
     * <p>The AWS IAM account ID of the service mesh owner. If the account ID is not
     * your own, then it's
               the ID of the account that shared the mesh
     * with your account. For more information about mesh sharing, see <a
     * href="https://docs.aws.amazon.com/app-mesh/latest/userguide/sharing.html">Working
     * with Shared Meshes</a>.</p>
     */
    inline void SetMeshOwner(const char* value) { m_meshOwnerHasBeenSet = true; m_meshOwner.assign(value); }

    /**
     * <p>The AWS IAM account ID of the service mesh owner. If the account ID is not
     * your own, then it's
               the ID of the account that shared the mesh
     * with your account. For more information about mesh sharing, see <a
     * href="https://docs.aws.amazon.com/app-mesh/latest/userguide/sharing.html">Working
     * with Shared Meshes</a>.</p>
     */
    inline VirtualNodeRef& WithMeshOwner(const Aws::String& value) { SetMeshOwner(value); return *this;}

    /**
     * <p>The AWS IAM account ID of the service mesh owner. If the account ID is not
     * your own, then it's
               the ID of the account that shared the mesh
     * with your account. For more information about mesh sharing, see <a
     * href="https://docs.aws.amazon.com/app-mesh/latest/userguide/sharing.html">Working
     * with Shared Meshes</a>.</p>
     */
    inline VirtualNodeRef& WithMeshOwner(Aws::String&& value) { SetMeshOwner(std::move(value)); return *this;}

    /**
     * <p>The AWS IAM account ID of the service mesh owner. If the account ID is not
     * your own, then it's
               the ID of the account that shared the mesh
     * with your account. For more information about mesh sharing, see <a
     * href="https://docs.aws.amazon.com/app-mesh/latest/userguide/sharing.html">Working
     * with Shared Meshes</a>.</p>
     */
    inline VirtualNodeRef& WithMeshOwner(const char* value) { SetMeshOwner(value); return *this;}


    /**
     * <p>The AWS IAM account ID of the resource owner. If the account ID is not your
     * own, then it's
               the ID of the mesh owner or of another account
     * that the mesh is shared with. For more information about mesh sharing, see <a
     * href="https://docs.aws.amazon.com/app-mesh/latest/userguide/sharing.html">Working
     * with Shared Meshes</a>.</p>
     */
    inline const Aws::String& GetResourceOwner() const{ return m_resourceOwner; }

    /**
     * <p>The AWS IAM account ID of the resource owner. If the account ID is not your
     * own, then it's
               the ID of the mesh owner or of another account
     * that the mesh is shared with. For more information about mesh sharing, see <a
     * href="https://docs.aws.amazon.com/app-mesh/latest/userguide/sharing.html">Working
     * with Shared Meshes</a>.</p>
     */
    inline bool ResourceOwnerHasBeenSet() const { return m_resourceOwnerHasBeenSet; }

    /**
     * <p>The AWS IAM account ID of the resource owner. If the account ID is not your
     * own, then it's
               the ID of the mesh owner or of another account
     * that the mesh is shared with. For more information about mesh sharing, see <a
     * href="https://docs.aws.amazon.com/app-mesh/latest/userguide/sharing.html">Working
     * with Shared Meshes</a>.</p>
     */
    inline void SetResourceOwner(const Aws::String& value) { m_resourceOwnerHasBeenSet = true; m_resourceOwner = value; }

    /**
     * <p>The AWS IAM account ID of the resource owner. If the account ID is not your
     * own, then it's
               the ID of the mesh owner or of another account
     * that the mesh is shared with. For more information about mesh sharing, see <a
     * href="https://docs.aws.amazon.com/app-mesh/latest/userguide/sharing.html">Working
     * with Shared Meshes</a>.</p>
     */
    inline void SetResourceOwner(Aws::String&& value) { m_resourceOwnerHasBeenSet = true; m_resourceOwner = std::move(value); }

    /**
     * <p>The AWS IAM account ID of the resource owner. If the account ID is not your
     * own, then it's
               the ID of the mesh owner or of another account
     * that the mesh is shared with. For more information about mesh sharing, see <a
     * href="https://docs.aws.amazon.com/app-mesh/latest/userguide/sharing.html">Working
     * with Shared Meshes</a>.</p>
     */
    inline void SetResourceOwner(const char* value) { m_resourceOwnerHasBeenSet = true; m_resourceOwner.assign(value); }

    /**
     * <p>The AWS IAM account ID of the resource owner. If the account ID is not your
     * own, then it's
               the ID of the mesh owner or of another account
     * that the mesh is shared with. For more information about mesh sharing, see <a
     * href="https://docs.aws.amazon.com/app-mesh/latest/userguide/sharing.html">Working
     * with Shared Meshes</a>.</p>
     */
    inline VirtualNodeRef& WithResourceOwner(const Aws::String& value) { SetResourceOwner(value); return *this;}

    /**
     * <p>The AWS IAM account ID of the resource owner. If the account ID is not your
     * own, then it's
               the ID of the mesh owner or of another account
     * that the mesh is shared with. For more information about mesh sharing, see <a
     * href="https://docs.aws.amazon.com/app-mesh/latest/userguide/sharing.html">Working
     * with Shared Meshes</a>.</p>
     */
    inline VirtualNodeRef& WithResourceOwner(Aws::String&& value) { SetResourceOwner(std::move(value)); return *this;}

    /**
     * <p>The AWS IAM account ID of the resource owner. If the account ID is not your
     * own, then it's
               the ID of the mesh owner or of another account
     * that the mesh is shared with. For more information about mesh sharing, see <a
     * href="https://docs.aws.amazon.com/app-mesh/latest/userguide/sharing.html">Working
     * with Shared Meshes</a>.</p>
     */
    inline VirtualNodeRef& WithResourceOwner(const char* value) { SetResourceOwner(value); return *this;}


    
    inline long long GetVersion() const{ return m_version; }

    
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    
    inline void SetVersion(long long value) { m_versionHasBeenSet = true; m_version = value; }

    
    inline VirtualNodeRef& WithVersion(long long value) { SetVersion(value); return *this;}


    /**
     * <p>The name of the virtual node.</p>
     */
    inline const Aws::String& GetVirtualNodeName() const{ return m_virtualNodeName; }

    /**
     * <p>The name of the virtual node.</p>
     */
    inline bool VirtualNodeNameHasBeenSet() const { return m_virtualNodeNameHasBeenSet; }

    /**
     * <p>The name of the virtual node.</p>
     */
    inline void SetVirtualNodeName(const Aws::String& value) { m_virtualNodeNameHasBeenSet = true; m_virtualNodeName = value; }

    /**
     * <p>The name of the virtual node.</p>
     */
    inline void SetVirtualNodeName(Aws::String&& value) { m_virtualNodeNameHasBeenSet = true; m_virtualNodeName = std::move(value); }

    /**
     * <p>The name of the virtual node.</p>
     */
    inline void SetVirtualNodeName(const char* value) { m_virtualNodeNameHasBeenSet = true; m_virtualNodeName.assign(value); }

    /**
     * <p>The name of the virtual node.</p>
     */
    inline VirtualNodeRef& WithVirtualNodeName(const Aws::String& value) { SetVirtualNodeName(value); return *this;}

    /**
     * <p>The name of the virtual node.</p>
     */
    inline VirtualNodeRef& WithVirtualNodeName(Aws::String&& value) { SetVirtualNodeName(std::move(value)); return *this;}

    /**
     * <p>The name of the virtual node.</p>
     */
    inline VirtualNodeRef& WithVirtualNodeName(const char* value) { SetVirtualNodeName(value); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet;

    Aws::Utils::DateTime m_lastUpdatedAt;
    bool m_lastUpdatedAtHasBeenSet;

    Aws::String m_meshName;
    bool m_meshNameHasBeenSet;

    Aws::String m_meshOwner;
    bool m_meshOwnerHasBeenSet;

    Aws::String m_resourceOwner;
    bool m_resourceOwnerHasBeenSet;

    long long m_version;
    bool m_versionHasBeenSet;

    Aws::String m_virtualNodeName;
    bool m_virtualNodeNameHasBeenSet;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws

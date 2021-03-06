/*
Copyright 2017 Google Inc. All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS-IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/

// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_MESH_MESHDEF_H_
#define FLATBUFFERS_GENERATED_MESH_MESHDEF_H_

#include "flatbuffers/flatbuffers.h"

#include "common_generated.h"
#include "materials_generated.h"

namespace meshdef {

struct Surface;

struct Mesh;

enum MeshVersion {
  MeshVersion_Unspecified = 0,
  MeshVersion_MostRecent = 1,
  MeshVersion_MIN = MeshVersion_Unspecified,
  MeshVersion_MAX = MeshVersion_MostRecent
};

inline MeshVersion (&EnumValuesMeshVersion())[2] {
  static MeshVersion values[] = {
    MeshVersion_Unspecified,
    MeshVersion_MostRecent
  };
  return values;
}

inline const char **EnumNamesMeshVersion() {
  static const char *names[] = {
    "Unspecified",
    "MostRecent",
    nullptr
  };
  return names;
}

inline const char *EnumNameMeshVersion(MeshVersion e) {
  const size_t index = static_cast<int>(e);
  return EnumNamesMeshVersion()[index];
}

enum Attribute {
  Attribute_END = 0,
  Attribute_Position3f = 1,
  Attribute_Normal3f = 2,
  Attribute_Tangent4f = 3,
  Attribute_TexCoord2f = 4,
  Attribute_TexCoordAlt2f = 5,
  Attribute_Color4ub = 6,
  Attribute_BoneIndices4ub = 7,
  Attribute_BoneWeights4ub = 8,
  Attribute_Position2f = 9,
  Attribute_TexCoord2us = 10,
  Attribute_Orientation4f = 11,
  Attribute_MIN = Attribute_END,
  Attribute_MAX = Attribute_Orientation4f
};

inline Attribute (&EnumValuesAttribute())[12] {
  static Attribute values[] = {
    Attribute_END,
    Attribute_Position3f,
    Attribute_Normal3f,
    Attribute_Tangent4f,
    Attribute_TexCoord2f,
    Attribute_TexCoordAlt2f,
    Attribute_Color4ub,
    Attribute_BoneIndices4ub,
    Attribute_BoneWeights4ub,
    Attribute_Position2f,
    Attribute_TexCoord2us,
    Attribute_Orientation4f
  };
  return values;
}

inline const char **EnumNamesAttribute() {
  static const char *names[] = {
    "END",
    "Position3f",
    "Normal3f",
    "Tangent4f",
    "TexCoord2f",
    "TexCoordAlt2f",
    "Color4ub",
    "BoneIndices4ub",
    "BoneWeights4ub",
    "Position2f",
    "TexCoord2us",
    "Orientation4f",
    nullptr
  };
  return names;
}

inline const char *EnumNameAttribute(Attribute e) {
  const size_t index = static_cast<int>(e);
  return EnumNamesAttribute()[index];
}

struct Surface FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_INDICES = 4,
    VT_MATERIAL = 6,
    VT_INDICES32 = 8,
    VT_MATERIAL_INFO = 10
  };
  const flatbuffers::Vector<uint16_t> *indices() const {
    return GetPointer<const flatbuffers::Vector<uint16_t> *>(VT_INDICES);
  }
  const flatbuffers::String *material() const {
    return GetPointer<const flatbuffers::String *>(VT_MATERIAL);
  }
  const flatbuffers::Vector<uint32_t> *indices32() const {
    return GetPointer<const flatbuffers::Vector<uint32_t> *>(VT_INDICES32);
  }
  const matdef::Material *material_info() const {
    return GetPointer<const matdef::Material *>(VT_MATERIAL_INFO);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_INDICES) &&
           verifier.Verify(indices()) &&
           VerifyOffsetRequired(verifier, VT_MATERIAL) &&
           verifier.Verify(material()) &&
           VerifyOffset(verifier, VT_INDICES32) &&
           verifier.Verify(indices32()) &&
           VerifyOffset(verifier, VT_MATERIAL_INFO) &&
           verifier.VerifyTable(material_info()) &&
           verifier.EndTable();
  }
};

struct SurfaceBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_indices(flatbuffers::Offset<flatbuffers::Vector<uint16_t>> indices) {
    fbb_.AddOffset(Surface::VT_INDICES, indices);
  }
  void add_material(flatbuffers::Offset<flatbuffers::String> material) {
    fbb_.AddOffset(Surface::VT_MATERIAL, material);
  }
  void add_indices32(flatbuffers::Offset<flatbuffers::Vector<uint32_t>> indices32) {
    fbb_.AddOffset(Surface::VT_INDICES32, indices32);
  }
  void add_material_info(flatbuffers::Offset<matdef::Material> material_info) {
    fbb_.AddOffset(Surface::VT_MATERIAL_INFO, material_info);
  }
  explicit SurfaceBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  SurfaceBuilder &operator=(const SurfaceBuilder &);
  flatbuffers::Offset<Surface> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<Surface>(end);
    fbb_.Required(o, Surface::VT_MATERIAL);
    return o;
  }
};

inline flatbuffers::Offset<Surface> CreateSurface(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::Vector<uint16_t>> indices = 0,
    flatbuffers::Offset<flatbuffers::String> material = 0,
    flatbuffers::Offset<flatbuffers::Vector<uint32_t>> indices32 = 0,
    flatbuffers::Offset<matdef::Material> material_info = 0) {
  SurfaceBuilder builder_(_fbb);
  builder_.add_material_info(material_info);
  builder_.add_indices32(indices32);
  builder_.add_material(material);
  builder_.add_indices(indices);
  return builder_.Finish();
}

inline flatbuffers::Offset<Surface> CreateSurfaceDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const std::vector<uint16_t> *indices = nullptr,
    const char *material = nullptr,
    const std::vector<uint32_t> *indices32 = nullptr,
    flatbuffers::Offset<matdef::Material> material_info = 0) {
  return meshdef::CreateSurface(
      _fbb,
      indices ? _fbb.CreateVector<uint16_t>(*indices) : 0,
      material ? _fbb.CreateString(material) : 0,
      indices32 ? _fbb.CreateVector<uint32_t>(*indices32) : 0,
      material_info);
}

struct Mesh FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_SURFACES = 4,
    VT_POSITIONS = 6,
    VT_NORMALS = 8,
    VT_TANGENTS = 10,
    VT_COLORS = 12,
    VT_TEXCOORDS = 14,
    VT_SKIN_INDICES = 16,
    VT_SKIN_WEIGHTS = 18,
    VT_MAX_POSITION = 20,
    VT_MIN_POSITION = 22,
    VT_BONE_NAMES = 24,
    VT_BONE_TRANSFORMS = 26,
    VT_BONE_PARENTS = 28,
    VT_SHADER_TO_MESH_BONES = 30,
    VT_TEXCOORDS_ALT = 32,
    VT_VERSION = 34,
    VT_ATTRIBUTES = 36,
    VT_VERTICES = 38,
    VT_ORIENTATIONS = 40
  };
  const flatbuffers::Vector<flatbuffers::Offset<Surface>> *surfaces() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<Surface>> *>(VT_SURFACES);
  }
  const flatbuffers::Vector<const fplbase::Vec3 *> *positions() const {
    return GetPointer<const flatbuffers::Vector<const fplbase::Vec3 *> *>(VT_POSITIONS);
  }
  const flatbuffers::Vector<const fplbase::Vec3 *> *normals() const {
    return GetPointer<const flatbuffers::Vector<const fplbase::Vec3 *> *>(VT_NORMALS);
  }
  const flatbuffers::Vector<const fplbase::Vec4 *> *tangents() const {
    return GetPointer<const flatbuffers::Vector<const fplbase::Vec4 *> *>(VT_TANGENTS);
  }
  const flatbuffers::Vector<const fplbase::Vec4ub *> *colors() const {
    return GetPointer<const flatbuffers::Vector<const fplbase::Vec4ub *> *>(VT_COLORS);
  }
  const flatbuffers::Vector<const fplbase::Vec2 *> *texcoords() const {
    return GetPointer<const flatbuffers::Vector<const fplbase::Vec2 *> *>(VT_TEXCOORDS);
  }
  const flatbuffers::Vector<const fplbase::Vec4ub *> *skin_indices() const {
    return GetPointer<const flatbuffers::Vector<const fplbase::Vec4ub *> *>(VT_SKIN_INDICES);
  }
  const flatbuffers::Vector<const fplbase::Vec4ub *> *skin_weights() const {
    return GetPointer<const flatbuffers::Vector<const fplbase::Vec4ub *> *>(VT_SKIN_WEIGHTS);
  }
  const fplbase::Vec3 *max_position() const {
    return GetStruct<const fplbase::Vec3 *>(VT_MAX_POSITION);
  }
  const fplbase::Vec3 *min_position() const {
    return GetStruct<const fplbase::Vec3 *>(VT_MIN_POSITION);
  }
  const flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>> *bone_names() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>> *>(VT_BONE_NAMES);
  }
  const flatbuffers::Vector<const fplbase::Mat3x4 *> *bone_transforms() const {
    return GetPointer<const flatbuffers::Vector<const fplbase::Mat3x4 *> *>(VT_BONE_TRANSFORMS);
  }
  const flatbuffers::Vector<uint8_t> *bone_parents() const {
    return GetPointer<const flatbuffers::Vector<uint8_t> *>(VT_BONE_PARENTS);
  }
  const flatbuffers::Vector<uint8_t> *shader_to_mesh_bones() const {
    return GetPointer<const flatbuffers::Vector<uint8_t> *>(VT_SHADER_TO_MESH_BONES);
  }
  const flatbuffers::Vector<const fplbase::Vec2 *> *texcoords_alt() const {
    return GetPointer<const flatbuffers::Vector<const fplbase::Vec2 *> *>(VT_TEXCOORDS_ALT);
  }
  MeshVersion version() const {
    return static_cast<MeshVersion>(GetField<uint16_t>(VT_VERSION, 0));
  }
  const flatbuffers::Vector<uint8_t> *attributes() const {
    return GetPointer<const flatbuffers::Vector<uint8_t> *>(VT_ATTRIBUTES);
  }
  const flatbuffers::Vector<uint8_t> *vertices() const {
    return GetPointer<const flatbuffers::Vector<uint8_t> *>(VT_VERTICES);
  }
  const flatbuffers::Vector<const fplbase::Vec4 *> *orientations() const {
    return GetPointer<const flatbuffers::Vector<const fplbase::Vec4 *> *>(VT_ORIENTATIONS);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffsetRequired(verifier, VT_SURFACES) &&
           verifier.Verify(surfaces()) &&
           verifier.VerifyVectorOfTables(surfaces()) &&
           VerifyOffset(verifier, VT_POSITIONS) &&
           verifier.Verify(positions()) &&
           VerifyOffset(verifier, VT_NORMALS) &&
           verifier.Verify(normals()) &&
           VerifyOffset(verifier, VT_TANGENTS) &&
           verifier.Verify(tangents()) &&
           VerifyOffset(verifier, VT_COLORS) &&
           verifier.Verify(colors()) &&
           VerifyOffset(verifier, VT_TEXCOORDS) &&
           verifier.Verify(texcoords()) &&
           VerifyOffset(verifier, VT_SKIN_INDICES) &&
           verifier.Verify(skin_indices()) &&
           VerifyOffset(verifier, VT_SKIN_WEIGHTS) &&
           verifier.Verify(skin_weights()) &&
           VerifyField<fplbase::Vec3>(verifier, VT_MAX_POSITION) &&
           VerifyField<fplbase::Vec3>(verifier, VT_MIN_POSITION) &&
           VerifyOffset(verifier, VT_BONE_NAMES) &&
           verifier.Verify(bone_names()) &&
           verifier.VerifyVectorOfStrings(bone_names()) &&
           VerifyOffset(verifier, VT_BONE_TRANSFORMS) &&
           verifier.Verify(bone_transforms()) &&
           VerifyOffset(verifier, VT_BONE_PARENTS) &&
           verifier.Verify(bone_parents()) &&
           VerifyOffset(verifier, VT_SHADER_TO_MESH_BONES) &&
           verifier.Verify(shader_to_mesh_bones()) &&
           VerifyOffset(verifier, VT_TEXCOORDS_ALT) &&
           verifier.Verify(texcoords_alt()) &&
           VerifyField<uint16_t>(verifier, VT_VERSION) &&
           VerifyOffset(verifier, VT_ATTRIBUTES) &&
           verifier.Verify(attributes()) &&
           VerifyOffset(verifier, VT_VERTICES) &&
           verifier.Verify(vertices()) &&
           VerifyOffset(verifier, VT_ORIENTATIONS) &&
           verifier.Verify(orientations()) &&
           verifier.EndTable();
  }
};

struct MeshBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_surfaces(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<Surface>>> surfaces) {
    fbb_.AddOffset(Mesh::VT_SURFACES, surfaces);
  }
  void add_positions(flatbuffers::Offset<flatbuffers::Vector<const fplbase::Vec3 *>> positions) {
    fbb_.AddOffset(Mesh::VT_POSITIONS, positions);
  }
  void add_normals(flatbuffers::Offset<flatbuffers::Vector<const fplbase::Vec3 *>> normals) {
    fbb_.AddOffset(Mesh::VT_NORMALS, normals);
  }
  void add_tangents(flatbuffers::Offset<flatbuffers::Vector<const fplbase::Vec4 *>> tangents) {
    fbb_.AddOffset(Mesh::VT_TANGENTS, tangents);
  }
  void add_colors(flatbuffers::Offset<flatbuffers::Vector<const fplbase::Vec4ub *>> colors) {
    fbb_.AddOffset(Mesh::VT_COLORS, colors);
  }
  void add_texcoords(flatbuffers::Offset<flatbuffers::Vector<const fplbase::Vec2 *>> texcoords) {
    fbb_.AddOffset(Mesh::VT_TEXCOORDS, texcoords);
  }
  void add_skin_indices(flatbuffers::Offset<flatbuffers::Vector<const fplbase::Vec4ub *>> skin_indices) {
    fbb_.AddOffset(Mesh::VT_SKIN_INDICES, skin_indices);
  }
  void add_skin_weights(flatbuffers::Offset<flatbuffers::Vector<const fplbase::Vec4ub *>> skin_weights) {
    fbb_.AddOffset(Mesh::VT_SKIN_WEIGHTS, skin_weights);
  }
  void add_max_position(const fplbase::Vec3 *max_position) {
    fbb_.AddStruct(Mesh::VT_MAX_POSITION, max_position);
  }
  void add_min_position(const fplbase::Vec3 *min_position) {
    fbb_.AddStruct(Mesh::VT_MIN_POSITION, min_position);
  }
  void add_bone_names(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>>> bone_names) {
    fbb_.AddOffset(Mesh::VT_BONE_NAMES, bone_names);
  }
  void add_bone_transforms(flatbuffers::Offset<flatbuffers::Vector<const fplbase::Mat3x4 *>> bone_transforms) {
    fbb_.AddOffset(Mesh::VT_BONE_TRANSFORMS, bone_transforms);
  }
  void add_bone_parents(flatbuffers::Offset<flatbuffers::Vector<uint8_t>> bone_parents) {
    fbb_.AddOffset(Mesh::VT_BONE_PARENTS, bone_parents);
  }
  void add_shader_to_mesh_bones(flatbuffers::Offset<flatbuffers::Vector<uint8_t>> shader_to_mesh_bones) {
    fbb_.AddOffset(Mesh::VT_SHADER_TO_MESH_BONES, shader_to_mesh_bones);
  }
  void add_texcoords_alt(flatbuffers::Offset<flatbuffers::Vector<const fplbase::Vec2 *>> texcoords_alt) {
    fbb_.AddOffset(Mesh::VT_TEXCOORDS_ALT, texcoords_alt);
  }
  void add_version(MeshVersion version) {
    fbb_.AddElement<uint16_t>(Mesh::VT_VERSION, static_cast<uint16_t>(version), 0);
  }
  void add_attributes(flatbuffers::Offset<flatbuffers::Vector<uint8_t>> attributes) {
    fbb_.AddOffset(Mesh::VT_ATTRIBUTES, attributes);
  }
  void add_vertices(flatbuffers::Offset<flatbuffers::Vector<uint8_t>> vertices) {
    fbb_.AddOffset(Mesh::VT_VERTICES, vertices);
  }
  void add_orientations(flatbuffers::Offset<flatbuffers::Vector<const fplbase::Vec4 *>> orientations) {
    fbb_.AddOffset(Mesh::VT_ORIENTATIONS, orientations);
  }
  explicit MeshBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  MeshBuilder &operator=(const MeshBuilder &);
  flatbuffers::Offset<Mesh> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<Mesh>(end);
    fbb_.Required(o, Mesh::VT_SURFACES);
    return o;
  }
};

inline flatbuffers::Offset<Mesh> CreateMesh(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<Surface>>> surfaces = 0,
    flatbuffers::Offset<flatbuffers::Vector<const fplbase::Vec3 *>> positions = 0,
    flatbuffers::Offset<flatbuffers::Vector<const fplbase::Vec3 *>> normals = 0,
    flatbuffers::Offset<flatbuffers::Vector<const fplbase::Vec4 *>> tangents = 0,
    flatbuffers::Offset<flatbuffers::Vector<const fplbase::Vec4ub *>> colors = 0,
    flatbuffers::Offset<flatbuffers::Vector<const fplbase::Vec2 *>> texcoords = 0,
    flatbuffers::Offset<flatbuffers::Vector<const fplbase::Vec4ub *>> skin_indices = 0,
    flatbuffers::Offset<flatbuffers::Vector<const fplbase::Vec4ub *>> skin_weights = 0,
    const fplbase::Vec3 *max_position = 0,
    const fplbase::Vec3 *min_position = 0,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>>> bone_names = 0,
    flatbuffers::Offset<flatbuffers::Vector<const fplbase::Mat3x4 *>> bone_transforms = 0,
    flatbuffers::Offset<flatbuffers::Vector<uint8_t>> bone_parents = 0,
    flatbuffers::Offset<flatbuffers::Vector<uint8_t>> shader_to_mesh_bones = 0,
    flatbuffers::Offset<flatbuffers::Vector<const fplbase::Vec2 *>> texcoords_alt = 0,
    MeshVersion version = MeshVersion_Unspecified,
    flatbuffers::Offset<flatbuffers::Vector<uint8_t>> attributes = 0,
    flatbuffers::Offset<flatbuffers::Vector<uint8_t>> vertices = 0,
    flatbuffers::Offset<flatbuffers::Vector<const fplbase::Vec4 *>> orientations = 0) {
  MeshBuilder builder_(_fbb);
  builder_.add_orientations(orientations);
  builder_.add_vertices(vertices);
  builder_.add_attributes(attributes);
  builder_.add_texcoords_alt(texcoords_alt);
  builder_.add_shader_to_mesh_bones(shader_to_mesh_bones);
  builder_.add_bone_parents(bone_parents);
  builder_.add_bone_transforms(bone_transforms);
  builder_.add_bone_names(bone_names);
  builder_.add_min_position(min_position);
  builder_.add_max_position(max_position);
  builder_.add_skin_weights(skin_weights);
  builder_.add_skin_indices(skin_indices);
  builder_.add_texcoords(texcoords);
  builder_.add_colors(colors);
  builder_.add_tangents(tangents);
  builder_.add_normals(normals);
  builder_.add_positions(positions);
  builder_.add_surfaces(surfaces);
  builder_.add_version(version);
  return builder_.Finish();
}

inline flatbuffers::Offset<Mesh> CreateMeshDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const std::vector<flatbuffers::Offset<Surface>> *surfaces = nullptr,
    const std::vector<const fplbase::Vec3 *> *positions = nullptr,
    const std::vector<const fplbase::Vec3 *> *normals = nullptr,
    const std::vector<const fplbase::Vec4 *> *tangents = nullptr,
    const std::vector<const fplbase::Vec4ub *> *colors = nullptr,
    const std::vector<const fplbase::Vec2 *> *texcoords = nullptr,
    const std::vector<const fplbase::Vec4ub *> *skin_indices = nullptr,
    const std::vector<const fplbase::Vec4ub *> *skin_weights = nullptr,
    const fplbase::Vec3 *max_position = 0,
    const fplbase::Vec3 *min_position = 0,
    const std::vector<flatbuffers::Offset<flatbuffers::String>> *bone_names = nullptr,
    const std::vector<const fplbase::Mat3x4 *> *bone_transforms = nullptr,
    const std::vector<uint8_t> *bone_parents = nullptr,
    const std::vector<uint8_t> *shader_to_mesh_bones = nullptr,
    const std::vector<const fplbase::Vec2 *> *texcoords_alt = nullptr,
    MeshVersion version = MeshVersion_Unspecified,
    const std::vector<uint8_t> *attributes = nullptr,
    const std::vector<uint8_t> *vertices = nullptr,
    const std::vector<const fplbase::Vec4 *> *orientations = nullptr) {
  return meshdef::CreateMesh(
      _fbb,
      surfaces ? _fbb.CreateVector<flatbuffers::Offset<Surface>>(*surfaces) : 0,
      positions ? _fbb.CreateVector<const fplbase::Vec3 *>(*positions) : 0,
      normals ? _fbb.CreateVector<const fplbase::Vec3 *>(*normals) : 0,
      tangents ? _fbb.CreateVector<const fplbase::Vec4 *>(*tangents) : 0,
      colors ? _fbb.CreateVector<const fplbase::Vec4ub *>(*colors) : 0,
      texcoords ? _fbb.CreateVector<const fplbase::Vec2 *>(*texcoords) : 0,
      skin_indices ? _fbb.CreateVector<const fplbase::Vec4ub *>(*skin_indices) : 0,
      skin_weights ? _fbb.CreateVector<const fplbase::Vec4ub *>(*skin_weights) : 0,
      max_position,
      min_position,
      bone_names ? _fbb.CreateVector<flatbuffers::Offset<flatbuffers::String>>(*bone_names) : 0,
      bone_transforms ? _fbb.CreateVector<const fplbase::Mat3x4 *>(*bone_transforms) : 0,
      bone_parents ? _fbb.CreateVector<uint8_t>(*bone_parents) : 0,
      shader_to_mesh_bones ? _fbb.CreateVector<uint8_t>(*shader_to_mesh_bones) : 0,
      texcoords_alt ? _fbb.CreateVector<const fplbase::Vec2 *>(*texcoords_alt) : 0,
      version,
      attributes ? _fbb.CreateVector<uint8_t>(*attributes) : 0,
      vertices ? _fbb.CreateVector<uint8_t>(*vertices) : 0,
      orientations ? _fbb.CreateVector<const fplbase::Vec4 *>(*orientations) : 0);
}

inline const meshdef::Mesh *GetMesh(const void *buf) {
  return flatbuffers::GetRoot<meshdef::Mesh>(buf);
}

inline const char *MeshIdentifier() {
  return "FMSH";
}

inline bool MeshBufferHasIdentifier(const void *buf) {
  return flatbuffers::BufferHasIdentifier(
      buf, MeshIdentifier());
}

inline bool VerifyMeshBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<meshdef::Mesh>(MeshIdentifier());
}

inline const char *MeshExtension() {
  return "fplmesh";
}

inline void FinishMeshBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<meshdef::Mesh> root) {
  fbb.Finish(root, MeshIdentifier());
}

}  // namespace meshdef

#endif  // FLATBUFFERS_GENERATED_MESH_MESHDEF_H_

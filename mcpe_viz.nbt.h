/*
  Minecraft Pocket Edition (MCPE) World File Visualization & Reporting Tool
  (c) Plethora777, 2015.9.26

  GPL'ed code - see LICENSE

  NBT support for mcpe_viz
*/

#ifndef __MCPE_VIZ_NBT_H__
#define __MCPE_VIZ_NBT_H__

// todobig - del
//#include "io/stream_reader.h"

// hide innocuous warnings here
#pragma GCC diagnostic ignored "-Wshadow"
#include "nbt_tags.h"
#pragma GCC diagnostic pop

//todobig - del
//#include <iostream>
//#include <fstream>
//#include <sstream>

namespace mcpe_viz {

  // helper types for NBT
  typedef std::pair<std::string, std::unique_ptr<nbt::tag> > MyNbtTag;
  typedef std::vector< MyNbtTag > MyNbtTagList;


  std::string makeGeojsonHeader(double ix, double iy);
  
  int32_t parseNbt( const char* hdr, const char* buf, int32_t bufLen, MyNbtTagList& tagList );
    
  int32_t parseNbt_entity(int32_t dimensionId, const std::string& dimName, MyNbtTagList &tagList,
		      bool playerLocalFlag, bool playerRemoteFlag, const std::string& playerType, const std::string& playerId);
    
  int32_t parseNbt_tileEntity(int32_t dimensionId, const std::string& dimName, MyNbtTagList &tagList);
    
  int32_t parseNbt_portals(MyNbtTagList &tagList);
    
} // namespace mcpe_viz

#endif // __MCPE_VIZ_NBT_H__

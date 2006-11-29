// __BEGIN_LICENSE__
// 
// Copyright (C) 2006 United States Government as represented by the
// Administrator of the National Aeronautics and Space Administration
// (NASA).  All Rights Reserved.
// 
// Copyright 2006 Carnegie Mellon University. All rights reserved.
// 
// This software is distributed under the NASA Open Source Agreement
// (NOSA), version 1.3.  The NOSA has been approved by the Open Source
// Initiative.  See the file COPYING at the top of the distribution
// directory tree for the complete NOSA document.
// 
// THE SUBJECT SOFTWARE IS PROVIDED "AS IS" WITHOUT ANY WARRANTY OF ANY
// KIND, EITHER EXPRESSED, IMPLIED, OR STATUTORY, INCLUDING, BUT NOT
// LIMITED TO, ANY WARRANTY THAT THE SUBJECT SOFTWARE WILL CONFORM TO
// SPECIFICATIONS, ANY IMPLIED WARRANTIES OF MERCHANTABILITY, FITNESS FOR
// A PARTICULAR PURPOSE, OR FREEDOM FROM INFRINGEMENT, ANY WARRANTY THAT
// THE SUBJECT SOFTWARE WILL BE ERROR FREE, OR ANY WARRANTY THAT
// DOCUMENTATION, IF PROVIDED, WILL CONFORM TO THE SUBJECT SOFTWARE.
// 
// __END_LICENSE__
#ifndef __VW_HDR_LDRTOHDREXIF_H__
#define __VW_HDR_LDRTOHDREXIF_H__

#include <vw/HDR/LDRtoHDR.h>
#include <vw/Camera/Exif.h>

namespace vw { 
namespace hdr {

  /// Stitches the set of LDR images into one HDR image from images on
  /// disk that have embedded EXIF metadata.  This metadata is used to
  /// infer the exposure ratios between images.
  ImageView<PixelRGB<double> > process_ldr_images_exif(std::vector<std::string> const& filenames,
                                                       std::vector<Vector<double> > &ret_curves);  
  
}} // namespace vw::hdr

#endif  // __VW_HDR_LDRTOHDREXIF_H__

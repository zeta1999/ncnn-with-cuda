//
// Author: Marko Atanasievski
//
// Copyright (C) 2020 TANCOM SOFTWARE SOLUTIONS Ltd. All rights reserved.
//
// Licensed under the BSD 3-Clause License (the "License"); you may not use this file except
// in compliance with the License. You may obtain a copy of the License at
//
// https://opensource.org/licenses/BSD-3-Clause
//
// Unless required by applicable law or agreed to in writing, software distributed
// under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
// CONDITIONS OF ANY KIND, either express or implied. See the License for the
// specific language governing permissions and limitations under the License.
//
// Parts of this file are originally copyright (C) 2017 THL A29 Limited, a Tencent company. All rights reserved.


#ifndef LAYER_INPUT_CUDA_H
#define LAYER_INPUT_CUDA_H

#include "input.h"

namespace ncnn {

class Input_cuda : virtual public Input
{
public:
    Input_cuda();

    virtual int forward_inplace(CudaMat& bottom_top_blob, const Option& opt) const;

};

} // namespace ncnn

#endif // LAYER_INPUT_CUDA_H

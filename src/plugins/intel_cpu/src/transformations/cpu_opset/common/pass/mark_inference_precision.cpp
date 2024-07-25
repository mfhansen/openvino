// Copyright (C) 2024 Intel Corporation
// SPDX-License-Identifier: Apache-2.0
//
#include "mark_inference_precision.hpp"

#include "transformations/utils/utils.hpp"
#include "transformations/utils.hpp"
#include "utils/general_utils.h"
#include "utils/cpu_utils.hpp"

#include "itt.hpp"


namespace ov {
namespace intel_cpu {
    bool MarkInferencePrecision::run_on_model(const std::shared_ptr<ov::Model> &) {
        RUN_ON_MODEL_SCOPE(MarkInferencePrecision);
        return false;
    }

}   // namespace intel_cpu
}   // namespace ov
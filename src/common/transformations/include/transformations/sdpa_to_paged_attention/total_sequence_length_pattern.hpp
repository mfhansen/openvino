// Copyright (C) 2018-2024 Intel Corporation
// SPDX-License-Identifier: Apache-2.0
//

#pragma once

#include "openvino/pass/graph_rewrite.hpp"
#include "transformations_visibility.hpp"

namespace ov {
namespace pass {

class TRANSFORMATIONS_API TotalSequenceLengthPattern;

}  // namespace pass
}  // namespace ov

class ov::pass::TotalSequenceLengthPattern : public ov::pass::MatcherPass {
public:
    OPENVINO_RTTI("TotalSequenceLengthPattern", "0");
    explicit TotalSequenceLengthPattern(const std::shared_ptr<ov::op::v0::Parameter>& max_context_len);
};

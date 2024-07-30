// Copyright (C) 2018-2024 Intel Corporation
// SPDX-License-Identifier: Apache-2.0
//

#pragma once

#include "openvino/pass/graph_rewrite.hpp"
#include "transformations/utils/utils.hpp"
#include "transformations_visibility.hpp"

namespace ov {
namespace pass {

class TRANSFORMATIONS_API PrevSequenceLengthPattern;

}  // namespace pass
}  // namespace ov

class ov::pass::PrevSequenceLengthPattern : public ov::pass::MatcherPass {
public:
    OPENVINO_RTTI("PrevSequenceLengthPattern", "0");
    explicit PrevSequenceLengthPattern(std::shared_ptr<ov::Node> prev_max_seq_len, std::shared_ptr<ov::Node> batch_dim);
};
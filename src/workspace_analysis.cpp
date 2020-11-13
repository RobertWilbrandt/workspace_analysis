/*
 * Copyright (c) 2020 Robert Wilbrandt
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */
#include <cstdlib>
#include <rclcpp/rclcpp.hpp>

class WorkspaceAnalysisNode : public rclcpp::Node {
 public:
  WorkspaceAnalysisNode() : Node("workspace_analysis") {
    RCLCPP_INFO(this->get_logger(), "Started workspace analysis");
  }
};

int main(int argc, char** argv) {
  (void)argc;
  (void)argv;

  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<WorkspaceAnalysisNode>());
  rclcpp::shutdown();

  return EXIT_SUCCESS;
}

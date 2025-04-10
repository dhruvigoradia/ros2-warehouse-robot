#pragma message("#include \"force_torque_sensor_broadcaster_parameters.hpp\" is deprecated. Use #include <force_torque_sensor_broadcaster/force_torque_sensor_broadcaster_parameters.hpp> instead.")
// auto-generated DO NOT EDIT

#pragma once

#include <algorithm>
#include <array>
#include <functional>
#include <limits>
#include <mutex>
#include <rclcpp/node.hpp>
#include <rclcpp_lifecycle/lifecycle_node.hpp>
#include <rclcpp/logger.hpp>
#include <set>
#include <sstream>
#include <string>
#include <type_traits>
#include <utility>
#include <vector>

#include <fmt/core.h>
#include <fmt/format.h>
#include <fmt/ranges.h>

#include <parameter_traits/parameter_traits.hpp>

#include <rsl/static_string.hpp>
#include <rsl/static_vector.hpp>
#include <rsl/parameter_validators.hpp>



namespace force_torque_sensor_broadcaster {

// Use validators from RSL
using rsl::unique;
using rsl::subset_of;
using rsl::fixed_size;
using rsl::size_gt;
using rsl::size_lt;
using rsl::not_empty;
using rsl::element_bounds;
using rsl::lower_element_bounds;
using rsl::upper_element_bounds;
using rsl::bounds;
using rsl::lt;
using rsl::gt;
using rsl::lt_eq;
using rsl::gt_eq;
using rsl::one_of;
using rsl::to_parameter_result_msg;

// temporarily needed for backwards compatibility for custom validators
using namespace parameter_traits;

template <typename T>
[[nodiscard]] auto to_parameter_value(T value) {
    return rclcpp::ParameterValue(value);
}

template <size_t capacity>
[[nodiscard]] auto to_parameter_value(rsl::StaticString<capacity> const& value) {
    return rclcpp::ParameterValue(rsl::to_string(value));
}

template <typename T, size_t capacity>
[[nodiscard]] auto to_parameter_value(rsl::StaticVector<T, capacity> const& value) {
    return rclcpp::ParameterValue(rsl::to_vector(value));
}
    struct Params {
        std::string frame_id = "";
        std::string sensor_name = "";
        struct InterfaceNames {
            struct Force {
                std::string x = "";
                std::string y = "";
                std::string z = "";
            } force;
            struct Torque {
                std::string x = "";
                std::string y = "";
                std::string z = "";
            } torque;
        } interface_names;
        struct Offset {
            struct Force {
                double x = 0.0;
                double y = 0.0;
                double z = 0.0;
            } force;
            struct Torque {
                double x = 0.0;
                double y = 0.0;
                double z = 0.0;
            } torque;
        } offset;
        // for detecting if the parameter struct has been updated
        rclcpp::Time __stamp;
    };
    struct StackParams {
        struct Offset {
            struct Force {
                double x = 0.0;
                double y = 0.0;
                double z = 0.0;
            } force;
            struct Torque {
                double x = 0.0;
                double y = 0.0;
                double z = 0.0;
            } torque;
        } offset;
    };

  class ParamListener{
  public:
    // throws rclcpp::exceptions::InvalidParameterValueException on initialization if invalid parameter are loaded
    ParamListener(rclcpp::Node::SharedPtr node, std::string const& prefix = "")
    : ParamListener(node->get_node_parameters_interface(), node->get_logger(), prefix) {}

    ParamListener(rclcpp_lifecycle::LifecycleNode::SharedPtr node, std::string const& prefix = "")
    : ParamListener(node->get_node_parameters_interface(), node->get_logger(), prefix) {}

    ParamListener(const std::shared_ptr<rclcpp::node_interfaces::NodeParametersInterface>& parameters_interface,
                  std::string const& prefix = "")
    : ParamListener(parameters_interface, rclcpp::get_logger("force_torque_sensor_broadcaster"), prefix) {
      RCLCPP_DEBUG(logger_, "ParameterListener: Not using node logger, recommend using other constructors to use a node logger");
    }

    ParamListener(const std::shared_ptr<rclcpp::node_interfaces::NodeParametersInterface>& parameters_interface,
                  rclcpp::Logger logger, std::string const& prefix = "") {
      logger_ = std::move(logger);
      prefix_ = prefix;
      if (!prefix_.empty() && prefix_.back() != '.') {
        prefix_ += ".";
      }

      parameters_interface_ = parameters_interface;
      declare_params();
      auto update_param_cb = [this](const std::vector<rclcpp::Parameter> &parameters){return this->update(parameters);};
      handle_ = parameters_interface_->add_on_set_parameters_callback(update_param_cb);
      clock_ = rclcpp::Clock();
    }

    Params get_params() const{
      std::lock_guard<std::mutex> lock(mutex_);
      return params_;
    }

    bool try_get_params(Params & params_in) const {
      if (mutex_.try_lock()) {
        if (const bool is_old = params_in.__stamp != params_.__stamp; is_old) {
          params_in = params_;
        }
        mutex_.unlock();
        return true;
      }
      return false;
    }

    bool is_old(Params const& other) const {
      std::lock_guard<std::mutex> lock(mutex_);
      return params_.__stamp != other.__stamp;
    }

    StackParams get_stack_params() {
      Params params = get_params();
      StackParams output;
      output.offset.force.x = params.offset.force.x;
      output.offset.force.y = params.offset.force.y;
      output.offset.force.z = params.offset.force.z;
      output.offset.torque.x = params.offset.torque.x;
      output.offset.torque.y = params.offset.torque.y;
      output.offset.torque.z = params.offset.torque.z;

      return output;
    }

    void refresh_dynamic_parameters() {
      auto updated_params = get_params();
      // TODO remove any destroyed dynamic parameters

      // declare any new dynamic parameters
      rclcpp::Parameter param;

    }

    rcl_interfaces::msg::SetParametersResult update(const std::vector<rclcpp::Parameter> &parameters) {
      auto updated_params = get_params();

      for (const auto &param: parameters) {
        if (param.get_name() == (prefix_ + "frame_id")) {
            if(auto validation_result = not_empty<std::string>(param);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.frame_id = param.as_string();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "sensor_name")) {
            updated_params.sensor_name = param.as_string();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "interface_names.force.x")) {
            updated_params.interface_names.force.x = param.as_string();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "interface_names.force.y")) {
            updated_params.interface_names.force.y = param.as_string();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "interface_names.force.z")) {
            updated_params.interface_names.force.z = param.as_string();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "interface_names.torque.x")) {
            updated_params.interface_names.torque.x = param.as_string();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "interface_names.torque.y")) {
            updated_params.interface_names.torque.y = param.as_string();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "interface_names.torque.z")) {
            updated_params.interface_names.torque.z = param.as_string();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "offset.force.x")) {
            updated_params.offset.force.x = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "offset.force.y")) {
            updated_params.offset.force.y = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "offset.force.z")) {
            updated_params.offset.force.z = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "offset.torque.x")) {
            updated_params.offset.torque.x = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "offset.torque.y")) {
            updated_params.offset.torque.y = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "offset.torque.z")) {
            updated_params.offset.torque.z = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
      }

      updated_params.__stamp = clock_.now();
      update_internal_params(updated_params);
      return rsl::to_parameter_result_msg({});
    }

    void declare_params(){
      auto updated_params = get_params();
      // declare all parameters and give default values to non-required ones
      if (!parameters_interface_->has_parameter(prefix_ + "frame_id")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Sensor's frame_id in which values are published.";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.frame_id);
          parameters_interface_->declare_parameter(prefix_ + "frame_id", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "sensor_name")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Name of the sensor used as prefix for interfaces if there are no individual interface names defined. If used, standard interface names for a 6D FTS will be used: <sensor_name>/force.x, ..., <sensor_name>/torque.z";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.sensor_name);
          parameters_interface_->declare_parameter(prefix_ + "sensor_name", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "interface_names.force.x")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Name of the state interface with force values on 'x' axis.";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.interface_names.force.x);
          parameters_interface_->declare_parameter(prefix_ + "interface_names.force.x", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "interface_names.force.y")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Name of the state interface with force values on 'y' axis.";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.interface_names.force.y);
          parameters_interface_->declare_parameter(prefix_ + "interface_names.force.y", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "interface_names.force.z")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Name of the state interface with force values on 'z' axis.";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.interface_names.force.z);
          parameters_interface_->declare_parameter(prefix_ + "interface_names.force.z", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "interface_names.torque.x")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Name of the state interface with torque values around 'x' axis.";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.interface_names.torque.x);
          parameters_interface_->declare_parameter(prefix_ + "interface_names.torque.x", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "interface_names.torque.y")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Name of the state interface with torque values around 'y' axis.";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.interface_names.torque.y);
          parameters_interface_->declare_parameter(prefix_ + "interface_names.torque.y", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "interface_names.torque.z")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Name of the state interface with torque values around 'z' axis.";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.interface_names.torque.z);
          parameters_interface_->declare_parameter(prefix_ + "interface_names.torque.z", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "offset.force.x")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "The offset of force values on 'x' axis.";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.offset.force.x);
          parameters_interface_->declare_parameter(prefix_ + "offset.force.x", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "offset.force.y")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "The offset of force values on 'y' axis.";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.offset.force.y);
          parameters_interface_->declare_parameter(prefix_ + "offset.force.y", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "offset.force.z")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "The offset of force values on 'z' axis.";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.offset.force.z);
          parameters_interface_->declare_parameter(prefix_ + "offset.force.z", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "offset.torque.x")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "The offset of torque values around 'x' axis.";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.offset.torque.x);
          parameters_interface_->declare_parameter(prefix_ + "offset.torque.x", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "offset.torque.y")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "The offset of torque values around 'y' axis.";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.offset.torque.y);
          parameters_interface_->declare_parameter(prefix_ + "offset.torque.y", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "offset.torque.z")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "The offset of torque values around 'z' axis.";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.offset.torque.z);
          parameters_interface_->declare_parameter(prefix_ + "offset.torque.z", parameter, descriptor);
      }
      // get parameters and fill struct fields
      rclcpp::Parameter param;
      param = parameters_interface_->get_parameter(prefix_ + "frame_id");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = not_empty<std::string>(param);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'frame_id': {}", validation_result.error()));
      }
      updated_params.frame_id = param.as_string();
      param = parameters_interface_->get_parameter(prefix_ + "sensor_name");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.sensor_name = param.as_string();
      param = parameters_interface_->get_parameter(prefix_ + "interface_names.force.x");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.interface_names.force.x = param.as_string();
      param = parameters_interface_->get_parameter(prefix_ + "interface_names.force.y");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.interface_names.force.y = param.as_string();
      param = parameters_interface_->get_parameter(prefix_ + "interface_names.force.z");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.interface_names.force.z = param.as_string();
      param = parameters_interface_->get_parameter(prefix_ + "interface_names.torque.x");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.interface_names.torque.x = param.as_string();
      param = parameters_interface_->get_parameter(prefix_ + "interface_names.torque.y");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.interface_names.torque.y = param.as_string();
      param = parameters_interface_->get_parameter(prefix_ + "interface_names.torque.z");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.interface_names.torque.z = param.as_string();
      param = parameters_interface_->get_parameter(prefix_ + "offset.force.x");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.offset.force.x = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "offset.force.y");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.offset.force.y = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "offset.force.z");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.offset.force.z = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "offset.torque.x");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.offset.torque.x = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "offset.torque.y");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.offset.torque.y = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "offset.torque.z");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.offset.torque.z = param.as_double();


      updated_params.__stamp = clock_.now();
      update_internal_params(updated_params);
    }

    private:
      void update_internal_params(Params updated_params) {
        std::lock_guard<std::mutex> lock(mutex_);
        params_ = std::move(updated_params);
      }

      std::string prefix_;
      Params params_;
      rclcpp::Clock clock_;
      std::shared_ptr<rclcpp::node_interfaces::OnSetParametersCallbackHandle> handle_;
      std::shared_ptr<rclcpp::node_interfaces::NodeParametersInterface> parameters_interface_;

      // rclcpp::Logger cannot be default-constructed
      // so we must provide a initialization here even though
      // every one of our constructors initializes logger_
      rclcpp::Logger logger_ = rclcpp::get_logger("force_torque_sensor_broadcaster");
      std::mutex mutable mutex_;
  };

} // namespace force_torque_sensor_broadcaster

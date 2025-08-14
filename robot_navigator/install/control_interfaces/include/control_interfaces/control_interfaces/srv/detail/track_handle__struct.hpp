// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from control_interfaces:srv/TrackHandle.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "control_interfaces/srv/track_handle.hpp"


#ifndef CONTROL_INTERFACES__SRV__DETAIL__TRACK_HANDLE__STRUCT_HPP_
#define CONTROL_INTERFACES__SRV__DETAIL__TRACK_HANDLE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__control_interfaces__srv__TrackHandle_Request __attribute__((deprecated))
#else
# define DEPRECATED__control_interfaces__srv__TrackHandle_Request __declspec(deprecated)
#endif

namespace control_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TrackHandle_Request_
{
  using Type = TrackHandle_Request_<ContainerAllocator>;

  explicit TrackHandle_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->event_type = "";
      this->left_angle = 0.0f;
      this->right_angle = 0.0f;
    }
  }

  explicit TrackHandle_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : event_type(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->event_type = "";
      this->left_angle = 0.0f;
      this->right_angle = 0.0f;
    }
  }

  // field types and members
  using _event_type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _event_type_type event_type;
  using _left_angle_type =
    float;
  _left_angle_type left_angle;
  using _right_angle_type =
    float;
  _right_angle_type right_angle;

  // setters for named parameter idiom
  Type & set__event_type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->event_type = _arg;
    return *this;
  }
  Type & set__left_angle(
    const float & _arg)
  {
    this->left_angle = _arg;
    return *this;
  }
  Type & set__right_angle(
    const float & _arg)
  {
    this->right_angle = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    control_interfaces::srv::TrackHandle_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const control_interfaces::srv::TrackHandle_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<control_interfaces::srv::TrackHandle_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<control_interfaces::srv::TrackHandle_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      control_interfaces::srv::TrackHandle_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<control_interfaces::srv::TrackHandle_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      control_interfaces::srv::TrackHandle_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<control_interfaces::srv::TrackHandle_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<control_interfaces::srv::TrackHandle_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<control_interfaces::srv::TrackHandle_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__control_interfaces__srv__TrackHandle_Request
    std::shared_ptr<control_interfaces::srv::TrackHandle_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__control_interfaces__srv__TrackHandle_Request
    std::shared_ptr<control_interfaces::srv::TrackHandle_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrackHandle_Request_ & other) const
  {
    if (this->event_type != other.event_type) {
      return false;
    }
    if (this->left_angle != other.left_angle) {
      return false;
    }
    if (this->right_angle != other.right_angle) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrackHandle_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrackHandle_Request_

// alias to use template instance with default allocator
using TrackHandle_Request =
  control_interfaces::srv::TrackHandle_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace control_interfaces


#ifndef _WIN32
# define DEPRECATED__control_interfaces__srv__TrackHandle_Response __attribute__((deprecated))
#else
# define DEPRECATED__control_interfaces__srv__TrackHandle_Response __declspec(deprecated)
#endif

namespace control_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TrackHandle_Response_
{
  using Type = TrackHandle_Response_<ContainerAllocator>;

  explicit TrackHandle_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = "";
      this->distance = 0.0f;
    }
  }

  explicit TrackHandle_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : status(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = "";
      this->distance = 0.0f;
    }
  }

  // field types and members
  using _status_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _status_type status;
  using _distance_type =
    float;
  _distance_type distance;

  // setters for named parameter idiom
  Type & set__status(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__distance(
    const float & _arg)
  {
    this->distance = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    control_interfaces::srv::TrackHandle_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const control_interfaces::srv::TrackHandle_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<control_interfaces::srv::TrackHandle_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<control_interfaces::srv::TrackHandle_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      control_interfaces::srv::TrackHandle_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<control_interfaces::srv::TrackHandle_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      control_interfaces::srv::TrackHandle_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<control_interfaces::srv::TrackHandle_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<control_interfaces::srv::TrackHandle_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<control_interfaces::srv::TrackHandle_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__control_interfaces__srv__TrackHandle_Response
    std::shared_ptr<control_interfaces::srv::TrackHandle_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__control_interfaces__srv__TrackHandle_Response
    std::shared_ptr<control_interfaces::srv::TrackHandle_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrackHandle_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->distance != other.distance) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrackHandle_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrackHandle_Response_

// alias to use template instance with default allocator
using TrackHandle_Response =
  control_interfaces::srv::TrackHandle_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace control_interfaces


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__control_interfaces__srv__TrackHandle_Event __attribute__((deprecated))
#else
# define DEPRECATED__control_interfaces__srv__TrackHandle_Event __declspec(deprecated)
#endif

namespace control_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TrackHandle_Event_
{
  using Type = TrackHandle_Event_<ContainerAllocator>;

  explicit TrackHandle_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit TrackHandle_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<control_interfaces::srv::TrackHandle_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<control_interfaces::srv::TrackHandle_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<control_interfaces::srv::TrackHandle_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<control_interfaces::srv::TrackHandle_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<control_interfaces::srv::TrackHandle_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<control_interfaces::srv::TrackHandle_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<control_interfaces::srv::TrackHandle_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<control_interfaces::srv::TrackHandle_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    control_interfaces::srv::TrackHandle_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const control_interfaces::srv::TrackHandle_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<control_interfaces::srv::TrackHandle_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<control_interfaces::srv::TrackHandle_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      control_interfaces::srv::TrackHandle_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<control_interfaces::srv::TrackHandle_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      control_interfaces::srv::TrackHandle_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<control_interfaces::srv::TrackHandle_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<control_interfaces::srv::TrackHandle_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<control_interfaces::srv::TrackHandle_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__control_interfaces__srv__TrackHandle_Event
    std::shared_ptr<control_interfaces::srv::TrackHandle_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__control_interfaces__srv__TrackHandle_Event
    std::shared_ptr<control_interfaces::srv::TrackHandle_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrackHandle_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrackHandle_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrackHandle_Event_

// alias to use template instance with default allocator
using TrackHandle_Event =
  control_interfaces::srv::TrackHandle_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace control_interfaces

namespace control_interfaces
{

namespace srv
{

struct TrackHandle
{
  using Request = control_interfaces::srv::TrackHandle_Request;
  using Response = control_interfaces::srv::TrackHandle_Response;
  using Event = control_interfaces::srv::TrackHandle_Event;
};

}  // namespace srv

}  // namespace control_interfaces

#endif  // CONTROL_INTERFACES__SRV__DETAIL__TRACK_HANDLE__STRUCT_HPP_

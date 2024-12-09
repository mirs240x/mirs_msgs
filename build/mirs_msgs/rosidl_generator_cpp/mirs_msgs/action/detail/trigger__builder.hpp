// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mirs_msgs:action/Trigger.idl
// generated code does not contain a copyright notice

#ifndef MIRS_MSGS__ACTION__DETAIL__TRIGGER__BUILDER_HPP_
#define MIRS_MSGS__ACTION__DETAIL__TRIGGER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mirs_msgs/action/detail/trigger__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mirs_msgs
{

namespace action
{


}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mirs_msgs::action::Trigger_Goal>()
{
  return ::mirs_msgs::action::Trigger_Goal(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace mirs_msgs


namespace mirs_msgs
{

namespace action
{

namespace builder
{

class Init_Trigger_Result_success
{
public:
  Init_Trigger_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mirs_msgs::action::Trigger_Result success(::mirs_msgs::action::Trigger_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mirs_msgs::action::Trigger_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mirs_msgs::action::Trigger_Result>()
{
  return mirs_msgs::action::builder::Init_Trigger_Result_success();
}

}  // namespace mirs_msgs


namespace mirs_msgs
{

namespace action
{


}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mirs_msgs::action::Trigger_Feedback>()
{
  return ::mirs_msgs::action::Trigger_Feedback(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace mirs_msgs


namespace mirs_msgs
{

namespace action
{

namespace builder
{

class Init_Trigger_SendGoal_Request_goal
{
public:
  explicit Init_Trigger_SendGoal_Request_goal(::mirs_msgs::action::Trigger_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::mirs_msgs::action::Trigger_SendGoal_Request goal(::mirs_msgs::action::Trigger_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mirs_msgs::action::Trigger_SendGoal_Request msg_;
};

class Init_Trigger_SendGoal_Request_goal_id
{
public:
  Init_Trigger_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Trigger_SendGoal_Request_goal goal_id(::mirs_msgs::action::Trigger_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Trigger_SendGoal_Request_goal(msg_);
  }

private:
  ::mirs_msgs::action::Trigger_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mirs_msgs::action::Trigger_SendGoal_Request>()
{
  return mirs_msgs::action::builder::Init_Trigger_SendGoal_Request_goal_id();
}

}  // namespace mirs_msgs


namespace mirs_msgs
{

namespace action
{

namespace builder
{

class Init_Trigger_SendGoal_Response_stamp
{
public:
  explicit Init_Trigger_SendGoal_Response_stamp(::mirs_msgs::action::Trigger_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::mirs_msgs::action::Trigger_SendGoal_Response stamp(::mirs_msgs::action::Trigger_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mirs_msgs::action::Trigger_SendGoal_Response msg_;
};

class Init_Trigger_SendGoal_Response_accepted
{
public:
  Init_Trigger_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Trigger_SendGoal_Response_stamp accepted(::mirs_msgs::action::Trigger_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Trigger_SendGoal_Response_stamp(msg_);
  }

private:
  ::mirs_msgs::action::Trigger_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mirs_msgs::action::Trigger_SendGoal_Response>()
{
  return mirs_msgs::action::builder::Init_Trigger_SendGoal_Response_accepted();
}

}  // namespace mirs_msgs


namespace mirs_msgs
{

namespace action
{

namespace builder
{

class Init_Trigger_GetResult_Request_goal_id
{
public:
  Init_Trigger_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mirs_msgs::action::Trigger_GetResult_Request goal_id(::mirs_msgs::action::Trigger_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mirs_msgs::action::Trigger_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mirs_msgs::action::Trigger_GetResult_Request>()
{
  return mirs_msgs::action::builder::Init_Trigger_GetResult_Request_goal_id();
}

}  // namespace mirs_msgs


namespace mirs_msgs
{

namespace action
{

namespace builder
{

class Init_Trigger_GetResult_Response_result
{
public:
  explicit Init_Trigger_GetResult_Response_result(::mirs_msgs::action::Trigger_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::mirs_msgs::action::Trigger_GetResult_Response result(::mirs_msgs::action::Trigger_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mirs_msgs::action::Trigger_GetResult_Response msg_;
};

class Init_Trigger_GetResult_Response_status
{
public:
  Init_Trigger_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Trigger_GetResult_Response_result status(::mirs_msgs::action::Trigger_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Trigger_GetResult_Response_result(msg_);
  }

private:
  ::mirs_msgs::action::Trigger_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mirs_msgs::action::Trigger_GetResult_Response>()
{
  return mirs_msgs::action::builder::Init_Trigger_GetResult_Response_status();
}

}  // namespace mirs_msgs


namespace mirs_msgs
{

namespace action
{

namespace builder
{

class Init_Trigger_FeedbackMessage_feedback
{
public:
  explicit Init_Trigger_FeedbackMessage_feedback(::mirs_msgs::action::Trigger_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::mirs_msgs::action::Trigger_FeedbackMessage feedback(::mirs_msgs::action::Trigger_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mirs_msgs::action::Trigger_FeedbackMessage msg_;
};

class Init_Trigger_FeedbackMessage_goal_id
{
public:
  Init_Trigger_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Trigger_FeedbackMessage_feedback goal_id(::mirs_msgs::action::Trigger_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Trigger_FeedbackMessage_feedback(msg_);
  }

private:
  ::mirs_msgs::action::Trigger_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mirs_msgs::action::Trigger_FeedbackMessage>()
{
  return mirs_msgs::action::builder::Init_Trigger_FeedbackMessage_goal_id();
}

}  // namespace mirs_msgs

#endif  // MIRS_MSGS__ACTION__DETAIL__TRIGGER__BUILDER_HPP_
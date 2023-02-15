// Generated by gencpp from file mr_msgs/GripperCommand.msg
// DO NOT EDIT!


#ifndef MR_MSGS_MESSAGE_GRIPPERCOMMAND_H
#define MR_MSGS_MESSAGE_GRIPPERCOMMAND_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace mr_msgs
{
template <class ContainerAllocator>
struct GripperCommand_
{
  typedef GripperCommand_<ContainerAllocator> Type;

  GripperCommand_()
    : name()
    , positionL(0.0)
    , positionR(0.0)  {
    }
  GripperCommand_(const ContainerAllocator& _alloc)
    : name(_alloc)
    , positionL(0.0)
    , positionR(0.0)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _name_type;
  _name_type name;

   typedef double _positionL_type;
  _positionL_type positionL;

   typedef double _positionR_type;
  _positionR_type positionR;





  typedef boost::shared_ptr< ::mr_msgs::GripperCommand_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mr_msgs::GripperCommand_<ContainerAllocator> const> ConstPtr;

}; // struct GripperCommand_

typedef ::mr_msgs::GripperCommand_<std::allocator<void> > GripperCommand;

typedef boost::shared_ptr< ::mr_msgs::GripperCommand > GripperCommandPtr;
typedef boost::shared_ptr< ::mr_msgs::GripperCommand const> GripperCommandConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mr_msgs::GripperCommand_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mr_msgs::GripperCommand_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace mr_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'mr_msgs': ['/home/yumenghui/catkin_ws/src/wust_robot/mr_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::mr_msgs::GripperCommand_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mr_msgs::GripperCommand_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mr_msgs::GripperCommand_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mr_msgs::GripperCommand_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mr_msgs::GripperCommand_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mr_msgs::GripperCommand_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mr_msgs::GripperCommand_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bacced25655daea064ca2c4b7a402fd6";
  }

  static const char* value(const ::mr_msgs::GripperCommand_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xbacced25655daea0ULL;
  static const uint64_t static_value2 = 0x64ca2c4b7a402fd6ULL;
};

template<class ContainerAllocator>
struct DataType< ::mr_msgs::GripperCommand_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mr_msgs/GripperCommand";
  }

  static const char* value(const ::mr_msgs::GripperCommand_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mr_msgs::GripperCommand_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string  name\n\
float64 positionL\n\
float64 positionR\n\
";
  }

  static const char* value(const ::mr_msgs::GripperCommand_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mr_msgs::GripperCommand_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.name);
      stream.next(m.positionL);
      stream.next(m.positionR);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GripperCommand_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mr_msgs::GripperCommand_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mr_msgs::GripperCommand_<ContainerAllocator>& v)
  {
    s << indent << "name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.name);
    s << indent << "positionL: ";
    Printer<double>::stream(s, indent + "  ", v.positionL);
    s << indent << "positionR: ";
    Printer<double>::stream(s, indent + "  ", v.positionR);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MR_MSGS_MESSAGE_GRIPPERCOMMAND_H

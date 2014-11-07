/**
 * Autogenerated by Thrift Compiler (1.0.0-dev)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef dnn_TYPES_H
#define dnn_TYPES_H

#include <iosfwd>

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>

#include <thrift/cxxfunctional.h>


namespace dnn {


class Work;

typedef struct _Work__isset {
  _Work__isset() : data(false), op(false), n_in(false), c_in(false), w_in(false), h_in(false) {}
  bool data :1;
  bool op :1;
  bool n_in :1;
  bool c_in :1;
  bool w_in :1;
  bool h_in :1;
} _Work__isset;

class Work {
 public:

  static const char* ascii_fingerprint; // = "AEDA25C753F5BF11866E7AE5C66F89DC";
  static const uint8_t binary_fingerprint[16]; // = {0xAE,0xDA,0x25,0xC7,0x53,0xF5,0xBF,0x11,0x86,0x6E,0x7A,0xE5,0xC6,0x6F,0x89,0xDC};

  Work(const Work&);
  Work& operator=(const Work&);
  Work() : op(), n_in(0), c_in(0), w_in(0), h_in(0) {
  }

  virtual ~Work() throw();
  std::vector<double>  data;
  std::string op;
  int n_in;
  int c_in;
  int w_in;
  int h_in;

  _Work__isset __isset;

  void __set_data(const std::vector<double> & val);

  void __set_op(const std::string& val);

  void __set_n_in(const int val);

  void __set_c_in(const int val);

  void __set_w_in(const int val);

  void __set_h_in(const int val);

  bool operator == (const Work & rhs) const
  {
    if (!(data == rhs.data))
      return false;
    if (!(op == rhs.op))
      return false;
    if (!(n_in == rhs.n_in))
      return false;
    if (!(c_in == rhs.c_in))
      return false;
    if (!(w_in == rhs.w_in))
      return false;
    if (!(h_in == rhs.h_in))
      return false;
    return true;
  }
  bool operator != (const Work &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Work & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  friend std::ostream& operator<<(std::ostream& out, const Work& obj);
};

void swap(Work &a, Work &b);

} // namespace

#endif

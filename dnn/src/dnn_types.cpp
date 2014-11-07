/**
 * Autogenerated by Thrift Compiler (1.0.0-dev)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "dnn_types.h"

#include <algorithm>
#include <ostream>

#include <thrift/TToString.h>

namespace dnn {


Work::~Work() throw() {
}


void Work::__set_data(const std::vector<double> & val) {
  this->data = val;
}

void Work::__set_op(const std::string& val) {
  this->op = val;
}

void Work::__set_n_in(const int val) {
  this->n_in = val;
}

void Work::__set_c_in(const int val) {
  this->c_in = val;
}

void Work::__set_w_in(const int val) {
  this->w_in = val;
}

void Work::__set_h_in(const int val) {
  this->h_in = val;
}

const char* Work::ascii_fingerprint = "AEDA25C753F5BF11866E7AE5C66F89DC";
const uint8_t Work::binary_fingerprint[16] = {0xAE,0xDA,0x25,0xC7,0x53,0xF5,0xBF,0x11,0x86,0x6E,0x7A,0xE5,0xC6,0x6F,0x89,0xDC};

uint32_t Work::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            this->data.clear();
            uint32_t _size0;
            ::apache::thrift::protocol::TType _etype3;
            xfer += iprot->readListBegin(_etype3, _size0);
            this->data.resize(_size0);
            uint32_t _i4;
            for (_i4 = 0; _i4 < _size0; ++_i4)
            {
              xfer += iprot->readDouble(this->data[_i4]);
            }
            xfer += iprot->readListEnd();
          }
          this->__isset.data = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->op);
          this->__isset.op = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->n_in);
          this->__isset.n_in = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->c_in);
          this->__isset.c_in = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 5:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->w_in);
          this->__isset.w_in = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 6:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->h_in);
          this->__isset.h_in = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t Work::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  oprot->incrementRecursionDepth();
  xfer += oprot->writeStructBegin("Work");

  xfer += oprot->writeFieldBegin("data", ::apache::thrift::protocol::T_LIST, 1);
  {
    xfer += oprot->writeListBegin(::apache::thrift::protocol::T_DOUBLE, static_cast<uint32_t>(this->data.size()));
    std::vector<double> ::const_iterator _iter5;
    for (_iter5 = this->data.begin(); _iter5 != this->data.end(); ++_iter5)
    {
      xfer += oprot->writeDouble((*_iter5));
    }
    xfer += oprot->writeListEnd();
  }
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("op", ::apache::thrift::protocol::T_STRING, 2);
  xfer += oprot->writeString(this->op);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("n_in", ::apache::thrift::protocol::T_I32, 3);
  xfer += oprot->writeI32(this->n_in);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("c_in", ::apache::thrift::protocol::T_I32, 4);
  xfer += oprot->writeI32(this->c_in);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("w_in", ::apache::thrift::protocol::T_I32, 5);
  xfer += oprot->writeI32(this->w_in);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("h_in", ::apache::thrift::protocol::T_I32, 6);
  xfer += oprot->writeI32(this->h_in);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  oprot->decrementRecursionDepth();
  return xfer;
}

void swap(Work &a, Work &b) {
  using ::std::swap;
  swap(a.data, b.data);
  swap(a.op, b.op);
  swap(a.n_in, b.n_in);
  swap(a.c_in, b.c_in);
  swap(a.w_in, b.w_in);
  swap(a.h_in, b.h_in);
  swap(a.__isset, b.__isset);
}

Work::Work(const Work& other6) {
  data = other6.data;
  op = other6.op;
  n_in = other6.n_in;
  c_in = other6.c_in;
  w_in = other6.w_in;
  h_in = other6.h_in;
  __isset = other6.__isset;
}
Work& Work::operator=(const Work& other7) {
  data = other7.data;
  op = other7.op;
  n_in = other7.n_in;
  c_in = other7.c_in;
  w_in = other7.w_in;
  h_in = other7.h_in;
  __isset = other7.__isset;
  return *this;
}
std::ostream& operator<<(std::ostream& out, const Work& obj) {
  using apache::thrift::to_string;
  out << "Work(";
  out << "data=" << to_string(obj.data);
  out << ", " << "op=" << to_string(obj.op);
  out << ", " << "n_in=" << to_string(obj.n_in);
  out << ", " << "c_in=" << to_string(obj.c_in);
  out << ", " << "w_in=" << to_string(obj.w_in);
  out << ", " << "h_in=" << to_string(obj.h_in);
  out << ")";
  return out;
}

} // namespace

#ifndef BDS_SYMBOLS_BINARYSTREAM_H
#define BDS_SYMBOLS_BINARYSTREAM_H

#include <string>
#include <gsl/string_span>

class BinaryStream {
public:
    BinaryStream(std::basic_string<char, std::char_traits<char>, std::allocator<char>> &&);

    BinaryStream(std::basic_string<char, std::char_traits<char>, std::allocator<char>> &, bool);

    BinaryStream(std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &);

    void reverse(unsigned long);

    void reset();

    void write(void const *, unsigned long);

    void writeBool(bool);

    void writeByte(unsigned char);

    void writeDouble(double);

    void writeFixedFloat(float, double);

    void writeFloat(float);

    void writeNormalizedFloat(float);

    void writeSignedBigEndianInt(int);

    void writeSignedInt(int);

    void writeSignedInt64(long);

    void writeSignedShort(short);

    void writeStream(BinaryStream &);

    void writeString(gsl::basic_string_span<char const, -1l>);
};

#endif //BDS_SYMBOLS_BINARYSTREAM_H
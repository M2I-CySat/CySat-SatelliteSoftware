#include <utilities.h>

/**
* Converts uint8_t to uint32_t
*/
uint32_t Unpack32(uint8_t * buf)
{
  return buf[0] | (buf[1] << 8) |
    (buf[2] << 16) | (buf[3] << 24);
}
/**
* Converts uint32_t to uint8_t
*/
void Pack32(uint8_t * buf, uint32_t flag)
{
	buf[0] = flag & 0xff;
	buf[1] = (flag >> 8) & 0xff;
	buf[2] = (flag >> 16) & 0xff;
	buf[3] = (flag >> 24) & 0xff;
}

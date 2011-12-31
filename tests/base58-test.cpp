#include <bitcoin/utility/base58.hpp>
#include <bitcoin/utility/assert.hpp>

using namespace libbitcoin;

int main()
{
    data_chunk pubkey = {0x00, 0x5c, 0xc8, 0x7f, 0x4a, 0x3f, 0xdf, 0xe3, 0xa2, 0x34, 0x6b, 0x69, 0x53, 0x26, 0x7c, 0xa8, 0x67, 0x28, 0x26, 0x30, 0xd3, 0xf9, 0xb7, 0x8e, 0x64};
    std::string address = "19TbMSWwHvnxAKy12iNm3KdbGfzfaMFViT";
    BITCOIN_ASSERT(encode_base58(pubkey) == address);
    BITCOIN_ASSERT(decode_base58(address) == pubkey);
    return 0;
}


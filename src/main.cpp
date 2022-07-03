#include <iostream>
#include "Message.pb.h"

int main()
{
    Sample::Message message = Sample::Message();

    std::cout << message.DebugString() << std::endl;
    return 0;
}

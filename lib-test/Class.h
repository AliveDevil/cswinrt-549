#pragma once

#include "Class.g.h"

namespace winrt::lib_test::implementation
{
    struct Class : ClassT<Class>
    {
        Class() = default;

        int32_t MyProperty();
        void MyProperty(int32_t value);
    };
}

namespace winrt::lib_test::factory_implementation
{
    struct Class : ClassT<Class, implementation::Class>
    {
    };
}

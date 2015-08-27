#include "InputDevice.hh"
#include "IOException.hh"

#include <sstream>

using namespace idf;

InputDevice::InputDevice() :
    delay(0),
    mOpen(false),
    enabled(true) {}

bool InputDevice::isOpen() const {
    return mOpen;
}

void InputDevice::update() {
    if (!mOpen) {
        std::ostringstream oss;
        oss << __FILE__ << ":" << __LINE__
            << " Device is not open.";
        throw IOException(oss.str());
    }
}

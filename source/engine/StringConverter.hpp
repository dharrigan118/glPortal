#ifndef __STRINGCONVERTER_HPP
#define __STRINGCONVERTER_HPP

namespace glPortal {
  namespace engine {
    class StringConverter {
    public:
      static float stringStreamToFloat(std::stringstream& stream);
    };
  }
}
#endif

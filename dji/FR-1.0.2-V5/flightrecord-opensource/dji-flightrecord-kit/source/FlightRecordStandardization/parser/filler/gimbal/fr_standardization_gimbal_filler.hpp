//
//  fr_standardization_gimbal_filler.hpp
//  FlightRecordStandardization
//
//  Copyright © 2019 DJISDK. All rights reserved.
//

#ifndef fr_standardization_gimbal_filler_hpp
#define fr_standardization_gimbal_filler_hpp

#include <stdio.h>
#include "fr_standardization_frametime_model.hpp"
#include <FlightRecordProtocolEnum.h>

namespace DJIFR {
    namespace standardization {
        //MARK: - Public
    
        /// filler the gimbal state.
        /// @param output  the gimbal state.
        /// @param data_type  the data type.
        /// @param buffer  the original buffer.
        /// @param length  the length of the original buffer.
        /// @return YES, fill the rc hardware state success.
        bool Filler(std::shared_ptr<GimbalStateImp>& output,
                    FlightRecordDataType data_type,
                    uint8_t *buffer,
                    uint64_t length);
    }
}

#endif /* fr_standardization_gimbal_filler_hpp */

#ifndef XSLAM_VINS_ESTIMATOR_ESTIMATOR_H
#define XSLAM_VINS_ESTIMATOR_ESTIMATOR_H

#include <thread>
#include <string>

namespace xslam {
namespace estimator {
    
class Estimator 
{
public:
    Estimator(const std::string& filename);

};

} // namespace estimator
} // namespace xslam 

#endif // XSLAM_VINS_ESTIMATOR_ESTIMATOR_H
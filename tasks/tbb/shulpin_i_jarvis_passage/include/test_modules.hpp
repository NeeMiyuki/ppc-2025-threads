#include <cstddef>
#include <vector>

#include "tbb/shulpin_i_jarvis_passage/include/ops_stl.hpp"

namespace shulpin_tbb_test_module {
void VerifyResults(const std::vector<shulpin_i_jarvis_tbb::Point> &expected,
                   const std::vector<shulpin_i_jarvis_tbb::Point> &result_tbb);

void MainTestBody(std::vector<shulpin_i_jarvis_tbb::Point> &input, std::vector<shulpin_i_jarvis_tbb::Point> &expected);

std::vector<shulpin_i_jarvis_tbb::Point> GeneratePointsInCircle(size_t num_points,
                                                                const shulpin_i_jarvis_tbb::Point &center,
                                                                double radius);

void TestBodyRandomCircle(std::vector<shulpin_i_jarvis_tbb::Point> &input,
                          std::vector<shulpin_i_jarvis_tbb::Point> &expected, size_t &num_points);

void TestBodyFalse(std::vector<shulpin_i_jarvis_tbb::Point> &input, std::vector<shulpin_i_jarvis_tbb::Point> &expected);

int Orientation(const shulpin_i_jarvis_tbb::Point &p, const shulpin_i_jarvis_tbb::Point &q,
                const shulpin_i_jarvis_tbb::Point &r);

std::vector<shulpin_i_jarvis_tbb::Point> ComputeConvexHull(std::vector<shulpin_i_jarvis_tbb::Point> raw_points);

std::vector<shulpin_i_jarvis_tbb::Point> GenerateRandomPoints(size_t num_points);

void RandomTestBody(std::vector<shulpin_i_jarvis_tbb::Point> &input,
                    std::vector<shulpin_i_jarvis_tbb::Point> &expected);

std::vector<shulpin_i_jarvis_tbb::Point> PerfRandomGenerator(size_t num_points, int from, int to);

}  // namespace shulpin_stl_test_module
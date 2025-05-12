#include <cstddef>
#include <vector>

#include "omp/shulpin_i_jarvis_passage/include/ops_stl.hpp"

namespace shulpin_omp_test_module {
void VerifyResults(const std::vector<shulpin_i_jarvis_omp::Point> &expected,
                   const std::vector<shulpin_i_jarvis_omp::Point> &result_tbb);

void MainTestBody(std::vector<shulpin_i_jarvis_omp::Point> &input, std::vector<shulpin_i_jarvis_omp::Point> &expected);

std::vector<shulpin_i_jarvis_omp::Point> GeneratePointsInCircle(size_t num_points,
                                                                const shulpin_i_jarvis_omp::Point &center,
                                                                double radius);

void TestBodyRandomCircle(std::vector<shulpin_i_jarvis_omp::Point> &input,
                          std::vector<shulpin_i_jarvis_omp::Point> &expected, size_t &num_points);

void TestBodyFalse(std::vector<shulpin_i_jarvis_omp::Point> &input, std::vector<shulpin_i_jarvis_omp::Point> &expected);

int Orientation(const shulpin_i_jarvis_omp::Point &p, const shulpin_i_jarvis_omp::Point &q,
                const shulpin_i_jarvis_omp::Point &r);

std::vector<shulpin_i_jarvis_omp::Point> ComputeConvexHull(std::vector<shulpin_i_jarvis_omp::Point> raw_points);

std::vector<shulpin_i_jarvis_omp::Point> GenerateRandomPoints(size_t num_points);

void RandomTestBody(std::vector<shulpin_i_jarvis_omp::Point> &input,
                    std::vector<shulpin_i_jarvis_omp::Point> &expected);

std::vector<shulpin_i_jarvis_omp::Point> PerfRandomGenerator(size_t num_points, int from, int to);

}  // namespace shulpin_omp_test_module
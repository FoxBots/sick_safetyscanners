#include <sick_microscan3_ros_driver/datastructure/ApplicationInputs.h>

namespace sick {
namespace datastructure {

ApplicationInputs::ApplicationInputs()
{

}

std::vector<bool> ApplicationInputs::getUnsafeInputsInputSourcesVector() const
{
  return m_unsafe_inputs_input_sources_vector;
}

void ApplicationInputs::setUnsafeInputsInputSourcesVector(const std::vector<bool> &unsafe_inputs_input_sources_vector)
{
  m_unsafe_inputs_input_sources_vector = unsafe_inputs_input_sources_vector;
}

std::vector<bool> ApplicationInputs::getUnsafeInputsFlagsVector() const
{
  return m_unsafe_inputs_flags_vector;
}

void ApplicationInputs::setUnsafeInputsFlagsVector(const std::vector<bool> &unsafe_inputs_flags_vector)
{
  m_unsafe_inputs_flags_vector = unsafe_inputs_flags_vector;
}

std::vector<UINT16> ApplicationInputs::getMonitoringCasevector() const
{
  return m_monitoring_case_vector;
}

void ApplicationInputs::setMonitoringCaseVector(const std::vector<UINT16> &monitoring_case_vector)
{
  m_monitoring_case_vector = monitoring_case_vector;
}

std::vector<bool> ApplicationInputs::getMonitoringCaseFlagsVector() const
{
  return m_monitoring_case_flags_vector;
}

void ApplicationInputs::setMonitoringCaseFlagsVector(const std::vector<bool> &monitoring_case_flags_vector)
{
  m_monitoring_case_flags_vector = monitoring_case_flags_vector;
}

INT16 ApplicationInputs::getVelocity0() const
{
  return m_velocity_0;
}

void ApplicationInputs::setVelocity0(const INT16 &velocity_0)
{
  m_velocity_0 = velocity_0;
}

INT16 ApplicationInputs::getVelocity1() const
{
  return m_velocity_1;
}

void ApplicationInputs::setVelocity1(const INT16 &velocity_1)
{
  m_velocity_1 = velocity_1;
}

bool ApplicationInputs::getVelocity0Valid() const
{
  return m_velocity_0_valid;
}

void ApplicationInputs::setVelocity0Valid(bool velocity_0_valid)
{
  m_velocity_0_valid = velocity_0_valid;
}

bool ApplicationInputs::getVelocity1Valid() const
{
  return m_velocity_1_valid;
}

void ApplicationInputs::setVelocity1Valid(bool velocity_1_valid)
{
  m_velocity_1_valid = velocity_1_valid;
}

bool ApplicationInputs::getVelocity0TransmittedSafely() const
{
  return m_velocity_0_transmitted_safely;
}

void ApplicationInputs::setVelocity0TransmittedSafely(bool velocity_0_transmitted_safely)
{
  m_velocity_0_transmitted_safely = velocity_0_transmitted_safely;
}

bool ApplicationInputs::getVelocity1TransmittedSafely() const
{
  return m_velocity_1_transmitted_safely;
}

void ApplicationInputs::setVelocity1TransmittedSafely(bool velocity_1_transmitted_safely)
{
  m_velocity_1_transmitted_safely = velocity_1_transmitted_safely;
}

INT8 ApplicationInputs::getSleepModeInput() const
{
  return m_sleep_mode_input;
}

void ApplicationInputs::setSleepModeInput(const INT8 &sleep_mode_input)
{
  m_sleep_mode_input = sleep_mode_input;
}

}
}

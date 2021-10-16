/**
 * unisim_ros2_control_api
 * No description provided (generated by Swagger Codegen https://github.com/swagger-api/swagger-codegen)
 *
 * OpenAPI spec version: 0.0.1
 * 
 *
 * NOTE: This class is auto generated by the swagger code generator 2.4.23.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */



#include "StartSimulationRequest.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

StartSimulationRequest::StartSimulationRequest()
{
    m_Realtime_factor = 0.0;
    m_Realtime_factorIsSet = false;
}

StartSimulationRequest::~StartSimulationRequest()
{
}

void StartSimulationRequest::validate()
{
    // TODO: implement validation
}

web::json::value StartSimulationRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_Realtime_factorIsSet)
    {
        val[utility::conversions::to_string_t("realtime_factor")] = ModelBase::toJson(m_Realtime_factor);
    }

    return val;
}

void StartSimulationRequest::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("realtime_factor")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("realtime_factor")];
        if(!fieldValue.is_null())
        {
            setRealtimeFactor(ModelBase::doubleFromJson(fieldValue));
        }
    }
}

void StartSimulationRequest::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_Realtime_factorIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("realtime_factor"), m_Realtime_factor));
    }
}

void StartSimulationRequest::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("realtime_factor")))
    {
        setRealtimeFactor(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("realtime_factor"))));
    }
}

double StartSimulationRequest::getRealtimeFactor() const
{
    return m_Realtime_factor;
}


void StartSimulationRequest::setRealtimeFactor(double value)
{
    m_Realtime_factor = value;
    m_Realtime_factorIsSet = true;
}
bool StartSimulationRequest::realtimeFactorIsSet() const
{
    return m_Realtime_factorIsSet;
}

void StartSimulationRequest::unsetRealtime_factor()
{
    m_Realtime_factorIsSet = false;
}

}
}
}
}


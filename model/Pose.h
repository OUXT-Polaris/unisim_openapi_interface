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

/*
 * Pose.h
 *
 * 
 */

#ifndef IO_SWAGGER_CLIENT_MODEL_Pose_H_
#define IO_SWAGGER_CLIENT_MODEL_Pose_H_


#include "../ModelBase.h"

#include "Point.h"
#include "Quaternion.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  Pose
    : public ModelBase
{
public:
    Pose();
    virtual ~Pose();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Pose members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Point> getPosition() const;
    bool positionIsSet() const;
    void unsetPosition();
    void setPosition(std::shared_ptr<Point> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Quaternion> getOrientation() const;
    bool orientationIsSet() const;
    void unsetOrientation();
    void setOrientation(std::shared_ptr<Quaternion> value);

protected:
    std::shared_ptr<Point> m_Position;
    bool m_PositionIsSet;
    std::shared_ptr<Quaternion> m_Orientation;
    bool m_OrientationIsSet;
};

}
}
}
}

#endif /* IO_SWAGGER_CLIENT_MODEL_Pose_H_ */

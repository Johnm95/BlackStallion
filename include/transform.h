#ifndef _TRANSFORM_H
#define _TRANSFORM_H

class Transform
{
    public:

    //CONSTRUCTOR/DECONSTRUCTOR
    Transform();
    ~Transform();

    glm::mat4 getModeltoWorldMatrix();

    //Translation Vectors
    glm::vec3 forward();
    glm::vec3 up();
    glm::vec3 right();

    //Basic Vector Transformations
    glm::vec3 getPosition();
    glm::vec3 getScale();
    glm::vec3 getRotation(); 

    void setPosition(glm::vec3 newPos);
    void lookHorizontal(float yaw);
    void lookVertical(float pitch);

    void setPitch(float angle);
    void setYaw(float angle);

    private:
    glm::vec3 position;
    glm::vec3 scale;
    glm::vec3 rotation;
    glm::vec3 front;

    float pitch;
    float yaw;
    float roll;

};

#include "../src/transform.cpp"

#endif 
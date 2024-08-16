#ifndef MEDIA_FILE_MODEL_H
#define MEDIA_FILE_MODEL_H

#include <string>
#include "iostream"

class MediaFileModel{
protected:
    std::string Path;
public:
    MediaFileModel(const std::string& Path);
    MediaFileModel(const MediaFileModel& other) = default;
    MediaFileModel(MediaFileModel&& other) = default;
    virtual ~MediaFileModel();

    std::string getPath();
    void setPath(const std::string& Path);

    virtual std::string getSpecificPath() const = 0;
    virtual std::string getType() const = 0; 
};


#endif
#ifndef VIDEO_FILE_MODEL_H
#define VIDEO_FILE_MODEL_H

#include "media_file_model.h"

class VideoFileModel : public MediaFileModel {
    public:
    VideoFileModel(const std::string& Path);

    std::string getSpecificPath() const override; // lay duong dan mp4
    std::string getType() const = 0; //

};

#endif
#ifndef AUDIO_FILE_MODEL_H
#define AUDIO_FILE_MODEL_H

#include "media_file_model.h"

class AudioFileModel : public MediaFileModel {
    public:
    AudioFileModel(const std::string& Path);

    std::string getSpecificPath() const override; // lay duong dan mp3
    std::string getType() const = 0; 

};
#endif
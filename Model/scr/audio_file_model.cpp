#include "audio_file_model.h"

AudioFileModel::AudioFileModel(const std::string& Path) : MediaFileModel(Path){}

std::string AudioFileModel::getSpecificPath() const {
       if (Path.size() < 4 || Path.substr(Path.size() - 4) == ".mp3"){
            return Path ; // Thêm phần mở rộng nếu chưa có
        }
}

std::string AudioFileModel::getType() const{
    return "mp3";
}
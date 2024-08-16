#include "video_file_model.h"

VideoFileModel::VideoFileModel(const std::string& Path) : MediaFileModel(Path) {}

std::string VideoFileModel::getSpecificPath() const {
    if (Path.size() < 4 || Path.substr(Path.size() - 4) == ".mp4") {
        return Path ; // tìm file .mp4
    }
}

std::string VideoFileModel::getType() const{
    return "mp4";
}
#include "media_file_model.h"

#include "iostream"

MediaFileModel::MediaFileModel(const std::string& Path) : Path(Path){}

MediaFileModel::~MediaFileModel(){}

std::string MediaFileModel::getPath(){
    return Path;
}

void MediaFileModel::setPath(const std::string& Path){
    this->Path = Path;
}

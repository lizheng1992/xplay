

#include "IVideoView.h"
#include "XLog.h"

void IVideoView::Update(XData data)
{
    //("IVideoView->Update(data) %d",data.pts);
    this->Render(data);
}
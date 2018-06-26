#include "ffvideo.hpp"
#include "GLDevice.hpp"



VideoPlayer::VideoPlayer()
{
	p_ffstream = nullptr;
	next_update_tick = 0;
	fps = 0.0f;
	width = height = 0;
	fill_cb = nullptr;
	status = Init;
	// cur_pos = 0;
	is_loop = false;

	buf1 = buf2 = nullptr;
	buf_size = 0;
	front_buffer = nullptr;
}

void VideoPlayer::open(std::string s)
{
	fname = s;
	p_ffstream = std::make_shared<ffStream>(s);
	// p_ffstream->open_
	fps = p_ffstream->get_fps();
	width = p_ffstream->get_width();
	height = p_ffstream->get_height();
	status = Init;
}


void VideoPlayer::open(std::shared_ptr<ffStream>& fs)
{
	p_ffstream = fs;

	fps = p_ffstream->get_fps();
	width = p_ffstream->get_width();
	height = p_ffstream->get_height();
	status = Init;
}


void VideoPlayer::play()
{
	printf("(VideoPlayer:play)\n");

	// if(next_update_tick == 0)
	// 	next_update_tick = time_now();
	// next_update_tick = time_now();
	status = Playing;
	update();
}
int VideoPlayer::update()
{
	if(status != Playing)
		return 0;
	uint32_t cur = time_now();
	// printf("(VideoPlayer:update):%d,%d\n",cur,next_update_tick);
	if(cur >= next_update_tick)
	{
		uint8_t* buf = nullptr;
		// int size = pbf->read(&buf,width*heigh*format_size);
		int n = p_ffstream->ReadFrame(&buf,width*height*format_size);
		if(n > 0)
		{
			if(fill_cb)
			{
				fill_cb(buf,width,height,format_size);
			}
			else
			{
				swap_buf(buf,width*height*format_size);
			}
		}
		else
		{
			on_complete();
			
		}
		next_update_tick = time_now() + (uint32_t)(1000.0/fps);
		return 1;
	}
	return 0;
}


void VideoPlayer::swap_buf(uint8_t* buf,int size)
{
	if(front_buffer == nullptr || front_buffer == buf2)
	{
		front_buffer = buf1;
	}
	else
	{
		front_buffer = buf2;
	}
	memcpy(front_buffer,buf,size);
}






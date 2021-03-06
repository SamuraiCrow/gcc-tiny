
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_sound_sampled_gstreamer_io_GstAudioFileReaderNativePeer__
#define __gnu_javax_sound_sampled_gstreamer_io_GstAudioFileReaderNativePeer__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace gnu
  {
    namespace classpath
    {
        class Pointer;
    }
    namespace javax
    {
      namespace sound
      {
        namespace sampled
        {
          namespace gstreamer
          {
            namespace io
            {
                class GstAudioFileReaderNativePeer;
                class GstAudioFileReaderNativePeer$GstHeader;
            }
          }
        }
      }
    }
  }
  namespace java
  {
    namespace net
    {
        class URL;
    }
  }
  namespace javax
  {
    namespace sound
    {
      namespace sampled
      {
          class AudioFormat;
          class AudioFormat$Encoding;
      }
    }
  }
}

class gnu::javax::sound::sampled::gstreamer::io::GstAudioFileReaderNativePeer : public ::java::lang::Object
{

public: // actually package-private
  GstAudioFileReaderNativePeer();
public:
  static ::javax::sound::sampled::AudioFormat * getAudioFormat(::java::io::File *);
  static ::javax::sound::sampled::AudioFormat * getAudioFormat(::java::io::InputStream *);
  static ::javax::sound::sampled::AudioFormat * getAudioFormat(::java::net::URL *);
private:
  static ::javax::sound::sampled::AudioFormat * getAudioFormat(::java::io::InputStream *, ::gnu::javax::sound::sampled::gstreamer::io::GstAudioFileReaderNativePeer$GstHeader *);
  static ::javax::sound::sampled::AudioFormat$Encoding * getEncoding(::gnu::javax::sound::sampled::gstreamer::io::GstAudioFileReaderNativePeer$GstHeader *);
  static ::javax::sound::sampled::AudioFormat * getAudioFormat(::gnu::javax::sound::sampled::gstreamer::io::GstAudioFileReaderNativePeer$GstHeader *);
public: // actually protected
  static jboolean gstreamer_get_audio_format_stream(::gnu::javax::sound::sampled::gstreamer::io::GstAudioFileReaderNativePeer$GstHeader *, ::gnu::classpath::Pointer *);
  static jboolean gstreamer_get_audio_format_file(::gnu::javax::sound::sampled::gstreamer::io::GstAudioFileReaderNativePeer$GstHeader *);
private:
  static void init_id_cache();
  static ::java::lang::String * GST_ENCODING;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_javax_sound_sampled_gstreamer_io_GstAudioFileReaderNativePeer__

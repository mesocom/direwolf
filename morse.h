/* morse.h */

int morse_init (struct audio_s *audio_config_p, int morse_audio_amplitude, int morse_frequency) ;

int morse_send (int chan, char *str, int wpm, int txdelay, int txtail);

#define MORSE_DEFAULT_WPM 10


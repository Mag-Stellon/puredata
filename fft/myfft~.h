#ifndef _fft_h_
#define _fft_h_

#include "m_pd.h"

static t_class *myfft_tilde_class;

typedef struct _myfft_tilde {
  t_object x_obj;

  t_sample f_pan;
  t_sample f;
  t_sample *circularbuffer;

  t_outlet *x_out;

  int *bitshuffle;
  float *weighting;
  float *window;
  int bitnumber;
  int complete;
} t_myfft_tilde;



t_int *fft_tilde_perform(t_int *w);
void myfft_tilde_dsp(t_myfft_tilde *x, t_signal **sp);
void myfft_tilde_free(t_myfft_tilde *x);
void *myfft_tilde_new(void);
void myfft_tilde_setup(void);


#endif

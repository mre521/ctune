/*
   ct_trackermodule.h - tracked music container definition and related structures
*/

#ifndef CT_TRACKERMODULE_H
#define CT_TRACKERMODULE_H

typedef struct trackermodule
{
   /*
      general info any module type probably has
   */

   /* song name given by author - null term'd ansi string */
   char *pSongName;

   /* number of audible channels the tune can make use of */
   ctInt8u numberOfChannels;

   /* number of orders in the orderlist */
   ctInt16u numberOfOrders;

   /* number of patterns in the module (not necessarily all used) */
   ctInt16u numberOfPatterns;

   /* number of instruments represented in the module */
   ctInt16u numberOfInstruments;

   /* number of samples in the module (mapped to instruments in types like amiga MOD) */
   ctInt16u numberOfSamples;

   /*
      data relating to how the tune is to be played
   */

   /* divides tune volume values by (64 / globalVolume) */
   ctInt8u globalVolume;

   /* multiplies sample output - multiply by 8/11 if the song is stereo for s3m */
   ctInt8u masterVolume;

   /* default speed in ticks per row the module plays at */
   ctInt8u initialSpeed;

   /* defauly tempo in BPM the module plays at */
   ctInt8u initialTempo;

   /* maps each track channel to a sample output channel */
   ctInt8u *pChannelMapping;

   /* maps a left-right panning value to each tracker channel */
   ctInt8u *pChannelPanning;
} ctTrackerModule;

#endif /* CT_TRACKERMODULE_H */

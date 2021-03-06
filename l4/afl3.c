/*
 * Programmer: Frederik Andersen   Date completed: Oct 15, 2013
 * Instructor: Kurt Normark        Class: IMPR
 *
 * In this exercise we will generate graphic files with beautiful patterns.
 * There is no set definition of "beautiful".
 *
 * Design heavily inspired by a picture by East718
 * http://commons.wikimedia.org/wiki/File:718smiley.svg
 *
 * CC-BY-SA
 * This work is licensed under the Creative Commons Attribution-ShareAlike 3.0 Unported License.
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/3.0/
 */

#include <stdio.h>

#define _(a,b,r) ((x-a)*(x-a)+(y-b)*(y-b))<r*r
#define __(a) (b=g=r=a)

int main(void)
{
    FILE *image_file;
    int x, y;
    unsigned char r, g, b;
    int c[10];

    image_file = fopen("image-file-1.pnm", "wb");

    fputs("P6\n", image_file);

    fputs("500 500\n", image_file);
    fputs("255\n", image_file);

    /* The two for-loops are intact */
    for (y = 0; y < 500; y++) 
        for (x = 0; x < 500; x++) {

            /* The famous smiley algorithm,
             * here nicely written as a single statement :)
             */

                           (
                          _((
                         c[3]=
                        319),(c
                       [1]=196),
                      'A')&&y<(c[
                     2]=220))?((_(
                    362,(c[4]=155),
                   26))?__(0):__(c[7
                  ]=0xFF)):(_(3[c],1[
                 c],'L')&&y<(c[5]=231)
                )?__(0):(_('m',1[c],'A'
               )&&y<2[c])?(_((137),4[c],
              26)?__(0):__(7[c])):(_('m',
             1[c],'L')&&y<5[c])?__(0):(_(2
            [c],(c[6]=297),128)&&y>289)?(_(
             276,448,'R')?((r=251)+(g=192)
              +(b=0337)):((r=0207)+(g=25)
               +(b='E'))):(_(((2))[c],6[
                c],0213)&&y>0426)?__(0)
                 :(_((c[0]=0372),(0)[c
                  ],0345))?((r=0xFE)+
                   (g=0xDE)+(b='X'))
                    :(_(0[c],0[c],0
                     [c]))?__(0):(
                      (g=(x*(y))/
                       'F')+(b=(
                        r=(0))+
                         (0310
                          )))
                           ;

            /* Now that's beauty */

            fputc(r, image_file);
            fputc(g, image_file);
            fputc(b, image_file);
        }
    

    fclose(image_file);
    return 0;
}
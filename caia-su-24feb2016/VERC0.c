#include "dx.h"
void VERC0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int Y,TY;
int jvj;
jvj=v[0];
v[0]+=1;
x[jvj+1]=10664;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==326&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
Y=pile[v[22]]; TY=pile[v[22]+1]; v[22]+=2; 
if((TY==(-4752))) goto l1;
if((TY==(-4753))) goto l2;
if((TY==(-4754))) goto l3;
if((TY==(-4755))) goto l4;
if((TY==(-4756))) goto l5;
if((TY==(-4769))) goto l6;
if((TY==(-4770))) goto l7;
if((TY==(-4771))) goto l8;
if((TY==(-4772))) goto l9;
if((TY==(-4773))) goto l10;
if((TY==(-4789))) goto l11;
if((TY==(-4790))) goto l12;
if((TY==(-4784))) goto l13;
if((TY==(-4785))) goto l14;
if((TY==(-4786))) goto l15;
if((TY!=(-4787))) goto l16;
pile[v[22]]=Y; 
(*f[4053])( );     /*Z34Z0(Y)*/
l16:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
l1:pile[v[22]]=Y; 
(*f[4038])( );     /*Z53Z0(Y)*/
goto l16;
l2:pile[v[22]]=Y; 
(*f[4039])( );     /*Z179Z0(Y)*/
goto l16;
l3:pile[v[22]]=Y; 
(*f[4040])( );     /*Z181Z0(Y)*/
goto l16;
l4:pile[v[22]]=Y; 
(*f[4041])( );     /*Z183Z0(Y)*/
goto l16;
l5:pile[v[22]]=Y; 
(*f[4042])( );     /*Z246Z0(Y)*/
goto l16;
l6:pile[v[22]]=Y; 
(*f[4043])( );     /*Z247Z0(Y)*/
goto l16;
l7:pile[v[22]]=Y; 
(*f[4044])( );     /*Z248Z0(Y)*/
goto l16;
l8:pile[v[22]]=Y; 
(*f[4045])( );     /*Z250Z0(Y)*/
goto l16;
l9:pile[v[22]]=Y; 
(*f[4046])( );     /*Z254Z0(Y)*/
goto l16;
l10:pile[v[22]]=Y; 
(*f[4047])( );     /*Z255Z0(Y)*/
goto l16;
l11:pile[v[22]]=Y; 
(*f[4048])( );     /*Z258Z0(Y)*/
goto l16;
l12:pile[v[22]]=Y; 
(*f[4049])( );     /*Z8Z0(Y)*/
goto l16;
l13:pile[v[22]]=Y; 
(*f[4050])( );     /*Z9Z0(Y)*/
goto l16;
l14:pile[v[22]]=Y; 
(*f[4051])( );     /*Z32Z0(Y)*/
goto l16;
l15:pile[v[22]]=Y; 
(*f[4052])( );     /*Z33Z0(Y)*/
goto l16;
}

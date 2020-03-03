#include "dx.h"
void VALENS0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V5=0,V7=0,V8=0,V17=0,V49=0,V37=0;
int A;
int R;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=34;
x[jvj+1]=10803;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3036&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
A=pile[v[22]]; R=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
x[R]=incon;
pile[v[22]]=100; pile[WZ1]=A; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(100,A,jvj+2)*/
if((x[jvj+2]==128)) goto l1;
pile[v[22]]=128; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(128,A,jvj+3)*/
if((x[jvj+3]==0)) goto l1;
x[R]=x[jvj+3] ;z[R]=z[jvj+3];
l1:pile[v[22]]=100; pile[WZ1]=A; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(100,A,jvj+4)*/
if((x[jvj+4]!=448)) goto l2;
pile[v[22]]=111; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(111,A,jvj+5)*/
pile[v[22]]=101; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(101,jvj+5,jvj+6)*/
if((x[jvj+6]!=128)) goto l2;
pile[v[22]]=102; pile[WZ1]=A; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(102,A,jvj+7)*/
l20:if(x[R]==incon) goto l21;
l27:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; v[102]=0;return;
l2:x[jvj+7]=x[A] ;z[jvj+7]=z[A];
goto l20;
l3:if((x[jvj+28]<=0)) goto l13;
x[jvj+31]=s[x[jvj+28]] ;z[jvj+31]=(x[jvj+31]<=sepcte) ? x[jvj+31] : z[jvj+28];
pile[v[22]]=100; pile[WZ1]=jvj+31; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(100,jvj+31,jvj+32)*/
if((x[jvj+32]!=41)) goto l13;
x[jvj+9]=0 ;z[jvj+9]=0;
l4:if((x[jvj+28]>0)) goto l5;
x[R]=x[jvj+9] ;z[R]=z[jvj+9];
goto l27;
l5:x[jvj+8]=s[x[jvj+28]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+28];
pile[v[22]]=130; pile[WZ1]=jvj+8; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(130,jvj+8,V5)*/
V5=pile[WZ2]; 
pile[v[22]]=jvj+9; pile[WZ1]=V5; 
(*f[207])( );     /*PLUE2(jvj+9,V5)*/
l6:x[jvj+28]=t[x[jvj+28]];
goto l4;
l10:x[jvj+16]=s[x[jvj+26]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+26];
pile[v[22]]=jvj+16; pile[WZ1]=jvj+17; 
(*f[3036])( );if(v[102]) goto l11;     /*VALENS0(jvj+16,jvj+17)*/
V49=x[jvj+17];
l12:if((V49<=0)) goto l11;
V17=s[V49];
pile[v[22]]=jvj+18; pile[WZ1]=V17; 
(*f[207])( );     /*PLUE2(jvj+18,V17)*/
V49=t[V49];
goto l12;
l11:x[jvj+26]=t[x[jvj+26]];
l9:if((x[jvj+26]>0)) goto l10;
x[R]=x[jvj+18] ;z[R]=z[jvj+18];
goto l27;
l13:if((x[jvj+28]<=0)) goto l26;
x[jvj+33]=s[x[jvj+28]] ;z[jvj+33]=(x[jvj+33]<=sepcte) ? x[jvj+33] : z[jvj+28];
pile[v[22]]=100; pile[WZ1]=jvj+33; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(100,jvj+33,jvj+34)*/
if((x[jvj+34]!=89)) goto l26;
x[jvj+20]=0 ;z[jvj+20]=0;
l14:if((x[jvj+28]>0)) goto l15;
x[R]=x[jvj+20] ;z[R]=z[jvj+20];
goto l27;
l15:x[jvj+19]=s[x[jvj+28]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+28];
pile[v[22]]=162; pile[WZ1]=jvj+19; 
(*f[219])( );if(v[102]) goto l16;     /*FNDC2(162,jvj+19,V37)*/
V37=pile[WZ2]; 
pile[v[22]]=jvj+20; pile[WZ1]=V37; 
(*f[467])( );     /*PLUE4(jvj+20,V37)*/
l16:x[jvj+28]=t[x[jvj+28]];
goto l14;
l18:x[jvj+21]=s[x[jvj+28]] ;z[jvj+21]=(x[jvj+21]<=sepcte) ? x[jvj+21] : z[jvj+28];
pile[v[22]]=101; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(101,jvj+21,jvj+22)*/
pile[v[22]]=jvj+23; pile[WZ1]=jvj+22; 
(*f[68])( );     /*PLUE0(jvj+23,jvj+22)*/
l19:x[jvj+28]=t[x[jvj+28]];
l17:if((x[jvj+28]>0)) goto l18;
x[R]=x[jvj+23] ;z[R]=z[jvj+23];
goto l27;
l21:pile[v[22]]=111; pile[WZ1]=jvj+7; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(111,jvj+7,jvj+24)*/
pile[v[22]]=101; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(101,jvj+24,jvj+25)*/
if((x[jvj+25]!=424)) goto l22;
pile[v[22]]=107; pile[WZ1]=jvj+7; pile[WZ2]=jvj+26; 
(*f[33])( );     /*FNDE0(107,jvj+7,jvj+26)*/
x[jvj+18]=0 ;z[jvj+18]=0;
goto l9;
l22:pile[v[22]]=100; pile[WZ1]=jvj+7; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(100,jvj+7,jvj+27)*/
if((x[jvj+27]==128)) goto l23;
if((x[jvj+27]!=61)) goto l26;
pile[v[22]]=102; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(102,jvj+7,jvj+10)*/
pile[v[22]]=101; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(101,jvj+10,jvj+11)*/
if(x[jvj+11]==833||x[jvj+11]==828) goto l26;
l24:pile[v[22]]=103; pile[WZ1]=jvj+7; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(103,jvj+7,jvj+12)*/
pile[v[22]]=101; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(101,jvj+12,jvj+13)*/
if(x[jvj+13]==833||x[jvj+13]==828) goto l26;
l7:x[jvj+15]=0 ;z[jvj+15]=0;
x[jvj+14]=vo[16];z[jvj+14]=vz[16];
pile[v[22]]=jvj+14; pile[WZ1]=jvj+10; 
(*f[816])( );if(v[102]) goto l25;     /*VALEXP0(jvj+14,jvj+10,V7)*/
V7=pile[WZ2]; 
pile[WZ1]=jvj+12; 
(*f[816])( );if(v[102]) goto l25;     /*VALEXP0(jvj+14,jvj+12,V8)*/
V8=pile[WZ2]; 
l8:if((V7>V8)) goto l25;
pile[v[22]]=jvj+15; pile[WZ1]=V7; 
(*f[207])( );     /*PLUE2(jvj+15,V7)*/
V7++;
goto l8;
l23:pile[v[22]]=128; pile[WZ1]=jvj+7; pile[WZ2]=jvj+28; 
(*f[33])( );     /*FNDE0(128,jvj+7,jvj+28)*/
if((x[jvj+28]<=0)) goto l3;
x[jvj+29]=s[x[jvj+28]] ;z[jvj+29]=(x[jvj+29]<=sepcte) ? x[jvj+29] : z[jvj+28];
pile[v[22]]=100; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(100,jvj+29,jvj+30)*/
if((x[jvj+30]!=20)) goto l3;
x[jvj+23]=0 ;z[jvj+23]=0;
goto l17;
l25:x[R]=x[jvj+15] ;z[R]=z[jvj+15];
goto l27;
l26:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; v[102]=1;return;
}

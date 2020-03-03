#include "dx.h"
void ISF0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V29=0,V30=0;
int TL;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=30;
x[jvj+1]=10308;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1656&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
TL=pile[v[22]]; v[22]+=1; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=302; pile[WZ1]=TL; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(302,TL,jvj+17)*/
l10:if((x[jvj+17]>0)) goto l11;
l18:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l2:x[jvj+7]=s[x[jvj+6]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+6];
pile[v[22]]=jvj+7; pile[WZ1]=jvj+2; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(jvj+7,jvj+2,jvj+8)*/
x[jvj+9]=x[jvj+8] ;z[jvj+9]=z[jvj+8];
pile[v[22]]=248; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(248,jvj+9,jvj+10)*/
x[jvj+27]=x[jvj+10] ;z[jvj+27]=z[jvj+10];
l5:if((x[jvj+27]<=0)) goto l4;
x[jvj+11]=s[x[jvj+27]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+27];
pile[v[22]]=161; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(161,jvj+11,jvj+12)*/
if((x[jvj+12]!=x[jvj+2])) goto l6;
V29=x[jvj+11];
pile[v[22]]=248; pile[WZ1]=jvj+9; pile[WZ2]=V29; 
(*f[134])( );     /*OTA0(248,jvj+9,V29)*/
l6:x[jvj+27]=t[x[jvj+27]];
goto l5;
l3:x[jvj+6]=d[108];z[jvj+6]=0;
l1:if((x[jvj+6]>0)) goto l2;
pile[v[22]]=248; pile[WZ1]=jvj+2; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(248,jvj+2,jvj+13)*/
x[jvj+28]=x[jvj+13] ;z[jvj+28]=z[jvj+13];
l7:if((x[jvj+28]>0)) goto l8;
pile[v[22]]=302; pile[WZ1]=TL; pile[WZ2]=V30; 
(*f[134])( );     /*OTA0(302,TL,V30)*/
l16:x[jvj+30]=t[x[jvj+30]];
l15:if((x[jvj+30]<=0)) goto l14;
x[jvj+23]=s[x[jvj+30]] ;z[jvj+23]=(x[jvj+23]<=sepcte) ? x[jvj+23] : z[jvj+30];
pile[v[22]]=161; pile[WZ1]=jvj+23; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(161,jvj+23,jvj+2)*/
if((x[jvj+2]==x[jvj+4])) goto l16;
pile[v[22]]=135; pile[WZ1]=jvj+2; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(135,jvj+2,jvj+24)*/
if((x[jvj+24]!=x[jvj+21])) goto l16;
pile[v[22]]=134; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(134,jvj+2,jvj+3)*/
pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(134,jvj+4,jvj+5)*/
if((x[jvj+3]!=x[jvj+5])) goto l16;
l17:V30=x[jvj+2];
pile[v[22]]=102; pile[WZ1]=jvj+2; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(102,jvj+2,jvj+25)*/
pile[v[22]]=jvj+22; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[760])( );     /*MEMEX0(jvj+22,jvj+25,jvj+26)*/
if((x[jvj+26]==135)) goto l3;
goto l16;
l4:x[jvj+6]=t[x[jvj+6]];
goto l1;
l8:x[jvj+14]=s[x[jvj+28]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+28];
pile[v[22]]=122; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(122,jvj+14,jvj+15)*/
pile[v[22]]=161; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(161,jvj+14,jvj+16)*/
pile[v[22]]=jvj+15; pile[WZ1]=jvj+16; pile[WZ2]=jvj+4; 
(*f[1380])( );     /*RECZ0(jvj+15,jvj+16,jvj+4)*/
l9:x[jvj+28]=t[x[jvj+28]];
goto l7;
l11:x[jvj+18]=s[x[jvj+17]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+17];
pile[v[22]]=248; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[33])( );     /*FNDE0(248,jvj+18,jvj+19)*/
x[jvj+29]=x[jvj+19] ;z[jvj+29]=z[jvj+19];
l12:if((x[jvj+29]>0)) goto l13;
x[jvj+17]=t[x[jvj+17]];
goto l10;
l13:x[jvj+20]=s[x[jvj+29]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+29];
pile[v[22]]=161; pile[WZ1]=jvj+20; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(161,jvj+20,jvj+4)*/
pile[v[22]]=135; pile[WZ1]=jvj+4; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(135,jvj+4,jvj+21)*/
pile[v[22]]=102; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(102,jvj+4,jvj+22)*/
x[jvj+30]=x[jvj+19] ;z[jvj+30]=z[jvj+19];
goto l15;
l14:x[jvj+29]=t[x[jvj+29]];
goto l12;
}

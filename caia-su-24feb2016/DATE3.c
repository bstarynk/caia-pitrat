#include "dx.h"
void DATE3(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V6=0,V1=0,V3=0,V4=0,V5=0,V2=0,V7=0,V13=0,V11=0,V15=0,V10=0,V9=0,V8=0,V20=0,V18=0,V22=0,V17=0,V16=0,V27=0,V25=0,V29=0,V24=0,V23=0,V34=0,V32=0,V36=0,V31=0,V30=0,V41=0,V39=0,V43=0,V38=0,V37=0,V45=0,V46=0,V47=0,V48=0,V49=0,V50=0,V51=0,V52=0,V53=0,V54=0;
int M,J,A,H,MN;
int WZ1,WZ2;

v[22]+=5; 
WZ2=v[22]+2; WZ1=v[22]+1; 
V6=0;
v[2]=v[1];
V1=V6;
v[1]=4;
pile[v[22]]=(-4546); pile[WZ1]=V1; 
(*f[64])( );     /*SRA2((-4546),V1,V3)*/
V3=pile[WZ2]; 
pile[v[22]]=(-4547); pile[WZ1]=V3; 
(*f[64])( );     /*SRA2((-4547),V3,V4)*/
V4=pile[WZ2]; 
pile[v[22]]=V4; pile[WZ1]=62; 
(*f[38])( );     /*SPC0(V4,62,V5)*/
V5=pile[WZ2]; 
pile[v[22]]=(-4539); pile[WZ1]=V5; 
(*f[64])( );     /*SRA2((-4539),V5,V2)*/
V2=pile[WZ2]; 
pile[v[22]]=V2; pile[WZ1]=0; 
(*f[38])( );     /*SPC0(V2,0,V7)*/
V7=pile[WZ2]; 
v[1]=v[2];
pile[v[22]]=V7; pile[WZ1]=406; pile[WZ2]=130; 
(*f[67])( );     /*SPA0(V7,406,130)*/
V45=0;
V46=v[17];
v[2]=v[1];
V47=V45;
v[1]=4;
pile[v[22]]=(-4539); pile[WZ1]=V47; 
(*f[64])( );     /*SRA2((-4539),V47,V48)*/
V48=pile[WZ2]; 
pile[v[22]]=V48; pile[WZ1]=0; 
(*f[38])( );     /*SPC0(V48,0,V49)*/
V49=pile[WZ2]; 
v[1]=v[2];
pile[v[22]]=V49; pile[WZ1]=1146; pile[WZ2]=2; 
(*f[67])( );     /*SPA0(V49,1146,2)*/
fscanf(fx[2],"%s",res);
fclose(fx[2]);
v[17]=V46;
V50=0;
v[2]=v[1];
V51=V50;
v[1]=4;
pile[v[22]]=(-4501); pile[WZ1]=V51; 
(*f[64])( );     /*SRA2((-4501),V51,V52)*/
V52=pile[WZ2]; 
pile[v[22]]=(-4539); pile[WZ1]=V52; 
(*f[64])( );     /*SRA2((-4539),V52,V53)*/
V53=pile[WZ2]; 
pile[v[22]]=V53; pile[WZ1]=0; 
(*f[38])( );     /*SPC0(V53,0,V54)*/
V54=pile[WZ2]; 
v[1]=v[2];
pile[v[22]]=V54; pile[WZ1]=406; pile[WZ2]=130; 
(*f[67])( );     /*SPA0(V54,406,130)*/
V13=res[0];
V11=V13*10;
V15=res[1];
V10=V11+V15;
V9=V10-528;
V8=2000+V9;
A=V8;
V20=res[2];
V18=V20*10;
V22=res[3];
V17=V18+V22;
V16=V17-528;
M=V16;
V27=res[4];
V25=V27*10;
V29=res[5];
V24=V25+V29;
V23=V24-528;
J=V23;
V34=res[6];
V32=V34*10;
V36=res[7];
V31=V32+V36;
V30=V31-528;
H=V30;
V41=res[8];
V39=V41*10;
V43=res[9];
V38=V39+V43;
V37=V38-528;
MN=V37;
v[22]-=5; pile[v[22]]=M; pile[v[22]+1]=J; pile[v[22]+2]=A; pile[v[22]+3]=H; pile[v[22]+4]=MN; return;
}

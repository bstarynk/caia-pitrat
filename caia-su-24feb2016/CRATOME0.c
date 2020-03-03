#include "dx.h"
void CRATOME0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V38=0,V47=0,V50=0,V43=0,V44=0,V45=0,V46=0,V48=0,V49=0,V37=0;
int N;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=41;
x[jvj+1]=11786;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==575&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
N=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+5]=0 ;z[jvj+5]=0;
pile[v[22]]=1688; pile[WZ1]=N; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(1688,N,jvj+2)*/
l1:if((x[jvj+2]>0)) goto l2;
x[jvj+9]=0 ;z[jvj+9]=0;
pile[v[22]]=1689; pile[WZ1]=N; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(1689,N,jvj+6)*/
l3:if((x[jvj+6]>0)) goto l4;
pile[v[22]]=1863; pile[WZ1]=N; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(1863,N,jvj+10)*/
x[jvj+40]=x[jvj+5] ;z[jvj+40]=z[jvj+5];
x[jvj+41]=x[jvj+9] ;z[jvj+41]=z[jvj+9];
(*f[71])( );     /*ENLV0(1863,N)*/
pile[v[22]]=1543; 
(*f[71])( );     /*ENLV0(1543,N)*/
pile[v[22]]=N; pile[WZ1]=1363; pile[WZ2]=jvj+10; 
(*f[34])( );     /*CHGC0(N,1363,jvj+10)*/
pile[WZ1]=jvj+11; 
(*f[939])( );     /*PROCEDURALISE0(N,jvj+11)*/
if((x[jvj+11]==0)) goto l5;
if((x[jvj+11]<=0)) goto l24;
x[jvj+12]=s[x[jvj+11]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+11];
pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[940])( );     /*CRATOMETRAD0(N,jvj+12,jvj+13)*/
l6:pile[v[22]]=1689; pile[WZ1]=N; pile[WZ2]=jvj+14; 
(*f[33])( );     /*FNDE0(1689,N,jvj+14)*/
l7:if((x[jvj+14]>0)) goto l8;
pile[v[22]]=1688; pile[WZ1]=N; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(1688,N,jvj+18)*/
l10:if((x[jvj+18]>0)) goto l11;
pile[v[22]]=1689; pile[WZ1]=N; pile[WZ2]=jvj+24; 
(*f[33])( );     /*FNDE0(1689,N,jvj+24)*/
l13:if((x[jvj+24]>0)) goto l14;
pile[v[22]]=1689; pile[WZ1]=N; pile[WZ2]=jvj+31; 
(*f[33])( );     /*FNDE0(1689,N,jvj+31)*/
l16:if((x[jvj+31]>0)) goto l17;
pile[v[22]]=jvj+13; pile[WZ1]=jvj+34; 
(*f[941])( );     /*CRATOMY0(jvj+13,jvj+34)*/
pile[v[22]]=jvj+34; 
(*f[942])( );     /*CRATOMZ0(jvj+34)*/
l24:pile[v[22]]=273; pile[WZ1]=N; 
(*f[71])( );     /*ENLV0(273,N)*/
pile[v[22]]=N; pile[WZ1]=1688; pile[WZ2]=jvj+40; 
(*f[34])( );     /*CHGC0(N,1688,jvj+40)*/
pile[WZ1]=1689; pile[WZ2]=jvj+41; 
(*f[34])( );     /*CHGC0(N,1689,jvj+41)*/
x[jvj+37]=0 ;z[jvj+37]=0;
pile[v[22]]=1863; pile[WZ1]=N; pile[WZ2]=jvj+35; 
(*f[33])( );     /*FNDE0(1863,N,jvj+35)*/
pile[v[22]]=1363; pile[WZ2]=jvj+36; 
(*f[33])( );     /*FNDE0(1363,N,jvj+36)*/
l18:if((x[jvj+36]>0)) goto l19;
if((x[jvj+37]==0)) goto l25;
V37=g[639];
if((V37<=0)) goto l25;
V38=vg[639];
if((V38!=0)) goto l21;
if((V37<3)) goto l23;
l21:pile[v[22]]=639; pile[WZ1]=11786; pile[WZ2]=0; pile[WZ3]=(-625); pile[WZ4]=N; pile[WZ5]=31; pile[v[22]+6]=jvj+37; pile[v[22]+7]=jvj+39; 
(*f[943])( );     /*INTERP10(639,11786,0,(-625),N,31,jvj+37,jvj+39)*/
if((x[jvj+39]==135)) goto l22;
l25:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l2:x[jvj+3]=s[x[jvj+2]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+2];
pile[v[22]]=jvj+3; pile[WZ1]=jvj+4; 
(*f[255])( );     /*COPEXP0(jvj+3,jvj+4)*/
pile[v[22]]=jvj+5; 
(*f[68])( );     /*PLUE0(jvj+5,jvj+4)*/
x[jvj+2]=t[x[jvj+2]];
goto l1;
l4:x[jvj+7]=s[x[jvj+6]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+6];
pile[v[22]]=jvj+7; pile[WZ1]=jvj+8; 
(*f[255])( );     /*COPEXP0(jvj+7,jvj+8)*/
pile[v[22]]=jvj+9; 
(*f[68])( );     /*PLUE0(jvj+9,jvj+8)*/
x[jvj+6]=t[x[jvj+6]];
goto l3;
l5:x[jvj+13]=x[N] ;z[jvj+13]=z[N];
goto l6;
l8:x[jvj+15]=s[x[jvj+14]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+14];
pile[v[22]]=111; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(111,jvj+15,jvj+16)*/
pile[v[22]]=101; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(101,jvj+16,jvj+17)*/
if((x[jvj+17]==1749)) goto l24;
l9:x[jvj+14]=t[x[jvj+14]];
goto l7;
l11:x[jvj+19]=s[x[jvj+18]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+18];
pile[v[22]]=111; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(111,jvj+19,jvj+20)*/
pile[v[22]]=101; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(101,jvj+20,jvj+21)*/
if((x[jvj+21]!=1604)) goto l12;
pile[v[22]]=103; pile[WZ1]=jvj+19; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(103,jvj+19,jvj+22)*/
pile[v[22]]=101; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(101,jvj+22,jvj+23)*/
if((x[jvj+23]==129)) goto l24;
l12:x[jvj+18]=t[x[jvj+18]];
goto l10;
l14:x[jvj+25]=s[x[jvj+24]] ;z[jvj+25]=(x[jvj+25]<=sepcte) ? x[jvj+25] : z[jvj+24];
pile[v[22]]=111; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(111,jvj+25,jvj+26)*/
pile[v[22]]=101; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(101,jvj+26,jvj+27)*/
if((x[jvj+27]!=1653)) goto l15;
pile[v[22]]=103; pile[WZ1]=jvj+25; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(103,jvj+25,jvj+28)*/
pile[v[22]]=111; pile[WZ1]=jvj+28; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(111,jvj+28,jvj+29)*/
pile[v[22]]=101; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(101,jvj+29,jvj+30)*/
if((x[jvj+30]==1749)) goto l24;
l15:x[jvj+24]=t[x[jvj+24]];
goto l13;
l17:x[jvj+32]=s[x[jvj+31]] ;z[jvj+32]=(x[jvj+32]<=sepcte) ? x[jvj+32] : z[jvj+31];
pile[v[22]]=1794; pile[WZ1]=jvj+32; pile[WZ2]=jvj+33; 
(*f[492])( );     /*FIGURE0(1794,jvj+32,jvj+33)*/
if((x[jvj+33]==135)) goto l24;
x[jvj+31]=t[x[jvj+31]];
goto l16;
l19:x[jvj+38]=s[x[jvj+36]] ;z[jvj+38]=(x[jvj+38]<=sepcte) ? x[jvj+38] : z[jvj+36];
for(a=x[jvj+35];a>0;a=t[a]) if(s[a]==x[jvj+38]) goto l20;
pile[v[22]]=jvj+37; pile[WZ1]=jvj+38; 
(*f[68])( );     /*PLUE0(jvj+37,jvj+38)*/
l20:x[jvj+36]=t[x[jvj+36]];
goto l18;
l22:if((V37<4)) goto l23;
goto l25;
l23:V47=x[N];
V50=x[jvj+37];
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V43)*/
V43=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V43; pile[WZ2]=11786; 
(*f[98])( );     /*SRA3(135,V43,11786,V44)*/
V44=pile[WZ3]; 
pile[v[22]]=V44; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V44,125,V45)*/
V45=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V47; pile[WZ2]=V45; 
(*f[39])( );     /*SDX0(20,V47,V45,V46)*/
V46=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V46; pile[WZ2]=846; 
(*f[42])( );     /*SRA1(135,V46,846,V48)*/
V48=pile[WZ3]; 
pile[v[22]]=23; pile[WZ1]=V50; pile[WZ2]=V48; 
(*f[39])( );     /*SDX0(23,V50,V48,V49)*/
V49=pile[WZ3]; 
pile[v[22]]=V49; 
(*f[40])( );     /*SLG0(V49)*/
if((V37!=2)) goto l25;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l25;
}

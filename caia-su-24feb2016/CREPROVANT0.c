#include "dx.h"
void CREPROVANT0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V10=0,V2=0,V4=0,V33=0,V34=0,V35=0,V19=0,V26=0,V32=0;
int N,ND;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=36;
x[jvj+1]=11536;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==559&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
N=pile[v[22]]; ND=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+9]=x[jvj+8]=incon;
x[jvj+4]=vo[48];z[jvj+4]=vz[48];
pile[v[22]]=578; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(578,jvj+4,jvj+5)*/
l4:if((x[jvj+5]<=0)) goto l1;
x[jvj+6]=s[x[jvj+5]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+5];
pile[v[22]]=218; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(218,jvj+6,jvj+7)*/
if((x[jvj+7]!=x[N])) goto l5;
x[jvj+9]=x[jvj+6] ;z[jvj+9]=z[jvj+6];
l1:pile[v[22]]=645; pile[WZ1]=597; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(645,597,jvj+2)*/
l2:if((x[jvj+2]<=0)) goto l6;
x[jvj+3]=s[x[jvj+2]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+2];
pile[v[22]]=683; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(683,jvj+3,V10)*/
V10=pile[WZ2]; 
if((V10!=ND)) goto l3;
pile[v[22]]=934; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(934,jvj+3,jvj+8)*/
l6:if(x[jvj+9]!=incon) goto l7;
l12:pile[v[22]]=20; pile[WZ1]=11536; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,11536,0,V33)*/
V33=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V33; pile[WZ2]=986; 
(*f[42])( );     /*SRA1(135,V33,986,V34)*/
V34=pile[WZ3]; 
pile[WZ1]=V34; pile[WZ2]=178; 
(*f[42])( );     /*SRA1(135,V34,178,V35)*/
V35=pile[WZ3]; 
pile[v[22]]=V35; 
(*f[40])( );     /*SLG0(V35)*/
l28:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
l3:x[jvj+2]=t[x[jvj+2]];
goto l2;
l5:x[jvj+5]=t[x[jvj+5]];
goto l4;
l7:if(x[jvj+8]!=incon) goto l8;
goto l12;
l8:pile[v[22]]=934; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(934,jvj+9,jvj+10)*/
if((x[jvj+10]!=x[jvj+8])) goto l12;
x[jvj+17]=x[jvj+8] ;z[jvj+17]=z[jvj+8];
pile[v[22]]=1538; pile[WZ1]=N; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(1538,N,jvj+11)*/
l9:if((x[jvj+11]>0)) goto l10;
pile[v[22]]=159; pile[WZ1]=jvj+9; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(159,jvj+9,jvj+18)*/
l13:if((x[jvj+18]>0)) goto l14;
pile[v[22]]=N; pile[WZ1]=ND; pile[WZ2]=jvj+17; 
(*f[920])( );     /*MENAGEPROVANT0(N,ND,jvj+17)*/
(*f[921])( );     /*SORPROVANT1(N,ND,jvj+17)*/
pile[v[22]]=1538; pile[WZ1]=N; pile[WZ2]=jvj+22; 
(*f[33])( );     /*FNDE0(1538,N,jvj+22)*/
l19:if((x[jvj+22]<=0)) goto l28;
x[jvj+23]=s[x[jvj+22]] ;z[jvj+23]=(x[jvj+23]<=sepcte) ? x[jvj+23] : z[jvj+22];
pile[v[22]]=683; pile[WZ1]=jvj+23; 
(*f[26])( );if(v[102]) goto l20;     /*FNDC0(683,jvj+23,V26)*/
V26=pile[WZ2]; 
if((V26!=ND)) goto l20;
pile[v[22]]=934; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(934,jvj+23,jvj+24)*/
if((x[jvj+24]!=x[jvj+17])) goto l20;
pile[v[22]]=159; pile[WZ2]=jvj+25; 
(*f[33])( );     /*FNDE0(159,jvj+23,jvj+25)*/
x[jvj+34]=x[jvj+25] ;z[jvj+34]=z[jvj+25];
l21:if((x[jvj+34]<=0)) goto l20;
x[jvj+26]=s[x[jvj+34]] ;z[jvj+26]=(x[jvj+26]<=sepcte) ? x[jvj+26] : z[jvj+34];
pile[v[22]]=1544; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[33])( );     /*FNDE0(1544,jvj+26,jvj+27)*/
pile[v[22]]=1489; pile[WZ2]=jvj+28; 
(*f[33])( );     /*FNDE0(1489,jvj+26,jvj+28)*/
x[jvj+35]=x[jvj+27] ;z[jvj+35]=z[jvj+27];
l22:if((x[jvj+35]>0)) goto l23;
x[jvj+34]=t[x[jvj+34]];
goto l21;
l10:x[jvj+12]=s[x[jvj+11]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+11];
pile[v[22]]=683; pile[WZ1]=jvj+12; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(683,jvj+12,V2)*/
V2=pile[WZ2]; 
if((V2!=ND)) goto l11;
pile[v[22]]=934; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(934,jvj+12,jvj+13)*/
if((x[jvj+13]!=x[jvj+17])) goto l11;
V4=x[jvj+12];
pile[v[22]]=1538; pile[WZ1]=N; pile[WZ2]=V4; 
(*f[134])( );     /*OTA0(1538,N,V4)*/
l11:x[jvj+11]=t[x[jvj+11]];
goto l9;
l14:x[jvj+14]=s[x[jvj+18]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+18];
pile[v[22]]=110; pile[WZ1]=jvj+14; 
(*f[44])( );if(v[102]) goto l15;     /*FNDC1(110,jvj+14,V19)*/
V19=pile[WZ2]; 
pile[v[22]]=288; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(288,jvj+14,jvj+19)*/
pile[v[22]]=986; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(986,jvj+14,jvj+20)*/
pile[v[22]]=N; pile[WZ1]=jvj+17; pile[WZ2]=ND; pile[WZ3]=V19; pile[WZ4]=jvj+19; pile[WZ5]=jvj+20; 
(*f[919])( );     /*AJOUPROVANT0(N,jvj+17,ND,V19,jvj+19,jvj+20)*/
l16:pile[v[22]]=256; pile[WZ1]=jvj+14; pile[WZ2]=jvj+21; 
(*f[33])( );     /*FNDE0(256,jvj+14,jvj+21)*/
x[jvj+33]=x[jvj+21] ;z[jvj+33]=z[jvj+21];
l17:if((x[jvj+33]<=0)) goto l15;
x[jvj+16]=s[x[jvj+33]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+33];
pile[v[22]]=jvj+14; pile[WZ1]=N; pile[WZ2]=jvj+16; pile[WZ3]=jvj+17; pile[WZ4]=ND; pile[WZ5]=V19; pile[v[22]+6]=jvj+19; 
(*f[917])( );     /*PRIELTS0(jvj+14,N,jvj+16,jvj+17,ND,V19,jvj+19)*/
pile[v[22]]=986; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(986,jvj+14,jvj+15)*/
if((x[jvj+15]==616)) goto l18;
pile[v[22]]=jvj+14; pile[WZ1]=N; pile[WZ2]=jvj+16; pile[WZ3]=jvj+17; pile[WZ4]=ND; 
(*f[918])( );     /*CREPROVANTA0(jvj+14,N,jvj+16,jvj+17,ND)*/
l18:x[jvj+33]=t[x[jvj+33]];
goto l17;
l15:x[jvj+18]=t[x[jvj+18]];
goto l13;
l20:x[jvj+22]=t[x[jvj+22]];
goto l19;
l23:x[jvj+29]=s[x[jvj+35]] ;z[jvj+29]=(x[jvj+29]<=sepcte) ? x[jvj+29] : z[jvj+35];
V32=x[jvj+29];
pile[v[22]]=102; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(102,jvj+29,jvj+30)*/
x[jvj+36]=x[jvj+28] ;z[jvj+36]=z[jvj+28];
l25:if((x[jvj+36]<=0)) goto l24;
x[jvj+31]=s[x[jvj+36]] ;z[jvj+31]=(x[jvj+31]<=sepcte) ? x[jvj+31] : z[jvj+36];
pile[v[22]]=jvj+31; pile[WZ1]=jvj+30; pile[WZ2]=jvj+32; 
(*f[760])( );     /*MEMEX0(jvj+31,jvj+30,jvj+32)*/
if((x[jvj+32]==135)) goto l27;
l26:x[jvj+36]=t[x[jvj+36]];
goto l25;
l24:x[jvj+35]=t[x[jvj+35]];
goto l22;
l27:pile[v[22]]=1544; pile[WZ1]=jvj+26; pile[WZ2]=V32; 
(*f[134])( );     /*OTA0(1544,jvj+26,V32)*/
goto l26;
}

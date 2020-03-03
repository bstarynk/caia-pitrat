#include "dx.h"
void EXAPBR0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V5=0,V8=0,V12=0,V13=0,V14=0,V17=0,V18=0,V20=0,V19=0,V26=0,V22=0,V23=0,V24=0,V25=0,V28=0,V29=0,V30=0,V32=0,V33=0,V34=0,V36=0,V37=0,V39=0,V40=0,V41=0,V42=0,V44=0,V45=0,V47=0,V60=0,V59=0;
int E;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=29;
x[jvj+1]=11232;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==519&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
E=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=0; pile[WZ1]=936; pile[WZ2]=jvj+17; 
(*f[46])( );     /*TRI0(0,936,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=0; pile[WZ2]=876; pile[WZ3]=jvj+18; 
(*f[189])( );     /*TRI4(jvj+17,0,876,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ2]=515; pile[WZ3]=jvj+19; 
(*f[189])( );     /*TRI4(jvj+18,0,515,jvj+19)*/
pile[v[22]]=117; pile[WZ2]=510; pile[WZ3]=0; pile[WZ4]=jvj+19; pile[WZ5]=jvj+15; 
(*f[190])( );     /*QUADRI3(117,0,510,0,jvj+19,jvj+15)*/
x[jvj+28]=x[E] ;z[jvj+28]=z[E];
l11:if((x[jvj+28]>0)) goto l12;
pile[v[22]]=117; pile[WZ1]=jvj+15; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(117,jvj+15,V26)*/
V26=pile[WZ2]; 
pile[v[22]]=515; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(515,jvj+15,V22)*/
V22=pile[WZ2]; 
pile[v[22]]=936; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(936,jvj+15,V23)*/
V23=pile[WZ2]; 
pile[v[22]]=510; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(510,jvj+15,V24)*/
V24=pile[WZ2]; 
pile[v[22]]=876; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(876,jvj+15,V25)*/
V25=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=1085; 
(*f[42])( );     /*SRA1(135,0,1085,V28)*/
V28=pile[WZ3]; 
pile[WZ1]=V28; pile[WZ2]=301; 
(*f[42])( );     /*SRA1(135,V28,301,V29)*/
V29=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V26; pile[WZ2]=V29; 
(*f[39])( );     /*SDX0(41,V26,V29,V30)*/
V30=pile[WZ3]; 
pile[v[22]]=V30; pile[WZ1]=(-4670); 
(*f[37])( );     /*SRA0(V30,(-4670),V20)*/
V20=pile[WZ2]; 
V19=incon;
if((V26>1)) goto l15;
V19=V20;
l16:pile[v[22]]=135; pile[WZ1]=V19; pile[WZ2]=876; 
(*f[42])( );     /*SRA1(135,V19,876,V32)*/
V32=pile[WZ3]; 
pile[v[22]]=V32; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V32,58,V33)*/
V33=pile[WZ2]; 
pile[v[22]]=V33; pile[WZ1]=V25; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V33,V25,41,V34)*/
V34=pile[WZ3]; 
pile[v[22]]=V34; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V34,40,V36)*/
V36=pile[WZ2]; 
pile[v[22]]=V36; pile[WZ1]=V24; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V36,V24,41,V37)*/
V37=pile[WZ3]; 
pile[v[22]]=V37; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V37,41,V39)*/
V39=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V39; pile[WZ2]=936; 
(*f[42])( );     /*SRA1(135,V39,936,V40)*/
V40=pile[WZ3]; 
pile[v[22]]=V40; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V40,58,V41)*/
V41=pile[WZ2]; 
pile[v[22]]=V41; pile[WZ1]=V23; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V41,V23,41,V42)*/
V42=pile[WZ3]; 
pile[v[22]]=V42; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V42,40,V44)*/
V44=pile[WZ2]; 
pile[v[22]]=V44; pile[WZ1]=V22; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V44,V22,41,V45)*/
V45=pile[WZ3]; 
pile[v[22]]=V45; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V45,41,V47)*/
V47=pile[WZ2]; 
pile[v[22]]=V47; 
(*f[40])( );     /*SLG0(V47)*/
l17:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l3:x[jvj+6]=s[x[jvj+25]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+25];
pile[v[22]]=683; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(683,jvj+6,V5)*/
V5=pile[WZ2]; 
if((V5!=3)) goto l4;
pile[v[22]]=860; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(860,jvj+6,jvj+7)*/
if((x[jvj+7]!=1085)) goto l4;
if((x[jvj+14]!=0)) goto l10;
pile[v[22]]=jvj+15; pile[WZ1]=876; pile[WZ2]=V13; 
(*f[186])( );     /*BTC0(jvj+15,876,V13)*/
pile[WZ1]=936; pile[WZ2]=V14; 
(*f[186])( );     /*BTC0(jvj+15,936,V14)*/
l10:if((x[jvj+14]<=0)) goto l14;
x[jvj+16]=s[x[jvj+14]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+14];
pile[v[22]]=876; pile[WZ1]=jvj+16; 
(*f[26])( );if(v[102]) goto l14;     /*FNDC0(876,jvj+16,V17)*/
V17=pile[WZ2]; 
pile[v[22]]=936; 
(*f[26])( );if(v[102]) goto l14;     /*FNDC0(936,jvj+16,V18)*/
V18=pile[WZ2]; 
pile[v[22]]=jvj+15; pile[WZ1]=876; pile[WZ2]=V17; 
(*f[186])( );     /*BTC0(jvj+15,876,V17)*/
pile[WZ1]=936; pile[WZ2]=V18; 
(*f[186])( );     /*BTC0(jvj+15,936,V18)*/
l14:pile[v[22]]=jvj+15; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+15,117,1)*/
pile[WZ1]=510; pile[WZ2]=V13; 
(*f[186])( );     /*BTC0(jvj+15,510,V13)*/
pile[WZ1]=515; pile[WZ2]=V14; 
(*f[186])( );     /*BTC0(jvj+15,515,V14)*/
l13:x[jvj+28]=t[x[jvj+28]];
goto l11;
l4:x[jvj+25]=t[x[jvj+25]];
l2:if((x[jvj+25]>0)) goto l3;
x[jvj+2]=t[x[jvj+2]];
l1:if((x[jvj+2]<=0)) goto l13;
x[jvj+3]=s[x[jvj+2]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+2];
pile[v[22]]=jvj+3; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(jvj+3,jvj+4,jvj+5)*/
x[jvj+25]=x[jvj+5] ;z[jvj+25]=z[jvj+5];
goto l2;
l6:x[jvj+26]=t[x[jvj+26]];
l5:if((x[jvj+26]<=0)) goto l13;
x[jvj+9]=s[x[jvj+26]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+26];
pile[v[22]]=683; pile[WZ1]=jvj+9; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(683,jvj+9,V8)*/
V8=pile[WZ2]; 
if((V8!=3)) goto l6;
pile[v[22]]=860; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(860,jvj+9,jvj+10)*/
if((x[jvj+10]!=530)) goto l6;
pile[v[22]]=876; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(876,jvj+9,V13)*/
V13=pile[WZ2]; 
pile[v[22]]=936; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(936,jvj+9,V14)*/
V14=pile[WZ2]; 
x[jvj+14]=0 ;z[jvj+14]=0;
pile[v[22]]=944; pile[WZ1]=jvj+4; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(944,jvj+4,jvj+11)*/
x[jvj+27]=x[jvj+11] ;z[jvj+27]=z[jvj+11];
l7:if((x[jvj+27]>0)) goto l8;
x[jvj+2]=d[58];z[jvj+2]=0;
goto l1;
l8:x[jvj+12]=s[x[jvj+27]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+27];
pile[v[22]]=683; pile[WZ1]=jvj+12; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(683,jvj+12,V12)*/
V12=pile[WZ2]; 
if((V12!=3)) goto l9;
pile[v[22]]=860; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(860,jvj+12,jvj+13)*/
if((x[jvj+13]!=1085)) goto l9;
pile[v[22]]=jvj+14; 
(*f[68])( );     /*PLUE0(jvj+14,jvj+12)*/
l9:x[jvj+27]=t[x[jvj+27]];
goto l7;
l12:x[jvj+20]=s[x[jvj+28]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+28];
pile[v[22]]=109; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(109,jvj+20,jvj+21)*/
pile[v[22]]=983; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(983,jvj+21,jvj+22)*/
pile[v[22]]=878; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[33])( );     /*FNDE0(878,jvj+22,jvj+23)*/
l18:if((x[jvj+23]<=0)) goto l13;
x[jvj+24]=s[x[jvj+23]] ;z[jvj+24]=(x[jvj+24]<=sepcte) ? x[jvj+24] : z[jvj+23];
pile[v[22]]=163; pile[WZ1]=jvj+24; 
(*f[44])( );if(v[102]) goto l19;     /*FNDC1(163,jvj+24,V60)*/
V60=pile[WZ2]; 
pile[WZ1]=jvj+20; 
(*f[44])( );if(v[102]) goto l19;     /*FNDC1(163,jvj+20,V59)*/
V59=pile[WZ2]; 
if((V60==V59)) goto l19;
x[jvj+23]=t[x[jvj+23]];
goto l18;
l15:pile[v[22]]=V20; pile[WZ1]=83; 
(*f[38])( );     /*SPC0(V20,83,V19)*/
V19=pile[WZ2]; 
goto l16;
l19:x[jvj+29]=x[jvj+24] ;z[jvj+29]=z[jvj+24];
x[jvj+4]=x[jvj+29] ;z[jvj+4]=z[jvj+29];
pile[v[22]]=944; pile[WZ1]=jvj+4; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(944,jvj+4,jvj+8)*/
x[jvj+26]=x[jvj+8] ;z[jvj+26]=z[jvj+8];
goto l5;
}

#include "dx.h"
void EXAPBH1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V12=0,V13=0,V14=0,V15=0,V16=0,V17=0,V24=0,V23=0,V7=0,V27=0,V28=0,V38=0,V37=0;
int E,EC,RL;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=35;
x[jvj+1]=11190;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==1193&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
E=pile[v[22]]; EC=pile[v[22]+1]; RL=pile[v[22]+2]; v[22]+=3; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+29]=0 ;z[jvj+29]=0;
x[jvj+23]=x[jvj+29] ;z[jvj+23]=z[jvj+29];
x[jvj+24]=301 ;z[jvj+24]=301;
x[jvj+33]=x[E] ;z[jvj+33]=z[E];
l21:if((x[jvj+33]>0)) goto l22;
pile[v[22]]=jvj+23; pile[WZ1]=547; pile[WZ2]=954; pile[WZ3]=jvj+24; pile[WZ4]=RL; 
(*f[854])( );     /*EXAPBMSG1(jvj+23,547,954,jvj+24,RL)*/
l25:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=3; return;
l4:pile[v[22]]=jvj+5; pile[WZ1]=EC; pile[WZ2]=jvj+8; 
(*f[505])( );     /*EVCOND0(jvj+5,EC,jvj+8)*/
if((x[jvj+8]==135)) goto l8;
l3:x[jvj+30]=t[x[jvj+30]];
l2:if((x[jvj+30]<=0)) goto l23;
x[jvj+5]=s[x[jvj+30]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+30];
pile[v[22]]=860; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(860,jvj+5,jvj+6)*/
if((x[jvj+6]!=954)) goto l3;
pile[v[22]]=935; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(935,jvj+5,jvj+7)*/
if((x[RL]!=996)) goto l1;
if((x[jvj+7]==936)) goto l4;
l1:if((x[jvj+7]==325)) goto l4;
goto l3;
l5:pile[v[22]]=936; pile[WZ1]=jvj+9; 
(*f[26])( );if(v[102]) goto l23;     /*FNDC0(936,jvj+9,V12)*/
V12=pile[WZ2]; 
pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l23;     /*FNDC0(936,jvj+5,V13)*/
V13=pile[WZ2]; 
if(V12<((V13*9)/10)-2) goto l18;
l23:x[jvj+33]=t[x[jvj+33]];
goto l21;
l6:if((x[jvj+9]==250)) goto l18;
pile[v[22]]=936; pile[WZ1]=jvj+9; 
(*f[26])( );if(v[102]) goto l23;     /*FNDC0(936,jvj+9,V16)*/
V16=pile[WZ2]; 
pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l23;     /*FNDC0(936,jvj+5,V17)*/
V17=pile[WZ2]; 
if(V16>((V17*11)/10)+2) goto l18;
goto l23;
l8:x[jvj+35]=incon;
pile[v[22]]=944; pile[WZ1]=jvj+3; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(944,jvj+3,jvj+16)*/
x[jvj+32]=x[jvj+16] ;z[jvj+32]=z[jvj+16];
l11:if((x[jvj+32]>0)) goto l12;
x[jvj+35]=250 ;z[jvj+35]=250;
l24:x[jvj+9]=x[jvj+35] ;z[jvj+9]=z[jvj+35];
if((x[jvj+9]!=250)) goto l7;
pile[v[22]]=935; pile[WZ1]=jvj+5; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(935,jvj+5,jvj+10)*/
if((x[jvj+10]==936)) goto l23;
l7:if((x[RL]==995)) goto l6;
if((x[RL]==996)) goto l5;
if((x[RL]!=1012)) goto l23;
pile[v[22]]=936; pile[WZ1]=jvj+9; 
(*f[26])( );if(v[102]) goto l23;     /*FNDC0(936,jvj+9,V14)*/
V14=pile[WZ2]; 
pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l23;     /*FNDC0(936,jvj+5,V15)*/
V15=pile[WZ2]; 
if((V14<=((V15*11)/10)+2)&&(V14>=((V15*9)/10)-2)) goto l18;
goto l23;
l12:x[jvj+11]=s[x[jvj+32]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+32];
pile[v[22]]=935; pile[WZ1]=jvj+11; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(935,jvj+11,jvj+17)*/
if((x[jvj+17]!=547)) goto l13;
pile[v[22]]=860; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(860,jvj+11,jvj+18)*/
if(x[jvj+18]!=530&&x[jvj+18]!=1085) goto l13;
pile[v[22]]=936; 
(*f[26])( );if(v[102]) goto l14;     /*FNDC0(936,jvj+11,V24)*/
V24=pile[WZ2]; 
x[jvj+31]=x[jvj+16] ;z[jvj+31]=z[jvj+16];
l9:if((x[jvj+31]<=0)) goto l14;
x[jvj+12]=s[x[jvj+31]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+31];
pile[v[22]]=935; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(935,jvj+12,jvj+13)*/
if((x[jvj+13]!=547)) goto l10;
pile[v[22]]=860; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(860,jvj+12,jvj+14)*/
if(x[jvj+14]!=530&&x[jvj+14]!=1085) goto l10;
pile[v[22]]=936; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(936,jvj+12,V23)*/
V23=pile[WZ2]; 
if((V23>=V24)) goto l10;
pile[v[22]]=jvj+12; pile[WZ1]=EC; pile[WZ2]=jvj+15; 
(*f[505])( );     /*EVCOND0(jvj+12,EC,jvj+15)*/
if((x[jvj+15]==135)) goto l13;
l10:x[jvj+31]=t[x[jvj+31]];
goto l9;
l14:pile[v[22]]=jvj+11; pile[WZ1]=EC; pile[WZ2]=jvj+19; 
(*f[505])( );     /*EVCOND0(jvj+11,EC,jvj+19)*/
if((x[jvj+19]==135)) goto l15;
l13:x[jvj+32]=t[x[jvj+32]];
goto l11;
l15:x[jvj+35]=x[jvj+11] ;z[jvj+35]=z[jvj+11];
goto l24;
l16:V7=999999;
l19:pile[v[22]]=jvj+22; pile[WZ1]=jvj+21; 
(*f[378])( );     /*CPI0(jvj+22,jvj+21)*/
if((x[jvj+9]==250)) goto l17;
pile[v[22]]=935; pile[WZ1]=jvj+5; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(935,jvj+5,jvj+20)*/
if((x[jvj+20]==936)) goto l17;
l20:pile[v[22]]=jvj+23; pile[WZ1]=jvj+21; 
(*f[68])( );     /*PLUE0(jvj+23,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=510; pile[WZ2]=V7; 
(*f[43])( );     /*CHGC2(jvj+21,510,V7)*/
pile[WZ1]=515; pile[WZ2]=V28; 
(*f[43])( );     /*CHGC2(jvj+21,515,V28)*/
pile[WZ1]=145; pile[WZ2]=RL; 
(*f[35])( );     /*CHGC1(jvj+21,145,RL)*/
goto l23;
l17:pile[v[22]]=jvj+21; pile[WZ1]=117; pile[WZ2]=10; 
(*f[43])( );     /*CHGC2(jvj+21,117,10)*/
goto l20;
l18:pile[v[22]]=936; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l23;     /*FNDC0(936,jvj+5,V28)*/
V28=pile[WZ2]; 
V7=incon;
if((x[jvj+9]==250)) goto l16;
pile[WZ1]=jvj+9; 
(*f[26])( );if(v[102]) goto l23;     /*FNDC0(936,jvj+9,V27)*/
V27=pile[WZ2]; 
V7=V27;
goto l19;
l22:x[jvj+22]=s[x[jvj+33]] ;z[jvj+22]=(x[jvj+22]<=sepcte) ? x[jvj+22] : z[jvj+33];
pile[v[22]]=109; pile[WZ1]=jvj+22; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(109,jvj+22,jvj+25)*/
pile[v[22]]=983; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(983,jvj+25,jvj+26)*/
pile[v[22]]=878; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[33])( );     /*FNDE0(878,jvj+26,jvj+27)*/
l26:if((x[jvj+27]<=0)) goto l23;
x[jvj+28]=s[x[jvj+27]] ;z[jvj+28]=(x[jvj+28]<=sepcte) ? x[jvj+28] : z[jvj+27];
pile[v[22]]=163; pile[WZ1]=jvj+28; 
(*f[44])( );if(v[102]) goto l27;     /*FNDC1(163,jvj+28,V38)*/
V38=pile[WZ2]; 
pile[WZ1]=jvj+22; 
(*f[44])( );if(v[102]) goto l27;     /*FNDC1(163,jvj+22,V37)*/
V37=pile[WZ2]; 
if((V38==V37)) goto l27;
x[jvj+27]=t[x[jvj+27]];
goto l26;
l27:x[jvj+34]=x[jvj+28] ;z[jvj+34]=z[jvj+28];
x[jvj+3]=x[jvj+34] ;z[jvj+3]=z[jvj+34];
pile[v[22]]=944; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(944,jvj+3,jvj+4)*/
x[jvj+30]=x[jvj+4] ;z[jvj+30]=z[jvj+4];
goto l2;
}

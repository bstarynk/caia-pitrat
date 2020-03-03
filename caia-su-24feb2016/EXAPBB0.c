#include "dx.h"
void EXAPBB0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V9=0,NX=0,V5=0,V10=0,V20=0,V19=0,V13=0,V23=0,V25=0,V26=0,V38=0,V37=0;
int E,EC,UR;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=40;
x[jvj+1]=11192;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==514&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
E=pile[v[22]]; EC=pile[v[22]+1]; UR=pile[v[22]+2]; v[22]+=3; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+29]=incon;
x[jvj+35]=0 ;z[jvj+35]=0;
x[jvj+21]=x[jvj+35] ;z[jvj+21]=z[jvj+35];
if((UR==65)) goto l1;
if((UR==68)) goto l2;
if((UR==73)) goto l3;
if((UR==84)) goto l4;
if((UR==69)) goto l5;
if((UR==66)) goto l6;
if((UR!=67)) goto l30;
x[jvj+29]=1102 ;z[jvj+29]=1102;
l30:x[jvj+30]=301 ;z[jvj+30]=301;
if(x[jvj+29]!=incon) goto l7;
l39:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; return;
l1:x[jvj+29]=1082 ;z[jvj+29]=1082;
goto l30;
l2:x[jvj+29]=336 ;z[jvj+29]=336;
goto l30;
l3:x[jvj+29]=901 ;z[jvj+29]=901;
goto l30;
l4:x[jvj+29]=301 ;z[jvj+29]=301;
goto l30;
l5:x[jvj+29]=1085 ;z[jvj+29]=1085;
goto l30;
l6:x[jvj+29]=84 ;z[jvj+29]=84;
goto l30;
l7:x[jvj+27]=incon;
if(x[jvj+29]==1082||x[jvj+29]==336||x[jvj+29]==301) goto l8;
x[jvj+27]=250 ;z[jvj+27]=250;
l33:x[jvj+38]=x[E] ;z[jvj+38]=z[E];
l31:if((x[jvj+38]>0)) goto l32;
pile[v[22]]=jvj+21; pile[WZ1]=978; pile[WZ2]=jvj+29; pile[WZ3]=jvj+30; pile[WZ4]=88; 
(*f[848])( );     /*EXAPBMSG0(jvj+21,978,jvj+29,jvj+30,88)*/
goto l39;
l8:x[jvj+27]=683 ;z[jvj+27]=683;
goto l33;
l10:V5=V10;
l28:pile[v[22]]=jvj+23; pile[WZ1]=jvj+14; 
(*f[378])( );     /*CPI0(jvj+23,jvj+14)*/
x[jvj+11]=d[56];z[jvj+11]=0;
l18:if((x[jvj+11]>0)) goto l19;
x[jvj+15]=d[57];z[jvj+15]=0;
l21:if((x[jvj+15]>0)) goto l22;
if(x[jvj+17]!=1049&&x[jvj+17]!=658&&x[jvj+17]!=195) goto l24;
pile[v[22]]=jvj+17; pile[WZ1]=jvj+2; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(jvj+17,jvj+2,jvj+18)*/
if((x[jvj+18]==0)) goto l24;
pile[v[22]]=jvj+14; pile[WZ1]=jvj+17; 
(*f[34])( );     /*CHGC0(jvj+14,jvj+17,jvj+18)*/
l24:pile[v[22]]=1025; pile[WZ1]=jvj+2; pile[WZ2]=jvj+19; 
(*f[33])( );     /*FNDE0(1025,jvj+2,jvj+19)*/
x[jvj+36]=x[jvj+19] ;z[jvj+36]=z[jvj+19];
if((x[jvj+36]==0)) goto l15;
x[jvj+6]=0 ;z[jvj+6]=0;
l12:if((x[jvj+36]>0)) goto l13;
pile[v[22]]=jvj+14; pile[WZ1]=1025; pile[WZ2]=jvj+6; 
(*f[34])( );     /*CHGC0(jvj+14,1025,jvj+6)*/
l15:pile[v[22]]=683; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l29;     /*FNDC0(683,jvj+2,V20)*/
V20=pile[WZ2]; 
pile[v[22]]=944; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(944,jvj+7,jvj+8)*/
x[jvj+37]=x[jvj+8] ;z[jvj+37]=z[jvj+8];
l16:if((x[jvj+37]<=0)) goto l29;
x[jvj+9]=s[x[jvj+37]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+37];
pile[v[22]]=683; pile[WZ1]=jvj+9; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(683,jvj+9,V19)*/
V19=pile[WZ2]; 
if((V19!=V20)) goto l17;
pile[v[22]]=860; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(860,jvj+9,jvj+10)*/
if((x[jvj+10]!=530)) goto l17;
pile[v[22]]=876; 
(*f[26])( );if(v[102]) goto l29;     /*FNDC0(876,jvj+9,V23)*/
V23=pile[WZ2]; 
pile[v[22]]=447; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(447,jvj+9,jvj+20)*/
pile[v[22]]=jvj+14; pile[WZ1]=447; 
(*f[35])( );     /*CHGC1(jvj+14,447,jvj+20)*/
pile[WZ1]=510; pile[WZ2]=V23; 
(*f[43])( );     /*CHGC2(jvj+14,510,V23)*/
l29:pile[v[22]]=jvj+14; pile[WZ1]=jvj+22; pile[WZ2]=V5; 
(*f[186])( );     /*BTC0(jvj+14,jvj+22,V5)*/
pile[WZ1]=459; pile[WZ2]=jvj+17; 
(*f[35])( );     /*CHGC1(jvj+14,459,jvj+17)*/
pile[v[22]]=1000; pile[WZ1]=jvj+14; 
(*f[26])( );if(v[102]) goto l25;     /*FNDC0(1000,jvj+14,V25)*/
V25=pile[WZ2]; 
if((V25>0)) goto l26;
l25:pile[v[22]]=1041; pile[WZ1]=jvj+14; 
(*f[26])( );if(v[102]) goto l38;     /*FNDC0(1041,jvj+14,V26)*/
V26=pile[WZ2]; 
if((V26>0)) goto l26;
l38:x[jvj+40]=t[x[jvj+40]];
l36:if((x[jvj+40]>0)) goto l37;
x[jvj+24]=t[x[jvj+24]];
l35:if((x[jvj+24]<=0)) goto l34;
x[jvj+17]=s[x[jvj+24]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+24];
pile[v[22]]=jvj+17; pile[WZ1]=jvj+7; pile[WZ2]=jvj+25; 
(*f[33])( );     /*FNDE0(jvj+17,jvj+7,jvj+25)*/
x[jvj+40]=x[jvj+25] ;z[jvj+40]=z[jvj+25];
goto l36;
l11:V5=1;
goto l28;
l13:x[jvj+4]=s[x[jvj+36]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+36];
pile[v[22]]=698; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(698,jvj+4,jvj+5)*/
pile[v[22]]=jvj+6; pile[WZ1]=jvj+5; 
(*f[68])( );     /*PLUE0(jvj+6,jvj+5)*/
l14:x[jvj+36]=t[x[jvj+36]];
goto l12;
l17:x[jvj+37]=t[x[jvj+37]];
goto l16;
l19:x[jvj+12]=s[x[jvj+11]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+11];
pile[v[22]]=jvj+12; pile[WZ1]=jvj+2; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(jvj+12,jvj+2,jvj+13)*/
pile[v[22]]=jvj+14; pile[WZ1]=jvj+12; 
(*f[35])( );     /*CHGC1(jvj+14,jvj+12,jvj+13)*/
l20:x[jvj+11]=t[x[jvj+11]];
goto l18;
l22:x[jvj+16]=s[x[jvj+15]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+15];
pile[v[22]]=jvj+16; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l23;     /*FNDC0(jvj+16,jvj+2,V13)*/
V13=pile[WZ2]; 
pile[v[22]]=jvj+14; pile[WZ1]=jvj+16; pile[WZ2]=V13; 
(*f[43])( );     /*CHGC2(jvj+14,jvj+16,V13)*/
l23:x[jvj+15]=t[x[jvj+15]];
goto l21;
l26:pile[v[22]]=jvj+21; pile[WZ1]=jvj+14; 
(*f[68])( );     /*PLUE0(jvj+21,jvj+14)*/
goto l38;
l27:pile[v[22]]=893; pile[WZ1]=jvj+2; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(893,jvj+2,jvj+22)*/
V5=incon;
pile[v[22]]=405; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(405,jvj+2,V9)*/
V9=pile[WZ2]; 
NX=V9;
V5=NX;
l9:pile[v[22]]=1049; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(1049,jvj+2,jvj+3)*/
for(i=x[jvj+3],V10=0;i>0;i=t[i],V10++)  ;
if((V10>0)) goto l10;
if(V5==incon) goto l11;
goto l28;
l32:x[jvj+23]=s[x[jvj+38]] ;z[jvj+23]=(x[jvj+23]<=sepcte) ? x[jvj+23] : z[jvj+38];
pile[v[22]]=109; pile[WZ1]=jvj+23; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(109,jvj+23,jvj+31)*/
pile[v[22]]=983; pile[WZ1]=jvj+31; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(983,jvj+31,jvj+32)*/
pile[v[22]]=878; pile[WZ1]=jvj+32; pile[WZ2]=jvj+33; 
(*f[33])( );     /*FNDE0(878,jvj+32,jvj+33)*/
l40:if((x[jvj+33]<=0)) goto l34;
x[jvj+34]=s[x[jvj+33]] ;z[jvj+34]=(x[jvj+34]<=sepcte) ? x[jvj+34] : z[jvj+33];
pile[v[22]]=163; pile[WZ1]=jvj+34; 
(*f[44])( );if(v[102]) goto l41;     /*FNDC1(163,jvj+34,V38)*/
V38=pile[WZ2]; 
pile[WZ1]=jvj+23; 
(*f[44])( );if(v[102]) goto l41;     /*FNDC1(163,jvj+23,V37)*/
V37=pile[WZ2]; 
if((V38==V37)) goto l41;
x[jvj+33]=t[x[jvj+33]];
goto l40;
l34:x[jvj+38]=t[x[jvj+38]];
goto l31;
l37:x[jvj+2]=s[x[jvj+40]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+40];
pile[v[22]]=860; pile[WZ1]=jvj+2; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(860,jvj+2,jvj+26)*/
if((x[jvj+26]!=x[jvj+29])) goto l38;
pile[v[22]]=jvj+2; pile[WZ1]=EC; pile[WZ2]=jvj+27; pile[WZ3]=jvj+28; 
(*f[849])( );     /*EVCOND1(jvj+2,EC,jvj+27,jvj+28)*/
if((x[jvj+28]==135)) goto l27;
goto l38;
l41:x[jvj+39]=x[jvj+34] ;z[jvj+39]=z[jvj+34];
x[jvj+7]=x[jvj+39] ;z[jvj+7]=z[jvj+39];
x[jvj+24]=d[58];z[jvj+24]=0;
goto l35;
}

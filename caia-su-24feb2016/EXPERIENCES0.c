#include "dx.h"
void EXPERIENCES0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V16=0,V17=0,V19=0,V20=0,V=0,V8=0,V7=0,V21=0,V32=0,V33=0,V37=0,V39=0,V41=0,V43=0,V14=0,V13=0,NK=0,V6=0,V44=0;
int NT;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=54;
x[jvj+1]=10877;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==878&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
NT=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
vv[183]=NT;
if((NT==1)) goto l1;
if((NT!=2)) goto l27;
pile[v[22]]=457; pile[WZ1]=324; pile[WZ2]=jvj+23; 
(*f[33])( );     /*FNDE0(457,324,jvj+23)*/
l10:if((x[jvj+23]<=0)) goto l27;
x[jvj+18]=s[x[jvj+23]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+23];
pile[v[22]]=983; pile[WZ1]=jvj+18; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(983,jvj+18,jvj+24)*/
pile[v[22]]=878; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[33])( );     /*FNDE0(878,jvj+24,jvj+25)*/
x[jvj+53]=x[jvj+25] ;z[jvj+53]=z[jvj+25];
l12:if((x[jvj+53]<=0)) goto l11;
x[jvj+17]=s[x[jvj+53]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+53];
pile[v[22]]=1107; pile[WZ1]=jvj+17; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(1107,jvj+17,jvj+26)*/
pile[v[22]]=878; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[33])( );     /*FNDE0(878,jvj+18,jvj+19)*/
x[jvj+52]=x[jvj+19] ;z[jvj+52]=z[jvj+19];
l8:if((x[jvj+52]<=0)) goto l13;
x[jvj+16]=s[x[jvj+52]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+52];
pile[v[22]]=163; pile[WZ1]=jvj+16; 
(*f[44])( );if(v[102]) goto l15;     /*FNDC1(163,jvj+16,V32)*/
V32=pile[WZ2]; 
pile[WZ1]=jvj+17; 
(*f[44])( );if(v[102]) goto l15;     /*FNDC1(163,jvj+17,V33)*/
V33=pile[WZ2]; 
if((V32==V33)) goto l15;
x[jvj+52]=t[x[jvj+52]];
goto l8;
l1:pile[v[22]]=457; pile[WZ1]=324; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(457,324,jvj+2)*/
l2:if((x[jvj+2]>0)) goto l3;
pile[v[22]]=457; pile[WZ1]=324; pile[WZ2]=jvj+29; 
(*f[33])( );     /*FNDE0(457,324,jvj+29)*/
l19:if((x[jvj+29]<=0)) goto l27;
x[jvj+10]=s[x[jvj+29]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+29];
pile[v[22]]=983; pile[WZ1]=jvj+10; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(983,jvj+10,jvj+30)*/
pile[v[22]]=878; pile[WZ1]=jvj+30; pile[WZ2]=jvj+31; 
(*f[33])( );     /*FNDE0(878,jvj+30,jvj+31)*/
pile[v[22]]=978; pile[WZ1]=1161; pile[WZ2]=jvj+42; 
(*f[54])( );     /*TRI1(978,1161,jvj+42)*/
pile[v[22]]=jvj+42; pile[WZ1]=607; pile[WZ2]=1002; pile[WZ3]=jvj+43; 
(*f[58])( );     /*TRI3(jvj+42,607,1002,jvj+43)*/
pile[v[22]]=jvj+43; pile[WZ1]=68; pile[WZ2]=978; pile[WZ3]=jvj+44; 
(*f[58])( );     /*TRI3(jvj+43,68,978,jvj+44)*/
pile[v[22]]=jvj+44; pile[WZ1]=67; pile[WZ2]=948; pile[WZ3]=jvj+45; 
(*f[58])( );     /*TRI3(jvj+44,67,948,jvj+45)*/
pile[v[22]]=jvj+45; pile[WZ1]=300; pile[WZ2]=936; pile[WZ3]=jvj+46; 
(*f[189])( );     /*TRI4(jvj+45,300,936,jvj+46)*/
pile[v[22]]=jvj+46; pile[WZ1]=530; pile[WZ2]=860; pile[WZ3]=jvj+47; 
(*f[58])( );     /*TRI3(jvj+46,530,860,jvj+47)*/
pile[v[22]]=jvj+47; pile[WZ1]=3; pile[WZ2]=683; pile[WZ3]=jvj+48; 
(*f[189])( );     /*TRI4(jvj+47,3,683,jvj+48)*/
pile[v[22]]=jvj+48; pile[WZ1]=50; pile[WZ2]=493; pile[WZ3]=jvj+49; 
(*f[189])( );     /*TRI4(jvj+48,50,493,jvj+49)*/
pile[v[22]]=109; pile[WZ1]=jvj+10; pile[WZ2]=117; pile[WZ3]=0; pile[WZ4]=jvj+49; pile[WZ5]=jvj+13; 
(*f[47])( );     /*QUADRI0(109,jvj+10,117,0,jvj+49,jvj+13)*/
V43=x[jvj+10];
x[jvj+54]=x[jvj+31] ;z[jvj+54]=z[jvj+31];
l21:if((x[jvj+54]<=0)) goto l20;
x[jvj+7]=s[x[jvj+54]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+54];
pile[v[22]]=944; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(944,jvj+7,jvj+8)*/
if((x[jvj+8]<=0)) goto l22;
x[jvj+12]=s[x[jvj+8]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+8];
pile[v[22]]=876; pile[WZ1]=jvj+12; 
(*f[26])( );if(v[102]) goto l22;     /*FNDC0(876,jvj+12,V14)*/
V14=pile[WZ2]; 
if((V14<=0)) goto l22;
if((V14!=1)) goto l23;
pile[v[22]]=493; 
(*f[26])( );if(v[102]) goto l23;     /*FNDC0(493,jvj+12,V19)*/
V19=pile[WZ2]; 
if((V19==0)) goto l22;
l23:pile[v[22]]=936; pile[WZ1]=jvj+12; 
(*f[26])( );if(v[102]) goto l22;     /*FNDC0(936,jvj+12,V13)*/
V13=pile[WZ2]; 
NK=V13;
if((NK>=200)) goto l22;
pile[v[22]]=493; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l22;     /*FNDC0(493,jvj+7,V6)*/
V6=pile[WZ2]; 
pile[v[22]]=878; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(878,jvj+10,jvj+11)*/
x[jvj+51]=x[jvj+11] ;z[jvj+51]=z[jvj+11];
l6:if((x[jvj+51]<=0)) goto l22;
x[jvj+9]=s[x[jvj+51]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+51];
pile[v[22]]=163; pile[WZ1]=jvj+9; 
(*f[44])( );if(v[102]) goto l24;     /*FNDC1(163,jvj+9,V16)*/
V16=pile[WZ2]; 
pile[WZ1]=jvj+7; 
(*f[44])( );if(v[102]) goto l24;     /*FNDC1(163,jvj+7,V17)*/
V17=pile[WZ2]; 
if((V16==V17)) goto l24;
x[jvj+51]=t[x[jvj+51]];
goto l6;
l3:x[jvj+3]=s[x[jvj+2]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+2];
pile[v[22]]=983; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(983,jvj+3,jvj+4)*/
pile[v[22]]=878; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(878,jvj+4,jvj+5)*/
x[jvj+50]=x[jvj+5] ;z[jvj+50]=z[jvj+5];
l5:if((x[jvj+50]<=0)) goto l4;
x[jvj+6]=s[x[jvj+50]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+50];
pile[v[22]]=1107; pile[WZ1]=jvj+6; 
(*f[71])( );     /*ENLV0(1107,jvj+6)*/
x[jvj+50]=t[x[jvj+50]];
goto l5;
l4:x[jvj+2]=t[x[jvj+2]];
goto l2;
l7:V7=V8;
l26:pile[v[22]]=41; pile[WZ1]=NK; pile[WZ2]=V7; 
(*f[39])( );     /*SDX0(41,NK,V7,V44)*/
V44=pile[WZ3]; 
pile[v[22]]=V44; 
(*f[40])( );     /*SLG0(V44)*/
l22:x[jvj+54]=t[x[jvj+54]];
goto l21;
l11:x[jvj+23]=t[x[jvj+23]];
goto l10;
l13:x[jvj+53]=t[x[jvj+53]];
goto l12;
l15:x[jvj+27]=x[jvj+26] ;z[jvj+27]=z[jvj+26];
l14:x[jvj+14]=x[jvj+27] ;z[jvj+14]=z[jvj+27];
pile[v[22]]=191; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(191,jvj+14,jvj+15)*/
if((x[jvj+15]==68)) goto l16;
l17:pile[v[22]]=698; pile[WZ1]=jvj+14; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(698,jvj+14,jvj+28)*/
pile[WZ1]=jvj+28; pile[WZ2]=1110; pile[WZ3]=1; pile[WZ4]=jvj+33; 
(*f[192])( );     /*QUADRI4(698,jvj+28,1110,1,jvj+33)*/
pile[v[22]]=978; pile[WZ1]=1161; pile[WZ2]=jvj+32; 
(*f[54])( );     /*TRI1(978,1161,jvj+32)*/
pile[v[22]]=jvj+33; pile[WZ1]=(-20); pile[WZ3]=1025; pile[WZ4]=jvj+34; 
(*f[298])( );     /*TRIENS1(jvj+33,(-20),jvj+32,1025,jvj+34)*/
pile[v[22]]=jvj+34; pile[WZ1]=607; pile[WZ2]=1002; pile[WZ3]=jvj+35; 
(*f[58])( );     /*TRI3(jvj+34,607,1002,jvj+35)*/
pile[v[22]]=jvj+35; pile[WZ1]=67; pile[WZ2]=978; pile[WZ3]=jvj+36; 
(*f[58])( );     /*TRI3(jvj+35,67,978,jvj+36)*/
pile[v[22]]=jvj+36; pile[WZ2]=948; pile[WZ3]=jvj+37; 
(*f[58])( );     /*TRI3(jvj+36,67,948,jvj+37)*/
pile[v[22]]=jvj+37; pile[WZ1]=1000; pile[WZ2]=936; pile[WZ3]=jvj+38; 
(*f[189])( );     /*TRI4(jvj+37,1000,936,jvj+38)*/
pile[v[22]]=jvj+38; pile[WZ1]=530; pile[WZ2]=860; pile[WZ3]=jvj+39; 
(*f[58])( );     /*TRI3(jvj+38,530,860,jvj+39)*/
pile[v[22]]=jvj+39; pile[WZ1]=3; pile[WZ2]=683; pile[WZ3]=jvj+40; 
(*f[189])( );     /*TRI4(jvj+39,3,683,jvj+40)*/
pile[v[22]]=jvj+40; pile[WZ1]=50; pile[WZ2]=493; pile[WZ3]=jvj+41; 
(*f[189])( );     /*TRI4(jvj+40,50,493,jvj+41)*/
pile[v[22]]=109; pile[WZ1]=jvj+18; pile[WZ2]=117; pile[WZ3]=0; pile[WZ4]=jvj+41; pile[WZ5]=jvj+22; 
(*f[47])( );     /*QUADRI0(109,jvj+18,117,0,jvj+41,jvj+22)*/
vo[12]=x[jvj+22];vz[12]=0;
pile[v[22]]=163; pile[WZ1]=jvj+17; 
(*f[44])( );if(v[102]) goto l18;     /*FNDC1(163,jvj+17,V41)*/
V41=pile[WZ2]; 
pile[v[22]]=jvj+22; pile[WZ1]=163; pile[WZ2]=V41; 
(*f[177])( );     /*CHGC4(jvj+22,163,V41)*/
l18:pile[v[22]]=jvj+16; 
(*f[1190])( );     /*MALICE0(jvj+16)*/
pile[v[22]]=jvj+14; pile[WZ1]=191; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(jvj+14,191,68)*/
x[jvj+20]=vo[14];z[jvj+20]=vz[14];
pile[v[22]]=935; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(935,jvj+20,jvj+21)*/
if((x[jvj+21]!=547)) goto l9;
pile[v[22]]=936; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(936,jvj+20,V37)*/
V37=pile[WZ2]; 
pile[v[22]]=876; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(876,jvj+20,V39)*/
V39=pile[WZ2]; 
pile[v[22]]=jvj+14; pile[WZ1]=936; pile[WZ2]=V37; 
(*f[43])( );     /*CHGC2(jvj+14,936,V37)*/
pile[WZ1]=876; pile[WZ2]=V39; 
(*f[43])( );     /*CHGC2(jvj+14,876,V39)*/
l9:pile[v[22]]=43; pile[WZ1]=32; 
(*f[139])( );     /*EDITE1(43,32)*/
l16:pile[v[22]]=120; pile[WZ1]=jvj+14; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(120,jvj+14,jvj+27)*/
goto l14;
l20:x[jvj+29]=t[x[jvj+29]];
goto l19;
l24:vo[12]=x[jvj+13];vz[12]=0;
pile[v[22]]=163; pile[WZ1]=jvj+7; 
(*f[44])( );if(v[102]) goto l25;     /*FNDC1(163,jvj+7,V21)*/
V21=pile[WZ2]; 
pile[v[22]]=jvj+13; pile[WZ1]=163; pile[WZ2]=V21; 
(*f[177])( );     /*CHGC4(jvj+13,163,V21)*/
l25:pile[v[22]]=jvj+9; 
(*f[1190])( );     /*MALICE0(jvj+9)*/
pile[v[22]]=20; pile[WZ1]=V43; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V43,0,V8)*/
V8=pile[WZ3]; 
V7=incon;
pile[v[22]]=163; pile[WZ1]=jvj+7; 
(*f[44])( );if(v[102]) goto l7;     /*FNDC1(163,jvj+7,V20)*/
V20=pile[WZ2]; 
V=V20;
pile[v[22]]=V8; pile[WZ1]=V; 
(*f[37])( );     /*SRA0(V8,V,V7)*/
V7=pile[WZ2]; 
goto l26;
l27:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
}

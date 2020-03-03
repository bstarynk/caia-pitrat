#include "dx.h"
void ATOME184T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V18=0,V50=0,V53=0,V56=0,I=0,V62=0,V19=0,V64=0,V76=0,J=0,V41=0,XX=0,V20=0,V84=0,V86=0,V88=0,V89=0,V90=0,V92=0,V94=0,V93=0,V96=0,V38=0,V39=0,AA=0,V44=0,V42=0,V43=0;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=119;
x[jvj+1]=20184;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3662&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+44; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(111,R,jvj+44)*/
pile[v[22]]=101; pile[WZ1]=jvj+44; pile[WZ2]=jvj+45; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(101,jvj+44,jvj+45)*/
if((x[jvj+45]!=25)) goto l30;
pile[v[22]]=870; pile[WZ1]=R; 
(*f[26])( );if(v[102]) goto l30;     /*FNDC0(870,R,V38)*/
V38=pile[WZ2]; 
if((V38!=2)) goto l30;
pile[v[22]]=1101; 
(*f[26])( );if(v[102]) goto l30;     /*FNDC0(1101,R,V39)*/
V39=pile[WZ2]; 
if((V39!=2)) goto l30;
pile[v[22]]=1105; pile[WZ2]=jvj+46; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(1105,R,jvj+46)*/
if((x[jvj+46]!=68)) goto l30;
pile[v[22]]=R; pile[WZ1]=jvj+2; 
(*f[887])( );     /*VARND0(R,jvj+2)*/
if((x[jvj+2]<=0)) goto l30;
x[jvj+29]=s[x[jvj+2]] ;z[jvj+29]=(x[jvj+29]<=sepcte) ? x[jvj+29] : z[jvj+2];
pile[WZ1]=jvj+3; 
(*f[887])( );     /*VARND0(R,jvj+3)*/
l1:if((x[jvj+3]<=0)) goto l30;
x[jvj+32]=s[x[jvj+3]] ;z[jvj+32]=(x[jvj+32]<=sepcte) ? x[jvj+32] : z[jvj+3];
if((x[jvj+32]!=x[jvj+29])) goto l25;
x[jvj+3]=t[x[jvj+3]];
goto l1;
l5:x[jvj+113]=t[x[jvj+113]];
l4:if((x[jvj+113]<=0)) goto l8;
x[jvj+9]=s[x[jvj+113]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+113];
pile[v[22]]=130; pile[WZ1]=jvj+9; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(130,jvj+9,V56)*/
V56=pile[WZ2]; 
I=V56;
x[jvj+114]=x[jvj+8] ;z[jvj+114]=z[jvj+8];
l6:if((x[jvj+114]<=0)) goto l5;
x[jvj+10]=s[x[jvj+114]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+114];
if((x[jvj+9]==x[jvj+10])) goto l7;
pile[v[22]]=100; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(100,jvj+10,jvj+11)*/
if((x[jvj+11]!=484)) goto l7;
V18=I;
l26:if((V18==(-99999998))) goto l30;
V42=V18*V18;
V19=incon;
pile[v[22]]=130; pile[WZ1]=jvj+12; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(130,jvj+12,V62)*/
V62=pile[WZ2]; 
if((V62!=0)) goto l9;
V19=0;
l9:pile[v[22]]=111; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(111,jvj+12,jvj+13)*/
pile[v[22]]=101; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(101,jvj+13,jvj+14)*/
if((x[jvj+14]!=486)) goto l21;
pile[v[22]]=107; pile[WZ1]=jvj+12; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(107,jvj+12,jvj+15)*/
for(i=x[jvj+15],V64=0;i>0;i=t[i],V64++)  ;
if((V64==2)) goto l11;
if((V64!=3)) goto l21;
x[jvj+117]=x[jvj+15] ;z[jvj+117]=z[jvj+15];
l15:if((x[jvj+117]<=0)) goto l21;
x[jvj+20]=s[x[jvj+117]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+117];
pile[v[22]]=130; pile[WZ1]=jvj+20; 
(*f[26])( );if(v[102]) goto l16;     /*FNDC0(130,jvj+20,V76)*/
V76=pile[WZ2]; 
J=V76;
x[jvj+118]=x[jvj+15] ;z[jvj+118]=z[jvj+15];
l17:if((x[jvj+118]<=0)) goto l16;
x[jvj+21]=s[x[jvj+118]] ;z[jvj+21]=(x[jvj+21]<=sepcte) ? x[jvj+21] : z[jvj+118];
if((x[jvj+20]==x[jvj+21])) goto l18;
pile[v[22]]=100; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(100,jvj+21,jvj+22)*/
if((x[jvj+22]!=484)) goto l18;
x[jvj+119]=x[jvj+15] ;z[jvj+119]=z[jvj+15];
l19:if((x[jvj+119]<=0)) goto l18;
x[jvj+23]=s[x[jvj+119]] ;z[jvj+23]=(x[jvj+23]<=sepcte) ? x[jvj+23] : z[jvj+119];
if((x[jvj+20]==x[jvj+23])) goto l20;
if((x[jvj+21]==x[jvj+23])) goto l20;
pile[v[22]]=100; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(100,jvj+23,jvj+24)*/
if((x[jvj+24]!=484)) goto l20;
V19=J;
l27:if((V19!=(-99999998))) goto l28;
l30:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l7:x[jvj+114]=t[x[jvj+114]];
goto l6;
l8:if(V18==incon) goto l30;
goto l26;
l11:x[jvj+115]=x[jvj+15] ;z[jvj+115]=z[jvj+15];
l10:if((x[jvj+115]<=0)) goto l21;
x[jvj+16]=s[x[jvj+115]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+115];
pile[v[22]]=100; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(100,jvj+16,jvj+17)*/
if((x[jvj+17]!=484)) goto l12;
x[jvj+116]=x[jvj+15] ;z[jvj+116]=z[jvj+15];
l13:if((x[jvj+116]<=0)) goto l12;
x[jvj+18]=s[x[jvj+116]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+116];
if((x[jvj+16]==x[jvj+18])) goto l14;
pile[v[22]]=100; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(100,jvj+18,jvj+19)*/
if((x[jvj+19]!=484)) goto l14;
V19=1;
l28:V43=V44*V19;
V41=V42-V43;
V20=incon;
pile[v[22]]=V41; 
(*f[627])( );if(v[102]) goto l22;     /*RACINEXACTE0(V41,XX)*/
XX=pile[WZ1]; 
V20=XX;
l29:pile[v[22]]=jvj+29; pile[WZ1]=jvj+48; 
(*f[1290])( );if(v[102]) goto l30;     /*DEPEXP0(jvj+29,jvj+48)*/
pile[v[22]]=jvj+48; pile[WZ1]=jvj+49; 
(*f[255])( );     /*COPEXP0(jvj+48,jvj+49)*/
pile[v[22]]=jvj+32; pile[WZ1]=jvj+50; 
(*f[1290])( );if(v[102]) goto l30;     /*DEPEXP0(jvj+32,jvj+50)*/
pile[v[22]]=jvj+50; pile[WZ1]=jvj+51; 
(*f[255])( );     /*COPEXP0(jvj+50,jvj+51)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=48; pile[WZ4]=jvj+52; 
(*f[181])( );     /*QUADRI2(100,20,101,48,jvj+52)*/
pile[WZ3]=25; pile[WZ4]=jvj+105; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+105)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+107; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+107)*/
pile[v[22]]=jvj+105; pile[WZ1]=111; pile[WZ2]=jvj+106; 
(*f[54])( );     /*TRI1(jvj+105,111,jvj+106)*/
pile[v[22]]=jvj+106; pile[WZ1]=jvj+107; pile[WZ2]=103; pile[WZ3]=jvj+108; 
(*f[58])( );     /*TRI3(jvj+106,jvj+107,103,jvj+108)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+49; pile[WZ4]=jvj+108; pile[WZ5]=jvj+53; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+49,jvj+108,jvj+53)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+109; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+109)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+111; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+111)*/
pile[v[22]]=jvj+109; pile[WZ1]=111; pile[WZ2]=jvj+110; 
(*f[54])( );     /*TRI1(jvj+109,111,jvj+110)*/
pile[v[22]]=jvj+110; pile[WZ1]=jvj+111; pile[WZ2]=103; pile[WZ3]=jvj+112; 
(*f[58])( );     /*TRI3(jvj+110,jvj+111,103,jvj+112)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+51; pile[WZ4]=jvj+112; pile[WZ5]=jvj+54; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+51,jvj+112,jvj+54)*/
pile[WZ2]=111; pile[WZ3]=jvj+52; pile[WZ4]=jvj+27; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+52,jvj+27)*/
pile[v[22]]=jvj+27; pile[WZ1]=107; pile[WZ2]=jvj+53; 
(*f[36])( );     /*PLUSC0(jvj+27,107,jvj+53)*/
pile[WZ2]=jvj+54; 
(*f[36])( );     /*PLUSC0(jvj+27,107,jvj+54)*/
if((V20<0)) goto l23;
if((V20==0)) goto l24;
if((V20<=0)) goto l30;
x[jvj+37]=vo[14];z[jvj+37]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+37; 
(*f[26])( );if(v[102]) goto l30;     /*FNDC0(642,jvj+37,V90)*/
V90=pile[WZ2]; 
pile[v[22]]=jvj+29; pile[WZ1]=jvj+38; 
(*f[1290])( );if(v[102]) goto l30;     /*DEPEXP0(jvj+29,jvj+38)*/
pile[v[22]]=jvj+38; pile[WZ1]=jvj+39; 
(*f[255])( );     /*COPEXP0(jvj+38,jvj+39)*/
pile[v[22]]=jvj+32; pile[WZ1]=jvj+40; 
(*f[1290])( );if(v[102]) goto l30;     /*DEPEXP0(jvj+32,jvj+40)*/
pile[v[22]]=jvj+40; pile[WZ1]=jvj+41; 
(*f[255])( );     /*COPEXP0(jvj+40,jvj+41)*/
V92=2*AA;
V94=(-V18);
V93=V94+V20;
V96=V94-V20;
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+82; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+82)*/
pile[v[22]]=V90; pile[WZ1]=858; pile[WZ2]=jvj+78; 
(*f[46])( );     /*TRI0(V90,858,jvj+78)*/
pile[v[22]]=jvj+78; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+79; 
(*f[189])( );     /*TRI4(jvj+78,v[13],642,jvj+79)*/
pile[v[22]]=jvj+79; pile[WZ1]=3662; pile[WZ2]=246; pile[WZ3]=jvj+80; 
(*f[189])( );     /*TRI4(jvj+79,3662,246,jvj+80)*/
pile[v[22]]=jvj+80; pile[WZ1]=20184; pile[WZ2]=218; pile[WZ3]=jvj+81; 
(*f[58])( );     /*TRI3(jvj+80,20184,218,jvj+81)*/
pile[v[22]]=jvj+82; pile[WZ1]=(-20); pile[WZ2]=jvj+81; pile[WZ3]=159; pile[WZ4]=jvj+83; 
(*f[298])( );     /*TRIENS1(jvj+82,(-20),jvj+81,159,jvj+83)*/
pile[v[22]]=jvj+83; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+42; 
(*f[58])( );     /*TRI3(jvj+83,1,158,jvj+42)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+84; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+84)*/
pile[WZ3]=25; pile[WZ4]=jvj+87; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+87)*/
pile[WZ3]=486; pile[WZ4]=jvj+92; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+92)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V92; pile[WZ4]=jvj+93; 
(*f[192])( );     /*QUADRI4(100,41,130,V92,jvj+93)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+92; pile[WZ4]=jvj+91; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+92,jvj+91)*/
pile[v[22]]=jvj+91; pile[WZ1]=107; pile[WZ2]=jvj+93; 
(*f[36])( );     /*PLUSC0(jvj+91,107,jvj+93)*/
pile[WZ2]=jvj+39; 
(*f[36])( );     /*PLUSC0(jvj+91,107,jvj+39)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+94; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+94)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V93; pile[WZ4]=jvj+95; 
(*f[192])( );     /*QUADRI4(100,41,130,V93,jvj+95)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+94; pile[WZ4]=jvj+89; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+94,jvj+89)*/
pile[v[22]]=jvj+89; pile[WZ1]=107; pile[WZ2]=jvj+95; 
(*f[36])( );     /*PLUSC0(jvj+89,107,jvj+95)*/
pile[WZ2]=jvj+41; 
(*f[36])( );     /*PLUSC0(jvj+89,107,jvj+41)*/
pile[v[22]]=jvj+87; pile[WZ1]=111; pile[WZ2]=jvj+88; 
(*f[54])( );     /*TRI1(jvj+87,111,jvj+88)*/
pile[v[22]]=jvj+88; pile[WZ1]=jvj+89; pile[WZ2]=103; pile[WZ3]=jvj+90; 
(*f[58])( );     /*TRI3(jvj+88,jvj+89,103,jvj+90)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+91; pile[WZ4]=jvj+90; pile[WZ5]=jvj+85; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+91,jvj+90,jvj+85)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+96; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+96)*/
pile[WZ3]=486; pile[WZ4]=jvj+101; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+101)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V92; pile[WZ4]=jvj+102; 
(*f[192])( );     /*QUADRI4(100,41,130,V92,jvj+102)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+101; pile[WZ4]=jvj+100; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+101,jvj+100)*/
pile[v[22]]=jvj+100; pile[WZ1]=107; pile[WZ2]=jvj+102; 
(*f[36])( );     /*PLUSC0(jvj+100,107,jvj+102)*/
pile[WZ2]=jvj+39; 
(*f[36])( );     /*PLUSC0(jvj+100,107,jvj+39)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+103; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+103)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V96; pile[WZ4]=jvj+104; 
(*f[192])( );     /*QUADRI4(100,41,130,V96,jvj+104)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+103; pile[WZ4]=jvj+98; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+103,jvj+98)*/
pile[v[22]]=jvj+98; pile[WZ1]=107; pile[WZ2]=jvj+104; 
(*f[36])( );     /*PLUSC0(jvj+98,107,jvj+104)*/
pile[WZ2]=jvj+41; 
(*f[36])( );     /*PLUSC0(jvj+98,107,jvj+41)*/
pile[v[22]]=jvj+96; pile[WZ1]=111; pile[WZ2]=jvj+97; 
(*f[54])( );     /*TRI1(jvj+96,111,jvj+97)*/
pile[v[22]]=jvj+97; pile[WZ1]=jvj+98; pile[WZ2]=103; pile[WZ3]=jvj+99; 
(*f[58])( );     /*TRI3(jvj+97,jvj+98,103,jvj+99)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+100; pile[WZ4]=jvj+99; pile[WZ5]=jvj+86; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+100,jvj+99,jvj+86)*/
pile[WZ2]=111; pile[WZ3]=jvj+84; pile[WZ4]=jvj+43; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+84,jvj+43)*/
pile[v[22]]=jvj+43; pile[WZ1]=107; pile[WZ2]=jvj+27; 
(*f[36])( );     /*PLUSC0(jvj+43,107,jvj+27)*/
pile[WZ2]=jvj+85; 
(*f[36])( );     /*PLUSC0(jvj+43,107,jvj+85)*/
pile[WZ2]=jvj+86; 
(*f[36])( );     /*PLUSC0(jvj+43,107,jvj+86)*/
pile[WZ1]=jvj+42; 
(*f[1296])( );     /*NOUVCONTR0(jvj+43,jvj+42)*/
goto l30;
l12:x[jvj+115]=t[x[jvj+115]];
goto l10;
l14:x[jvj+116]=t[x[jvj+116]];
goto l13;
l16:x[jvj+117]=t[x[jvj+117]];
goto l15;
l18:x[jvj+118]=t[x[jvj+118]];
goto l17;
l20:x[jvj+119]=t[x[jvj+119]];
goto l19;
l21:if(V19==incon) goto l30;
goto l27;
l22:V20=(-1);
goto l29;
l23:x[jvj+25]=vo[14];z[jvj+25]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+25; 
(*f[26])( );if(v[102]) goto l30;     /*FNDC0(642,jvj+25,V84)*/
V84=pile[WZ2]; 
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+59; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+59)*/
pile[v[22]]=V84; pile[WZ1]=858; pile[WZ2]=jvj+55; 
(*f[46])( );     /*TRI0(V84,858,jvj+55)*/
pile[v[22]]=jvj+55; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+56; 
(*f[189])( );     /*TRI4(jvj+55,v[13],642,jvj+56)*/
pile[v[22]]=jvj+56; pile[WZ1]=3662; pile[WZ2]=246; pile[WZ3]=jvj+57; 
(*f[189])( );     /*TRI4(jvj+56,3662,246,jvj+57)*/
pile[v[22]]=jvj+57; pile[WZ1]=20184; pile[WZ2]=218; pile[WZ3]=jvj+58; 
(*f[58])( );     /*TRI3(jvj+57,20184,218,jvj+58)*/
pile[v[22]]=jvj+59; pile[WZ1]=(-20); pile[WZ2]=jvj+58; pile[WZ3]=159; pile[WZ4]=jvj+60; 
(*f[298])( );     /*TRIENS1(jvj+59,(-20),jvj+58,159,jvj+60)*/
pile[v[22]]=jvj+60; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+26; 
(*f[58])( );     /*TRI3(jvj+60,1,158,jvj+26)*/
pile[v[22]]=jvj+27; pile[WZ1]=jvj+26; 
(*f[1296])( );     /*NOUVCONTR0(jvj+27,jvj+26)*/
goto l30;
l24:x[jvj+28]=vo[14];z[jvj+28]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+28; 
(*f[26])( );if(v[102]) goto l30;     /*FNDC0(642,jvj+28,V86)*/
V86=pile[WZ2]; 
pile[v[22]]=jvj+29; pile[WZ1]=jvj+30; 
(*f[1290])( );if(v[102]) goto l30;     /*DEPEXP0(jvj+29,jvj+30)*/
pile[v[22]]=jvj+30; pile[WZ1]=jvj+31; 
(*f[255])( );     /*COPEXP0(jvj+30,jvj+31)*/
pile[v[22]]=jvj+32; pile[WZ1]=jvj+33; 
(*f[1290])( );if(v[102]) goto l30;     /*DEPEXP0(jvj+32,jvj+33)*/
pile[v[22]]=jvj+33; pile[WZ1]=jvj+34; 
(*f[255])( );     /*COPEXP0(jvj+33,jvj+34)*/
V88=2*AA;
V89=(-V18);
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+65; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+65)*/
pile[v[22]]=V86; pile[WZ1]=858; pile[WZ2]=jvj+61; 
(*f[46])( );     /*TRI0(V86,858,jvj+61)*/
pile[v[22]]=jvj+61; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+62; 
(*f[189])( );     /*TRI4(jvj+61,v[13],642,jvj+62)*/
pile[v[22]]=jvj+62; pile[WZ1]=3662; pile[WZ2]=246; pile[WZ3]=jvj+63; 
(*f[189])( );     /*TRI4(jvj+62,3662,246,jvj+63)*/
pile[v[22]]=jvj+63; pile[WZ1]=20184; pile[WZ2]=218; pile[WZ3]=jvj+64; 
(*f[58])( );     /*TRI3(jvj+63,20184,218,jvj+64)*/
pile[v[22]]=jvj+65; pile[WZ1]=(-20); pile[WZ2]=jvj+64; pile[WZ3]=159; pile[WZ4]=jvj+66; 
(*f[298])( );     /*TRIENS1(jvj+65,(-20),jvj+64,159,jvj+66)*/
pile[v[22]]=jvj+66; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+35; 
(*f[58])( );     /*TRI3(jvj+66,1,158,jvj+35)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+67; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+67)*/
pile[WZ3]=25; pile[WZ4]=jvj+69; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+69)*/
pile[WZ3]=486; pile[WZ4]=jvj+74; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+74)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V88; pile[WZ4]=jvj+75; 
(*f[192])( );     /*QUADRI4(100,41,130,V88,jvj+75)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+74; pile[WZ4]=jvj+73; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+74,jvj+73)*/
pile[v[22]]=jvj+73; pile[WZ1]=107; pile[WZ2]=jvj+75; 
(*f[36])( );     /*PLUSC0(jvj+73,107,jvj+75)*/
pile[WZ2]=jvj+31; 
(*f[36])( );     /*PLUSC0(jvj+73,107,jvj+31)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+76; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+76)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V89; pile[WZ4]=jvj+77; 
(*f[192])( );     /*QUADRI4(100,41,130,V89,jvj+77)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+76; pile[WZ4]=jvj+71; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+76,jvj+71)*/
pile[v[22]]=jvj+71; pile[WZ1]=107; pile[WZ2]=jvj+77; 
(*f[36])( );     /*PLUSC0(jvj+71,107,jvj+77)*/
pile[WZ2]=jvj+34; 
(*f[36])( );     /*PLUSC0(jvj+71,107,jvj+34)*/
pile[v[22]]=jvj+69; pile[WZ1]=111; pile[WZ2]=jvj+70; 
(*f[54])( );     /*TRI1(jvj+69,111,jvj+70)*/
pile[v[22]]=jvj+70; pile[WZ1]=jvj+71; pile[WZ2]=103; pile[WZ3]=jvj+72; 
(*f[58])( );     /*TRI3(jvj+70,jvj+71,103,jvj+72)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+73; pile[WZ4]=jvj+72; pile[WZ5]=jvj+68; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+73,jvj+72,jvj+68)*/
pile[WZ2]=111; pile[WZ3]=jvj+67; pile[WZ4]=jvj+36; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+67,jvj+36)*/
pile[v[22]]=jvj+36; pile[WZ1]=107; pile[WZ2]=jvj+27; 
(*f[36])( );     /*PLUSC0(jvj+36,107,jvj+27)*/
pile[WZ2]=jvj+68; 
(*f[36])( );     /*PLUSC0(jvj+36,107,jvj+68)*/
pile[WZ1]=jvj+35; 
(*f[1296])( );     /*NOUVCONTR0(jvj+36,jvj+35)*/
goto l30;
l25:pile[v[22]]=R; pile[WZ1]=jvj+29; pile[WZ2]=jvj+47; pile[WZ3]=jvj+4; pile[WZ4]=jvj+12; 
(*f[3603])( );if(v[102]) goto l30;     /*QUADRATIQUE0(R,jvj+29,jvj+47,jvj+4,jvj+12)*/
pile[v[22]]=130; pile[WZ1]=jvj+47; 
(*f[26])( );if(v[102]) goto l30;     /*FNDC0(130,jvj+47,AA)*/
AA=pile[WZ2]; 
V44=4*AA;
V18=incon;
pile[v[22]]=100; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(100,jvj+4,jvj+5)*/
if((x[jvj+5]!=484)) goto l2;
V18=1;
l2:pile[v[22]]=130; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(130,jvj+4,V50)*/
V50=pile[WZ2]; 
if((V50!=0)) goto l3;
V18=0;
l3:pile[v[22]]=111; pile[WZ1]=jvj+4; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(111,jvj+4,jvj+6)*/
pile[v[22]]=101; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(101,jvj+6,jvj+7)*/
if((x[jvj+7]!=486)) goto l8;
pile[v[22]]=107; pile[WZ1]=jvj+4; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(107,jvj+4,jvj+8)*/
for(i=x[jvj+8],V53=0;i>0;i=t[i],V53++)  ;
if((V53!=2)) goto l8;
x[jvj+113]=x[jvj+8] ;z[jvj+113]=z[jvj+8];
goto l4;
}

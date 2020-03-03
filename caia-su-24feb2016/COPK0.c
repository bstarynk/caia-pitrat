#include "dx.h"
void COPK0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V130=0,V129=0,V87=0,V22=0,V=0,V189=0,V179=0,V181=0,V182=0,V120=0,V115=0,V233=0,V171=0,V163=0,V164=0,V165=0,V23=0,W=0,V69=0,V82=0,V83=0,V70=0,V71=0,V114=0,V107=0,V108=0,VV=0,WW=0,V200=0,V201=0,VL=0,V190=0,V191=0,V193=0,V194=0,V137=0,V122=0,V123=0,V124=0,V126=0,V212=0,V213=0,V202=0,V203=0,V204=0,V205=0,V248=0,V249=0,V100=0,V95=0,V156=0,V258=0,V266=0,V241=0,V242=0,V223=0,V224=0;
int PP,R,X,VJ,VI;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=766;
x[jvj+1]=10501;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2084&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
PP=pile[v[22]]; R=pile[v[22]+1]; X=pile[v[22]+2]; VJ=pile[v[22]+3]; VI=pile[v[22]+4]; v[22]+=5; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+110]=x[jvj+111]=x[jvj+112]=incon;
pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(111,X,jvj+5)*/
pile[v[22]]=101; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(101,jvj+5,jvj+6)*/
if((x[jvj+6]==66)) goto l3;
if((x[jvj+6]==377)) goto l4;
if((x[jvj+6]==677)) goto l5;
if((x[jvj+6]==150)) goto l6;
if((x[jvj+6]!=119)) goto l7;
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(102,X,jvj+13)*/
pile[v[22]]=jvj+13; pile[WZ1]=jvj+14; 
(*f[255])( );     /*COPEXP0(jvj+13,jvj+14)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=10008; pile[WZ4]=jvj+145; 
(*f[181])( );     /*QUADRI2(100,20,101,10008,jvj+145)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-596); pile[WZ4]=jvj+390; 
(*f[270])( );     /*QUADRI7(100,21,140,(-596),jvj+390)*/
pile[v[22]]=jvj+390; pile[WZ1]=103; pile[WZ2]=jvj+391; 
(*f[54])( );     /*TRI1(jvj+390,103,jvj+391)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+14; pile[WZ4]=jvj+391; pile[WZ5]=jvj+146; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+14,jvj+391,jvj+146)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=VI; pile[WZ4]=jvj+394; 
(*f[270])( );     /*QUADRI7(100,21,140,VI,jvj+394)*/
pile[WZ3]=(-592); pile[WZ4]=jvj+392; 
(*f[270])( );     /*QUADRI7(100,21,140,(-592),jvj+392)*/
pile[v[22]]=jvj+392; pile[WZ1]=103; pile[WZ2]=jvj+393; 
(*f[54])( );     /*TRI1(jvj+392,103,jvj+393)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+394; pile[WZ4]=jvj+393; pile[WZ5]=jvj+147; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+394,jvj+393,jvj+147)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=VJ; pile[WZ4]=jvj+397; 
(*f[270])( );     /*QUADRI7(100,21,140,VJ,jvj+397)*/
pile[WZ3]=(-593); pile[WZ4]=jvj+395; 
(*f[270])( );     /*QUADRI7(100,21,140,(-593),jvj+395)*/
pile[v[22]]=jvj+395; pile[WZ1]=103; pile[WZ2]=jvj+396; 
(*f[54])( );     /*TRI1(jvj+395,103,jvj+396)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+397; pile[WZ4]=jvj+396; pile[WZ5]=jvj+143; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+397,jvj+396,jvj+143)*/
pile[v[22]]=jvj+143; pile[WZ1]=(-20); pile[WZ2]=113; pile[WZ3]=jvj+144; 
(*f[180])( );     /*TRIENS0(jvj+143,(-20),113,jvj+144)*/
pile[v[22]]=100; pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+145; pile[WZ4]=jvj+144; pile[WZ5]=jvj+109; 
(*f[269])( );     /*QUADRI6(100,39,111,jvj+145,jvj+144,jvj+109)*/
pile[v[22]]=jvj+109; pile[WZ1]=114; pile[WZ2]=jvj+146; 
(*f[36])( );     /*PLUSC0(jvj+109,114,jvj+146)*/
pile[WZ2]=jvj+147; 
(*f[36])( );     /*PLUSC0(jvj+109,114,jvj+147)*/
l35:pile[v[22]]=R; pile[WZ1]=105; pile[WZ2]=jvj+109; 
(*f[36])( );     /*PLUSC0(R,105,jvj+109)*/
pile[v[22]]=jvj+109; pile[WZ1]=123; pile[WZ2]=PP; 
(*f[35])( );     /*CHGC1(jvj+109,123,PP)*/
if(x[jvj+110]!=incon) goto l36;
l37:if(x[jvj+111]!=incon) goto l38;
l39:if(x[jvj+112]!=incon) goto l40;
l41:pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+113; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(111,X,jvj+113)*/
pile[v[22]]=101; pile[WZ1]=jvj+113; pile[WZ2]=jvj+114; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(101,jvj+113,jvj+114)*/
if((x[jvj+114]!=751)) goto l42;
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+115; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(102,X,jvj+115)*/
pile[v[22]]=103; pile[WZ2]=jvj+116; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(103,X,jvj+116)*/
pile[v[22]]=160; pile[WZ2]=jvj+117; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(160,X,jvj+117)*/
pile[v[22]]=PP; pile[WZ1]=R; pile[WZ2]=VJ; pile[WZ3]=VI; pile[WZ4]=jvj+115; pile[WZ5]=jvj+116; pile[v[22]+6]=jvj+117; 
(*f[2162])( );     /*COPL1(PP,R,VJ,VI,jvj+115,jvj+116,jvj+117)*/
l42:if(x[jvj+114]!=390&&x[jvj+114]!=395&&x[jvj+114]!=124) goto l43;
pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+118; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(100,X,jvj+118)*/
if((x[jvj+118]!=22)) goto l43;
pile[v[22]]=102; pile[WZ2]=jvj+119; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(102,X,jvj+119)*/
pile[v[22]]=100; pile[WZ1]=jvj+119; pile[WZ2]=jvj+120; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(100,jvj+119,jvj+120)*/
if((x[jvj+120]!=120)) goto l43;
pile[v[22]]=102; pile[WZ2]=jvj+121; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(102,jvj+119,jvj+121)*/
pile[v[22]]=PP; pile[WZ1]=R; pile[WZ2]=VJ; pile[WZ3]=VI; pile[WZ4]=jvj+121; pile[WZ5]=jvj+119; pile[v[22]+6]=jvj+114; 
(*f[2160])( );     /*COPO0(PP,R,VJ,VI,jvj+121,jvj+119,jvj+114)*/
l43:x[jvj+1]=incon; v[0]=jvj; v[22]-=5; return;
l2:x[jvj+3]=t[x[jvj+3]];
l1:if((x[jvj+3]<=0)) goto l41;
x[jvj+4]=s[x[jvj+3]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+3];
pile[v[22]]=130; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(130,jvj+4,V129)*/
V129=pile[WZ2]; 
if((V129!=V130)) goto l2;
pile[v[22]]=109; pile[WZ2]=jvj+82; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(109,jvj+4,jvj+82)*/
pile[v[22]]=122; pile[WZ2]=jvj+83; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(122,jvj+4,jvj+83)*/
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+84; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(102,X,jvj+84)*/
pile[v[22]]=jvj+84; pile[WZ1]=jvj+85; 
(*f[255])( );     /*COPEXP0(jvj+84,jvj+85)*/
(*f[1817])( );     /*NOUV2(V122)*/
V122=pile[v[22]]; 
(*f[1817])( );     /*NOUV2(V123)*/
V123=pile[v[22]]; 
(*f[1817])( );     /*NOUV2(V124)*/
V124=pile[v[22]]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+82; pile[WZ4]=jvj+290; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+82,jvj+290)*/
pile[WZ3]=172; pile[WZ4]=jvj+645; 
(*f[181])( );     /*QUADRI2(100,20,101,172,jvj+645)*/
pile[WZ3]=jvj+83; pile[WZ4]=jvj+651; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+83,jvj+651)*/
pile[v[22]]=jvj+85; pile[WZ1]=103; pile[WZ2]=jvj+650; 
(*f[54])( );     /*TRI1(jvj+85,103,jvj+650)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+651; pile[WZ4]=jvj+650; pile[WZ5]=jvj+649; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+651,jvj+650,jvj+649)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=41; pile[WZ4]=jvj+647; 
(*f[181])( );     /*QUADRI2(100,20,101,41,jvj+647)*/
pile[v[22]]=jvj+645; pile[WZ1]=111; pile[WZ2]=jvj+646; 
(*f[54])( );     /*TRI1(jvj+645,111,jvj+646)*/
pile[v[22]]=jvj+646; pile[WZ1]=jvj+647; pile[WZ2]=103; pile[WZ3]=jvj+648; 
(*f[58])( );     /*TRI3(jvj+646,jvj+647,103,jvj+648)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+649; pile[WZ4]=jvj+648; pile[WZ5]=jvj+644; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+649,jvj+648,jvj+644)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-620); pile[WZ4]=jvj+642; 
(*f[270])( );     /*QUADRI7(100,21,140,(-620),jvj+642)*/
pile[v[22]]=jvj+642; pile[WZ1]=103; pile[WZ2]=jvj+643; 
(*f[54])( );     /*TRI1(jvj+642,103,jvj+643)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+644; pile[WZ4]=jvj+643; pile[WZ5]=jvj+291; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+644,jvj+643,jvj+291)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=VI; pile[WZ4]=jvj+654; 
(*f[270])( );     /*QUADRI7(100,21,140,VI,jvj+654)*/
pile[WZ3]=(-592); pile[WZ4]=jvj+652; 
(*f[270])( );     /*QUADRI7(100,21,140,(-592),jvj+652)*/
pile[v[22]]=jvj+652; pile[WZ1]=103; pile[WZ2]=jvj+653; 
(*f[54])( );     /*TRI1(jvj+652,103,jvj+653)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+654; pile[WZ4]=jvj+653; pile[WZ5]=jvj+292; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+654,jvj+653,jvj+292)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V122; pile[WZ4]=jvj+657; 
(*f[270])( );     /*QUADRI7(100,21,140,V122,jvj+657)*/
pile[WZ3]=(-593); pile[WZ4]=jvj+655; 
(*f[270])( );     /*QUADRI7(100,21,140,(-593),jvj+655)*/
pile[v[22]]=jvj+655; pile[WZ1]=103; pile[WZ2]=jvj+656; 
(*f[54])( );     /*TRI1(jvj+655,103,jvj+656)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+657; pile[WZ4]=jvj+656; pile[WZ5]=jvj+288; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+657,jvj+656,jvj+288)*/
pile[v[22]]=jvj+288; pile[WZ1]=(-20); pile[WZ2]=113; pile[WZ3]=jvj+289; 
(*f[180])( );     /*TRIENS0(jvj+288,(-20),113,jvj+289)*/
pile[v[22]]=100; pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+290; pile[WZ4]=jvj+289; pile[WZ5]=jvj+109; 
(*f[269])( );     /*QUADRI6(100,39,111,jvj+290,jvj+289,jvj+109)*/
pile[v[22]]=jvj+109; pile[WZ1]=114; pile[WZ2]=jvj+291; 
(*f[36])( );     /*PLUSC0(jvj+109,114,jvj+291)*/
pile[WZ2]=jvj+292; 
(*f[36])( );     /*PLUSC0(jvj+109,114,jvj+292)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=10426; pile[WZ4]=jvj+295; 
(*f[181])( );     /*QUADRI2(100,20,101,10426,jvj+295)*/
pile[WZ1]=89; pile[WZ2]=162; pile[WZ3]=59; pile[WZ4]=jvj+660; 
(*f[272])( );     /*QUADRI9(100,89,162,59,jvj+660)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-596); pile[WZ4]=jvj+658; 
(*f[270])( );     /*QUADRI7(100,21,140,(-596),jvj+658)*/
pile[v[22]]=jvj+658; pile[WZ1]=103; pile[WZ2]=jvj+659; 
(*f[54])( );     /*TRI1(jvj+658,103,jvj+659)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+660; pile[WZ4]=jvj+659; pile[WZ5]=jvj+296; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+660,jvj+659,jvj+296)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V124; pile[WZ4]=jvj+663; 
(*f[270])( );     /*QUADRI7(100,21,140,V124,jvj+663)*/
pile[WZ3]=(-592); pile[WZ4]=jvj+661; 
(*f[270])( );     /*QUADRI7(100,21,140,(-592),jvj+661)*/
pile[v[22]]=jvj+661; pile[WZ1]=103; pile[WZ2]=jvj+662; 
(*f[54])( );     /*TRI1(jvj+661,103,jvj+662)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+663; pile[WZ4]=jvj+662; pile[WZ5]=jvj+297; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+663,jvj+662,jvj+297)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=VJ; pile[WZ4]=jvj+666; 
(*f[270])( );     /*QUADRI7(100,21,140,VJ,jvj+666)*/
pile[WZ3]=(-593); pile[WZ4]=jvj+664; 
(*f[270])( );     /*QUADRI7(100,21,140,(-593),jvj+664)*/
pile[v[22]]=jvj+664; pile[WZ1]=103; pile[WZ2]=jvj+665; 
(*f[54])( );     /*TRI1(jvj+664,103,jvj+665)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+666; pile[WZ4]=jvj+665; pile[WZ5]=jvj+293; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+666,jvj+665,jvj+293)*/
pile[v[22]]=jvj+293; pile[WZ1]=(-20); pile[WZ2]=113; pile[WZ3]=jvj+294; 
(*f[180])( );     /*TRIENS0(jvj+293,(-20),113,jvj+294)*/
pile[v[22]]=100; pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+295; pile[WZ4]=jvj+294; pile[WZ5]=jvj+111; 
(*f[269])( );     /*QUADRI6(100,39,111,jvj+295,jvj+294,jvj+111)*/
pile[v[22]]=jvj+111; pile[WZ1]=114; pile[WZ2]=jvj+296; 
(*f[36])( );     /*PLUSC0(jvj+111,114,jvj+296)*/
pile[WZ2]=jvj+297; 
(*f[36])( );     /*PLUSC0(jvj+111,114,jvj+297)*/
(*f[1817])( );     /*NOUV2(V126)*/
V126=pile[v[22]]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=10008; pile[WZ4]=jvj+300; 
(*f[181])( );     /*QUADRI2(100,20,101,10008,jvj+300)*/
pile[WZ1]=96; pile[WZ2]=163; pile[WZ3]=V137; pile[WZ4]=jvj+669; 
(*f[270])( );     /*QUADRI7(100,96,163,V137,jvj+669)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-596); pile[WZ4]=jvj+667; 
(*f[270])( );     /*QUADRI7(100,21,140,(-596),jvj+667)*/
pile[v[22]]=jvj+667; pile[WZ1]=103; pile[WZ2]=jvj+668; 
(*f[54])( );     /*TRI1(jvj+667,103,jvj+668)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+669; pile[WZ4]=jvj+668; pile[WZ5]=jvj+301; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+669,jvj+668,jvj+301)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V126; pile[WZ4]=jvj+672; 
(*f[270])( );     /*QUADRI7(100,21,140,V126,jvj+672)*/
pile[WZ3]=(-592); pile[WZ4]=jvj+670; 
(*f[270])( );     /*QUADRI7(100,21,140,(-592),jvj+670)*/
pile[v[22]]=jvj+670; pile[WZ1]=103; pile[WZ2]=jvj+671; 
(*f[54])( );     /*TRI1(jvj+670,103,jvj+671)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+672; pile[WZ4]=jvj+671; pile[WZ5]=jvj+302; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+672,jvj+671,jvj+302)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V123; pile[WZ4]=jvj+675; 
(*f[270])( );     /*QUADRI7(100,21,140,V123,jvj+675)*/
pile[WZ3]=(-593); pile[WZ4]=jvj+673; 
(*f[270])( );     /*QUADRI7(100,21,140,(-593),jvj+673)*/
pile[v[22]]=jvj+673; pile[WZ1]=103; pile[WZ2]=jvj+674; 
(*f[54])( );     /*TRI1(jvj+673,103,jvj+674)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+675; pile[WZ4]=jvj+674; pile[WZ5]=jvj+298; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+675,jvj+674,jvj+298)*/
pile[v[22]]=jvj+298; pile[WZ1]=(-20); pile[WZ2]=113; pile[WZ3]=jvj+299; 
(*f[180])( );     /*TRIENS0(jvj+298,(-20),113,jvj+299)*/
pile[v[22]]=100; pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+300; pile[WZ4]=jvj+299; pile[WZ5]=jvj+110; 
(*f[269])( );     /*QUADRI6(100,39,111,jvj+300,jvj+299,jvj+110)*/
pile[v[22]]=jvj+110; pile[WZ1]=114; pile[WZ2]=jvj+301; 
(*f[36])( );     /*PLUSC0(jvj+110,114,jvj+301)*/
pile[WZ2]=jvj+302; 
(*f[36])( );     /*PLUSC0(jvj+110,114,jvj+302)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=10271; pile[WZ4]=jvj+307; 
(*f[181])( );     /*QUADRI2(100,20,101,10271,jvj+307)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V122; pile[WZ4]=jvj+678; 
(*f[270])( );     /*QUADRI7(100,21,140,V122,jvj+678)*/
pile[WZ3]=(-592); pile[WZ4]=jvj+676; 
(*f[270])( );     /*QUADRI7(100,21,140,(-592),jvj+676)*/
pile[v[22]]=jvj+676; pile[WZ1]=103; pile[WZ2]=jvj+677; 
(*f[54])( );     /*TRI1(jvj+676,103,jvj+677)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+678; pile[WZ4]=jvj+677; pile[WZ5]=jvj+303; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+678,jvj+677,jvj+303)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V126; pile[WZ4]=jvj+681; 
(*f[270])( );     /*QUADRI7(100,21,140,V126,jvj+681)*/
pile[WZ3]=(-593); pile[WZ4]=jvj+679; 
(*f[270])( );     /*QUADRI7(100,21,140,(-593),jvj+679)*/
pile[v[22]]=jvj+679; pile[WZ1]=103; pile[WZ2]=jvj+680; 
(*f[54])( );     /*TRI1(jvj+679,103,jvj+680)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+681; pile[WZ4]=jvj+680; pile[WZ5]=jvj+305; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+681,jvj+680,jvj+305)*/
pile[v[22]]=jvj+303; pile[WZ1]=(-20); pile[WZ2]=114; pile[WZ3]=jvj+304; 
(*f[180])( );     /*TRIENS0(jvj+303,(-20),114,jvj+304)*/
pile[v[22]]=jvj+305; pile[WZ2]=jvj+304; pile[WZ3]=113; pile[WZ4]=jvj+306; 
(*f[298])( );     /*TRIENS1(jvj+305,(-20),jvj+304,113,jvj+306)*/
pile[v[22]]=100; pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+307; pile[WZ5]=jvj+112; 
(*f[269])( );     /*QUADRI6(100,39,111,jvj+307,jvj+306,jvj+112)*/
pile[v[22]]=PP; pile[WZ1]=R; pile[WZ2]=jvj+81; pile[WZ3]=V124; pile[WZ4]=V123; 
(*f[2084])( );     /*COPK0(PP,R,jvj+81,V124,V123)*/
goto l35;
l3:pile[v[22]]=241; pile[WZ1]=66; 
(*f[44])( );if(v[102]) goto l7;     /*FNDC1(241,66,V87)*/
V87=pile[WZ2]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=10008; pile[WZ4]=jvj+124; 
(*f[181])( );     /*QUADRI2(100,20,101,10008,jvj+124)*/
pile[WZ1]=96; pile[WZ2]=163; pile[WZ3]=V87; pile[WZ4]=jvj+355; 
(*f[270])( );     /*QUADRI7(100,96,163,V87,jvj+355)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-596); pile[WZ4]=jvj+353; 
(*f[270])( );     /*QUADRI7(100,21,140,(-596),jvj+353)*/
pile[v[22]]=jvj+353; pile[WZ1]=103; pile[WZ2]=jvj+354; 
(*f[54])( );     /*TRI1(jvj+353,103,jvj+354)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+355; pile[WZ4]=jvj+354; pile[WZ5]=jvj+125; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+355,jvj+354,jvj+125)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=VI; pile[WZ4]=jvj+358; 
(*f[270])( );     /*QUADRI7(100,21,140,VI,jvj+358)*/
pile[WZ3]=(-592); pile[WZ4]=jvj+356; 
(*f[270])( );     /*QUADRI7(100,21,140,(-592),jvj+356)*/
pile[v[22]]=jvj+356; pile[WZ1]=103; pile[WZ2]=jvj+357; 
(*f[54])( );     /*TRI1(jvj+356,103,jvj+357)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+358; pile[WZ4]=jvj+357; pile[WZ5]=jvj+126; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+358,jvj+357,jvj+126)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=VJ; pile[WZ4]=jvj+361; 
(*f[270])( );     /*QUADRI7(100,21,140,VJ,jvj+361)*/
pile[WZ3]=(-593); pile[WZ4]=jvj+359; 
(*f[270])( );     /*QUADRI7(100,21,140,(-593),jvj+359)*/
pile[v[22]]=jvj+359; pile[WZ1]=103; pile[WZ2]=jvj+360; 
(*f[54])( );     /*TRI1(jvj+359,103,jvj+360)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+361; pile[WZ4]=jvj+360; pile[WZ5]=jvj+122; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+361,jvj+360,jvj+122)*/
pile[v[22]]=jvj+122; pile[WZ1]=(-20); pile[WZ2]=113; pile[WZ3]=jvj+123; 
(*f[180])( );     /*TRIENS0(jvj+122,(-20),113,jvj+123)*/
pile[v[22]]=100; pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+124; pile[WZ4]=jvj+123; pile[WZ5]=jvj+109; 
(*f[269])( );     /*QUADRI6(100,39,111,jvj+124,jvj+123,jvj+109)*/
pile[v[22]]=jvj+109; pile[WZ1]=114; pile[WZ2]=jvj+125; 
(*f[36])( );     /*PLUSC0(jvj+109,114,jvj+125)*/
pile[WZ2]=jvj+126; 
(*f[36])( );     /*PLUSC0(jvj+109,114,jvj+126)*/
goto l35;
l4:pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(102,X,jvj+7)*/
pile[v[22]]=jvj+7; pile[WZ1]=jvj+8; 
(*f[255])( );     /*COPEXP0(jvj+7,jvj+8)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=10571; pile[WZ4]=jvj+129; 
(*f[181])( );     /*QUADRI2(100,20,101,10571,jvj+129)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=VI; pile[WZ4]=jvj+364; 
(*f[270])( );     /*QUADRI7(100,21,140,VI,jvj+364)*/
pile[WZ3]=(-592); pile[WZ4]=jvj+362; 
(*f[270])( );     /*QUADRI7(100,21,140,(-592),jvj+362)*/
pile[v[22]]=jvj+362; pile[WZ1]=103; pile[WZ2]=jvj+363; 
(*f[54])( );     /*TRI1(jvj+362,103,jvj+363)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+364; pile[WZ4]=jvj+363; pile[WZ5]=jvj+130; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+364,jvj+363,jvj+130)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=3; pile[WZ4]=jvj+367; 
(*f[181])( );     /*QUADRI2(100,20,101,3,jvj+367)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-625); pile[WZ4]=jvj+365; 
(*f[270])( );     /*QUADRI7(100,21,140,(-625),jvj+365)*/
pile[v[22]]=jvj+365; pile[WZ1]=103; pile[WZ2]=jvj+366; 
(*f[54])( );     /*TRI1(jvj+365,103,jvj+366)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+367; pile[WZ4]=jvj+366; pile[WZ5]=jvj+131; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+367,jvj+366,jvj+131)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-596); pile[WZ4]=jvj+368; 
(*f[270])( );     /*QUADRI7(100,21,140,(-596),jvj+368)*/
pile[v[22]]=jvj+368; pile[WZ1]=103; pile[WZ2]=jvj+369; 
(*f[54])( );     /*TRI1(jvj+368,103,jvj+369)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+8; pile[WZ4]=jvj+369; pile[WZ5]=jvj+132; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+8,jvj+369,jvj+132)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=VJ; pile[WZ4]=jvj+372; 
(*f[270])( );     /*QUADRI7(100,21,140,VJ,jvj+372)*/
pile[WZ3]=(-593); pile[WZ4]=jvj+370; 
(*f[270])( );     /*QUADRI7(100,21,140,(-593),jvj+370)*/
pile[v[22]]=jvj+370; pile[WZ1]=103; pile[WZ2]=jvj+371; 
(*f[54])( );     /*TRI1(jvj+370,103,jvj+371)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+372; pile[WZ4]=jvj+371; pile[WZ5]=jvj+127; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+372,jvj+371,jvj+127)*/
pile[v[22]]=jvj+127; pile[WZ1]=(-20); pile[WZ2]=113; pile[WZ3]=jvj+128; 
(*f[180])( );     /*TRIENS0(jvj+127,(-20),113,jvj+128)*/
pile[v[22]]=100; pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+129; pile[WZ4]=jvj+128; pile[WZ5]=jvj+109; 
(*f[269])( );     /*QUADRI6(100,39,111,jvj+129,jvj+128,jvj+109)*/
pile[v[22]]=jvj+109; pile[WZ1]=114; pile[WZ2]=jvj+130; 
(*f[36])( );     /*PLUSC0(jvj+109,114,jvj+130)*/
pile[WZ2]=jvj+131; 
(*f[36])( );     /*PLUSC0(jvj+109,114,jvj+131)*/
pile[WZ2]=jvj+132; 
(*f[36])( );     /*PLUSC0(jvj+109,114,jvj+132)*/
goto l35;
l5:pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(102,X,jvj+9)*/
pile[v[22]]=jvj+9; pile[WZ1]=jvj+10; 
(*f[255])( );     /*COPEXP0(jvj+9,jvj+10)*/
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=VI; pile[WZ4]=jvj+375; 
(*f[270])( );     /*QUADRI7(100,21,140,VI,jvj+375)*/
pile[WZ3]=(-592); pile[WZ4]=jvj+373; 
(*f[270])( );     /*QUADRI7(100,21,140,(-592),jvj+373)*/
pile[v[22]]=jvj+373; pile[WZ1]=103; pile[WZ2]=jvj+374; 
(*f[54])( );     /*TRI1(jvj+373,103,jvj+374)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+375; pile[WZ4]=jvj+374; pile[WZ5]=jvj+133; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+375,jvj+374,jvj+133)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=VJ; pile[WZ4]=jvj+378; 
(*f[270])( );     /*QUADRI7(100,21,140,VJ,jvj+378)*/
pile[WZ3]=(-593); pile[WZ4]=jvj+376; 
(*f[270])( );     /*QUADRI7(100,21,140,(-593),jvj+376)*/
pile[v[22]]=jvj+376; pile[WZ1]=103; pile[WZ2]=jvj+377; 
(*f[54])( );     /*TRI1(jvj+376,103,jvj+377)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+378; pile[WZ4]=jvj+377; pile[WZ5]=jvj+135; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+378,jvj+377,jvj+135)*/
pile[v[22]]=jvj+133; pile[WZ1]=(-20); pile[WZ2]=114; pile[WZ3]=jvj+134; 
(*f[180])( );     /*TRIENS0(jvj+133,(-20),114,jvj+134)*/
pile[v[22]]=jvj+135; pile[WZ2]=jvj+134; pile[WZ3]=113; pile[WZ4]=jvj+136; 
(*f[298])( );     /*TRIENS1(jvj+135,(-20),jvj+134,113,jvj+136)*/
pile[v[22]]=100; pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+10; pile[WZ5]=jvj+109; 
(*f[269])( );     /*QUADRI6(100,39,111,jvj+10,jvj+136,jvj+109)*/
goto l35;
l6:pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(102,X,jvj+11)*/
pile[v[22]]=jvj+11; pile[WZ1]=jvj+12; 
(*f[255])( );     /*COPEXP0(jvj+11,jvj+12)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=10008; pile[WZ4]=jvj+139; 
(*f[181])( );     /*QUADRI2(100,20,101,10008,jvj+139)*/
pile[WZ3]=135; pile[WZ4]=jvj+381; 
(*f[181])( );     /*QUADRI2(100,20,101,135,jvj+381)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-629); pile[WZ4]=jvj+379; 
(*f[270])( );     /*QUADRI7(100,21,140,(-629),jvj+379)*/
pile[v[22]]=jvj+379; pile[WZ1]=103; pile[WZ2]=jvj+380; 
(*f[54])( );     /*TRI1(jvj+379,103,jvj+380)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+381; pile[WZ4]=jvj+380; pile[WZ5]=jvj+140; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+381,jvj+380,jvj+140)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=VI; pile[WZ4]=jvj+384; 
(*f[270])( );     /*QUADRI7(100,21,140,VI,jvj+384)*/
pile[WZ3]=(-592); pile[WZ4]=jvj+382; 
(*f[270])( );     /*QUADRI7(100,21,140,(-592),jvj+382)*/
pile[v[22]]=jvj+382; pile[WZ1]=103; pile[WZ2]=jvj+383; 
(*f[54])( );     /*TRI1(jvj+382,103,jvj+383)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+384; pile[WZ4]=jvj+383; pile[WZ5]=jvj+141; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+384,jvj+383,jvj+141)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-664); pile[WZ4]=jvj+385; 
(*f[270])( );     /*QUADRI7(100,21,140,(-664),jvj+385)*/
pile[v[22]]=jvj+385; pile[WZ1]=103; pile[WZ2]=jvj+386; 
(*f[54])( );     /*TRI1(jvj+385,103,jvj+386)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+12; pile[WZ4]=jvj+386; pile[WZ5]=jvj+142; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+12,jvj+386,jvj+142)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=VJ; pile[WZ4]=jvj+389; 
(*f[270])( );     /*QUADRI7(100,21,140,VJ,jvj+389)*/
pile[WZ3]=(-593); pile[WZ4]=jvj+387; 
(*f[270])( );     /*QUADRI7(100,21,140,(-593),jvj+387)*/
pile[v[22]]=jvj+387; pile[WZ1]=103; pile[WZ2]=jvj+388; 
(*f[54])( );     /*TRI1(jvj+387,103,jvj+388)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+389; pile[WZ4]=jvj+388; pile[WZ5]=jvj+137; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+389,jvj+388,jvj+137)*/
pile[v[22]]=jvj+137; pile[WZ1]=(-20); pile[WZ2]=113; pile[WZ3]=jvj+138; 
(*f[180])( );     /*TRIENS0(jvj+137,(-20),113,jvj+138)*/
pile[v[22]]=100; pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+139; pile[WZ4]=jvj+138; pile[WZ5]=jvj+109; 
(*f[269])( );     /*QUADRI6(100,39,111,jvj+139,jvj+138,jvj+109)*/
pile[v[22]]=jvj+109; pile[WZ1]=114; pile[WZ2]=jvj+140; 
(*f[36])( );     /*PLUSC0(jvj+109,114,jvj+140)*/
pile[WZ2]=jvj+141; 
(*f[36])( );     /*PLUSC0(jvj+109,114,jvj+141)*/
pile[WZ2]=jvj+142; 
(*f[36])( );     /*PLUSC0(jvj+109,114,jvj+142)*/
goto l35;
l7:if(x[jvj+6]!=121&&x[jvj+6]!=400&&x[jvj+6]!=199) goto l8;
pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(100,X,jvj+15)*/
if((x[jvj+15]!=22)) goto l8;
pile[v[22]]=109; pile[WZ1]=jvj+6; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(109,jvj+6,jvj+16)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+16; pile[WZ4]=jvj+152; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+16,jvj+152)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=VI; pile[WZ4]=jvj+400; 
(*f[270])( );     /*QUADRI7(100,21,140,VI,jvj+400)*/
pile[WZ3]=(-592); pile[WZ4]=jvj+398; 
(*f[270])( );     /*QUADRI7(100,21,140,(-592),jvj+398)*/
pile[v[22]]=jvj+398; pile[WZ1]=103; pile[WZ2]=jvj+399; 
(*f[54])( );     /*TRI1(jvj+398,103,jvj+399)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+400; pile[WZ4]=jvj+399; pile[WZ5]=jvj+148; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+400,jvj+399,jvj+148)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=VJ; pile[WZ4]=jvj+403; 
(*f[270])( );     /*QUADRI7(100,21,140,VJ,jvj+403)*/
pile[WZ3]=(-593); pile[WZ4]=jvj+401; 
(*f[270])( );     /*QUADRI7(100,21,140,(-593),jvj+401)*/
pile[v[22]]=jvj+401; pile[WZ1]=103; pile[WZ2]=jvj+402; 
(*f[54])( );     /*TRI1(jvj+401,103,jvj+402)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+403; pile[WZ4]=jvj+402; pile[WZ5]=jvj+150; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+403,jvj+402,jvj+150)*/
pile[v[22]]=jvj+148; pile[WZ1]=(-20); pile[WZ2]=114; pile[WZ3]=jvj+149; 
(*f[180])( );     /*TRIENS0(jvj+148,(-20),114,jvj+149)*/
pile[v[22]]=jvj+150; pile[WZ2]=jvj+149; pile[WZ3]=113; pile[WZ4]=jvj+151; 
(*f[298])( );     /*TRIENS1(jvj+150,(-20),jvj+149,113,jvj+151)*/
pile[v[22]]=100; pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+152; pile[WZ5]=jvj+109; 
(*f[269])( );     /*QUADRI6(100,39,111,jvj+152,jvj+151,jvj+109)*/
goto l35;
l8:if(x[jvj+6]!=384&&x[jvj+6]!=112&&x[jvj+6]!=382&&x[jvj+6]!=429&&x[jvj+6]!=379&&x[jvj+6]!=557&&x[jvj+6]!=1393) goto l9;
pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(100,X,jvj+17)*/
if((x[jvj+17]!=22)) goto l9;
pile[v[22]]=109; pile[WZ1]=jvj+6; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(109,jvj+6,jvj+18)*/
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(102,X,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=jvj+20; 
(*f[255])( );     /*COPEXP0(jvj+19,jvj+20)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+18; pile[WZ4]=jvj+155; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+18,jvj+155)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-596); pile[WZ4]=jvj+404; 
(*f[270])( );     /*QUADRI7(100,21,140,(-596),jvj+404)*/
pile[v[22]]=jvj+404; pile[WZ1]=103; pile[WZ2]=jvj+405; 
(*f[54])( );     /*TRI1(jvj+404,103,jvj+405)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+20; pile[WZ4]=jvj+405; pile[WZ5]=jvj+156; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+20,jvj+405,jvj+156)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=VI; pile[WZ4]=jvj+408; 
(*f[270])( );     /*QUADRI7(100,21,140,VI,jvj+408)*/
pile[WZ3]=(-592); pile[WZ4]=jvj+406; 
(*f[270])( );     /*QUADRI7(100,21,140,(-592),jvj+406)*/
pile[v[22]]=jvj+406; pile[WZ1]=103; pile[WZ2]=jvj+407; 
(*f[54])( );     /*TRI1(jvj+406,103,jvj+407)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+408; pile[WZ4]=jvj+407; pile[WZ5]=jvj+157; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+408,jvj+407,jvj+157)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=VJ; pile[WZ4]=jvj+411; 
(*f[270])( );     /*QUADRI7(100,21,140,VJ,jvj+411)*/
pile[WZ3]=(-593); pile[WZ4]=jvj+409; 
(*f[270])( );     /*QUADRI7(100,21,140,(-593),jvj+409)*/
pile[v[22]]=jvj+409; pile[WZ1]=103; pile[WZ2]=jvj+410; 
(*f[54])( );     /*TRI1(jvj+409,103,jvj+410)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+411; pile[WZ4]=jvj+410; pile[WZ5]=jvj+153; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+411,jvj+410,jvj+153)*/
pile[v[22]]=jvj+153; pile[WZ1]=(-20); pile[WZ2]=113; pile[WZ3]=jvj+154; 
(*f[180])( );     /*TRIENS0(jvj+153,(-20),113,jvj+154)*/
pile[v[22]]=100; pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+155; pile[WZ4]=jvj+154; pile[WZ5]=jvj+109; 
(*f[269])( );     /*QUADRI6(100,39,111,jvj+155,jvj+154,jvj+109)*/
pile[v[22]]=jvj+109; pile[WZ1]=114; pile[WZ2]=jvj+156; 
(*f[36])( );     /*PLUSC0(jvj+109,114,jvj+156)*/
pile[WZ2]=jvj+157; 
(*f[36])( );     /*PLUSC0(jvj+109,114,jvj+157)*/
goto l35;
l9:if(x[jvj+6]!=307&&x[jvj+6]!=421&&x[jvj+6]!=420&&x[jvj+6]!=703&&x[jvj+6]!=1262) goto l10;
pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(100,X,jvj+21)*/
if((x[jvj+21]!=22)) goto l10;
pile[v[22]]=109; pile[WZ1]=jvj+6; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(109,jvj+6,jvj+22)*/
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(102,X,jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ1]=jvj+24; 
(*f[255])( );     /*COPEXP0(jvj+23,jvj+24)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+22; pile[WZ4]=jvj+160; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+22,jvj+160)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-596); pile[WZ4]=jvj+412; 
(*f[270])( );     /*QUADRI7(100,21,140,(-596),jvj+412)*/
pile[v[22]]=jvj+412; pile[WZ1]=103; pile[WZ2]=jvj+413; 
(*f[54])( );     /*TRI1(jvj+412,103,jvj+413)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+24; pile[WZ4]=jvj+413; pile[WZ5]=jvj+161; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+24,jvj+413,jvj+161)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=VI; pile[WZ4]=jvj+416; 
(*f[270])( );     /*QUADRI7(100,21,140,VI,jvj+416)*/
pile[WZ3]=(-592); pile[WZ4]=jvj+414; 
(*f[270])( );     /*QUADRI7(100,21,140,(-592),jvj+414)*/
pile[v[22]]=jvj+414; pile[WZ1]=103; pile[WZ2]=jvj+415; 
(*f[54])( );     /*TRI1(jvj+414,103,jvj+415)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+416; pile[WZ4]=jvj+415; pile[WZ5]=jvj+162; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+416,jvj+415,jvj+162)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=VJ; pile[WZ4]=jvj+419; 
(*f[270])( );     /*QUADRI7(100,21,140,VJ,jvj+419)*/
pile[WZ3]=(-593); pile[WZ4]=jvj+417; 
(*f[270])( );     /*QUADRI7(100,21,140,(-593),jvj+417)*/
pile[v[22]]=jvj+417; pile[WZ1]=103; pile[WZ2]=jvj+418; 
(*f[54])( );     /*TRI1(jvj+417,103,jvj+418)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+419; pile[WZ4]=jvj+418; pile[WZ5]=jvj+158; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+419,jvj+418,jvj+158)*/
pile[v[22]]=jvj+158; pile[WZ1]=(-20); pile[WZ2]=113; pile[WZ3]=jvj+159; 
(*f[180])( );     /*TRIENS0(jvj+158,(-20),113,jvj+159)*/
pile[v[22]]=100; pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+160; pile[WZ4]=jvj+159; pile[WZ5]=jvj+109; 
(*f[269])( );     /*QUADRI6(100,39,111,jvj+160,jvj+159,jvj+109)*/
pile[v[22]]=jvj+109; pile[WZ1]=114; pile[WZ2]=jvj+161; 
(*f[36])( );     /*PLUSC0(jvj+109,114,jvj+161)*/
pile[WZ2]=jvj+162; 
(*f[36])( );     /*PLUSC0(jvj+109,114,jvj+162)*/
goto l35;
l10:if(x[jvj+6]!=752&&x[jvj+6]!=1031) goto l11;
pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(100,X,jvj+25)*/
if((x[jvj+25]!=22)) goto l11;
pile[v[22]]=109; pile[WZ1]=jvj+6; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(109,jvj+6,jvj+26)*/
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(102,X,jvj+27)*/
pile[v[22]]=jvj+27; pile[WZ1]=jvj+28; 
(*f[255])( );     /*COPEXP0(jvj+27,jvj+28)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+26; pile[WZ4]=jvj+165; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+26,jvj+165)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=VI; pile[WZ4]=jvj+422; 
(*f[270])( );     /*QUADRI7(100,21,140,VI,jvj+422)*/
pile[WZ3]=(-592); pile[WZ4]=jvj+420; 
(*f[270])( );     /*QUADRI7(100,21,140,(-592),jvj+420)*/
pile[v[22]]=jvj+420; pile[WZ1]=103; pile[WZ2]=jvj+421; 
(*f[54])( );     /*TRI1(jvj+420,103,jvj+421)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+422; pile[WZ4]=jvj+421; pile[WZ5]=jvj+166; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+422,jvj+421,jvj+166)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-598); pile[WZ4]=jvj+423; 
(*f[270])( );     /*QUADRI7(100,21,140,(-598),jvj+423)*/
pile[v[22]]=jvj+423; pile[WZ1]=103; pile[WZ2]=jvj+424; 
(*f[54])( );     /*TRI1(jvj+423,103,jvj+424)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+28; pile[WZ4]=jvj+424; pile[WZ5]=jvj+167; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+28,jvj+424,jvj+167)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=VJ; pile[WZ4]=jvj+427; 
(*f[270])( );     /*QUADRI7(100,21,140,VJ,jvj+427)*/
pile[WZ3]=(-593); pile[WZ4]=jvj+425; 
(*f[270])( );     /*QUADRI7(100,21,140,(-593),jvj+425)*/
pile[v[22]]=jvj+425; pile[WZ1]=103; pile[WZ2]=jvj+426; 
(*f[54])( );     /*TRI1(jvj+425,103,jvj+426)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+427; pile[WZ4]=jvj+426; pile[WZ5]=jvj+163; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+427,jvj+426,jvj+163)*/
pile[v[22]]=jvj+163; pile[WZ1]=(-20); pile[WZ2]=113; pile[WZ3]=jvj+164; 
(*f[180])( );     /*TRIENS0(jvj+163,(-20),113,jvj+164)*/
pile[v[22]]=100; pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+165; pile[WZ4]=jvj+164; pile[WZ5]=jvj+109; 
(*f[269])( );     /*QUADRI6(100,39,111,jvj+165,jvj+164,jvj+109)*/
pile[v[22]]=jvj+109; pile[WZ1]=114; pile[WZ2]=jvj+166; 
(*f[36])( );     /*PLUSC0(jvj+109,114,jvj+166)*/
pile[WZ2]=jvj+167; 
(*f[36])( );     /*PLUSC0(jvj+109,114,jvj+167)*/
goto l35;
l11:if(x[jvj+6]!=385&&x[jvj+6]!=148) goto l12;
pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(100,X,jvj+29)*/
if((x[jvj+29]!=22)) goto l12;
pile[v[22]]=241; pile[WZ1]=jvj+6; 
(*f[44])( );if(v[102]) goto l12;     /*FNDC1(241,jvj+6,V22)*/
V22=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(102,X,jvj+30)*/
(*f[1817])( );     /*NOUV2(V)*/
V=pile[v[22]]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=10008; pile[WZ4]=jvj+170; 
(*f[181])( );     /*QUADRI2(100,20,101,10008,jvj+170)*/
pile[WZ1]=96; pile[WZ2]=163; pile[WZ3]=V22; pile[WZ4]=jvj+430; 
(*f[270])( );     /*QUADRI7(100,96,163,V22,jvj+430)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-596); pile[WZ4]=jvj+428; 
(*f[270])( );     /*QUADRI7(100,21,140,(-596),jvj+428)*/
pile[v[22]]=jvj+428; pile[WZ1]=103; pile[WZ2]=jvj+429; 
(*f[54])( );     /*TRI1(jvj+428,103,jvj+429)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+430; pile[WZ4]=jvj+429; pile[WZ5]=jvj+171; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+430,jvj+429,jvj+171)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=VI; pile[WZ4]=jvj+433; 
(*f[270])( );     /*QUADRI7(100,21,140,VI,jvj+433)*/
pile[WZ3]=(-592); pile[WZ4]=jvj+431; 
(*f[270])( );     /*QUADRI7(100,21,140,(-592),jvj+431)*/
pile[v[22]]=jvj+431; pile[WZ1]=103; pile[WZ2]=jvj+432; 
(*f[54])( );     /*TRI1(jvj+431,103,jvj+432)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+433; pile[WZ4]=jvj+432; pile[WZ5]=jvj+172; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+433,jvj+432,jvj+172)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+436; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+436)*/
pile[WZ3]=(-593); pile[WZ4]=jvj+434; 
(*f[270])( );     /*QUADRI7(100,21,140,(-593),jvj+434)*/
pile[v[22]]=jvj+434; pile[WZ1]=103; pile[WZ2]=jvj+435; 
(*f[54])( );     /*TRI1(jvj+434,103,jvj+435)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+436; pile[WZ4]=jvj+435; pile[WZ5]=jvj+168; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+436,jvj+435,jvj+168)*/
pile[v[22]]=jvj+168; pile[WZ1]=(-20); pile[WZ2]=113; pile[WZ3]=jvj+169; 
(*f[180])( );     /*TRIENS0(jvj+168,(-20),113,jvj+169)*/
pile[v[22]]=100; pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+170; pile[WZ4]=jvj+169; pile[WZ5]=jvj+109; 
(*f[269])( );     /*QUADRI6(100,39,111,jvj+170,jvj+169,jvj+109)*/
pile[v[22]]=jvj+109; pile[WZ1]=114; pile[WZ2]=jvj+171; 
(*f[36])( );     /*PLUSC0(jvj+109,114,jvj+171)*/
pile[WZ2]=jvj+172; 
(*f[36])( );     /*PLUSC0(jvj+109,114,jvj+172)*/
pile[v[22]]=PP; pile[WZ1]=R; pile[WZ2]=jvj+30; pile[WZ3]=VJ; pile[WZ4]=V; 
(*f[2084])( );     /*COPK0(PP,R,jvj+30,VJ,V)*/
goto l35;
l12:if(x[jvj+6]!=104&&x[jvj+6]!=78) goto l13;
pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(100,X,jvj+31)*/
if((x[jvj+31]!=22)) goto l13;
pile[v[22]]=241; pile[WZ1]=jvj+6; 
(*f[44])( );if(v[102]) goto l13;     /*FNDC1(241,jvj+6,V189)*/
V189=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(102,X,jvj+32)*/
pile[v[22]]=103; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(103,X,jvj+33)*/
(*f[1817])( );     /*NOUV2(V179)*/
V179=pile[v[22]]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=10008; pile[WZ4]=jvj+175; 
(*f[181])( );     /*QUADRI2(100,20,101,10008,jvj+175)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=VI; pile[WZ4]=jvj+439; 
(*f[270])( );     /*QUADRI7(100,21,140,VI,jvj+439)*/
pile[WZ3]=(-592); pile[WZ4]=jvj+437; 
(*f[270])( );     /*QUADRI7(100,21,140,(-592),jvj+437)*/
pile[v[22]]=jvj+437; pile[WZ1]=103; pile[WZ2]=jvj+438; 
(*f[54])( );     /*TRI1(jvj+437,103,jvj+438)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+439; pile[WZ4]=jvj+438; pile[WZ5]=jvj+176; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+439,jvj+438,jvj+176)*/
pile[WZ1]=96; pile[WZ2]=163; pile[WZ3]=V189; pile[WZ4]=jvj+442; 
(*f[270])( );     /*QUADRI7(100,96,163,V189,jvj+442)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-596); pile[WZ4]=jvj+440; 
(*f[270])( );     /*QUADRI7(100,21,140,(-596),jvj+440)*/
pile[v[22]]=jvj+440; pile[WZ1]=103; pile[WZ2]=jvj+441; 
(*f[54])( );     /*TRI1(jvj+440,103,jvj+441)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+442; pile[WZ4]=jvj+441; pile[WZ5]=jvj+177; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+442,jvj+441,jvj+177)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V179; pile[WZ4]=jvj+445; 
(*f[270])( );     /*QUADRI7(100,21,140,V179,jvj+445)*/
pile[WZ3]=(-593); pile[WZ4]=jvj+443; 
(*f[270])( );     /*QUADRI7(100,21,140,(-593),jvj+443)*/
pile[v[22]]=jvj+443; pile[WZ1]=103; pile[WZ2]=jvj+444; 
(*f[54])( );     /*TRI1(jvj+443,103,jvj+444)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+445; pile[WZ4]=jvj+444; pile[WZ5]=jvj+173; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+445,jvj+444,jvj+173)*/
pile[v[22]]=jvj+173; pile[WZ1]=(-20); pile[WZ2]=113; pile[WZ3]=jvj+174; 
(*f[180])( );     /*TRIENS0(jvj+173,(-20),113,jvj+174)*/
pile[v[22]]=100; pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+175; pile[WZ4]=jvj+174; pile[WZ5]=jvj+109; 
(*f[269])( );     /*QUADRI6(100,39,111,jvj+175,jvj+174,jvj+109)*/
pile[v[22]]=jvj+109; pile[WZ1]=114; pile[WZ2]=jvj+176; 
(*f[36])( );     /*PLUSC0(jvj+109,114,jvj+176)*/
pile[WZ2]=jvj+177; 
(*f[36])( );     /*PLUSC0(jvj+109,114,jvj+177)*/
(*f[1817])( );     /*NOUV2(V181)*/
V181=pile[v[22]]; 
pile[v[22]]=PP; pile[WZ1]=R; pile[WZ2]=V181; pile[WZ3]=V179; pile[WZ4]=41; pile[WZ5]=40; pile[v[22]+6]=jvj+32; 
(*f[2161])( );     /*COPL0(PP,R,V181,V179,41,40,jvj+32)*/
(*f[1817])( );     /*NOUV2(V182)*/
V182=pile[v[22]]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=10426; pile[WZ4]=jvj+180; 
(*f[181])( );     /*QUADRI2(100,20,101,10426,jvj+180)*/
pile[WZ1]=89; pile[WZ2]=162; pile[WZ3]=32; pile[WZ4]=jvj+448; 
(*f[272])( );     /*QUADRI9(100,89,162,32,jvj+448)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-596); pile[WZ4]=jvj+446; 
(*f[270])( );     /*QUADRI7(100,21,140,(-596),jvj+446)*/
pile[v[22]]=jvj+446; pile[WZ1]=103; pile[WZ2]=jvj+447; 
(*f[54])( );     /*TRI1(jvj+446,103,jvj+447)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+448; pile[WZ4]=jvj+447; pile[WZ5]=jvj+181; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+448,jvj+447,jvj+181)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V181; pile[WZ4]=jvj+451; 
(*f[270])( );     /*QUADRI7(100,21,140,V181,jvj+451)*/
pile[WZ3]=(-592); pile[WZ4]=jvj+449; 
(*f[270])( );     /*QUADRI7(100,21,140,(-592),jvj+449)*/
pile[v[22]]=jvj+449; pile[WZ1]=103; pile[WZ2]=jvj+450; 
(*f[54])( );     /*TRI1(jvj+449,103,jvj+450)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+451; pile[WZ4]=jvj+450; pile[WZ5]=jvj+182; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+451,jvj+450,jvj+182)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V182; pile[WZ4]=jvj+454; 
(*f[270])( );     /*QUADRI7(100,21,140,V182,jvj+454)*/
pile[WZ3]=(-593); pile[WZ4]=jvj+452; 
(*f[270])( );     /*QUADRI7(100,21,140,(-593),jvj+452)*/
pile[v[22]]=jvj+452; pile[WZ1]=103; pile[WZ2]=jvj+453; 
(*f[54])( );     /*TRI1(jvj+452,103,jvj+453)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+454; pile[WZ4]=jvj+453; pile[WZ5]=jvj+178; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+454,jvj+453,jvj+178)*/
pile[v[22]]=jvj+178; pile[WZ1]=(-20); pile[WZ2]=113; pile[WZ3]=jvj+179; 
(*f[180])( );     /*TRIENS0(jvj+178,(-20),113,jvj+179)*/
pile[v[22]]=100; pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+180; pile[WZ4]=jvj+179; pile[WZ5]=jvj+111; 
(*f[269])( );     /*QUADRI6(100,39,111,jvj+180,jvj+179,jvj+111)*/
pile[v[22]]=jvj+111; pile[WZ1]=114; pile[WZ2]=jvj+181; 
(*f[36])( );     /*PLUSC0(jvj+111,114,jvj+181)*/
pile[WZ2]=jvj+182; 
(*f[36])( );     /*PLUSC0(jvj+111,114,jvj+182)*/
pile[v[22]]=PP; pile[WZ1]=R; pile[WZ2]=jvj+33; pile[WZ3]=VJ; pile[WZ4]=V182; 
(*f[2084])( );     /*COPK0(PP,R,jvj+33,VJ,V182)*/
goto l35;
l13:if((x[jvj+6]==615)) goto l14;
if((x[jvj+6]==154)) goto l15;
if((x[jvj+6]==152)) goto l16;
if((x[jvj+6]==501)) goto l17;
if((x[jvj+6]==157)) goto l18;
if((x[jvj+6]==1187)) goto l19;
if((x[jvj+6]==404)) goto l20;
if((x[jvj+6]==293)) goto l21;
if((x[jvj+6]==402)) goto l22;
if((x[jvj+6]!=389)) goto l23;
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+68; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(102,X,jvj+68)*/
pile[v[22]]=100; pile[WZ1]=jvj+68; pile[WZ2]=jvj+69; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(100,jvj+68,jvj+69)*/
if((x[jvj+69]!=120)) goto l23;
pile[v[22]]=102; pile[WZ2]=jvj+70; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(102,jvj+68,jvj+70)*/
pile[v[22]]=jvj+70; pile[WZ1]=jvj+71; 
(*f[255])( );     /*COPEXP0(jvj+70,jvj+71)*/
(*f[1817])( );     /*NOUV2(V23)*/
V23=pile[v[22]]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=10008; pile[WZ4]=jvj+240; 
(*f[181])( );     /*QUADRI2(100,20,101,10008,jvj+240)*/
pile[WZ3]=241; pile[WZ4]=jvj+557; 
(*f[181])( );     /*QUADRI2(100,20,101,241,jvj+557)*/
pile[v[22]]=jvj+71; pile[WZ1]=103; pile[WZ2]=jvj+556; 
(*f[54])( );     /*TRI1(jvj+71,103,jvj+556)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+557; pile[WZ4]=jvj+556; pile[WZ5]=jvj+555; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+557,jvj+556,jvj+555)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-596); pile[WZ4]=jvj+553; 
(*f[270])( );     /*QUADRI7(100,21,140,(-596),jvj+553)*/
pile[v[22]]=jvj+553; pile[WZ1]=103; pile[WZ2]=jvj+554; 
(*f[54])( );     /*TRI1(jvj+553,103,jvj+554)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+555; pile[WZ4]=jvj+554; pile[WZ5]=jvj+241; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+555,jvj+554,jvj+241)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=VI; pile[WZ4]=jvj+560; 
(*f[270])( );     /*QUADRI7(100,21,140,VI,jvj+560)*/
pile[WZ3]=(-592); pile[WZ4]=jvj+558; 
(*f[270])( );     /*QUADRI7(100,21,140,(-592),jvj+558)*/
pile[v[22]]=jvj+558; pile[WZ1]=103; pile[WZ2]=jvj+559; 
(*f[54])( );     /*TRI1(jvj+558,103,jvj+559)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+560; pile[WZ4]=jvj+559; pile[WZ5]=jvj+242; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+560,jvj+559,jvj+242)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V23; pile[WZ4]=jvj+563; 
(*f[270])( );     /*QUADRI7(100,21,140,V23,jvj+563)*/
pile[WZ3]=(-593); pile[WZ4]=jvj+561; 
(*f[270])( );     /*QUADRI7(100,21,140,(-593),jvj+561)*/
pile[v[22]]=jvj+561; pile[WZ1]=103; pile[WZ2]=jvj+562; 
(*f[54])( );     /*TRI1(jvj+561,103,jvj+562)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+563; pile[WZ4]=jvj+562; pile[WZ5]=jvj+238; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+563,jvj+562,jvj+238)*/
pile[v[22]]=jvj+238; pile[WZ1]=(-20); pile[WZ2]=113; pile[WZ3]=jvj+239; 
(*f[180])( );     /*TRIENS0(jvj+238,(-20),113,jvj+239)*/
pile[v[22]]=100; pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+240; pile[WZ4]=jvj+239; pile[WZ5]=jvj+109; 
(*f[269])( );     /*QUADRI6(100,39,111,jvj+240,jvj+239,jvj+109)*/
pile[v[22]]=jvj+109; pile[WZ1]=114; pile[WZ2]=jvj+241; 
(*f[36])( );     /*PLUSC0(jvj+109,114,jvj+241)*/
pile[WZ2]=jvj+242; 
(*f[36])( );     /*PLUSC0(jvj+109,114,jvj+242)*/
(*f[1817])( );     /*NOUV2(W)*/
W=pile[v[22]]; 
pile[v[22]]=PP; pile[WZ1]=R; pile[WZ2]=VJ; pile[WZ3]=W; pile[WZ4]=jvj+68; 
(*f[2159])( );     /*COPN0(PP,R,VJ,W,jvj+68)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=10426; pile[WZ4]=jvj+245; 
(*f[181])( );     /*QUADRI2(100,20,101,10426,jvj+245)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V23; pile[WZ4]=jvj+566; 
(*f[270])( );     /*QUADRI7(100,21,140,V23,jvj+566)*/
pile[WZ3]=(-592); pile[WZ4]=jvj+564; 
(*f[270])( );     /*QUADRI7(100,21,140,(-592),jvj+564)*/
pile[v[22]]=jvj+564; pile[WZ1]=103; pile[WZ2]=jvj+565; 
(*f[54])( );     /*TRI1(jvj+564,103,jvj+565)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+566; pile[WZ4]=jvj+565; pile[WZ5]=jvj+246; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+566,jvj+565,jvj+246)*/
pile[WZ1]=89; pile[WZ2]=162; pile[WZ3]=40; pile[WZ4]=jvj+569; 
(*f[272])( );     /*QUADRI9(100,89,162,40,jvj+569)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-596); pile[WZ4]=jvj+567; 
(*f[270])( );     /*QUADRI7(100,21,140,(-596),jvj+567)*/
pile[v[22]]=jvj+567; pile[WZ1]=103; pile[WZ2]=jvj+568; 
(*f[54])( );     /*TRI1(jvj+567,103,jvj+568)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+569; pile[WZ4]=jvj+568; pile[WZ5]=jvj+247; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+569,jvj+568,jvj+247)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=W; pile[WZ4]=jvj+572; 
(*f[270])( );     /*QUADRI7(100,21,140,W,jvj+572)*/
pile[WZ3]=(-593); pile[WZ4]=jvj+570; 
(*f[270])( );     /*QUADRI7(100,21,140,(-593),jvj+570)*/
pile[v[22]]=jvj+570; pile[WZ1]=103; pile[WZ2]=jvj+571; 
(*f[54])( );     /*TRI1(jvj+570,103,jvj+571)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+572; pile[WZ4]=jvj+571; pile[WZ5]=jvj+243; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+572,jvj+571,jvj+243)*/
pile[v[22]]=jvj+243; pile[WZ1]=(-20); pile[WZ2]=113; pile[WZ3]=jvj+244; 
(*f[180])( );     /*TRIENS0(jvj+243,(-20),113,jvj+244)*/
pile[v[22]]=100; pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+245; pile[WZ4]=jvj+244; pile[WZ5]=jvj+110; 
(*f[269])( );     /*QUADRI6(100,39,111,jvj+245,jvj+244,jvj+110)*/
pile[v[22]]=jvj+110; pile[WZ1]=114; pile[WZ2]=jvj+246; 
(*f[36])( );     /*PLUSC0(jvj+110,114,jvj+246)*/
pile[WZ2]=jvj+247; 
(*f[36])( );     /*PLUSC0(jvj+110,114,jvj+247)*/
goto l35;
l14:pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(102,X,jvj+34)*/
pile[v[22]]=jvj+34; pile[WZ1]=jvj+35; 
(*f[255])( );     /*COPEXP0(jvj+34,jvj+35)*/
pile[v[22]]=103; pile[WZ1]=X; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(103,X,jvj+36)*/
pile[v[22]]=jvj+36; pile[WZ1]=jvj+37; 
(*f[255])( );     /*COPEXP0(jvj+36,jvj+37)*/
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=VI; pile[WZ4]=jvj+457; 
(*f[270])( );     /*QUADRI7(100,21,140,VI,jvj+457)*/
pile[WZ3]=(-592); pile[WZ4]=jvj+455; 
(*f[270])( );     /*QUADRI7(100,21,140,(-592),jvj+455)*/
pile[v[22]]=jvj+455; pile[WZ1]=103; pile[WZ2]=jvj+456; 
(*f[54])( );     /*TRI1(jvj+455,103,jvj+456)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+457; pile[WZ4]=jvj+456; pile[WZ5]=jvj+185; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+457,jvj+456,jvj+185)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-596); pile[WZ4]=jvj+458; 
(*f[270])( );     /*QUADRI7(100,21,140,(-596),jvj+458)*/
pile[v[22]]=jvj+458; pile[WZ1]=103; pile[WZ2]=jvj+459; 
(*f[54])( );     /*TRI1(jvj+458,103,jvj+459)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+37; pile[WZ4]=jvj+459; pile[WZ5]=jvj+186; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+37,jvj+459,jvj+186)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=VJ; pile[WZ4]=jvj+462; 
(*f[270])( );     /*QUADRI7(100,21,140,VJ,jvj+462)*/
pile[WZ3]=(-593); pile[WZ4]=jvj+460; 
(*f[270])( );     /*QUADRI7(100,21,140,(-593),jvj+460)*/
pile[v[22]]=jvj+460; pile[WZ1]=103; pile[WZ2]=jvj+461; 
(*f[54])( );     /*TRI1(jvj+460,103,jvj+461)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+462; pile[WZ4]=jvj+461; pile[WZ5]=jvj+183; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+462,jvj+461,jvj+183)*/
pile[v[22]]=jvj+183; pile[WZ1]=(-20); pile[WZ2]=113; pile[WZ3]=jvj+184; 
(*f[180])( );     /*TRIENS0(jvj+183,(-20),113,jvj+184)*/
pile[v[22]]=100; pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+35; pile[WZ4]=jvj+184; pile[WZ5]=jvj+109; 
(*f[269])( );     /*QUADRI6(100,39,111,jvj+35,jvj+184,jvj+109)*/
pile[v[22]]=jvj+109; pile[WZ1]=114; pile[WZ2]=jvj+185; 
(*f[36])( );     /*PLUSC0(jvj+109,114,jvj+185)*/
pile[WZ2]=jvj+186; 
(*f[36])( );     /*PLUSC0(jvj+109,114,jvj+186)*/
goto l35;
l15:pile[v[22]]=103; pile[WZ1]=X; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(103,X,jvj+38)*/
pile[v[22]]=jvj+38; pile[WZ1]=jvj+39; 
(*f[255])( );     /*COPEXP0(jvj+38,jvj+39)*/
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(102,X,jvj+40)*/
pile[v[22]]=jvj+40; pile[WZ1]=jvj+41; 
(*f[255])( );     /*COPEXP0(jvj+40,jvj+41)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=10002; pile[WZ4]=jvj+189; 
(*f[181])( );     /*QUADRI2(100,20,101,10002,jvj+189)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=VI; pile[WZ4]=jvj+465; 
(*f[270])( );     /*QUADRI7(100,21,140,VI,jvj+465)*/
pile[WZ3]=(-592); pile[WZ4]=jvj+463; 
(*f[270])( );     /*QUADRI7(100,21,140,(-592),jvj+463)*/
pile[v[22]]=jvj+463; pile[WZ1]=103; pile[WZ2]=jvj+464; 
(*f[54])( );     /*TRI1(jvj+463,103,jvj+464)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+465; pile[WZ4]=jvj+464; pile[WZ5]=jvj+190; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+465,jvj+464,jvj+190)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-596); pile[WZ4]=jvj+466; 
(*f[270])( );     /*QUADRI7(100,21,140,(-596),jvj+466)*/
pile[v[22]]=jvj+466; pile[WZ1]=103; pile[WZ2]=jvj+467; 
(*f[54])( );     /*TRI1(jvj+466,103,jvj+467)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+41; pile[WZ4]=jvj+467; pile[WZ5]=jvj+191; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+41,jvj+467,jvj+191)*/
pile[WZ1]=89; pile[WZ2]=162; pile[WZ3]=32; pile[WZ4]=jvj+470; 
(*f[272])( );     /*QUADRI9(100,89,162,32,jvj+470)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-624); pile[WZ4]=jvj+468; 
(*f[270])( );     /*QUADRI7(100,21,140,(-624),jvj+468)*/
pile[v[22]]=jvj+468; pile[WZ1]=103; pile[WZ2]=jvj+469; 
(*f[54])( );     /*TRI1(jvj+468,103,jvj+469)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+470; pile[WZ4]=jvj+469; pile[WZ5]=jvj+192; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+470,jvj+469,jvj+192)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-657); pile[WZ4]=jvj+471; 
(*f[270])( );     /*QUADRI7(100,21,140,(-657),jvj+471)*/
pile[v[22]]=jvj+471; pile[WZ1]=103; pile[WZ2]=jvj+472; 
(*f[54])( );     /*TRI1(jvj+471,103,jvj+472)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+39; pile[WZ4]=jvj+472; pile[WZ5]=jvj+193; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+39,jvj+472,jvj+193)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=VJ; pile[WZ4]=jvj+475; 
(*f[270])( );     /*QUADRI7(100,21,140,VJ,jvj+475)*/
pile[WZ3]=(-593); pile[WZ4]=jvj+473; 
(*f[270])( );     /*QUADRI7(100,21,140,(-593),jvj+473)*/
pile[v[22]]=jvj+473; pile[WZ1]=103; pile[WZ2]=jvj+474; 
(*f[54])( );     /*TRI1(jvj+473,103,jvj+474)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+475; pile[WZ4]=jvj+474; pile[WZ5]=jvj+187; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+475,jvj+474,jvj+187)*/
pile[v[22]]=jvj+187; pile[WZ1]=(-20); pile[WZ2]=113; pile[WZ3]=jvj+188; 
(*f[180])( );     /*TRIENS0(jvj+187,(-20),113,jvj+188)*/
pile[v[22]]=100; pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+189; pile[WZ4]=jvj+188; pile[WZ5]=jvj+109; 
(*f[269])( );     /*QUADRI6(100,39,111,jvj+189,jvj+188,jvj+109)*/
pile[v[22]]=jvj+109; pile[WZ1]=114; pile[WZ2]=jvj+190; 
(*f[36])( );     /*PLUSC0(jvj+109,114,jvj+190)*/
pile[WZ2]=jvj+191; 
(*f[36])( );     /*PLUSC0(jvj+109,114,jvj+191)*/
pile[WZ2]=jvj+192; 
(*f[36])( );     /*PLUSC0(jvj+109,114,jvj+192)*/
pile[WZ2]=jvj+193; 
(*f[36])( );     /*PLUSC0(jvj+109,114,jvj+193)*/
goto l35;
l16:pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(102,X,jvj+42)*/
pile[v[22]]=jvj+42; pile[WZ1]=jvj+43; 
(*f[255])( );     /*COPEXP0(jvj+42,jvj+43)*/
pile[v[22]]=103; pile[WZ1]=X; pile[WZ2]=jvj+44; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(103,X,jvj+44)*/
pile[v[22]]=jvj+44; pile[WZ1]=jvj+45; 
(*f[255])( );     /*COPEXP0(jvj+44,jvj+45)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=10437; pile[WZ4]=jvj+196; 
(*f[181])( );     /*QUADRI2(100,20,101,10437,jvj+196)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=VI; pile[WZ4]=jvj+478; 
(*f[270])( );     /*QUADRI7(100,21,140,VI,jvj+478)*/
pile[WZ3]=(-592); pile[WZ4]=jvj+476; 
(*f[270])( );     /*QUADRI7(100,21,140,(-592),jvj+476)*/
pile[v[22]]=jvj+476; pile[WZ1]=103; pile[WZ2]=jvj+477; 
(*f[54])( );     /*TRI1(jvj+476,103,jvj+477)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+478; pile[WZ4]=jvj+477; pile[WZ5]=jvj+197; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+478,jvj+477,jvj+197)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-596); pile[WZ4]=jvj+479; 
(*f[270])( );     /*QUADRI7(100,21,140,(-596),jvj+479)*/
pile[v[22]]=jvj+479; pile[WZ1]=103; pile[WZ2]=jvj+480; 
(*f[54])( );     /*TRI1(jvj+479,103,jvj+480)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+45; pile[WZ4]=jvj+480; pile[WZ5]=jvj+198; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+45,jvj+480,jvj+198)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-625); pile[WZ4]=jvj+481; 
(*f[270])( );     /*QUADRI7(100,21,140,(-625),jvj+481)*/
pile[v[22]]=jvj+481; pile[WZ1]=103; pile[WZ2]=jvj+482; 
(*f[54])( );     /*TRI1(jvj+481,103,jvj+482)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+43; pile[WZ4]=jvj+482; pile[WZ5]=jvj+199; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+43,jvj+482,jvj+199)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=VJ; pile[WZ4]=jvj+485; 
(*f[270])( );     /*QUADRI7(100,21,140,VJ,jvj+485)*/
pile[WZ3]=(-593); pile[WZ4]=jvj+483; 
(*f[270])( );     /*QUADRI7(100,21,140,(-593),jvj+483)*/
pile[v[22]]=jvj+483; pile[WZ1]=103; pile[WZ2]=jvj+484; 
(*f[54])( );     /*TRI1(jvj+483,103,jvj+484)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+485; pile[WZ4]=jvj+484; pile[WZ5]=jvj+194; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+485,jvj+484,jvj+194)*/
pile[v[22]]=jvj+194; pile[WZ1]=(-20); pile[WZ2]=113; pile[WZ3]=jvj+195; 
(*f[180])( );     /*TRIENS0(jvj+194,(-20),113,jvj+195)*/
pile[v[22]]=100; pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+196; pile[WZ4]=jvj+195; pile[WZ5]=jvj+109; 
(*f[269])( );     /*QUADRI6(100,39,111,jvj+196,jvj+195,jvj+109)*/
pile[v[22]]=jvj+109; pile[WZ1]=114; pile[WZ2]=jvj+197; 
(*f[36])( );     /*PLUSC0(jvj+109,114,jvj+197)*/
pile[WZ2]=jvj+198; 
(*f[36])( );     /*PLUSC0(jvj+109,114,jvj+198)*/
pile[WZ2]=jvj+199; 
(*f[36])( );     /*PLUSC0(jvj+109,114,jvj+199)*/
goto l35;
l17:pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+46; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(102,X,jvj+46)*/
pile[v[22]]=jvj+46; pile[WZ1]=jvj+47; 
(*f[255])( );     /*COPEXP0(jvj+46,jvj+47)*/
pile[v[22]]=103; pile[WZ1]=X; pile[WZ2]=jvj+48; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(103,X,jvj+48)*/
pile[v[22]]=jvj+48; pile[WZ1]=jvj+49; 
(*f[255])( );     /*COPEXP0(jvj+48,jvj+49)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=10443; pile[WZ4]=jvj+202; 
(*f[181])( );     /*QUADRI2(100,20,101,10443,jvj+202)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-596); pile[WZ4]=jvj+486; 
(*f[270])( );     /*QUADRI7(100,21,140,(-596),jvj+486)*/
pile[v[22]]=jvj+486; pile[WZ1]=103; pile[WZ2]=jvj+487; 
(*f[54])( );     /*TRI1(jvj+486,103,jvj+487)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+49; pile[WZ4]=jvj+487; pile[WZ5]=jvj+203; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+49,jvj+487,jvj+203)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-611); pile[WZ4]=jvj+488; 
(*f[270])( );     /*QUADRI7(100,21,140,(-611),jvj+488)*/
pile[v[22]]=jvj+488; pile[WZ1]=103; pile[WZ2]=jvj+489; 
(*f[54])( );     /*TRI1(jvj+488,103,jvj+489)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+47; pile[WZ4]=jvj+489; pile[WZ5]=jvj+204; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+47,jvj+489,jvj+204)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=VI; pile[WZ4]=jvj+492; 
(*f[270])( );     /*QUADRI7(100,21,140,VI,jvj+492)*/
pile[WZ3]=(-592); pile[WZ4]=jvj+490; 
(*f[270])( );     /*QUADRI7(100,21,140,(-592),jvj+490)*/
pile[v[22]]=jvj+490; pile[WZ1]=103; pile[WZ2]=jvj+491; 
(*f[54])( );     /*TRI1(jvj+490,103,jvj+491)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+492; pile[WZ4]=jvj+491; pile[WZ5]=jvj+205; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+492,jvj+491,jvj+205)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=VJ; pile[WZ4]=jvj+495; 
(*f[270])( );     /*QUADRI7(100,21,140,VJ,jvj+495)*/
pile[WZ3]=(-593); pile[WZ4]=jvj+493; 
(*f[270])( );     /*QUADRI7(100,21,140,(-593),jvj+493)*/
pile[v[22]]=jvj+493; pile[WZ1]=103; pile[WZ2]=jvj+494; 
(*f[54])( );     /*TRI1(jvj+493,103,jvj+494)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+495; pile[WZ4]=jvj+494; pile[WZ5]=jvj+200; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+495,jvj+494,jvj+200)*/
pile[v[22]]=jvj+200; pile[WZ1]=(-20); pile[WZ2]=113; pile[WZ3]=jvj+201; 
(*f[180])( );     /*TRIENS0(jvj+200,(-20),113,jvj+201)*/
pile[v[22]]=100; pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+202; pile[WZ4]=jvj+201; pile[WZ5]=jvj+109; 
(*f[269])( );     /*QUADRI6(100,39,111,jvj+202,jvj+201,jvj+109)*/
pile[v[22]]=jvj+109; pile[WZ1]=114; pile[WZ2]=jvj+203; 
(*f[36])( );     /*PLUSC0(jvj+109,114,jvj+203)*/
pile[WZ2]=jvj+204; 
(*f[36])( );     /*PLUSC0(jvj+109,114,jvj+204)*/
pile[WZ2]=jvj+205; 
(*f[36])( );     /*PLUSC0(jvj+109,114,jvj+205)*/
goto l35;
l18:pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+50; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(102,X,jvj+50)*/
pile[v[22]]=jvj+50; pile[WZ1]=jvj+51; 
(*f[255])( );     /*COPEXP0(jvj+50,jvj+51)*/
pile[v[22]]=103; pile[WZ1]=X; pile[WZ2]=jvj+52; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(103,X,jvj+52)*/
pile[v[22]]=jvj+52; pile[WZ1]=jvj+53; 
(*f[255])( );     /*COPEXP0(jvj+52,jvj+53)*/
pile[v[22]]=160; pile[WZ1]=X; pile[WZ2]=jvj+54; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(160,X,jvj+54)*/
pile[v[22]]=jvj+54; pile[WZ1]=jvj+55; 
(*f[255])( );     /*COPEXP0(jvj+54,jvj+55)*/
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=VI; pile[WZ4]=jvj+498; 
(*f[270])( );     /*QUADRI7(100,21,140,VI,jvj+498)*/
pile[WZ3]=(-592); pile[WZ4]=jvj+496; 
(*f[270])( );     /*QUADRI7(100,21,140,(-592),jvj+496)*/
pile[v[22]]=jvj+496; pile[WZ1]=103; pile[WZ2]=jvj+497; 
(*f[54])( );     /*TRI1(jvj+496,103,jvj+497)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+498; pile[WZ4]=jvj+497; pile[WZ5]=jvj+208; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+498,jvj+497,jvj+208)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-596); pile[WZ4]=jvj+499; 
(*f[270])( );     /*QUADRI7(100,21,140,(-596),jvj+499)*/
pile[v[22]]=jvj+499; pile[WZ1]=103; pile[WZ2]=jvj+500; 
(*f[54])( );     /*TRI1(jvj+499,103,jvj+500)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+53; pile[WZ4]=jvj+500; pile[WZ5]=jvj+209; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+53,jvj+500,jvj+209)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-606); pile[WZ4]=jvj+501; 
(*f[270])( );     /*QUADRI7(100,21,140,(-606),jvj+501)*/
pile[v[22]]=jvj+501; pile[WZ1]=103; pile[WZ2]=jvj+502; 
(*f[54])( );     /*TRI1(jvj+501,103,jvj+502)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+55; pile[WZ4]=jvj+502; pile[WZ5]=jvj+210; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+55,jvj+502,jvj+210)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=VJ; pile[WZ4]=jvj+505; 
(*f[270])( );     /*QUADRI7(100,21,140,VJ,jvj+505)*/
pile[WZ3]=(-593); pile[WZ4]=jvj+503; 
(*f[270])( );     /*QUADRI7(100,21,140,(-593),jvj+503)*/
pile[v[22]]=jvj+503; pile[WZ1]=103; pile[WZ2]=jvj+504; 
(*f[54])( );     /*TRI1(jvj+503,103,jvj+504)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+505; pile[WZ4]=jvj+504; pile[WZ5]=jvj+206; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+505,jvj+504,jvj+206)*/
pile[v[22]]=jvj+206; pile[WZ1]=(-20); pile[WZ2]=113; pile[WZ3]=jvj+207; 
(*f[180])( );     /*TRIENS0(jvj+206,(-20),113,jvj+207)*/
pile[v[22]]=100; pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+51; pile[WZ4]=jvj+207; pile[WZ5]=jvj+109; 
(*f[269])( );     /*QUADRI6(100,39,111,jvj+51,jvj+207,jvj+109)*/
pile[v[22]]=jvj+109; pile[WZ1]=114; pile[WZ2]=jvj+208; 
(*f[36])( );     /*PLUSC0(jvj+109,114,jvj+208)*/
pile[WZ2]=jvj+209; 
(*f[36])( );     /*PLUSC0(jvj+109,114,jvj+209)*/
pile[WZ2]=jvj+210; 
(*f[36])( );     /*PLUSC0(jvj+109,114,jvj+210)*/
goto l35;
l19:pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+56; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(102,X,jvj+56)*/
pile[v[22]]=jvj+56; pile[WZ1]=jvj+57; 
(*f[255])( );     /*COPEXP0(jvj+56,jvj+57)*/
pile[v[22]]=103; pile[WZ1]=X; pile[WZ2]=jvj+58; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(103,X,jvj+58)*/
pile[v[22]]=jvj+58; pile[WZ1]=jvj+59; 
(*f[255])( );     /*COPEXP0(jvj+58,jvj+59)*/
pile[v[22]]=160; pile[WZ1]=X; pile[WZ2]=jvj+60; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(160,X,jvj+60)*/
pile[v[22]]=jvj+60; pile[WZ1]=jvj+61; 
(*f[255])( );     /*COPEXP0(jvj+60,jvj+61)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=11102; pile[WZ4]=jvj+213; 
(*f[181])( );     /*QUADRI2(100,20,101,11102,jvj+213)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-598); pile[WZ4]=jvj+506; 
(*f[270])( );     /*QUADRI7(100,21,140,(-598),jvj+506)*/
pile[v[22]]=jvj+506; pile[WZ1]=103; pile[WZ2]=jvj+507; 
(*f[54])( );     /*TRI1(jvj+506,103,jvj+507)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+57; pile[WZ4]=jvj+507; pile[WZ5]=jvj+214; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+57,jvj+507,jvj+214)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-591); pile[WZ4]=jvj+508; 
(*f[270])( );     /*QUADRI7(100,21,140,(-591),jvj+508)*/
pile[v[22]]=jvj+508; pile[WZ1]=103; pile[WZ2]=jvj+509; 
(*f[54])( );     /*TRI1(jvj+508,103,jvj+509)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+59; pile[WZ4]=jvj+509; pile[WZ5]=jvj+215; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+59,jvj+509,jvj+215)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-632); pile[WZ4]=jvj+510; 
(*f[270])( );     /*QUADRI7(100,21,140,(-632),jvj+510)*/
pile[v[22]]=jvj+510; pile[WZ1]=103; pile[WZ2]=jvj+511; 
(*f[54])( );     /*TRI1(jvj+510,103,jvj+511)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+61; pile[WZ4]=jvj+511; pile[WZ5]=jvj+216; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+61,jvj+511,jvj+216)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=VI; pile[WZ4]=jvj+514; 
(*f[270])( );     /*QUADRI7(100,21,140,VI,jvj+514)*/
pile[WZ3]=(-592); pile[WZ4]=jvj+512; 
(*f[270])( );     /*QUADRI7(100,21,140,(-592),jvj+512)*/
pile[v[22]]=jvj+512; pile[WZ1]=103; pile[WZ2]=jvj+513; 
(*f[54])( );     /*TRI1(jvj+512,103,jvj+513)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+514; pile[WZ4]=jvj+513; pile[WZ5]=jvj+217; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+514,jvj+513,jvj+217)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=VJ; pile[WZ4]=jvj+517; 
(*f[270])( );     /*QUADRI7(100,21,140,VJ,jvj+517)*/
pile[WZ3]=(-593); pile[WZ4]=jvj+515; 
(*f[270])( );     /*QUADRI7(100,21,140,(-593),jvj+515)*/
pile[v[22]]=jvj+515; pile[WZ1]=103; pile[WZ2]=jvj+516; 
(*f[54])( );     /*TRI1(jvj+515,103,jvj+516)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+517; pile[WZ4]=jvj+516; pile[WZ5]=jvj+211; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+517,jvj+516,jvj+211)*/
pile[v[22]]=jvj+211; pile[WZ1]=(-20); pile[WZ2]=113; pile[WZ3]=jvj+212; 
(*f[180])( );     /*TRIENS0(jvj+211,(-20),113,jvj+212)*/
pile[v[22]]=100; pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+213; pile[WZ4]=jvj+212; pile[WZ5]=jvj+109; 
(*f[269])( );     /*QUADRI6(100,39,111,jvj+213,jvj+212,jvj+109)*/
pile[v[22]]=jvj+109; pile[WZ1]=114; pile[WZ2]=jvj+214; 
(*f[36])( );     /*PLUSC0(jvj+109,114,jvj+214)*/
pile[WZ2]=jvj+215; 
(*f[36])( );     /*PLUSC0(jvj+109,114,jvj+215)*/
pile[WZ2]=jvj+216; 
(*f[36])( );     /*PLUSC0(jvj+109,114,jvj+216)*/
pile[WZ2]=jvj+217; 
(*f[36])( );     /*PLUSC0(jvj+109,114,jvj+217)*/
goto l35;
l20:pile[v[22]]=241; pile[WZ1]=404; 
(*f[44])( );if(v[102]) goto l23;     /*FNDC1(241,404,V120)*/
V120=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+62; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(102,X,jvj+62)*/
(*f[1817])( );     /*NOUV2(V115)*/
V115=pile[v[22]]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=10008; pile[WZ4]=jvj+220; 
(*f[181])( );     /*QUADRI2(100,20,101,10008,jvj+220)*/
pile[WZ1]=96; pile[WZ2]=163; pile[WZ3]=V120; pile[WZ4]=jvj+520; 
(*f[270])( );     /*QUADRI7(100,96,163,V120,jvj+520)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-596); pile[WZ4]=jvj+518; 
(*f[270])( );     /*QUADRI7(100,21,140,(-596),jvj+518)*/
pile[v[22]]=jvj+518; pile[WZ1]=103; pile[WZ2]=jvj+519; 
(*f[54])( );     /*TRI1(jvj+518,103,jvj+519)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+520; pile[WZ4]=jvj+519; pile[WZ5]=jvj+221; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+520,jvj+519,jvj+221)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=VI; pile[WZ4]=jvj+523; 
(*f[270])( );     /*QUADRI7(100,21,140,VI,jvj+523)*/
pile[WZ3]=(-592); pile[WZ4]=jvj+521; 
(*f[270])( );     /*QUADRI7(100,21,140,(-592),jvj+521)*/
pile[v[22]]=jvj+521; pile[WZ1]=103; pile[WZ2]=jvj+522; 
(*f[54])( );     /*TRI1(jvj+521,103,jvj+522)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+523; pile[WZ4]=jvj+522; pile[WZ5]=jvj+222; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+523,jvj+522,jvj+222)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V115; pile[WZ4]=jvj+526; 
(*f[270])( );     /*QUADRI7(100,21,140,V115,jvj+526)*/
pile[WZ3]=(-593); pile[WZ4]=jvj+524; 
(*f[270])( );     /*QUADRI7(100,21,140,(-593),jvj+524)*/
pile[v[22]]=jvj+524; pile[WZ1]=103; pile[WZ2]=jvj+525; 
(*f[54])( );     /*TRI1(jvj+524,103,jvj+525)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+526; pile[WZ4]=jvj+525; pile[WZ5]=jvj+218; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+526,jvj+525,jvj+218)*/
pile[v[22]]=jvj+218; pile[WZ1]=(-20); pile[WZ2]=113; pile[WZ3]=jvj+219; 
(*f[180])( );     /*TRIENS0(jvj+218,(-20),113,jvj+219)*/
pile[v[22]]=100; pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+220; pile[WZ4]=jvj+219; pile[WZ5]=jvj+109; 
(*f[269])( );     /*QUADRI6(100,39,111,jvj+220,jvj+219,jvj+109)*/
pile[v[22]]=jvj+109; pile[WZ1]=114; pile[WZ2]=jvj+221; 
(*f[36])( );     /*PLUSC0(jvj+109,114,jvj+221)*/
pile[WZ2]=jvj+222; 
(*f[36])( );     /*PLUSC0(jvj+109,114,jvj+222)*/
pile[v[22]]=PP; pile[WZ1]=R; pile[WZ2]=VJ; pile[WZ3]=V115; pile[WZ4]=41; pile[WZ5]=40; pile[v[22]+6]=jvj+62; 
(*f[2161])( );     /*COPL0(PP,R,VJ,V115,41,40,jvj+62)*/
goto l35;
l21:pile[v[22]]=103; pile[WZ1]=X; pile[WZ2]=jvj+63; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(103,X,jvj+63)*/
pile[v[22]]=102; pile[WZ2]=jvj+64; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(102,X,jvj+64)*/
pile[v[22]]=jvj+64; pile[WZ1]=jvj+65; 
(*f[255])( );     /*COPEXP0(jvj+64,jvj+65)*/
(*f[1817])( );     /*NOUV2(V233)*/
V233=pile[v[22]]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=10008; pile[WZ4]=jvj+225; 
(*f[181])( );     /*QUADRI2(100,20,101,10008,jvj+225)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-596); pile[WZ4]=jvj+527; 
(*f[270])( );     /*QUADRI7(100,21,140,(-596),jvj+527)*/
pile[v[22]]=jvj+527; pile[WZ1]=103; pile[WZ2]=jvj+528; 
(*f[54])( );     /*TRI1(jvj+527,103,jvj+528)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+65; pile[WZ4]=jvj+528; pile[WZ5]=jvj+226; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+65,jvj+528,jvj+226)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=VI; pile[WZ4]=jvj+531; 
(*f[270])( );     /*QUADRI7(100,21,140,VI,jvj+531)*/
pile[WZ3]=(-592); pile[WZ4]=jvj+529; 
(*f[270])( );     /*QUADRI7(100,21,140,(-592),jvj+529)*/
pile[v[22]]=jvj+529; pile[WZ1]=103; pile[WZ2]=jvj+530; 
(*f[54])( );     /*TRI1(jvj+529,103,jvj+530)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+531; pile[WZ4]=jvj+530; pile[WZ5]=jvj+227; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+531,jvj+530,jvj+227)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V233; pile[WZ4]=jvj+534; 
(*f[270])( );     /*QUADRI7(100,21,140,V233,jvj+534)*/
pile[WZ3]=(-593); pile[WZ4]=jvj+532; 
(*f[270])( );     /*QUADRI7(100,21,140,(-593),jvj+532)*/
pile[v[22]]=jvj+532; pile[WZ1]=103; pile[WZ2]=jvj+533; 
(*f[54])( );     /*TRI1(jvj+532,103,jvj+533)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+534; pile[WZ4]=jvj+533; pile[WZ5]=jvj+223; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+534,jvj+533,jvj+223)*/
pile[v[22]]=jvj+223; pile[WZ1]=(-20); pile[WZ2]=113; pile[WZ3]=jvj+224; 
(*f[180])( );     /*TRIENS0(jvj+223,(-20),113,jvj+224)*/
pile[v[22]]=100; pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+225; pile[WZ4]=jvj+224; pile[WZ5]=jvj+109; 
(*f[269])( );     /*QUADRI6(100,39,111,jvj+225,jvj+224,jvj+109)*/
pile[v[22]]=jvj+109; pile[WZ1]=114; pile[WZ2]=jvj+226; 
(*f[36])( );     /*PLUSC0(jvj+109,114,jvj+226)*/
pile[WZ2]=jvj+227; 
(*f[36])( );     /*PLUSC0(jvj+109,114,jvj+227)*/
pile[v[22]]=PP; pile[WZ1]=R; pile[WZ2]=VJ; pile[WZ3]=V233; pile[WZ4]=93; pile[WZ5]=91; pile[v[22]+6]=jvj+63; 
(*f[2161])( );     /*COPL0(PP,R,VJ,V233,93,91,jvj+63)*/
goto l35;
l22:pile[v[22]]=241; pile[WZ1]=402; 
(*f[44])( );if(v[102]) goto l23;     /*FNDC1(241,402,V171)*/
V171=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+66; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(102,X,jvj+66)*/
pile[v[22]]=103; pile[WZ2]=jvj+67; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(103,X,jvj+67)*/
(*f[1817])( );     /*NOUV2(V163)*/
V163=pile[v[22]]; 
(*f[1817])( );     /*NOUV2(V164)*/
V164=pile[v[22]]; 
(*f[1817])( );     /*NOUV2(V165)*/
V165=pile[v[22]]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=10008; pile[WZ4]=jvj+230; 
(*f[181])( );     /*QUADRI2(100,20,101,10008,jvj+230)*/
pile[WZ1]=96; pile[WZ2]=163; pile[WZ3]=V171; pile[WZ4]=jvj+537; 
(*f[270])( );     /*QUADRI7(100,96,163,V171,jvj+537)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-596); pile[WZ4]=jvj+535; 
(*f[270])( );     /*QUADRI7(100,21,140,(-596),jvj+535)*/
pile[v[22]]=jvj+535; pile[WZ1]=103; pile[WZ2]=jvj+536; 
(*f[54])( );     /*TRI1(jvj+535,103,jvj+536)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+537; pile[WZ4]=jvj+536; pile[WZ5]=jvj+231; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+537,jvj+536,jvj+231)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=VI; pile[WZ4]=jvj+540; 
(*f[270])( );     /*QUADRI7(100,21,140,VI,jvj+540)*/
pile[WZ3]=(-592); pile[WZ4]=jvj+538; 
(*f[270])( );     /*QUADRI7(100,21,140,(-592),jvj+538)*/
pile[v[22]]=jvj+538; pile[WZ1]=103; pile[WZ2]=jvj+539; 
(*f[54])( );     /*TRI1(jvj+538,103,jvj+539)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+540; pile[WZ4]=jvj+539; pile[WZ5]=jvj+232; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+540,jvj+539,jvj+232)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V163; pile[WZ4]=jvj+543; 
(*f[270])( );     /*QUADRI7(100,21,140,V163,jvj+543)*/
pile[WZ3]=(-593); pile[WZ4]=jvj+541; 
(*f[270])( );     /*QUADRI7(100,21,140,(-593),jvj+541)*/
pile[v[22]]=jvj+541; pile[WZ1]=103; pile[WZ2]=jvj+542; 
(*f[54])( );     /*TRI1(jvj+541,103,jvj+542)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+543; pile[WZ4]=jvj+542; pile[WZ5]=jvj+228; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+543,jvj+542,jvj+228)*/
pile[v[22]]=jvj+228; pile[WZ1]=(-20); pile[WZ2]=113; pile[WZ3]=jvj+229; 
(*f[180])( );     /*TRIENS0(jvj+228,(-20),113,jvj+229)*/
pile[v[22]]=100; pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+230; pile[WZ4]=jvj+229; pile[WZ5]=jvj+109; 
(*f[269])( );     /*QUADRI6(100,39,111,jvj+230,jvj+229,jvj+109)*/
pile[v[22]]=jvj+109; pile[WZ1]=114; pile[WZ2]=jvj+231; 
(*f[36])( );     /*PLUSC0(jvj+109,114,jvj+231)*/
pile[WZ2]=jvj+232; 
(*f[36])( );     /*PLUSC0(jvj+109,114,jvj+232)*/
pile[v[22]]=PP; pile[WZ1]=R; pile[WZ2]=V164; pile[WZ3]=V163; pile[WZ4]=41; pile[WZ5]=40; pile[v[22]+6]=jvj+66; 
(*f[2161])( );     /*COPL0(PP,R,V164,V163,41,40,jvj+66)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=10426; pile[WZ4]=jvj+235; 
(*f[181])( );     /*QUADRI2(100,20,101,10426,jvj+235)*/
pile[WZ1]=89; pile[WZ2]=162; pile[WZ3]=32; pile[WZ4]=jvj+546; 
(*f[272])( );     /*QUADRI9(100,89,162,32,jvj+546)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-596); pile[WZ4]=jvj+544; 
(*f[270])( );     /*QUADRI7(100,21,140,(-596),jvj+544)*/
pile[v[22]]=jvj+544; pile[WZ1]=103; pile[WZ2]=jvj+545; 
(*f[54])( );     /*TRI1(jvj+544,103,jvj+545)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+546; pile[WZ4]=jvj+545; pile[WZ5]=jvj+236; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+546,jvj+545,jvj+236)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V164; pile[WZ4]=jvj+549; 
(*f[270])( );     /*QUADRI7(100,21,140,V164,jvj+549)*/
pile[WZ3]=(-592); pile[WZ4]=jvj+547; 
(*f[270])( );     /*QUADRI7(100,21,140,(-592),jvj+547)*/
pile[v[22]]=jvj+547; pile[WZ1]=103; pile[WZ2]=jvj+548; 
(*f[54])( );     /*TRI1(jvj+547,103,jvj+548)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+549; pile[WZ4]=jvj+548; pile[WZ5]=jvj+237; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+549,jvj+548,jvj+237)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V165; pile[WZ4]=jvj+552; 
(*f[270])( );     /*QUADRI7(100,21,140,V165,jvj+552)*/
pile[WZ3]=(-593); pile[WZ4]=jvj+550; 
(*f[270])( );     /*QUADRI7(100,21,140,(-593),jvj+550)*/
pile[v[22]]=jvj+550; pile[WZ1]=103; pile[WZ2]=jvj+551; 
(*f[54])( );     /*TRI1(jvj+550,103,jvj+551)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+552; pile[WZ4]=jvj+551; pile[WZ5]=jvj+233; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+552,jvj+551,jvj+233)*/
pile[v[22]]=jvj+233; pile[WZ1]=(-20); pile[WZ2]=113; pile[WZ3]=jvj+234; 
(*f[180])( );     /*TRIENS0(jvj+233,(-20),113,jvj+234)*/
pile[v[22]]=100; pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+235; pile[WZ4]=jvj+234; pile[WZ5]=jvj+110; 
(*f[269])( );     /*QUADRI6(100,39,111,jvj+235,jvj+234,jvj+110)*/
pile[v[22]]=jvj+110; pile[WZ1]=114; pile[WZ2]=jvj+236; 
(*f[36])( );     /*PLUSC0(jvj+110,114,jvj+236)*/
pile[WZ2]=jvj+237; 
(*f[36])( );     /*PLUSC0(jvj+110,114,jvj+237)*/
pile[v[22]]=PP; pile[WZ1]=R; pile[WZ2]=VJ; pile[WZ3]=V165; pile[WZ4]=125; pile[WZ5]=123; pile[v[22]+6]=jvj+67; 
(*f[2161])( );     /*COPL0(PP,R,VJ,V165,125,123,jvj+67)*/
goto l35;
l23:V69=347;
if((V69!=x[jvj+6])) goto l24;
pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+72; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(100,X,jvj+72)*/
if((x[jvj+72]!=22)) goto l24;
pile[v[22]]=102; pile[WZ2]=jvj+73; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(102,X,jvj+73)*/
pile[v[22]]=100; pile[WZ1]=jvj+73; pile[WZ2]=jvj+74; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(100,jvj+73,jvj+74)*/
if((x[jvj+74]!=120)) goto l24;
pile[v[22]]=241; pile[WZ1]=347; 
(*f[44])( );if(v[102]) goto l24;     /*FNDC1(241,347,V82)*/
V82=pile[WZ2]; 
pile[v[22]]=391; 
(*f[44])( );if(v[102]) goto l24;     /*FNDC1(391,347,V83)*/
V83=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=jvj+73; pile[WZ2]=jvj+75; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(102,jvj+73,jvj+75)*/
(*f[1817])( );     /*NOUV2(V70)*/
V70=pile[v[22]]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=10008; pile[WZ4]=jvj+250; 
(*f[181])( );     /*QUADRI2(100,20,101,10008,jvj+250)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=VI; pile[WZ4]=jvj+575; 
(*f[270])( );     /*QUADRI7(100,21,140,VI,jvj+575)*/
pile[WZ3]=(-592); pile[WZ4]=jvj+573; 
(*f[270])( );     /*QUADRI7(100,21,140,(-592),jvj+573)*/
pile[v[22]]=jvj+573; pile[WZ1]=103; pile[WZ2]=jvj+574; 
(*f[54])( );     /*TRI1(jvj+573,103,jvj+574)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+575; pile[WZ4]=jvj+574; pile[WZ5]=jvj+251; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+575,jvj+574,jvj+251)*/
pile[WZ1]=96; pile[WZ2]=163; pile[WZ3]=V82; pile[WZ4]=jvj+578; 
(*f[270])( );     /*QUADRI7(100,96,163,V82,jvj+578)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-596); pile[WZ4]=jvj+576; 
(*f[270])( );     /*QUADRI7(100,21,140,(-596),jvj+576)*/
pile[v[22]]=jvj+576; pile[WZ1]=103; pile[WZ2]=jvj+577; 
(*f[54])( );     /*TRI1(jvj+576,103,jvj+577)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+578; pile[WZ4]=jvj+577; pile[WZ5]=jvj+252; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+578,jvj+577,jvj+252)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V70; pile[WZ4]=jvj+581; 
(*f[270])( );     /*QUADRI7(100,21,140,V70,jvj+581)*/
pile[WZ3]=(-593); pile[WZ4]=jvj+579; 
(*f[270])( );     /*QUADRI7(100,21,140,(-593),jvj+579)*/
pile[v[22]]=jvj+579; pile[WZ1]=103; pile[WZ2]=jvj+580; 
(*f[54])( );     /*TRI1(jvj+579,103,jvj+580)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+581; pile[WZ4]=jvj+580; pile[WZ5]=jvj+248; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+581,jvj+580,jvj+248)*/
pile[v[22]]=jvj+248; pile[WZ1]=(-20); pile[WZ2]=113; pile[WZ3]=jvj+249; 
(*f[180])( );     /*TRIENS0(jvj+248,(-20),113,jvj+249)*/
pile[v[22]]=100; pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+250; pile[WZ4]=jvj+249; pile[WZ5]=jvj+109; 
(*f[269])( );     /*QUADRI6(100,39,111,jvj+250,jvj+249,jvj+109)*/
pile[v[22]]=jvj+109; pile[WZ1]=114; pile[WZ2]=jvj+251; 
(*f[36])( );     /*PLUSC0(jvj+109,114,jvj+251)*/
pile[WZ2]=jvj+252; 
(*f[36])( );     /*PLUSC0(jvj+109,114,jvj+252)*/
(*f[1817])( );     /*NOUV2(V71)*/
V71=pile[v[22]]; 
pile[v[22]]=PP; pile[WZ1]=R; pile[WZ2]=V71; pile[WZ3]=V70; pile[WZ4]=jvj+75; pile[WZ5]=jvj+73; pile[v[22]+6]=347; 
(*f[2160])( );     /*COPO0(PP,R,V71,V70,jvj+75,jvj+73,347)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=10008; pile[WZ4]=jvj+255; 
(*f[181])( );     /*QUADRI2(100,20,101,10008,jvj+255)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V71; pile[WZ4]=jvj+584; 
(*f[270])( );     /*QUADRI7(100,21,140,V71,jvj+584)*/
pile[WZ3]=(-592); pile[WZ4]=jvj+582; 
(*f[270])( );     /*QUADRI7(100,21,140,(-592),jvj+582)*/
pile[v[22]]=jvj+582; pile[WZ1]=103; pile[WZ2]=jvj+583; 
(*f[54])( );     /*TRI1(jvj+582,103,jvj+583)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+584; pile[WZ4]=jvj+583; pile[WZ5]=jvj+256; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+584,jvj+583,jvj+256)*/
pile[WZ1]=96; pile[WZ2]=163; pile[WZ3]=V83; pile[WZ4]=jvj+587; 
(*f[270])( );     /*QUADRI7(100,96,163,V83,jvj+587)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-596); pile[WZ4]=jvj+585; 
(*f[270])( );     /*QUADRI7(100,21,140,(-596),jvj+585)*/
pile[v[22]]=jvj+585; pile[WZ1]=103; pile[WZ2]=jvj+586; 
(*f[54])( );     /*TRI1(jvj+585,103,jvj+586)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+587; pile[WZ4]=jvj+586; pile[WZ5]=jvj+257; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+587,jvj+586,jvj+257)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=VJ; pile[WZ4]=jvj+590; 
(*f[270])( );     /*QUADRI7(100,21,140,VJ,jvj+590)*/
pile[WZ3]=(-593); pile[WZ4]=jvj+588; 
(*f[270])( );     /*QUADRI7(100,21,140,(-593),jvj+588)*/
pile[v[22]]=jvj+588; pile[WZ1]=103; pile[WZ2]=jvj+589; 
(*f[54])( );     /*TRI1(jvj+588,103,jvj+589)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+590; pile[WZ4]=jvj+589; pile[WZ5]=jvj+253; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+590,jvj+589,jvj+253)*/
pile[v[22]]=jvj+253; pile[WZ1]=(-20); pile[WZ2]=113; pile[WZ3]=jvj+254; 
(*f[180])( );     /*TRIENS0(jvj+253,(-20),113,jvj+254)*/
pile[v[22]]=100; pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+255; pile[WZ4]=jvj+254; pile[WZ5]=jvj+110; 
(*f[269])( );     /*QUADRI6(100,39,111,jvj+255,jvj+254,jvj+110)*/
pile[v[22]]=jvj+110; pile[WZ1]=114; pile[WZ2]=jvj+256; 
(*f[36])( );     /*PLUSC0(jvj+110,114,jvj+256)*/
pile[WZ2]=jvj+257; 
(*f[36])( );     /*PLUSC0(jvj+110,114,jvj+257)*/
goto l35;
l24:if((x[jvj+6]==407)) goto l25;
if((x[jvj+6]==106)) goto l26;
if((x[jvj+6]==403)) goto l27;
if((x[jvj+6]==142)) goto l28;
if((x[jvj+6]==378)) goto l29;
if((x[jvj+6]==396)) goto l30;
if((x[jvj+6]==168)) goto l31;
if((x[jvj+6]==388)) goto l32;
if((x[jvj+6]==393)) goto l33;
if((x[jvj+6]==308)) goto l34;
if((x[jvj+6]!=290)) goto l41;
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+105; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(102,X,jvj+105)*/
pile[v[22]]=160; pile[WZ2]=jvj+106; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(160,X,jvj+106)*/
pile[v[22]]=103; pile[WZ2]=jvj+107; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(103,X,jvj+107)*/
pile[v[22]]=jvj+107; pile[WZ1]=jvj+108; 
(*f[255])( );     /*COPEXP0(jvj+107,jvj+108)*/
(*f[1817])( );     /*NOUV2(V223)*/
V223=pile[v[22]]; 
(*f[1817])( );     /*NOUV2(V224)*/
V224=pile[v[22]]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=10008; pile[WZ4]=jvj+350; 
(*f[181])( );     /*QUADRI2(100,20,101,10008,jvj+350)*/
pile[WZ3]=241; pile[WZ4]=jvj+760; 
(*f[181])( );     /*QUADRI2(100,20,101,241,jvj+760)*/
pile[v[22]]=jvj+108; pile[WZ1]=103; pile[WZ2]=jvj+759; 
(*f[54])( );     /*TRI1(jvj+108,103,jvj+759)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+760; pile[WZ4]=jvj+759; pile[WZ5]=jvj+758; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+760,jvj+759,jvj+758)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-596); pile[WZ4]=jvj+756; 
(*f[270])( );     /*QUADRI7(100,21,140,(-596),jvj+756)*/
pile[v[22]]=jvj+756; pile[WZ1]=103; pile[WZ2]=jvj+757; 
(*f[54])( );     /*TRI1(jvj+756,103,jvj+757)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+758; pile[WZ4]=jvj+757; pile[WZ5]=jvj+351; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+758,jvj+757,jvj+351)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V223; pile[WZ4]=jvj+763; 
(*f[270])( );     /*QUADRI7(100,21,140,V223,jvj+763)*/
pile[WZ3]=(-592); pile[WZ4]=jvj+761; 
(*f[270])( );     /*QUADRI7(100,21,140,(-592),jvj+761)*/
pile[v[22]]=jvj+761; pile[WZ1]=103; pile[WZ2]=jvj+762; 
(*f[54])( );     /*TRI1(jvj+761,103,jvj+762)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+763; pile[WZ4]=jvj+762; pile[WZ5]=jvj+352; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+763,jvj+762,jvj+352)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V224; pile[WZ4]=jvj+766; 
(*f[270])( );     /*QUADRI7(100,21,140,V224,jvj+766)*/
pile[WZ3]=(-593); pile[WZ4]=jvj+764; 
(*f[270])( );     /*QUADRI7(100,21,140,(-593),jvj+764)*/
pile[v[22]]=jvj+764; pile[WZ1]=103; pile[WZ2]=jvj+765; 
(*f[54])( );     /*TRI1(jvj+764,103,jvj+765)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+766; pile[WZ4]=jvj+765; pile[WZ5]=jvj+348; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+766,jvj+765,jvj+348)*/
pile[v[22]]=jvj+348; pile[WZ1]=(-20); pile[WZ2]=113; pile[WZ3]=jvj+349; 
(*f[180])( );     /*TRIENS0(jvj+348,(-20),113,jvj+349)*/
pile[v[22]]=100; pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+350; pile[WZ4]=jvj+349; pile[WZ5]=jvj+109; 
(*f[269])( );     /*QUADRI6(100,39,111,jvj+350,jvj+349,jvj+109)*/
pile[v[22]]=jvj+109; pile[WZ1]=114; pile[WZ2]=jvj+351; 
(*f[36])( );     /*PLUSC0(jvj+109,114,jvj+351)*/
pile[WZ2]=jvj+352; 
(*f[36])( );     /*PLUSC0(jvj+109,114,jvj+352)*/
pile[v[22]]=PP; pile[WZ1]=R; pile[WZ2]=jvj+105; pile[WZ3]=V223; pile[WZ4]=VI; 
(*f[2084])( );     /*COPK0(PP,R,jvj+105,V223,VI)*/
pile[WZ2]=jvj+106; pile[WZ3]=VJ; pile[WZ4]=V224; 
(*f[2084])( );     /*COPK0(PP,R,jvj+106,VJ,V224)*/
goto l35;
l25:pile[v[22]]=241; pile[WZ1]=407; 
(*f[44])( );if(v[102]) goto l41;     /*FNDC1(241,407,V114)*/
V114=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+76; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(102,X,jvj+76)*/
pile[v[22]]=103; pile[WZ2]=jvj+77; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(103,X,jvj+77)*/
(*f[1817])( );     /*NOUV2(V107)*/
V107=pile[v[22]]; 
(*f[1817])( );     /*NOUV2(V108)*/
V108=pile[v[22]]; 
(*f[1817])( );     /*NOUV2(VV)*/
VV=pile[v[22]]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=10426; pile[WZ4]=jvj+260; 
(*f[181])( );     /*QUADRI2(100,20,101,10426,jvj+260)*/
pile[WZ1]=89; pile[WZ2]=162; pile[WZ3]=58; pile[WZ4]=jvj+593; 
(*f[272])( );     /*QUADRI9(100,89,162,58,jvj+593)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-596); pile[WZ4]=jvj+591; 
(*f[270])( );     /*QUADRI7(100,21,140,(-596),jvj+591)*/
pile[v[22]]=jvj+591; pile[WZ1]=103; pile[WZ2]=jvj+592; 
(*f[54])( );     /*TRI1(jvj+591,103,jvj+592)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+593; pile[WZ4]=jvj+592; pile[WZ5]=jvj+261; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+593,jvj+592,jvj+261)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V108; pile[WZ4]=jvj+596; 
(*f[270])( );     /*QUADRI7(100,21,140,V108,jvj+596)*/
pile[WZ3]=(-592); pile[WZ4]=jvj+594; 
(*f[270])( );     /*QUADRI7(100,21,140,(-592),jvj+594)*/
pile[v[22]]=jvj+594; pile[WZ1]=103; pile[WZ2]=jvj+595; 
(*f[54])( );     /*TRI1(jvj+594,103,jvj+595)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+596; pile[WZ4]=jvj+595; pile[WZ5]=jvj+262; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+596,jvj+595,jvj+262)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=VV; pile[WZ4]=jvj+599; 
(*f[270])( );     /*QUADRI7(100,21,140,VV,jvj+599)*/
pile[WZ3]=(-593); pile[WZ4]=jvj+597; 
(*f[270])( );     /*QUADRI7(100,21,140,(-593),jvj+597)*/
pile[v[22]]=jvj+597; pile[WZ1]=103; pile[WZ2]=jvj+598; 
(*f[54])( );     /*TRI1(jvj+597,103,jvj+598)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+599; pile[WZ4]=jvj+598; pile[WZ5]=jvj+258; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+599,jvj+598,jvj+258)*/
pile[v[22]]=jvj+258; pile[WZ1]=(-20); pile[WZ2]=113; pile[WZ3]=jvj+259; 
(*f[180])( );     /*TRIENS0(jvj+258,(-20),113,jvj+259)*/
pile[v[22]]=100; pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+260; pile[WZ4]=jvj+259; pile[WZ5]=jvj+110; 
(*f[269])( );     /*QUADRI6(100,39,111,jvj+260,jvj+259,jvj+110)*/
pile[v[22]]=jvj+110; pile[WZ1]=114; pile[WZ2]=jvj+261; 
(*f[36])( );     /*PLUSC0(jvj+110,114,jvj+261)*/
pile[WZ2]=jvj+262; 
(*f[36])( );     /*PLUSC0(jvj+110,114,jvj+262)*/
(*f[1817])( );     /*NOUV2(WW)*/
WW=pile[v[22]]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=10008; pile[WZ4]=jvj+265; 
(*f[181])( );     /*QUADRI2(100,20,101,10008,jvj+265)*/
pile[WZ1]=96; pile[WZ2]=163; pile[WZ3]=V114; pile[WZ4]=jvj+602; 
(*f[270])( );     /*QUADRI7(100,96,163,V114,jvj+602)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-596); pile[WZ4]=jvj+600; 
(*f[270])( );     /*QUADRI7(100,21,140,(-596),jvj+600)*/
pile[v[22]]=jvj+600; pile[WZ1]=103; pile[WZ2]=jvj+601; 
(*f[54])( );     /*TRI1(jvj+600,103,jvj+601)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+602; pile[WZ4]=jvj+601; pile[WZ5]=jvj+266; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+602,jvj+601,jvj+266)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=WW; pile[WZ4]=jvj+605; 
(*f[270])( );     /*QUADRI7(100,21,140,WW,jvj+605)*/
pile[WZ3]=(-592); pile[WZ4]=jvj+603; 
(*f[270])( );     /*QUADRI7(100,21,140,(-592),jvj+603)*/
pile[v[22]]=jvj+603; pile[WZ1]=103; pile[WZ2]=jvj+604; 
(*f[54])( );     /*TRI1(jvj+603,103,jvj+604)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+605; pile[WZ4]=jvj+604; pile[WZ5]=jvj+267; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+605,jvj+604,jvj+267)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V107; pile[WZ4]=jvj+608; 
(*f[270])( );     /*QUADRI7(100,21,140,V107,jvj+608)*/
pile[WZ3]=(-593); pile[WZ4]=jvj+606; 
(*f[270])( );     /*QUADRI7(100,21,140,(-593),jvj+606)*/
pile[v[22]]=jvj+606; pile[WZ1]=103; pile[WZ2]=jvj+607; 
(*f[54])( );     /*TRI1(jvj+606,103,jvj+607)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+608; pile[WZ4]=jvj+607; pile[WZ5]=jvj+263; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+608,jvj+607,jvj+263)*/
pile[v[22]]=jvj+263; pile[WZ1]=(-20); pile[WZ2]=113; pile[WZ3]=jvj+264; 
(*f[180])( );     /*TRIENS0(jvj+263,(-20),113,jvj+264)*/
pile[v[22]]=100; pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+265; pile[WZ4]=jvj+264; pile[WZ5]=jvj+109; 
(*f[269])( );     /*QUADRI6(100,39,111,jvj+265,jvj+264,jvj+109)*/
pile[v[22]]=jvj+109; pile[WZ1]=114; pile[WZ2]=jvj+266; 
(*f[36])( );     /*PLUSC0(jvj+109,114,jvj+266)*/
pile[WZ2]=jvj+267; 
(*f[36])( );     /*PLUSC0(jvj+109,114,jvj+267)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=10271; pile[WZ4]=jvj+272; 
(*f[181])( );     /*QUADRI2(100,20,101,10271,jvj+272)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=VI; pile[WZ4]=jvj+611; 
(*f[270])( );     /*QUADRI7(100,21,140,VI,jvj+611)*/
pile[WZ3]=(-592); pile[WZ4]=jvj+609; 
(*f[270])( );     /*QUADRI7(100,21,140,(-592),jvj+609)*/
pile[v[22]]=jvj+609; pile[WZ1]=103; pile[WZ2]=jvj+610; 
(*f[54])( );     /*TRI1(jvj+609,103,jvj+610)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+611; pile[WZ4]=jvj+610; pile[WZ5]=jvj+268; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+611,jvj+610,jvj+268)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=WW; pile[WZ4]=jvj+614; 
(*f[270])( );     /*QUADRI7(100,21,140,WW,jvj+614)*/
pile[WZ3]=(-593); pile[WZ4]=jvj+612; 
(*f[270])( );     /*QUADRI7(100,21,140,(-593),jvj+612)*/
pile[v[22]]=jvj+612; pile[WZ1]=103; pile[WZ2]=jvj+613; 
(*f[54])( );     /*TRI1(jvj+612,103,jvj+613)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+614; pile[WZ4]=jvj+613; pile[WZ5]=jvj+270; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+614,jvj+613,jvj+270)*/
pile[v[22]]=jvj+268; pile[WZ1]=(-20); pile[WZ2]=114; pile[WZ3]=jvj+269; 
(*f[180])( );     /*TRIENS0(jvj+268,(-20),114,jvj+269)*/
pile[v[22]]=jvj+270; pile[WZ2]=jvj+269; pile[WZ3]=113; pile[WZ4]=jvj+271; 
(*f[298])( );     /*TRIENS1(jvj+270,(-20),jvj+269,113,jvj+271)*/
pile[v[22]]=100; pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+272; pile[WZ5]=jvj+111; 
(*f[269])( );     /*QUADRI6(100,39,111,jvj+272,jvj+271,jvj+111)*/
pile[v[22]]=PP; pile[WZ1]=R; pile[WZ2]=jvj+76; pile[WZ3]=V108; pile[WZ4]=V107; 
(*f[2084])( );     /*COPK0(PP,R,jvj+76,V108,V107)*/
pile[WZ2]=jvj+77; pile[WZ3]=VJ; pile[WZ4]=VV; 
(*f[2084])( );     /*COPK0(PP,R,jvj+77,VJ,VV)*/
goto l35;
l26:pile[v[22]]=241; pile[WZ1]=106; 
(*f[44])( );if(v[102]) goto l41;     /*FNDC1(241,106,V200)*/
V200=pile[WZ2]; 
pile[v[22]]=391; 
(*f[44])( );if(v[102]) goto l41;     /*FNDC1(391,106,V201)*/
V201=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+78; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(102,X,jvj+78)*/
pile[v[22]]=103; pile[WZ2]=jvj+79; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(103,X,jvj+79)*/
pile[v[22]]=160; pile[WZ2]=jvj+80; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(160,X,jvj+80)*/
(*f[1817])( );     /*NOUV2(VL)*/
VL=pile[v[22]]; 
(*f[1817])( );     /*NOUV2(V190)*/
V190=pile[v[22]]; 
(*f[1817])( );     /*NOUV2(V191)*/
V191=pile[v[22]]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=10008; pile[WZ4]=jvj+275; 
(*f[181])( );     /*QUADRI2(100,20,101,10008,jvj+275)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=VI; pile[WZ4]=jvj+617; 
(*f[270])( );     /*QUADRI7(100,21,140,VI,jvj+617)*/
pile[WZ3]=(-592); pile[WZ4]=jvj+615; 
(*f[270])( );     /*QUADRI7(100,21,140,(-592),jvj+615)*/
pile[v[22]]=jvj+615; pile[WZ1]=103; pile[WZ2]=jvj+616; 
(*f[54])( );     /*TRI1(jvj+615,103,jvj+616)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+617; pile[WZ4]=jvj+616; pile[WZ5]=jvj+276; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+617,jvj+616,jvj+276)*/
pile[WZ1]=96; pile[WZ2]=163; pile[WZ3]=V200; pile[WZ4]=jvj+620; 
(*f[270])( );     /*QUADRI7(100,96,163,V200,jvj+620)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-596); pile[WZ4]=jvj+618; 
(*f[270])( );     /*QUADRI7(100,21,140,(-596),jvj+618)*/
pile[v[22]]=jvj+618; pile[WZ1]=103; pile[WZ2]=jvj+619; 
(*f[54])( );     /*TRI1(jvj+618,103,jvj+619)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+620; pile[WZ4]=jvj+619; pile[WZ5]=jvj+277; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+620,jvj+619,jvj+277)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V191; pile[WZ4]=jvj+623; 
(*f[270])( );     /*QUADRI7(100,21,140,V191,jvj+623)*/
pile[WZ3]=(-593); pile[WZ4]=jvj+621; 
(*f[270])( );     /*QUADRI7(100,21,140,(-593),jvj+621)*/
pile[v[22]]=jvj+621; pile[WZ1]=103; pile[WZ2]=jvj+622; 
(*f[54])( );     /*TRI1(jvj+621,103,jvj+622)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+623; pile[WZ4]=jvj+622; pile[WZ5]=jvj+273; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+623,jvj+622,jvj+273)*/
pile[v[22]]=jvj+273; pile[WZ1]=(-20); pile[WZ2]=113; pile[WZ3]=jvj+274; 
(*f[180])( );     /*TRIENS0(jvj+273,(-20),113,jvj+274)*/
pile[v[22]]=100; pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+275; pile[WZ4]=jvj+274; pile[WZ5]=jvj+109; 
(*f[269])( );     /*QUADRI6(100,39,111,jvj+275,jvj+274,jvj+109)*/
pile[v[22]]=jvj+109; pile[WZ1]=114; pile[WZ2]=jvj+276; 
(*f[36])( );     /*PLUSC0(jvj+109,114,jvj+276)*/
pile[WZ2]=jvj+277; 
(*f[36])( );     /*PLUSC0(jvj+109,114,jvj+277)*/
(*f[1817])( );     /*NOUV2(V193)*/
V193=pile[v[22]]; 
pile[v[22]]=PP; pile[WZ1]=R; pile[WZ2]=V193; pile[WZ3]=V191; pile[WZ4]=41; pile[WZ5]=40; pile[v[22]+6]=jvj+78; 
(*f[2161])( );     /*COPL0(PP,R,V193,V191,41,40,jvj+78)*/
(*f[1817])( );     /*NOUV2(V194)*/
V194=pile[v[22]]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=10426; pile[WZ4]=jvj+280; 
(*f[181])( );     /*QUADRI2(100,20,101,10426,jvj+280)*/
pile[WZ1]=89; pile[WZ2]=162; pile[WZ3]=32; pile[WZ4]=jvj+626; 
(*f[272])( );     /*QUADRI9(100,89,162,32,jvj+626)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-596); pile[WZ4]=jvj+624; 
(*f[270])( );     /*QUADRI7(100,21,140,(-596),jvj+624)*/
pile[v[22]]=jvj+624; pile[WZ1]=103; pile[WZ2]=jvj+625; 
(*f[54])( );     /*TRI1(jvj+624,103,jvj+625)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+626; pile[WZ4]=jvj+625; pile[WZ5]=jvj+281; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+626,jvj+625,jvj+281)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V193; pile[WZ4]=jvj+629; 
(*f[270])( );     /*QUADRI7(100,21,140,V193,jvj+629)*/
pile[WZ3]=(-592); pile[WZ4]=jvj+627; 
(*f[270])( );     /*QUADRI7(100,21,140,(-592),jvj+627)*/
pile[v[22]]=jvj+627; pile[WZ1]=103; pile[WZ2]=jvj+628; 
(*f[54])( );     /*TRI1(jvj+627,103,jvj+628)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+629; pile[WZ4]=jvj+628; pile[WZ5]=jvj+282; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+629,jvj+628,jvj+282)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V194; pile[WZ4]=jvj+632; 
(*f[270])( );     /*QUADRI7(100,21,140,V194,jvj+632)*/
pile[WZ3]=(-593); pile[WZ4]=jvj+630; 
(*f[270])( );     /*QUADRI7(100,21,140,(-593),jvj+630)*/
pile[v[22]]=jvj+630; pile[WZ1]=103; pile[WZ2]=jvj+631; 
(*f[54])( );     /*TRI1(jvj+630,103,jvj+631)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+632; pile[WZ4]=jvj+631; pile[WZ5]=jvj+278; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+632,jvj+631,jvj+278)*/
pile[v[22]]=jvj+278; pile[WZ1]=(-20); pile[WZ2]=113; pile[WZ3]=jvj+279; 
(*f[180])( );     /*TRIENS0(jvj+278,(-20),113,jvj+279)*/
pile[v[22]]=100; pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+280; pile[WZ4]=jvj+279; pile[WZ5]=jvj+111; 
(*f[269])( );     /*QUADRI6(100,39,111,jvj+280,jvj+279,jvj+111)*/
pile[v[22]]=jvj+111; pile[WZ1]=114; pile[WZ2]=jvj+281; 
(*f[36])( );     /*PLUSC0(jvj+111,114,jvj+281)*/
pile[WZ2]=jvj+282; 
(*f[36])( );     /*PLUSC0(jvj+111,114,jvj+282)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=10008; pile[WZ4]=jvj+285; 
(*f[181])( );     /*QUADRI2(100,20,101,10008,jvj+285)*/
pile[WZ1]=96; pile[WZ2]=163; pile[WZ3]=V201; pile[WZ4]=jvj+635; 
(*f[270])( );     /*QUADRI7(100,96,163,V201,jvj+635)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-596); pile[WZ4]=jvj+633; 
(*f[270])( );     /*QUADRI7(100,21,140,(-596),jvj+633)*/
pile[v[22]]=jvj+633; pile[WZ1]=103; pile[WZ2]=jvj+634; 
(*f[54])( );     /*TRI1(jvj+633,103,jvj+634)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+635; pile[WZ4]=jvj+634; pile[WZ5]=jvj+286; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+635,jvj+634,jvj+286)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V190; pile[WZ4]=jvj+638; 
(*f[270])( );     /*QUADRI7(100,21,140,V190,jvj+638)*/
pile[WZ3]=(-592); pile[WZ4]=jvj+636; 
(*f[270])( );     /*QUADRI7(100,21,140,(-592),jvj+636)*/
pile[v[22]]=jvj+636; pile[WZ1]=103; pile[WZ2]=jvj+637; 
(*f[54])( );     /*TRI1(jvj+636,103,jvj+637)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+638; pile[WZ4]=jvj+637; pile[WZ5]=jvj+287; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+638,jvj+637,jvj+287)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=VL; pile[WZ4]=jvj+641; 
(*f[270])( );     /*QUADRI7(100,21,140,VL,jvj+641)*/
pile[WZ3]=(-593); pile[WZ4]=jvj+639; 
(*f[270])( );     /*QUADRI7(100,21,140,(-593),jvj+639)*/
pile[v[22]]=jvj+639; pile[WZ1]=103; pile[WZ2]=jvj+640; 
(*f[54])( );     /*TRI1(jvj+639,103,jvj+640)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+641; pile[WZ4]=jvj+640; pile[WZ5]=jvj+283; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+641,jvj+640,jvj+283)*/
pile[v[22]]=jvj+283; pile[WZ1]=(-20); pile[WZ2]=113; pile[WZ3]=jvj+284; 
(*f[180])( );     /*TRIENS0(jvj+283,(-20),113,jvj+284)*/
pile[v[22]]=100; pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+285; pile[WZ4]=jvj+284; pile[WZ5]=jvj+110; 
(*f[269])( );     /*QUADRI6(100,39,111,jvj+285,jvj+284,jvj+110)*/
pile[v[22]]=jvj+110; pile[WZ1]=114; pile[WZ2]=jvj+286; 
(*f[36])( );     /*PLUSC0(jvj+110,114,jvj+286)*/
pile[WZ2]=jvj+287; 
(*f[36])( );     /*PLUSC0(jvj+110,114,jvj+287)*/
pile[v[22]]=PP; pile[WZ1]=R; pile[WZ2]=jvj+79; pile[WZ3]=V190; pile[WZ4]=V194; 
(*f[2084])( );     /*COPK0(PP,R,jvj+79,V190,V194)*/
pile[WZ2]=jvj+80; pile[WZ3]=VJ; pile[WZ4]=VL; 
(*f[2084])( );     /*COPK0(PP,R,jvj+80,VJ,VL)*/
goto l35;
l27:pile[v[22]]=241; pile[WZ1]=403; 
(*f[44])( );if(v[102]) goto l41;     /*FNDC1(241,403,V137)*/
V137=pile[WZ2]; 
pile[v[22]]=160; pile[WZ1]=X; pile[WZ2]=jvj+81; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(160,X,jvj+81)*/
pile[v[22]]=103; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(103,X,jvj+2)*/
pile[v[22]]=130; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l41;     /*FNDC0(130,jvj+2,V130)*/
V130=pile[WZ2]; 
pile[v[22]]=128; pile[WZ1]=403; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(128,403,jvj+3)*/
goto l1;
l28:pile[v[22]]=747; pile[WZ1]=142; 
(*f[44])( );if(v[102]) goto l41;     /*FNDC1(747,142,V212)*/
V212=pile[WZ2]; 
pile[v[22]]=391; 
(*f[44])( );if(v[102]) goto l41;     /*FNDC1(391,142,V213)*/
V213=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+86; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(102,X,jvj+86)*/
pile[v[22]]=103; pile[WZ2]=jvj+87; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(103,X,jvj+87)*/
pile[v[22]]=160; pile[WZ2]=jvj+88; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(160,X,jvj+88)*/
(*f[1817])( );     /*NOUV2(V202)*/
V202=pile[v[22]]; 
(*f[1817])( );     /*NOUV2(V203)*/
V203=pile[v[22]]; 
(*f[1817])( );     /*NOUV2(V204)*/
V204=pile[v[22]]; 
(*f[1817])( );     /*NOUV2(V205)*/
V205=pile[v[22]]; 
pile[v[22]]=PP; pile[WZ1]=R; pile[WZ2]=V202; pile[WZ3]=VI; pile[WZ4]=41; pile[WZ5]=40; pile[v[22]+6]=jvj+86; 
(*f[2161])( );     /*COPL0(PP,R,V202,VI,41,40,jvj+86)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=10008; pile[WZ4]=jvj+310; 
(*f[181])( );     /*QUADRI2(100,20,101,10008,jvj+310)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V202; pile[WZ4]=jvj+684; 
(*f[270])( );     /*QUADRI7(100,21,140,V202,jvj+684)*/
pile[WZ3]=(-592); pile[WZ4]=jvj+682; 
(*f[270])( );     /*QUADRI7(100,21,140,(-592),jvj+682)*/
pile[v[22]]=jvj+682; pile[WZ1]=103; pile[WZ2]=jvj+683; 
(*f[54])( );     /*TRI1(jvj+682,103,jvj+683)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+684; pile[WZ4]=jvj+683; pile[WZ5]=jvj+311; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+684,jvj+683,jvj+311)*/
pile[WZ1]=96; pile[WZ2]=163; pile[WZ3]=V212; pile[WZ4]=jvj+687; 
(*f[270])( );     /*QUADRI7(100,96,163,V212,jvj+687)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-596); pile[WZ4]=jvj+685; 
(*f[270])( );     /*QUADRI7(100,21,140,(-596),jvj+685)*/
pile[v[22]]=jvj+685; pile[WZ1]=103; pile[WZ2]=jvj+686; 
(*f[54])( );     /*TRI1(jvj+685,103,jvj+686)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+687; pile[WZ4]=jvj+686; pile[WZ5]=jvj+312; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+687,jvj+686,jvj+312)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V203; pile[WZ4]=jvj+690; 
(*f[270])( );     /*QUADRI7(100,21,140,V203,jvj+690)*/
pile[WZ3]=(-593); pile[WZ4]=jvj+688; 
(*f[270])( );     /*QUADRI7(100,21,140,(-593),jvj+688)*/
pile[v[22]]=jvj+688; pile[WZ1]=103; pile[WZ2]=jvj+689; 
(*f[54])( );     /*TRI1(jvj+688,103,jvj+689)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+690; pile[WZ4]=jvj+689; pile[WZ5]=jvj+308; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+690,jvj+689,jvj+308)*/
pile[v[22]]=jvj+308; pile[WZ1]=(-20); pile[WZ2]=113; pile[WZ3]=jvj+309; 
(*f[180])( );     /*TRIENS0(jvj+308,(-20),113,jvj+309)*/
pile[v[22]]=100; pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+310; pile[WZ4]=jvj+309; pile[WZ5]=jvj+109; 
(*f[269])( );     /*QUADRI6(100,39,111,jvj+310,jvj+309,jvj+109)*/
pile[v[22]]=jvj+109; pile[WZ1]=114; pile[WZ2]=jvj+311; 
(*f[36])( );     /*PLUSC0(jvj+109,114,jvj+311)*/
pile[WZ2]=jvj+312; 
(*f[36])( );     /*PLUSC0(jvj+109,114,jvj+312)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=10008; pile[WZ4]=jvj+315; 
(*f[181])( );     /*QUADRI2(100,20,101,10008,jvj+315)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V204; pile[WZ4]=jvj+693; 
(*f[270])( );     /*QUADRI7(100,21,140,V204,jvj+693)*/
pile[WZ3]=(-592); pile[WZ4]=jvj+691; 
(*f[270])( );     /*QUADRI7(100,21,140,(-592),jvj+691)*/
pile[v[22]]=jvj+691; pile[WZ1]=103; pile[WZ2]=jvj+692; 
(*f[54])( );     /*TRI1(jvj+691,103,jvj+692)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+693; pile[WZ4]=jvj+692; pile[WZ5]=jvj+316; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+693,jvj+692,jvj+316)*/
pile[WZ1]=96; pile[WZ2]=163; pile[WZ3]=V213; pile[WZ4]=jvj+696; 
(*f[270])( );     /*QUADRI7(100,96,163,V213,jvj+696)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-596); pile[WZ4]=jvj+694; 
(*f[270])( );     /*QUADRI7(100,21,140,(-596),jvj+694)*/
pile[v[22]]=jvj+694; pile[WZ1]=103; pile[WZ2]=jvj+695; 
(*f[54])( );     /*TRI1(jvj+694,103,jvj+695)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+696; pile[WZ4]=jvj+695; pile[WZ5]=jvj+317; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+696,jvj+695,jvj+317)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V205; pile[WZ4]=jvj+699; 
(*f[270])( );     /*QUADRI7(100,21,140,V205,jvj+699)*/
pile[WZ3]=(-593); pile[WZ4]=jvj+697; 
(*f[270])( );     /*QUADRI7(100,21,140,(-593),jvj+697)*/
pile[v[22]]=jvj+697; pile[WZ1]=103; pile[WZ2]=jvj+698; 
(*f[54])( );     /*TRI1(jvj+697,103,jvj+698)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+699; pile[WZ4]=jvj+698; pile[WZ5]=jvj+313; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+699,jvj+698,jvj+313)*/
pile[v[22]]=jvj+313; pile[WZ1]=(-20); pile[WZ2]=113; pile[WZ3]=jvj+314; 
(*f[180])( );     /*TRIENS0(jvj+313,(-20),113,jvj+314)*/
pile[v[22]]=100; pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+315; pile[WZ4]=jvj+314; pile[WZ5]=jvj+110; 
(*f[269])( );     /*QUADRI6(100,39,111,jvj+315,jvj+314,jvj+110)*/
pile[v[22]]=jvj+110; pile[WZ1]=114; pile[WZ2]=jvj+316; 
(*f[36])( );     /*PLUSC0(jvj+110,114,jvj+316)*/
pile[WZ2]=jvj+317; 
(*f[36])( );     /*PLUSC0(jvj+110,114,jvj+317)*/
pile[v[22]]=PP; pile[WZ1]=R; pile[WZ2]=jvj+87; pile[WZ3]=V204; pile[WZ4]=V203; 
(*f[2084])( );     /*COPK0(PP,R,jvj+87,V204,V203)*/
pile[WZ2]=jvj+88; pile[WZ3]=VJ; pile[WZ4]=V205; 
(*f[2084])( );     /*COPK0(PP,R,jvj+88,VJ,V205)*/
goto l35;
l29:pile[v[22]]=103; pile[WZ1]=X; pile[WZ2]=jvj+89; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(103,X,jvj+89)*/
pile[v[22]]=160; pile[WZ2]=jvj+90; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(160,X,jvj+90)*/
pile[v[22]]=102; pile[WZ2]=jvj+91; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(102,X,jvj+91)*/
pile[v[22]]=jvj+91; pile[WZ1]=jvj+92; 
(*f[255])( );     /*COPEXP0(jvj+91,jvj+92)*/
(*f[1817])( );     /*NOUV2(V248)*/
V248=pile[v[22]]; 
(*f[1817])( );     /*NOUV2(V249)*/
V249=pile[v[22]]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=10008; pile[WZ4]=jvj+320; 
(*f[181])( );     /*QUADRI2(100,20,101,10008,jvj+320)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=VI; pile[WZ4]=jvj+702; 
(*f[270])( );     /*QUADRI7(100,21,140,VI,jvj+702)*/
pile[WZ3]=(-592); pile[WZ4]=jvj+700; 
(*f[270])( );     /*QUADRI7(100,21,140,(-592),jvj+700)*/
pile[v[22]]=jvj+700; pile[WZ1]=103; pile[WZ2]=jvj+701; 
(*f[54])( );     /*TRI1(jvj+700,103,jvj+701)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+702; pile[WZ4]=jvj+701; pile[WZ5]=jvj+321; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+702,jvj+701,jvj+321)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-596); pile[WZ4]=jvj+703; 
(*f[270])( );     /*QUADRI7(100,21,140,(-596),jvj+703)*/
pile[v[22]]=jvj+703; pile[WZ1]=103; pile[WZ2]=jvj+704; 
(*f[54])( );     /*TRI1(jvj+703,103,jvj+704)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+92; pile[WZ4]=jvj+704; pile[WZ5]=jvj+322; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+92,jvj+704,jvj+322)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V248; pile[WZ4]=jvj+707; 
(*f[270])( );     /*QUADRI7(100,21,140,V248,jvj+707)*/
pile[WZ3]=(-593); pile[WZ4]=jvj+705; 
(*f[270])( );     /*QUADRI7(100,21,140,(-593),jvj+705)*/
pile[v[22]]=jvj+705; pile[WZ1]=103; pile[WZ2]=jvj+706; 
(*f[54])( );     /*TRI1(jvj+705,103,jvj+706)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+707; pile[WZ4]=jvj+706; pile[WZ5]=jvj+318; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+707,jvj+706,jvj+318)*/
pile[v[22]]=jvj+318; pile[WZ1]=(-20); pile[WZ2]=113; pile[WZ3]=jvj+319; 
(*f[180])( );     /*TRIENS0(jvj+318,(-20),113,jvj+319)*/
pile[v[22]]=100; pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+320; pile[WZ4]=jvj+319; pile[WZ5]=jvj+109; 
(*f[269])( );     /*QUADRI6(100,39,111,jvj+320,jvj+319,jvj+109)*/
pile[v[22]]=jvj+109; pile[WZ1]=114; pile[WZ2]=jvj+321; 
(*f[36])( );     /*PLUSC0(jvj+109,114,jvj+321)*/
pile[WZ2]=jvj+322; 
(*f[36])( );     /*PLUSC0(jvj+109,114,jvj+322)*/
pile[v[22]]=PP; pile[WZ1]=R; pile[WZ2]=V249; pile[WZ3]=V248; pile[WZ4]=93; pile[WZ5]=91; pile[v[22]+6]=jvj+89; 
(*f[2161])( );     /*COPL0(PP,R,V249,V248,93,91,jvj+89)*/
pile[WZ2]=VJ; pile[WZ3]=V249; pile[v[22]+6]=jvj+90; 
(*f[2161])( );     /*COPL0(PP,R,VJ,V249,93,91,jvj+90)*/
goto l35;
l30:pile[v[22]]=241; pile[WZ1]=396; 
(*f[44])( );if(v[102]) goto l41;     /*FNDC1(241,396,V100)*/
V100=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+93; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(102,X,jvj+93)*/
(*f[1817])( );     /*NOUV2(V95)*/
V95=pile[v[22]]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=10008; pile[WZ4]=jvj+325; 
(*f[181])( );     /*QUADRI2(100,20,101,10008,jvj+325)*/
pile[WZ1]=96; pile[WZ2]=163; pile[WZ3]=V100; pile[WZ4]=jvj+710; 
(*f[270])( );     /*QUADRI7(100,96,163,V100,jvj+710)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-596); pile[WZ4]=jvj+708; 
(*f[270])( );     /*QUADRI7(100,21,140,(-596),jvj+708)*/
pile[v[22]]=jvj+708; pile[WZ1]=103; pile[WZ2]=jvj+709; 
(*f[54])( );     /*TRI1(jvj+708,103,jvj+709)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+710; pile[WZ4]=jvj+709; pile[WZ5]=jvj+326; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+710,jvj+709,jvj+326)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=VI; pile[WZ4]=jvj+713; 
(*f[270])( );     /*QUADRI7(100,21,140,VI,jvj+713)*/
pile[WZ3]=(-592); pile[WZ4]=jvj+711; 
(*f[270])( );     /*QUADRI7(100,21,140,(-592),jvj+711)*/
pile[v[22]]=jvj+711; pile[WZ1]=103; pile[WZ2]=jvj+712; 
(*f[54])( );     /*TRI1(jvj+711,103,jvj+712)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+713; pile[WZ4]=jvj+712; pile[WZ5]=jvj+327; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+713,jvj+712,jvj+327)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V95; pile[WZ4]=jvj+716; 
(*f[270])( );     /*QUADRI7(100,21,140,V95,jvj+716)*/
pile[WZ3]=(-593); pile[WZ4]=jvj+714; 
(*f[270])( );     /*QUADRI7(100,21,140,(-593),jvj+714)*/
pile[v[22]]=jvj+714; pile[WZ1]=103; pile[WZ2]=jvj+715; 
(*f[54])( );     /*TRI1(jvj+714,103,jvj+715)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+716; pile[WZ4]=jvj+715; pile[WZ5]=jvj+323; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+716,jvj+715,jvj+323)*/
pile[v[22]]=jvj+323; pile[WZ1]=(-20); pile[WZ2]=113; pile[WZ3]=jvj+324; 
(*f[180])( );     /*TRIENS0(jvj+323,(-20),113,jvj+324)*/
pile[v[22]]=100; pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+325; pile[WZ4]=jvj+324; pile[WZ5]=jvj+109; 
(*f[269])( );     /*QUADRI6(100,39,111,jvj+325,jvj+324,jvj+109)*/
pile[v[22]]=jvj+109; pile[WZ1]=114; pile[WZ2]=jvj+326; 
(*f[36])( );     /*PLUSC0(jvj+109,114,jvj+326)*/
pile[WZ2]=jvj+327; 
(*f[36])( );     /*PLUSC0(jvj+109,114,jvj+327)*/
pile[v[22]]=PP; pile[WZ1]=R; pile[WZ2]=jvj+93; pile[WZ3]=VJ; pile[WZ4]=V95; 
(*f[2084])( );     /*COPK0(PP,R,jvj+93,VJ,V95)*/
goto l35;
l31:pile[v[22]]=103; pile[WZ1]=X; pile[WZ2]=jvj+94; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(103,X,jvj+94)*/
pile[v[22]]=102; pile[WZ2]=jvj+95; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(102,X,jvj+95)*/
pile[v[22]]=jvj+95; pile[WZ1]=jvj+96; 
(*f[255])( );     /*COPEXP0(jvj+95,jvj+96)*/
(*f[1817])( );     /*NOUV2(V156)*/
V156=pile[v[22]]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=10439; pile[WZ4]=jvj+330; 
(*f[181])( );     /*QUADRI2(100,20,101,10439,jvj+330)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=VI; pile[WZ4]=jvj+719; 
(*f[270])( );     /*QUADRI7(100,21,140,VI,jvj+719)*/
pile[WZ3]=(-592); pile[WZ4]=jvj+717; 
(*f[270])( );     /*QUADRI7(100,21,140,(-592),jvj+717)*/
pile[v[22]]=jvj+717; pile[WZ1]=103; pile[WZ2]=jvj+718; 
(*f[54])( );     /*TRI1(jvj+717,103,jvj+718)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+719; pile[WZ4]=jvj+718; pile[WZ5]=jvj+331; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+719,jvj+718,jvj+331)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-596); pile[WZ4]=jvj+720; 
(*f[270])( );     /*QUADRI7(100,21,140,(-596),jvj+720)*/
pile[v[22]]=jvj+720; pile[WZ1]=103; pile[WZ2]=jvj+721; 
(*f[54])( );     /*TRI1(jvj+720,103,jvj+721)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+96; pile[WZ4]=jvj+721; pile[WZ5]=jvj+332; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+96,jvj+721,jvj+332)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V156; pile[WZ4]=jvj+724; 
(*f[270])( );     /*QUADRI7(100,21,140,V156,jvj+724)*/
pile[WZ3]=(-593); pile[WZ4]=jvj+722; 
(*f[270])( );     /*QUADRI7(100,21,140,(-593),jvj+722)*/
pile[v[22]]=jvj+722; pile[WZ1]=103; pile[WZ2]=jvj+723; 
(*f[54])( );     /*TRI1(jvj+722,103,jvj+723)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+724; pile[WZ4]=jvj+723; pile[WZ5]=jvj+328; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+724,jvj+723,jvj+328)*/
pile[v[22]]=jvj+328; pile[WZ1]=(-20); pile[WZ2]=113; pile[WZ3]=jvj+329; 
(*f[180])( );     /*TRIENS0(jvj+328,(-20),113,jvj+329)*/
pile[v[22]]=100; pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+330; pile[WZ4]=jvj+329; pile[WZ5]=jvj+109; 
(*f[269])( );     /*QUADRI6(100,39,111,jvj+330,jvj+329,jvj+109)*/
pile[v[22]]=jvj+109; pile[WZ1]=114; pile[WZ2]=jvj+331; 
(*f[36])( );     /*PLUSC0(jvj+109,114,jvj+331)*/
pile[WZ2]=jvj+332; 
(*f[36])( );     /*PLUSC0(jvj+109,114,jvj+332)*/
pile[v[22]]=PP; pile[WZ1]=R; pile[WZ2]=jvj+94; pile[WZ3]=VJ; pile[WZ4]=V156; 
(*f[2084])( );     /*COPK0(PP,R,jvj+94,VJ,V156)*/
goto l35;
l32:pile[v[22]]=103; pile[WZ1]=X; pile[WZ2]=jvj+97; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(103,X,jvj+97)*/
pile[v[22]]=102; pile[WZ2]=jvj+98; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(102,X,jvj+98)*/
pile[v[22]]=jvj+98; pile[WZ1]=jvj+99; 
(*f[255])( );     /*COPEXP0(jvj+98,jvj+99)*/
(*f[1817])( );     /*NOUV2(V258)*/
V258=pile[v[22]]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=10008; pile[WZ4]=jvj+335; 
(*f[181])( );     /*QUADRI2(100,20,101,10008,jvj+335)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=VI; pile[WZ4]=jvj+727; 
(*f[270])( );     /*QUADRI7(100,21,140,VI,jvj+727)*/
pile[WZ3]=(-592); pile[WZ4]=jvj+725; 
(*f[270])( );     /*QUADRI7(100,21,140,(-592),jvj+725)*/
pile[v[22]]=jvj+725; pile[WZ1]=103; pile[WZ2]=jvj+726; 
(*f[54])( );     /*TRI1(jvj+725,103,jvj+726)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+727; pile[WZ4]=jvj+726; pile[WZ5]=jvj+336; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+727,jvj+726,jvj+336)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=241; pile[WZ4]=jvj+732; 
(*f[181])( );     /*QUADRI2(100,20,101,241,jvj+732)*/
pile[v[22]]=jvj+99; pile[WZ1]=103; pile[WZ2]=jvj+731; 
(*f[54])( );     /*TRI1(jvj+99,103,jvj+731)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+732; pile[WZ4]=jvj+731; pile[WZ5]=jvj+730; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+732,jvj+731,jvj+730)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-596); pile[WZ4]=jvj+728; 
(*f[270])( );     /*QUADRI7(100,21,140,(-596),jvj+728)*/
pile[v[22]]=jvj+728; pile[WZ1]=103; pile[WZ2]=jvj+729; 
(*f[54])( );     /*TRI1(jvj+728,103,jvj+729)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+730; pile[WZ4]=jvj+729; pile[WZ5]=jvj+337; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+730,jvj+729,jvj+337)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V258; pile[WZ4]=jvj+735; 
(*f[270])( );     /*QUADRI7(100,21,140,V258,jvj+735)*/
pile[WZ3]=(-593); pile[WZ4]=jvj+733; 
(*f[270])( );     /*QUADRI7(100,21,140,(-593),jvj+733)*/
pile[v[22]]=jvj+733; pile[WZ1]=103; pile[WZ2]=jvj+734; 
(*f[54])( );     /*TRI1(jvj+733,103,jvj+734)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+735; pile[WZ4]=jvj+734; pile[WZ5]=jvj+333; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+735,jvj+734,jvj+333)*/
pile[v[22]]=jvj+333; pile[WZ1]=(-20); pile[WZ2]=113; pile[WZ3]=jvj+334; 
(*f[180])( );     /*TRIENS0(jvj+333,(-20),113,jvj+334)*/
pile[v[22]]=100; pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+335; pile[WZ4]=jvj+334; pile[WZ5]=jvj+109; 
(*f[269])( );     /*QUADRI6(100,39,111,jvj+335,jvj+334,jvj+109)*/
pile[v[22]]=jvj+109; pile[WZ1]=114; pile[WZ2]=jvj+336; 
(*f[36])( );     /*PLUSC0(jvj+109,114,jvj+336)*/
pile[WZ2]=jvj+337; 
(*f[36])( );     /*PLUSC0(jvj+109,114,jvj+337)*/
pile[v[22]]=PP; pile[WZ1]=R; pile[WZ2]=jvj+97; pile[WZ3]=VJ; pile[WZ4]=V258; 
(*f[2084])( );     /*COPK0(PP,R,jvj+97,VJ,V258)*/
goto l35;
l33:pile[v[22]]=103; pile[WZ1]=X; pile[WZ2]=jvj+100; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(103,X,jvj+100)*/
pile[v[22]]=102; pile[WZ2]=jvj+101; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(102,X,jvj+101)*/
pile[v[22]]=jvj+101; pile[WZ1]=jvj+102; 
(*f[255])( );     /*COPEXP0(jvj+101,jvj+102)*/
(*f[1817])( );     /*NOUV2(V266)*/
V266=pile[v[22]]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=10008; pile[WZ4]=jvj+340; 
(*f[181])( );     /*QUADRI2(100,20,101,10008,jvj+340)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V266; pile[WZ4]=jvj+738; 
(*f[270])( );     /*QUADRI7(100,21,140,V266,jvj+738)*/
pile[WZ3]=(-592); pile[WZ4]=jvj+736; 
(*f[270])( );     /*QUADRI7(100,21,140,(-592),jvj+736)*/
pile[v[22]]=jvj+736; pile[WZ1]=103; pile[WZ2]=jvj+737; 
(*f[54])( );     /*TRI1(jvj+736,103,jvj+737)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+738; pile[WZ4]=jvj+737; pile[WZ5]=jvj+341; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+738,jvj+737,jvj+341)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=241; pile[WZ4]=jvj+743; 
(*f[181])( );     /*QUADRI2(100,20,101,241,jvj+743)*/
pile[v[22]]=jvj+102; pile[WZ1]=103; pile[WZ2]=jvj+742; 
(*f[54])( );     /*TRI1(jvj+102,103,jvj+742)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+743; pile[WZ4]=jvj+742; pile[WZ5]=jvj+741; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+743,jvj+742,jvj+741)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-596); pile[WZ4]=jvj+739; 
(*f[270])( );     /*QUADRI7(100,21,140,(-596),jvj+739)*/
pile[v[22]]=jvj+739; pile[WZ1]=103; pile[WZ2]=jvj+740; 
(*f[54])( );     /*TRI1(jvj+739,103,jvj+740)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+741; pile[WZ4]=jvj+740; pile[WZ5]=jvj+342; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+741,jvj+740,jvj+342)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=VJ; pile[WZ4]=jvj+746; 
(*f[270])( );     /*QUADRI7(100,21,140,VJ,jvj+746)*/
pile[WZ3]=(-593); pile[WZ4]=jvj+744; 
(*f[270])( );     /*QUADRI7(100,21,140,(-593),jvj+744)*/
pile[v[22]]=jvj+744; pile[WZ1]=103; pile[WZ2]=jvj+745; 
(*f[54])( );     /*TRI1(jvj+744,103,jvj+745)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+746; pile[WZ4]=jvj+745; pile[WZ5]=jvj+338; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+746,jvj+745,jvj+338)*/
pile[v[22]]=jvj+338; pile[WZ1]=(-20); pile[WZ2]=113; pile[WZ3]=jvj+339; 
(*f[180])( );     /*TRIENS0(jvj+338,(-20),113,jvj+339)*/
pile[v[22]]=100; pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+340; pile[WZ4]=jvj+339; pile[WZ5]=jvj+109; 
(*f[269])( );     /*QUADRI6(100,39,111,jvj+340,jvj+339,jvj+109)*/
pile[v[22]]=jvj+109; pile[WZ1]=114; pile[WZ2]=jvj+341; 
(*f[36])( );     /*PLUSC0(jvj+109,114,jvj+341)*/
pile[WZ2]=jvj+342; 
(*f[36])( );     /*PLUSC0(jvj+109,114,jvj+342)*/
pile[v[22]]=PP; pile[WZ1]=R; pile[WZ2]=jvj+100; pile[WZ3]=V266; pile[WZ4]=VI; 
(*f[2084])( );     /*COPK0(PP,R,jvj+100,V266,VI)*/
goto l35;
l34:pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+103; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(102,X,jvj+103)*/
pile[v[22]]=103; pile[WZ2]=jvj+104; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(103,X,jvj+104)*/
(*f[1817])( );     /*NOUV2(V241)*/
V241=pile[v[22]]; 
(*f[1817])( );     /*NOUV2(V242)*/
V242=pile[v[22]]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=10426; pile[WZ4]=jvj+345; 
(*f[181])( );     /*QUADRI2(100,20,101,10426,jvj+345)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V241; pile[WZ4]=jvj+749; 
(*f[270])( );     /*QUADRI7(100,21,140,V241,jvj+749)*/
pile[WZ3]=(-592); pile[WZ4]=jvj+747; 
(*f[270])( );     /*QUADRI7(100,21,140,(-592),jvj+747)*/
pile[v[22]]=jvj+747; pile[WZ1]=103; pile[WZ2]=jvj+748; 
(*f[54])( );     /*TRI1(jvj+747,103,jvj+748)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+749; pile[WZ4]=jvj+748; pile[WZ5]=jvj+346; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+749,jvj+748,jvj+346)*/
pile[WZ1]=89; pile[WZ2]=162; pile[WZ3]=61; pile[WZ4]=jvj+752; 
(*f[272])( );     /*QUADRI9(100,89,162,61,jvj+752)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-596); pile[WZ4]=jvj+750; 
(*f[270])( );     /*QUADRI7(100,21,140,(-596),jvj+750)*/
pile[v[22]]=jvj+750; pile[WZ1]=103; pile[WZ2]=jvj+751; 
(*f[54])( );     /*TRI1(jvj+750,103,jvj+751)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+752; pile[WZ4]=jvj+751; pile[WZ5]=jvj+347; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+752,jvj+751,jvj+347)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V242; pile[WZ4]=jvj+755; 
(*f[270])( );     /*QUADRI7(100,21,140,V242,jvj+755)*/
pile[WZ3]=(-593); pile[WZ4]=jvj+753; 
(*f[270])( );     /*QUADRI7(100,21,140,(-593),jvj+753)*/
pile[v[22]]=jvj+753; pile[WZ1]=103; pile[WZ2]=jvj+754; 
(*f[54])( );     /*TRI1(jvj+753,103,jvj+754)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+755; pile[WZ4]=jvj+754; pile[WZ5]=jvj+343; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+755,jvj+754,jvj+343)*/
pile[v[22]]=jvj+343; pile[WZ1]=(-20); pile[WZ2]=113; pile[WZ3]=jvj+344; 
(*f[180])( );     /*TRIENS0(jvj+343,(-20),113,jvj+344)*/
pile[v[22]]=100; pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+345; pile[WZ4]=jvj+344; pile[WZ5]=jvj+109; 
(*f[269])( );     /*QUADRI6(100,39,111,jvj+345,jvj+344,jvj+109)*/
pile[v[22]]=jvj+109; pile[WZ1]=114; pile[WZ2]=jvj+346; 
(*f[36])( );     /*PLUSC0(jvj+109,114,jvj+346)*/
pile[WZ2]=jvj+347; 
(*f[36])( );     /*PLUSC0(jvj+109,114,jvj+347)*/
pile[v[22]]=PP; pile[WZ1]=R; pile[WZ2]=jvj+103; pile[WZ3]=V241; pile[WZ4]=VI; 
(*f[2084])( );     /*COPK0(PP,R,jvj+103,V241,VI)*/
pile[WZ2]=jvj+104; pile[WZ3]=VJ; pile[WZ4]=V242; 
(*f[2084])( );     /*COPK0(PP,R,jvj+104,VJ,V242)*/
goto l35;
l36:pile[v[22]]=R; pile[WZ1]=105; pile[WZ2]=jvj+110; 
(*f[36])( );     /*PLUSC0(R,105,jvj+110)*/
pile[v[22]]=jvj+110; pile[WZ1]=123; pile[WZ2]=PP; 
(*f[35])( );     /*CHGC1(jvj+110,123,PP)*/
goto l37;
l38:pile[v[22]]=R; pile[WZ1]=105; pile[WZ2]=jvj+111; 
(*f[36])( );     /*PLUSC0(R,105,jvj+111)*/
pile[v[22]]=jvj+111; pile[WZ1]=123; pile[WZ2]=PP; 
(*f[35])( );     /*CHGC1(jvj+111,123,PP)*/
goto l39;
l40:pile[v[22]]=R; pile[WZ1]=105; pile[WZ2]=jvj+112; 
(*f[36])( );     /*PLUSC0(R,105,jvj+112)*/
pile[v[22]]=jvj+112; pile[WZ1]=123; pile[WZ2]=PP; 
(*f[35])( );     /*CHGC1(jvj+112,123,PP)*/
goto l41;
}

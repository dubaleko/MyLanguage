----Протокол rl----
Время создания протокола: 06.12.2018 00:07:08, четверг
Шаг: Правило             Входная лента                 Стек               
0   : S->d[N]             d[ti:l.ti:l.ti,i,i,i,i.ti     S$                  
0   : SAVESTATE:          1
0   :                     d[ti:l.ti:l.ti,i,i,i,i.ti     d[N]$               
1   :                     [ti:l.ti:l.ti,i,i,i,i.ti:     [N]$                
2   :                     ti:l.ti:l.ti,i,i,i,i.ti:l     N]$                 
3   : N->ti:E.N           ti:l.ti:l.ti,i,i,i,i.ti:l     N]$                 
3   : SAVESTATE:          2
3   :                     ti:l.ti:l.ti,i,i,i,i.ti:l     ti:E.N]$            
4   :                     i:l.ti:l.ti,i,i,i,i.ti:l.     i:E.N]$             
5   :                     :l.ti:l.ti,i,i,i,i.ti:l.t     :E.N]$              
6   :                     l.ti:l.ti,i,i,i,i.ti:l.ti     E.N]$               
7   : E->l                l.ti:l.ti,i,i,i,i.ti:l.ti     E.N]$               
7   : SAVESTATE:          3
7   :                     l.ti:l.ti,i,i,i,i.ti:l.ti     l.N]$               
8   :                     .ti:l.ti,i,i,i,i.ti:l.ti:     .N]$                
9   :                     ti:l.ti,i,i,i,i.ti:l.ti:l     N]$                 
10  : N->ti:E.N           ti:l.ti,i,i,i,i.ti:l.ti:l     N]$                 
10  : SAVESTATE:          4
10  :                     ti:l.ti,i,i,i,i.ti:l.ti:l     ti:E.N]$            
11  :                     i:l.ti,i,i,i,i.ti:l.ti:l.     i:E.N]$             
12  :                     :l.ti,i,i,i,i.ti:l.ti:l.t     :E.N]$              
13  :                     l.ti,i,i,i,i.ti:l.ti:l.ti     E.N]$               
14  : E->l                l.ti,i,i,i,i.ti:l.ti:l.ti     E.N]$               
14  : SAVESTATE:          5
14  :                     l.ti,i,i,i,i.ti:l.ti:l.ti     l.N]$               
15  :                     .ti,i,i,i,i.ti:l.ti:l.ti.     .N]$                
16  :                     ti,i,i,i,i.ti:l.ti:l.ti.i     N]$                 
17  : N->ti:E.N           ti,i,i,i,i.ti:l.ti:l.ti.i     N]$                 
17  : SAVESTATE:          6
17  :                     ti,i,i,i,i.ti:l.ti:l.ti.i     ti:E.N]$            
18  :                     i,i,i,i,i.ti:l.ti:l.ti.i:     i:E.N]$             
19  :                     ,i,i,i,i.ti:l.ti:l.ti.i:l     :E.N]$              
20  : TS_NOK/NS_NORULECHAIN
20  : RESSTATE            
20  :                     ti,i,i,i,i.ti:l.ti:l.ti.i     N]$                 
21  : N->ti.N             ti,i,i,i,i.ti:l.ti:l.ti.i     N]$                 
21  : SAVESTATE:          6
21  :                     ti,i,i,i,i.ti:l.ti:l.ti.i     ti.N]$              
22  :                     i,i,i,i,i.ti:l.ti:l.ti.i:     i.N]$               
23  :                     ,i,i,i,i.ti:l.ti:l.ti.i:l     .N]$                
24  : TS_NOK/NS_NORULECHAIN
24  : RESSTATE            
24  :                     ti,i,i,i,i.ti:l.ti:l.ti.i     N]$                 
25  : N->tE.N             ti,i,i,i,i.ti:l.ti:l.ti.i     N]$                 
25  : SAVESTATE:          6
25  :                     ti,i,i,i,i.ti:l.ti:l.ti.i     tE.N]$              
26  :                     i,i,i,i,i.ti:l.ti:l.ti.i:     E.N]$               
27  : E->i                i,i,i,i,i.ti:l.ti:l.ti.i:     E.N]$               
27  : SAVESTATE:          7
27  :                     i,i,i,i,i.ti:l.ti:l.ti.i:     i.N]$               
28  :                     ,i,i,i,i.ti:l.ti:l.ti.i:l     .N]$                
29  : TS_NOK/NS_NORULECHAIN
29  : RESSTATE            
29  :                     i,i,i,i,i.ti:l.ti:l.ti.i:     E.N]$               
30  : E->i,E              i,i,i,i,i.ti:l.ti:l.ti.i:     E.N]$               
30  : SAVESTATE:          7
30  :                     i,i,i,i,i.ti:l.ti:l.ti.i:     i,E.N]$             
31  :                     ,i,i,i,i.ti:l.ti:l.ti.i:l     ,E.N]$              
32  :                     i,i,i,i.ti:l.ti:l.ti.i:l.     E.N]$               
33  : E->i                i,i,i,i.ti:l.ti:l.ti.i:l.     E.N]$               
33  : SAVESTATE:          8
33  :                     i,i,i,i.ti:l.ti:l.ti.i:l.     i.N]$               
34  :                     ,i,i,i.ti:l.ti:l.ti.i:l.w     .N]$                
35  : TS_NOK/NS_NORULECHAIN
35  : RESSTATE            
35  :                     i,i,i,i.ti:l.ti:l.ti.i:l.     E.N]$               
36  : E->i,E              i,i,i,i.ti:l.ti:l.ti.i:l.     E.N]$               
36  : SAVESTATE:          8
36  :                     i,i,i,i.ti:l.ti:l.ti.i:l.     i,E.N]$             
37  :                     ,i,i,i.ti:l.ti:l.ti.i:l.w     ,E.N]$              
38  :                     i,i,i.ti:l.ti:l.ti.i:l.w(     E.N]$               
39  : E->i                i,i,i.ti:l.ti:l.ti.i:l.w(     E.N]$               
39  : SAVESTATE:          9
39  :                     i,i,i.ti:l.ti:l.ti.i:l.w(     i.N]$               
40  :                     ,i,i.ti:l.ti:l.ti.i:l.w(i     .N]$                
41  : TS_NOK/NS_NORULECHAIN
41  : RESSTATE            
41  :                     i,i,i.ti:l.ti:l.ti.i:l.w(     E.N]$               
42  : E->i,E              i,i,i.ti:l.ti:l.ti.i:l.w(     E.N]$               
42  : SAVESTATE:          9
42  :                     i,i,i.ti:l.ti:l.ti.i:l.w(     i,E.N]$             
43  :                     ,i,i.ti:l.ti:l.ti.i:l.w(i     ,E.N]$              
44  :                     i,i.ti:l.ti:l.ti.i:l.w(i>     E.N]$               
45  : E->i                i,i.ti:l.ti:l.ti.i:l.w(i>     E.N]$               
45  : SAVESTATE:          10
45  :                     i,i.ti:l.ti:l.ti.i:l.w(i>     i.N]$               
46  :                     ,i.ti:l.ti:l.ti.i:l.w(i>i     .N]$                
47  : TS_NOK/NS_NORULECHAIN
47  : RESSTATE            
47  :                     i,i.ti:l.ti:l.ti.i:l.w(i>     E.N]$               
48  : E->i,E              i,i.ti:l.ti:l.ti.i:l.w(i>     E.N]$               
48  : SAVESTATE:          10
48  :                     i,i.ti:l.ti:l.ti.i:l.w(i>     i,E.N]$             
49  :                     ,i.ti:l.ti:l.ti.i:l.w(i>i     ,E.N]$              
50  :                     i.ti:l.ti:l.ti.i:l.w(i>i)     E.N]$               
51  : E->i                i.ti:l.ti:l.ti.i:l.w(i>i)     E.N]$               
51  : SAVESTATE:          11
51  :                     i.ti:l.ti:l.ti.i:l.w(i>i)     i.N]$               
52  :                     .ti:l.ti:l.ti.i:l.w(i>i)[     .N]$                
53  :                     ti:l.ti:l.ti.i:l.w(i>i)[t     N]$                 
54  : N->ti:E.N           ti:l.ti:l.ti.i:l.w(i>i)[t     N]$                 
54  : SAVESTATE:          12
54  :                     ti:l.ti:l.ti.i:l.w(i>i)[t     ti:E.N]$            
55  :                     i:l.ti:l.ti.i:l.w(i>i)[ti     i:E.N]$             
56  :                     :l.ti:l.ti.i:l.w(i>i)[ti.     :E.N]$              
57  :                     l.ti:l.ti.i:l.w(i>i)[ti.i     E.N]$               
58  : E->l                l.ti:l.ti.i:l.w(i>i)[ti.i     E.N]$               
58  : SAVESTATE:          13
58  :                     l.ti:l.ti.i:l.w(i>i)[ti.i     l.N]$               
59  :                     .ti:l.ti.i:l.w(i>i)[ti.i:     .N]$                
60  :                     ti:l.ti.i:l.w(i>i)[ti.i:i     N]$                 
61  : N->ti:E.N           ti:l.ti.i:l.w(i>i)[ti.i:i     N]$                 
61  : SAVESTATE:          14
61  :                     ti:l.ti.i:l.w(i>i)[ti.i:i     ti:E.N]$            
62  :                     i:l.ti.i:l.w(i>i)[ti.i:i+     i:E.N]$             
63  :                     :l.ti.i:l.w(i>i)[ti.i:i+i     :E.N]$              
64  :                     l.ti.i:l.w(i>i)[ti.i:i+i.     E.N]$               
65  : E->l                l.ti.i:l.w(i>i)[ti.i:i+i.     E.N]$               
65  : SAVESTATE:          15
65  :                     l.ti.i:l.w(i>i)[ti.i:i+i.     l.N]$               
66  :                     .ti.i:l.w(i>i)[ti.i:i+i.p     .N]$                
67  :                     ti.i:l.w(i>i)[ti.i:i+i.p(     N]$                 
68  : N->ti:E.N           ti.i:l.w(i>i)[ti.i:i+i.p(     N]$                 
68  : SAVESTATE:          16
68  :                     ti.i:l.w(i>i)[ti.i:i+i.p(     ti:E.N]$            
69  :                     i.i:l.w(i>i)[ti.i:i+i.p(i     i:E.N]$             
70  :                     .i:l.w(i>i)[ti.i:i+i.p(i)     :E.N]$              
71  : TS_NOK/NS_NORULECHAIN
71  : RESSTATE            
71  :                     ti.i:l.w(i>i)[ti.i:i+i.p(     N]$                 
72  : N->ti.N             ti.i:l.w(i>i)[ti.i:i+i.p(     N]$                 
72  : SAVESTATE:          16
72  :                     ti.i:l.w(i>i)[ti.i:i+i.p(     ti.N]$              
73  :                     i.i:l.w(i>i)[ti.i:i+i.p(i     i.N]$               
74  :                     .i:l.w(i>i)[ti.i:i+i.p(i)     .N]$                
75  :                     i:l.w(i>i)[ti.i:i+i.p(i).     N]$                 
76  : N->i:P.N            i:l.w(i>i)[ti.i:i+i.p(i).     N]$                 
76  : SAVESTATE:          17
76  :                     i:l.w(i>i)[ti.i:i+i.p(i).     i:P.N]$             
77  :                     :l.w(i>i)[ti.i:i+i.p(i).]     :P.N]$              
78  :                     l.w(i>i)[ti.i:i+i.p(i).]e     P.N]$               
79  : P->l               l.w(i>i)[ti.i:i+i.p(i).]e     P.N]$               
79  : SAVESTATE:          18
79  :                     l.w(i>i)[ti.i:i+i.p(i).]e     l.N]$              
80  :                     .w(i>i)[ti.i:i+i.p(i).]e[     .N]$               
81  : TS_NOK/NS_NORULECHAIN
81  : RESSTATE            
81  :                     l.w(i>i)[ti.i:i+i.p(i).]e     P.N]$               
82  : P->lMP              l.w(i>i)[ti.i:i+i.p(i).]e     P.N]$               
82  : SAVESTATE:          18
82  :                     l.w(i>i)[ti.i:i+i.p(i).]e     lMP.N]$             
83  :                     .w(i>i)[ti.i:i+i.p(i).]e[     MP.N]$              
84  : TNS_NORULECHAIN/NS_NORULE
84  : RESSTATE            
84  :                     l.w(i>i)[ti.i:i+i.p(i).]e     P.N]$               
85  : TNS_NORULECHAIN/NS_NORULE
85  : RESSTATE            
85  :                     i:l.w(i>i)[ti.i:i+i.p(i).     N]$                 
86  : N->i:E.N            i:l.w(i>i)[ti.i:i+i.p(i).     N]$                 
86  : SAVESTATE:          17
86  :                     i:l.w(i>i)[ti.i:i+i.p(i).     i:E.N]$             
87  :                     :l.w(i>i)[ti.i:i+i.p(i).]     :E.N]$              
88  :                     l.w(i>i)[ti.i:i+i.p(i).]e     E.N]$               
89  : E->l                l.w(i>i)[ti.i:i+i.p(i).]e     E.N]$               
89  : SAVESTATE:          18
89  :                     l.w(i>i)[ti.i:i+i.p(i).]e     l.N]$               
90  :                     .w(i>i)[ti.i:i+i.p(i).]e[     .N]$                
91  :                     w(i>i)[ti.i:i+i.p(i).]e[i     N]$                 
92  : N->w(K)[C]e[C]N     w(i>i)[ti.i:i+i.p(i).]e[i     N]$                 
92  : SAVESTATE:          19
92  :                     w(i>i)[ti.i:i+i.p(i).]e[i     w(K)[C]e[C]N]$      
93  :                     (i>i)[ti.i:i+i.p(i).]e[i:     (K)[C]e[C]N]$       
94  :                     i>i)[ti.i:i+i.p(i).]e[i:f     K)[C]e[C]N]$        
95  : K->iBi              i>i)[ti.i:i+i.p(i).]e[i:f     K)[C]e[C]N]$        
95  : SAVESTATE:          20
95  :                     i>i)[ti.i:i+i.p(i).]e[i:f     iBi)[C]e[C]N]$      
96  :                     >i)[ti.i:i+i.p(i).]e[i:f(     Bi)[C]e[C]N]$       
97  : B->>                >i)[ti.i:i+i.p(i).]e[i:f(     Bi)[C]e[C]N]$       
97  : SAVESTATE:          21
97  :                     >i)[ti.i:i+i.p(i).]e[i:f(     >i)[C]e[C]N]$       
98  :                     i)[ti.i:i+i.p(i).]e[i:f(i     i)[C]e[C]N]$        
99  :                     )[ti.i:i+i.p(i).]e[i:f(i)     )[C]e[C]N]$         
100 :                     [ti.i:i+i.p(i).]e[i:f(i).     [C]e[C]N]$          
101 :                     ti.i:i+i.p(i).]e[i:f(i).]     C]e[C]N]$           
102 : C->ti:E.C           ti.i:i+i.p(i).]e[i:f(i).]     C]e[C]N]$           
102 : SAVESTATE:          22
102 :                     ti.i:i+i.p(i).]e[i:f(i).]     ti:E.C]e[C]N]$      
103 :                     i.i:i+i.p(i).]e[i:f(i).]p     i:E.C]e[C]N]$       
104 :                     .i:i+i.p(i).]e[i:f(i).]p(     :E.C]e[C]N]$        
105 : TS_NOK/NS_NORULECHAIN
105 : RESSTATE            
105 :                     ti.i:i+i.p(i).]e[i:f(i).]     C]e[C]N]$           
106 : C->ti:E.            ti.i:i+i.p(i).]e[i:f(i).]     C]e[C]N]$           
106 : SAVESTATE:          22
106 :                     ti.i:i+i.p(i).]e[i:f(i).]     ti:E.]e[C]N]$       
107 :                     i.i:i+i.p(i).]e[i:f(i).]p     i:E.]e[C]N]$        
108 :                     .i:i+i.p(i).]e[i:f(i).]p(     :E.]e[C]N]$         
109 : TS_NOK/NS_NORULECHAIN
109 : RESSTATE            
109 :                     ti.i:i+i.p(i).]e[i:f(i).]     C]e[C]N]$           
110 : C->ti:P.C           ti.i:i+i.p(i).]e[i:f(i).]     C]e[C]N]$           
110 : SAVESTATE:          22
110 :                     ti.i:i+i.p(i).]e[i:f(i).]     ti:P.C]e[C]N]$      
111 :                     i.i:i+i.p(i).]e[i:f(i).]p     i:P.C]e[C]N]$       
112 :                     .i:i+i.p(i).]e[i:f(i).]p(     :P.C]e[C]N]$        
113 : TS_NOK/NS_NORULECHAIN
113 : RESSTATE            
113 :                     ti.i:i+i.p(i).]e[i:f(i).]     C]e[C]N]$           
114 : C->ti:P.            ti.i:i+i.p(i).]e[i:f(i).]     C]e[C]N]$           
114 : SAVESTATE:          22
114 :                     ti.i:i+i.p(i).]e[i:f(i).]     ti:P.]e[C]N]$       
115 :                     i.i:i+i.p(i).]e[i:f(i).]p     i:P.]e[C]N]$        
116 :                     .i:i+i.p(i).]e[i:f(i).]p(     :P.]e[C]N]$         
117 : TS_NOK/NS_NORULECHAIN
117 : RESSTATE            
117 :                     ti.i:i+i.p(i).]e[i:f(i).]     C]e[C]N]$           
118 : C->ti.C             ti.i:i+i.p(i).]e[i:f(i).]     C]e[C]N]$           
118 : SAVESTATE:          22
118 :                     ti.i:i+i.p(i).]e[i:f(i).]     ti.C]e[C]N]$        
119 :                     i.i:i+i.p(i).]e[i:f(i).]p     i.C]e[C]N]$         
120 :                     .i:i+i.p(i).]e[i:f(i).]p(     .C]e[C]N]$          
121 :                     i:i+i.p(i).]e[i:f(i).]p(i     C]e[C]N]$           
122 : C->i:E.             i:i+i.p(i).]e[i:f(i).]p(i     C]e[C]N]$           
122 : SAVESTATE:          23
122 :                     i:i+i.p(i).]e[i:f(i).]p(i     i:E.]e[C]N]$        
123 :                     :i+i.p(i).]e[i:f(i).]p(i)     :E.]e[C]N]$         
124 :                     i+i.p(i).]e[i:f(i).]p(i).     E.]e[C]N]$          
125 : E->i                i+i.p(i).]e[i:f(i).]p(i).     E.]e[C]N]$          
125 : SAVESTATE:          24
125 :                     i+i.p(i).]e[i:f(i).]p(i).     i.]e[C]N]$          
126 :                     +i.p(i).]e[i:f(i).]p(i).i     .]e[C]N]$           
127 : TS_NOK/NS_NORULECHAIN
127 : RESSTATE            
127 :                     i+i.p(i).]e[i:f(i).]p(i).     E.]e[C]N]$          
128 : E->i,E              i+i.p(i).]e[i:f(i).]p(i).     E.]e[C]N]$          
128 : SAVESTATE:          24
128 :                     i+i.p(i).]e[i:f(i).]p(i).     i,E.]e[C]N]$        
129 :                     +i.p(i).]e[i:f(i).]p(i).i     ,E.]e[C]N]$         
130 : TS_NOK/NS_NORULECHAIN
130 : RESSTATE            
130 :                     i+i.p(i).]e[i:f(i).]p(i).     E.]e[C]N]$          
131 : TNS_NORULECHAIN/NS_NORULE
131 : RESSTATE            
131 :                     i:i+i.p(i).]e[i:f(i).]p(i     C]e[C]N]$           
132 : C->i:E.C            i:i+i.p(i).]e[i:f(i).]p(i     C]e[C]N]$           
132 : SAVESTATE:          23
132 :                     i:i+i.p(i).]e[i:f(i).]p(i     i:E.C]e[C]N]$       
133 :                     :i+i.p(i).]e[i:f(i).]p(i)     :E.C]e[C]N]$        
134 :                     i+i.p(i).]e[i:f(i).]p(i).     E.C]e[C]N]$         
135 : E->i                i+i.p(i).]e[i:f(i).]p(i).     E.C]e[C]N]$         
135 : SAVESTATE:          24
135 :                     i+i.p(i).]e[i:f(i).]p(i).     i.C]e[C]N]$         
136 :                     +i.p(i).]e[i:f(i).]p(i).i     .C]e[C]N]$          
137 : TS_NOK/NS_NORULECHAIN
137 : RESSTATE            
137 :                     i+i.p(i).]e[i:f(i).]p(i).     E.C]e[C]N]$         
138 : E->i,E              i+i.p(i).]e[i:f(i).]p(i).     E.C]e[C]N]$         
138 : SAVESTATE:          24
138 :                     i+i.p(i).]e[i:f(i).]p(i).     i,E.C]e[C]N]$       
139 :                     +i.p(i).]e[i:f(i).]p(i).i     ,E.C]e[C]N]$        
140 : TS_NOK/NS_NORULECHAIN
140 : RESSTATE            
140 :                     i+i.p(i).]e[i:f(i).]p(i).     E.C]e[C]N]$         
141 : TNS_NORULECHAIN/NS_NORULE
141 : RESSTATE            
141 :                     i:i+i.p(i).]e[i:f(i).]p(i     C]e[C]N]$           
142 : C->i:P.             i:i+i.p(i).]e[i:f(i).]p(i     C]e[C]N]$           
142 : SAVESTATE:          23
142 :                     i:i+i.p(i).]e[i:f(i).]p(i     i:P.]e[C]N]$        
143 :                     :i+i.p(i).]e[i:f(i).]p(i)     :P.]e[C]N]$         
144 :                     i+i.p(i).]e[i:f(i).]p(i).     P.]e[C]N]$          
145 : P->i                i+i.p(i).]e[i:f(i).]p(i).     P.]e[C]N]$          
145 : SAVESTATE:          24
145 :                     i+i.p(i).]e[i:f(i).]p(i).     i.]e[C]N]$          
146 :                     +i.p(i).]e[i:f(i).]p(i).i     .]e[C]N]$           
147 : TS_NOK/NS_NORULECHAIN
147 : RESSTATE            
147 :                     i+i.p(i).]e[i:f(i).]p(i).     P.]e[C]N]$          
148 : P->iMP              i+i.p(i).]e[i:f(i).]p(i).     P.]e[C]N]$          
148 : SAVESTATE:          24
148 :                     i+i.p(i).]e[i:f(i).]p(i).     iMP.]e[C]N]$        
149 :                     +i.p(i).]e[i:f(i).]p(i).i     MP.]e[C]N]$         
150 : M->+                +i.p(i).]e[i:f(i).]p(i).i     MP.]e[C]N]$         
150 : SAVESTATE:          25
150 :                     +i.p(i).]e[i:f(i).]p(i).i     +P.]e[C]N]$         
151 :                     i.p(i).]e[i:f(i).]p(i).i:     P.]e[C]N]$          
152 : P->i                i.p(i).]e[i:f(i).]p(i).i:     P.]e[C]N]$          
152 : SAVESTATE:          26
152 :                     i.p(i).]e[i:f(i).]p(i).i:     i.]e[C]N]$          
153 :                     .p(i).]e[i:f(i).]p(i).i:(     .]e[C]N]$           
154 :                     p(i).]e[i:f(i).]p(i).i:(i     ]e[C]N]$            
155 : TS_NOK/NS_NORULECHAIN
155 : RESSTATE            
155 :                     i.p(i).]e[i:f(i).]p(i).i:     P.]e[C]N]$          
156 : P->iMP              i.p(i).]e[i:f(i).]p(i).i:     P.]e[C]N]$          
156 : SAVESTATE:          26
156 :                     i.p(i).]e[i:f(i).]p(i).i:     iMP.]e[C]N]$        
157 :                     .p(i).]e[i:f(i).]p(i).i:(     MP.]e[C]N]$         
158 : TNS_NORULECHAIN/NS_NORULE
158 : RESSTATE            
158 :                     i.p(i).]e[i:f(i).]p(i).i:     P.]e[C]N]$          
159 : TNS_NORULECHAIN/NS_NORULE
159 : RESSTATE            
159 :                     +i.p(i).]e[i:f(i).]p(i).i     MP.]e[C]N]$         
160 : TNS_NORULECHAIN/NS_NORULE
160 : RESSTATE            
160 :                     i+i.p(i).]e[i:f(i).]p(i).     P.]e[C]N]$          
161 : TNS_NORULECHAIN/NS_NORULE
161 : RESSTATE            
161 :                     i:i+i.p(i).]e[i:f(i).]p(i     C]e[C]N]$           
162 : C->i:P.C            i:i+i.p(i).]e[i:f(i).]p(i     C]e[C]N]$           
162 : SAVESTATE:          23
162 :                     i:i+i.p(i).]e[i:f(i).]p(i     i:P.C]e[C]N]$       
163 :                     :i+i.p(i).]e[i:f(i).]p(i)     :P.C]e[C]N]$        
164 :                     i+i.p(i).]e[i:f(i).]p(i).     P.C]e[C]N]$         
165 : P->i                i+i.p(i).]e[i:f(i).]p(i).     P.C]e[C]N]$         
165 : SAVESTATE:          24
165 :                     i+i.p(i).]e[i:f(i).]p(i).     i.C]e[C]N]$         
166 :                     +i.p(i).]e[i:f(i).]p(i).i     .C]e[C]N]$          
167 : TS_NOK/NS_NORULECHAIN
167 : RESSTATE            
167 :                     i+i.p(i).]e[i:f(i).]p(i).     P.C]e[C]N]$         
168 : P->iMP              i+i.p(i).]e[i:f(i).]p(i).     P.C]e[C]N]$         
168 : SAVESTATE:          24
168 :                     i+i.p(i).]e[i:f(i).]p(i).     iMP.C]e[C]N]$       
169 :                     +i.p(i).]e[i:f(i).]p(i).i     MP.C]e[C]N]$        
170 : M->+                +i.p(i).]e[i:f(i).]p(i).i     MP.C]e[C]N]$        
170 : SAVESTATE:          25
170 :                     +i.p(i).]e[i:f(i).]p(i).i     +P.C]e[C]N]$        
171 :                     i.p(i).]e[i:f(i).]p(i).i:     P.C]e[C]N]$         
172 : P->i                i.p(i).]e[i:f(i).]p(i).i:     P.C]e[C]N]$         
172 : SAVESTATE:          26
172 :                     i.p(i).]e[i:f(i).]p(i).i:     i.C]e[C]N]$         
173 :                     .p(i).]e[i:f(i).]p(i).i:(     .C]e[C]N]$          
174 :                     p(i).]e[i:f(i).]p(i).i:(i     C]e[C]N]$           
175 : C->p(E).C           p(i).]e[i:f(i).]p(i).i:(i     C]e[C]N]$           
175 : SAVESTATE:          27
175 :                     p(i).]e[i:f(i).]p(i).i:(i     p(E).C]e[C]N]$      
176 :                     (i).]e[i:f(i).]p(i).i:(i+     (E).C]e[C]N]$       
177 :                     i).]e[i:f(i).]p(i).i:(i+i     E).C]e[C]N]$        
178 : E->i                i).]e[i:f(i).]p(i).i:(i+i     E).C]e[C]N]$        
178 : SAVESTATE:          28
178 :                     i).]e[i:f(i).]p(i).i:(i+i     i).C]e[C]N]$        
179 :                     ).]e[i:f(i).]p(i).i:(i+i)     ).C]e[C]N]$         
180 :                     .]e[i:f(i).]p(i).i:(i+i)*     .C]e[C]N]$          
181 :                     ]e[i:f(i).]p(i).i:(i+i)*(     C]e[C]N]$           
182 : TNS_NORULECHAIN/NS_NORULE
182 : RESSTATE            
182 :                     i).]e[i:f(i).]p(i).i:(i+i     E).C]e[C]N]$        
183 : E->i,E              i).]e[i:f(i).]p(i).i:(i+i     E).C]e[C]N]$        
183 : SAVESTATE:          28
183 :                     i).]e[i:f(i).]p(i).i:(i+i     i,E).C]e[C]N]$      
184 :                     ).]e[i:f(i).]p(i).i:(i+i)     ,E).C]e[C]N]$       
185 : TS_NOK/NS_NORULECHAIN
185 : RESSTATE            
185 :                     i).]e[i:f(i).]p(i).i:(i+i     E).C]e[C]N]$        
186 : TNS_NORULECHAIN/NS_NORULE
186 : RESSTATE            
186 :                     p(i).]e[i:f(i).]p(i).i:(i     C]e[C]N]$           
187 : C->p(E).            p(i).]e[i:f(i).]p(i).i:(i     C]e[C]N]$           
187 : SAVESTATE:          27
187 :                     p(i).]e[i:f(i).]p(i).i:(i     p(E).]e[C]N]$       
188 :                     (i).]e[i:f(i).]p(i).i:(i+     (E).]e[C]N]$        
189 :                     i).]e[i:f(i).]p(i).i:(i+i     E).]e[C]N]$         
190 : E->i                i).]e[i:f(i).]p(i).i:(i+i     E).]e[C]N]$         
190 : SAVESTATE:          28
190 :                     i).]e[i:f(i).]p(i).i:(i+i     i).]e[C]N]$         
191 :                     ).]e[i:f(i).]p(i).i:(i+i)     ).]e[C]N]$          
192 :                     .]e[i:f(i).]p(i).i:(i+i)*     .]e[C]N]$           
193 :                     ]e[i:f(i).]p(i).i:(i+i)*(     ]e[C]N]$            
194 :                     e[i:f(i).]p(i).i:(i+i)*(i     e[C]N]$             
195 :                     [i:f(i).]p(i).i:(i+i)*(i-     [C]N]$              
196 :                     i:f(i).]p(i).i:(i+i)*(i-i     C]N]$               
197 : C->i:E.             i:f(i).]p(i).i:(i+i)*(i-i     C]N]$               
197 : SAVESTATE:          29
197 :                     i:f(i).]p(i).i:(i+i)*(i-i     i:E.]N]$            
198 :                     :f(i).]p(i).i:(i+i)*(i-i)     :E.]N]$             
199 :                     f(i).]p(i).i:(i+i)*(i-i).     E.]N]$              
200 : E->f(E)             f(i).]p(i).i:(i+i)*(i-i).     E.]N]$              
200 : SAVESTATE:          30
200 :                     f(i).]p(i).i:(i+i)*(i-i).     f(E).]N]$           
201 :                     (i).]p(i).i:(i+i)*(i-i).t     (E).]N]$            
202 :                     i).]p(i).i:(i+i)*(i-i).ti     E).]N]$             
203 : E->i                i).]p(i).i:(i+i)*(i-i).ti     E).]N]$             
203 : SAVESTATE:          31
203 :                     i).]p(i).i:(i+i)*(i-i).ti     i).]N]$             
204 :                     ).]p(i).i:(i+i)*(i-i).ti:     ).]N]$              
205 :                     .]p(i).i:(i+i)*(i-i).ti:f     .]N]$               
206 :                     ]p(i).i:(i+i)*(i-i).ti:f(     ]N]$                
207 :                     p(i).i:(i+i)*(i-i).ti:f(i     N]$                 
208 : N->p(E).N           p(i).i:(i+i)*(i-i).ti:f(i     N]$                 
208 : SAVESTATE:          32
208 :                     p(i).i:(i+i)*(i-i).ti:f(i     p(E).N]$            
209 :                     (i).i:(i+i)*(i-i).ti:f(i,     (E).N]$             
210 :                     i).i:(i+i)*(i-i).ti:f(i,i     E).N]$              
211 : E->i                i).i:(i+i)*(i-i).ti:f(i,i     E).N]$              
211 : SAVESTATE:          33
211 :                     i).i:(i+i)*(i-i).ti:f(i,i     i).N]$              
212 :                     ).i:(i+i)*(i-i).ti:f(i,i)     ).N]$               
213 :                     .i:(i+i)*(i-i).ti:f(i,i).     .N]$                
214 :                     i:(i+i)*(i-i).ti:f(i,i).p     N]$                 
215 : N->i:P.N            i:(i+i)*(i-i).ti:f(i,i).p     N]$                 
215 : SAVESTATE:          34
215 :                     i:(i+i)*(i-i).ti:f(i,i).p     i:P.N]$             
216 :                     :(i+i)*(i-i).ti:f(i,i).p(     :P.N]$              
217 :                     (i+i)*(i-i).ti:f(i,i).p(i     P.N]$               
218 : P->(P)              (i+i)*(i-i).ti:f(i,i).p(i     P.N]$               
218 : SAVESTATE:          35
218 :                     (i+i)*(i-i).ti:f(i,i).p(i     (P).N]$             
219 :                     i+i)*(i-i).ti:f(i,i).p(i)     P).N]$              
220 : P->i                i+i)*(i-i).ti:f(i,i).p(i)     P).N]$              
220 : SAVESTATE:          36
220 :                     i+i)*(i-i).ti:f(i,i).p(i)     i).N]$              
221 :                     +i)*(i-i).ti:f(i,i).p(i).     ).N]$               
222 : TS_NOK/NS_NORULECHAIN
222 : RESSTATE            
222 :                     i+i)*(i-i).ti:f(i,i).p(i)     P).N]$              
223 : P->iMP              i+i)*(i-i).ti:f(i,i).p(i)     P).N]$              
223 : SAVESTATE:          36
223 :                     i+i)*(i-i).ti:f(i,i).p(i)     iMP).N]$            
224 :                     +i)*(i-i).ti:f(i,i).p(i).     MP).N]$             
225 : M->+                +i)*(i-i).ti:f(i,i).p(i).     MP).N]$             
225 : SAVESTATE:          37
225 :                     +i)*(i-i).ti:f(i,i).p(i).     +P).N]$             
226 :                     i)*(i-i).ti:f(i,i).p(i).r     P).N]$              
227 : P->i                i)*(i-i).ti:f(i,i).p(i).r     P).N]$              
227 : SAVESTATE:          38
227 :                     i)*(i-i).ti:f(i,i).p(i).r     i).N]$              
228 :                     )*(i-i).ti:f(i,i).p(i).ri     ).N]$               
229 :                     *(i-i).ti:f(i,i).p(i).ri.     .N]$                
230 : TS_NOK/NS_NORULECHAIN
230 : RESSTATE            
230 :                     i)*(i-i).ti:f(i,i).p(i).r     P).N]$              
231 : P->iMP              i)*(i-i).ti:f(i,i).p(i).r     P).N]$              
231 : SAVESTATE:          38
231 :                     i)*(i-i).ti:f(i,i).p(i).r     iMP).N]$            
232 :                     )*(i-i).ti:f(i,i).p(i).ri     MP).N]$             
233 : TNS_NORULECHAIN/NS_NORULE
233 : RESSTATE            
233 :                     i)*(i-i).ti:f(i,i).p(i).r     P).N]$              
234 : TNS_NORULECHAIN/NS_NORULE
234 : RESSTATE            
234 :                     +i)*(i-i).ti:f(i,i).p(i).     MP).N]$             
235 : TNS_NORULECHAIN/NS_NORULE
235 : RESSTATE            
235 :                     i+i)*(i-i).ti:f(i,i).p(i)     P).N]$              
236 : TNS_NORULECHAIN/NS_NORULE
236 : RESSTATE            
236 :                     (i+i)*(i-i).ti:f(i,i).p(i     P.N]$               
237 : P->(P)MP            (i+i)*(i-i).ti:f(i,i).p(i     P.N]$               
237 : SAVESTATE:          35
237 :                     (i+i)*(i-i).ti:f(i,i).p(i     (P)MP.N]$           
238 :                     i+i)*(i-i).ti:f(i,i).p(i)     P)MP.N]$            
239 : P->i                i+i)*(i-i).ti:f(i,i).p(i)     P)MP.N]$            
239 : SAVESTATE:          36
239 :                     i+i)*(i-i).ti:f(i,i).p(i)     i)MP.N]$            
240 :                     +i)*(i-i).ti:f(i,i).p(i).     )MP.N]$             
241 : TS_NOK/NS_NORULECHAIN
241 : RESSTATE            
241 :                     i+i)*(i-i).ti:f(i,i).p(i)     P)MP.N]$            
242 : P->iMP              i+i)*(i-i).ti:f(i,i).p(i)     P)MP.N]$            
242 : SAVESTATE:          36
242 :                     i+i)*(i-i).ti:f(i,i).p(i)     iMP)MP.N]$          
243 :                     +i)*(i-i).ti:f(i,i).p(i).     MP)MP.N]$           
244 : M->+                +i)*(i-i).ti:f(i,i).p(i).     MP)MP.N]$           
244 : SAVESTATE:          37
244 :                     +i)*(i-i).ti:f(i,i).p(i).     +P)MP.N]$           
245 :                     i)*(i-i).ti:f(i,i).p(i).r     P)MP.N]$            
246 : P->i                i)*(i-i).ti:f(i,i).p(i).r     P)MP.N]$            
246 : SAVESTATE:          38
246 :                     i)*(i-i).ti:f(i,i).p(i).r     i)MP.N]$            
247 :                     )*(i-i).ti:f(i,i).p(i).ri     )MP.N]$             
248 :                     *(i-i).ti:f(i,i).p(i).ri.     MP.N]$              
249 : M->*                *(i-i).ti:f(i,i).p(i).ri.     MP.N]$              
249 : SAVESTATE:          39
249 :                     *(i-i).ti:f(i,i).p(i).ri.     *P.N]$              
250 :                     (i-i).ti:f(i,i).p(i).ri.]     P.N]$               
251 : P->(P)              (i-i).ti:f(i,i).p(i).ri.]     P.N]$               
251 : SAVESTATE:          40
251 :                     (i-i).ti:f(i,i).p(i).ri.]     (P).N]$             
252 :                     i-i).ti:f(i,i).p(i).ri.]      P).N]$              
253 : P->i                i-i).ti:f(i,i).p(i).ri.]      P).N]$              
253 : SAVESTATE:          41
253 :                     i-i).ti:f(i,i).p(i).ri.]      i).N]$              
254 :                     -i).ti:f(i,i).p(i).ri.]       ).N]$               
255 : TS_NOK/NS_NORULECHAIN
255 : RESSTATE            
255 :                     i-i).ti:f(i,i).p(i).ri.]      P).N]$              
256 : P->iMP              i-i).ti:f(i,i).p(i).ri.]      P).N]$              
256 : SAVESTATE:          41
256 :                     i-i).ti:f(i,i).p(i).ri.]      iMP).N]$            
257 :                     -i).ti:f(i,i).p(i).ri.]       MP).N]$             
258 : M->-                -i).ti:f(i,i).p(i).ri.]       MP).N]$             
258 : SAVESTATE:          42
258 :                     -i).ti:f(i,i).p(i).ri.]       -P).N]$             
259 :                     i).ti:f(i,i).p(i).ri.]        P).N]$              
260 : P->i                i).ti:f(i,i).p(i).ri.]        P).N]$              
260 : SAVESTATE:          43
260 :                     i).ti:f(i,i).p(i).ri.]        i).N]$              
261 :                     ).ti:f(i,i).p(i).ri.]         ).N]$               
262 :                     .ti:f(i,i).p(i).ri.]          .N]$                
263 :                     ti:f(i,i).p(i).ri.]           N]$                 
264 : N->ti:E.N           ti:f(i,i).p(i).ri.]           N]$                 
264 : SAVESTATE:          44
264 :                     ti:f(i,i).p(i).ri.]           ti:E.N]$            
265 :                     i:f(i,i).p(i).ri.]            i:E.N]$             
266 :                     :f(i,i).p(i).ri.]             :E.N]$              
267 :                     f(i,i).p(i).ri.]              E.N]$               
268 : E->f(E)             f(i,i).p(i).ri.]              E.N]$               
268 : SAVESTATE:          45
268 :                     f(i,i).p(i).ri.]              f(E).N]$            
269 :                     (i,i).p(i).ri.]               (E).N]$             
270 :                     i,i).p(i).ri.]                E).N]$              
271 : E->i                i,i).p(i).ri.]                E).N]$              
271 : SAVESTATE:          46
271 :                     i,i).p(i).ri.]                i).N]$              
272 :                     ,i).p(i).ri.]                 ).N]$               
273 : TS_NOK/NS_NORULECHAIN
273 : RESSTATE            
273 :                     i,i).p(i).ri.]                E).N]$              
274 : E->i,E              i,i).p(i).ri.]                E).N]$              
274 : SAVESTATE:          46
274 :                     i,i).p(i).ri.]                i,E).N]$            
275 :                     ,i).p(i).ri.]                 ,E).N]$             
276 :                     i).p(i).ri.]                  E).N]$              
277 : E->i                i).p(i).ri.]                  E).N]$              
277 : SAVESTATE:          47
277 :                     i).p(i).ri.]                  i).N]$              
278 :                     ).p(i).ri.]                   ).N]$               
279 :                     .p(i).ri.]                    .N]$                
280 :                     p(i).ri.]                     N]$                 
281 : N->p(E).N           p(i).ri.]                     N]$                 
281 : SAVESTATE:          48
281 :                     p(i).ri.]                     p(E).N]$            
282 :                     (i).ri.]                      (E).N]$             
283 :                     i).ri.]                       E).N]$              
284 : E->i                i).ri.]                       E).N]$              
284 : SAVESTATE:          49
284 :                     i).ri.]                       i).N]$              
285 :                     ).ri.]                        ).N]$               
286 :                     .ri.]                         .N]$                
287 :                     ri.]                          N]$                 
288 : N->rE.              ri.]                          N]$                 
288 : SAVESTATE:          50
288 :                     ri.]                          rE.]$               
289 :                     i.]                           E.]$                
290 : E->i                i.]                           E.]$                
290 : SAVESTATE:          51
290 :                     i.]                           i.]$                
291 :                     .]                            .]$                 
292 :                     ]                             ]$                  
293 :                                                   $                   
294 : LENTA_END           
295 : -------> NS_LENTA_END
--------------------------------------------------------------
Всего строк 110, Синтаксический анализ выполнен без ошибок
0   : S->d[N]             
2   : N->ti:E.N           
5   : E->l                
7   : N->ti:E.N           
10  : E->l                
12  : N->tE.N             
13  : E->i,E              
15  : E->i,E              
17  : E->i,E              
19  : E->i,E              
21  : E->i                
23  : N->ti:E.N           
26  : E->l                
28  : N->ti:E.N           
31  : E->l                
33  : N->ti.N             
36  : N->i:E.N            
38  : E->l                
40  : N->w(K)[C]e[C]N     
42  : K->iBi              
43  : B->>                
47  : C->ti.C             
50  : C->i:P.C            
52  : P->iMP              
53  : M->+                
54  : P->i                
56  : C->p(E).            
58  : E->i                
64  : C->i:E.             
66  : E->f(E)             
68  : E->i                
72  : N->p(E).N           
74  : E->i                
77  : N->i:P.N            
79  : P->(P)MP            
80  : P->iMP              
81  : M->+                
82  : P->i                
84  : M->*                
85  : P->(P)              
86  : P->iMP              
87  : M->-                
88  : P->i                
91  : N->ti:E.N           
94  : E->f(E)             
96  : E->i,E              
98  : E->i                
101 : N->p(E).N           
103 : E->i                
106 : N->rE.              
107 : E->i                

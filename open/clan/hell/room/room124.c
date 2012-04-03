inherit ROOM;
void create() {
	set( "short", "С�����Ĵ�����" );
	set( "owner", "acelan" );
	set( "object", ([
		"amount2"  : 45,
		"amount4"  : 3,
		"file1"    : "/obj/gift/xisuidan",
		"file3"    : "/open/mogi/castle/obj/ninepill",
		"file4"    : "/open/mogi/village/obj/f_pill_m",
		"amount1"  : 1,
		"amount3"  : 10,
		"file2"    : "/open/ping/obj/poison_pill",
	]) );
	set( "build", 10299 );
	set( "item_desc", ([
		"script" : @ITEM
session {fs} {140.115.72.117 4000}
act {����������Ӣ������} {acelan}
act {����������} {xxx}
speedwalk

ticksize 5
tickoff

gag {������������}
alias {f %1} {fight %1;mk}
alias {k %1} {kill %1;mk}
alias {ee} {19 ex 10;ec}
alias {eee} {ex 600;ec 3}
alias {eeee} {ex 1500;ec 5}
alias {rrr} {er;eg;ec;3 eee}
act {�ƺ�������Ϊ�Ѿ�������ƿ��} {tickoff}
act {������,����Ҳ֧�ֲ�ס�ˡ�} {boss}
act {^TICK!!!} {ee}
alias {tower} {rn;set wimpy 0;  act {���Ҭ��F��} {kill ghost;mk};act {�Ž�ʬ���ˡ�} {kill ghost;mk};act {�����ˡ�} {kill ghost;mk};act {��걩��(Ghost)} {k ghost};act {ŭ����(Crazy ghost)} {k ghost};act {����Ghost)} {k ghost};act {�Ž�ʬ(Nine ghost)} {k ghost}}

alias {rn} {alias {f %1} {fight %1;rain};alias {k %1} {kill %1;rain}}
alias {manakee} {alias {f %1} {fight %1;mk};alias {k %1} {kill %1;mk}}
alias {weapon} {re;d;8 e;2 n;2 e;pull button;n;enter;n;u;n;e;search;d}

alias {expup} {action {��������} {get gold from corpse;k fa}; action {����ɱ��˭} {tell kiroro okk!};action {�����λ����} {k fa}}
alias {stopexp} {unact {��������};unact {����ɱ��˭};unact {�����λ����}}

alias {killer} {re;d;8 e;2 n;2 e;pull button;n;enter}
alias {killerpill} {out;s;2 w;n;get rock;s;w;puton rock;tree;search;3 e;n;enter;4 n;wash;wash;3 s;2 w;give woman herb}
ITEM,
	]) );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/hell/room/room125",
	]) );
	set( "long", @LONG
����������С�������õĶ�����һ��һ���Ķ��õ���װ�ã�����
�����������ǽ�ߣ����ر������ǽ�϶���һ��ֽ������д��С����
������ FS �� tintin �� (script) ������ script �����ݾ����䶯
�����Ի᲻��ʱ���¡�
LONG);
	setup();
	replace_program(ROOM);
}

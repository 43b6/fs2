// by borstquc
#include <ansi.h>
inherit ROOM;

void create()
{
  string long;

set("short",HIC"����������������"NOR);

long = "\n"+
"������������ˣ��Ĵ�ûʲô������ֻ�����������һ����ֵĶ���\n"+"(eight)�� ��"+
"�ں�������ʹ�����̲�ס����ǰ������\n"+
"\n";
set("long", long);
set("exits", ([
      "out"   : __DIR__"r0",
  ]));
set("item_desc",([
  "eight" : "һ�����ι�״�ı�������.....\n",
]));
  setup();
}
void init()
{
        add_action("no_fanset","fanset");
        add_action("do_kick","kick");
}

int no_fanset()
{
        object who;
        who = this_player();
        tell_object(who,"���ڴ˴��ų���ǿ����Ļ������޷��趨��\n");
        return 1;
}
int do_kick(string str)
{
        object who;
        who = this_player();
	if(str!="eight"){return 0;}
        tell_object(who,"�㳯����ֵĶ����������˹�ȥ��\n");
        tell_object(who,"��� ��һ ��һ��������һ�����š�\n");
	set("exits", ([
        "door"  :  __DIR__"r26",
	]));
        return 1;
}

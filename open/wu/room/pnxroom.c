// ��ɽʥ�����ڵ�-by nike-

#include <ansi.h>

inherit ROOM;
void create ()
{
    set ("short", HIM"��ɽʥ��"NOR);
    set ("long", @LONG
�����������ɽ�ɴ�˵�е�ʥ�أ���˵��������һֻ�����Ļ��
������������Ϩ֮��ԴԴ���ϵĹ�����ɽ�ɵĻ���ʥ��֮��Զ����
����һ�����˶���֮Ϊ������ʥ�ޡ�--�������������������β
�𣬾ݴ�������������֮һ�ġ�����𡱣���˵��ֵ�൱��쳣�
LONG);
    set("exits", ([
  "out" : __DIR__"luroom22",
]));

    setup();
}
void init()
{
    object me, ob;
    me = this_player();
    ob = new("/open/doctor/npc/pnx");

    if(present("delfire-mark",me))
{
        ob->move(environment(me));
  }
}



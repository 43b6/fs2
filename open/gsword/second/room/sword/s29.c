#include <ansi.h>
inherit ROOM;

void create()
{
        set("short", HIW"������磭�ſս�ʥ��"NOR);
        set("long", @LONG
����ǰ��������һ����Ӱ�����е��齣�����ƺ���Ӧ��ʲô�Ƶģ����������Ĺ�â��ҫ
��������������������Ӱ�񣬶���һ���ƺ��ǰٶ���ǰ��ħ��ս�ľ���˲�䣬�ߵ���
â��������ǰ��������һ�£��Ѳ�������Ǵ�˵�е�-�ɽ�����-����
LONG
        );
        set("exits", ([ /* sizeof() == 3 */
  "south":"/open/gsword/room/g5-1.c",
  "north":"/open/gsword/room1/blood/room1/r1.c",
]));
        set("no_transmit", 1);
        set("no_drop",1);
        set("no_auc",1);
  set("objects", ([ /* sizeof() == 1 */
   "/open/gsword/second/room/sword/npc/swordsman" :1,
]));
        setup();
}

int valid_leave(object me, string dir)
{
if(dir=="north" && present("swordman",environment(me)))
   if(!me->query_temp("allow_pass",1))
   return notify_fail("����Ϊ���ܻ�ù�ȥ��??"+RANK_D->query_respect(me)+"��̫���˰�!\n");
return ::valid_leave(me,dir);
}

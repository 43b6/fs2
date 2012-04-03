// Room: /open/dancer/room/r12-2.c :cgy
#include <room.h>
#include <ansi.h>

inherit ROOM;

void create ()
{
  set ("short","����");
  set ("long", @LONG
�㷢������������ǻ��䣬����������֮�У���Щ���������δ
����֮Ʒ�֣���һ�ػ���(flower)�����ر�ïʢ���㲻����࿴���ۣ�
����ǰ�ľ�ɫ����������Ϊ������������԰��




LONG);

  set("item_desc", ([ /* sizeof() == 1 */
  "flower" : "һ�������Ļ��ԣ���ζ�˱ǡ�
",
]));

  set("exits", ([ /* sizeof() == 2 */
  "south" : "/open/dancer/room/r13-2.c",
  "east" : "/open/dancer/room/r12-3.c",
]));

  set("search_desc", ([ /* sizeof() == 1 */
  "flower" : "�㲦�����Ժ�Ȼ���ִ����и�С��ǡ��������ͨ���������ȴ������
����
",
]));

  set("light_up", 1);

  setup();
}

void init()
{
        add_action("do_enter", "enter");
}

int do_enter(string arg)
{
        object who;
        who = this_player();

        if( !arg || arg!="flower" )
                return notify_fail("��Ҫͨ��ʲô��\n");
        tell_object(who,"�����ֲ������ԣ�����С�����˽�ȥ��\n");
        who->move("/open/dancer/room/dream");
        tell_room(this_object(),"�㿴��"+who->query("name")+"�����򻨴���ȥ����Ȼ�Ͳ�����Ӱ�ˡ�\n");
        return 1;
}

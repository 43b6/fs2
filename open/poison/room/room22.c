#include <room.h>
#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG
��ʪ�ֺڵĵ����� ,���ǲ�̫�ù� ,���صĻ�ˮ ,���һ���Ͳȵ���
������ ,�ټ�����Щ����������С���� ,���㲻�ò�Ϊ��Щ���չ���
�ⲻ���˾ӵĵط������ѹ� .���Ȼ�е��������� ,������(search)
�������������� .


LONG);

  set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"room21.c",
  "west" : __DIR__"path13.c",
]));
  create_door("east",HIY "��ɫ����"NOR, "west", DOOR_CLOSED);

  set("light_up", 0);
  set("valid_startroom", 1);

  setup();

}

void init()
{
        add_action("do_search", "search");
}

int do_search()
{
        object who;
        who = this_player();

        tell_object(who,"\n��ŵ�ͻȻ����һ���� ,��һ��С�� ,ˤ����ȥ��\n\n");
     who->move("/open/poison/room/room23.c");
        tell_room(this_object(),who->query("name")+"��֪������ʲô����, ͻȻ��ʧ
�ڵ���֮�С�\n");
        return 1;
}

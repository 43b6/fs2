// Room: /u/m/moner/room/room26.c
inherit ROOM;
#include <room.h>
#include <ansi.h>
void create ()
{
  set ("short", "�Է�");
  set ("long", @LONG

�����˴�������һ�ɵ�����ϸ�㣬�����ķΣ��������ȥ�����Ʋ�������
�����ô�˯ͼ����һ������һ�����P������һ��������̫ѧʿд�Ķ�������
�ϰ���һ��ˮ���������ްٵ�����һ˿���ң�˽�����˸�˯��������ө��ʯ
����(screen)�󣬷·��к�Ӱ��ҡ����

LONG);

  set("item_desc", ([ /* sizeof() == 2 */
"screen" : "��ө��ʯ�����ɵ����磬������ˡ�\n",
  "east" : (: look_door,     "east" :),
]));
  set("exits", ([ /* sizeof() == 2 */
"west":"/open/gblade/mroom/room17.c",
"east":__DIR__"r2.c",
]));
  set("objects", ([ /* sizeof() == 1 */
 "/daemon/class/blademan/npc/m1.c" :1,
]));
  set("light_up", 1);
  create_door("east", "ө��ʯ����","west",DOOR_CLOSED);
  setup();
}
int valid_leave(object me, string dir)
  {
if(dir=="east"&&(doors["east"]["status"]==DOOR_CLOSED) )
    return notify_fail("������Ȱ�ө��ʯ����򿪣�\n");
     if(dir=="east")
  {
          message_vision(HIW+"$Nһ̤��ԡ�ң��ۡ���
��Ů��ԡͼ�ߣ���$N��������Ӧʱ����Ůһ������һ��ԡ�������
�������ӣ�һ����ɫ�ı��м���$N�ľ��ϡ�\n"+NOR,me);
    }
    return 1;
   }
